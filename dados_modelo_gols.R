library(rstan)

#numeros de times
n_times <- 20

# combinando para todos jogarem como mandante e visitante
h = rep(1:n_times, each = n_times)
a = rep(1:n_times, times = n_times)
#excluindo os duplicados
games <- data.frame(h,a)
games <- games[games$h != games$a , ]

#numero de jogos
n_jogos <- length(games$h)

#efeito de jogar em casa
home_f <- 0.2

#b0
b0 <- -0.2

#efeito de ataque e defesa
att <- rnorm(n_times, 0 , 0.4)
def <- rnorm(n_times, 0 , 0.4)

#gerar resultados dos jogos

simulate_games <- function(games){
  n_jogos <- length(games$h)
  home <- games$h
  away <- games$a
  
  theta_1 <- b0 + home_f + att[home] + def[away]
  theta_2 <- b0 + att[away] + def[home]
  
  y1 <- rpois(n_jogos, exp(theta_1))
  y2 <- rpois(n_jogos, exp(theta_2))
  
  games$y1 <- y1
  games$y2 <- y2  
  
  assign("games", games, envir = .GlobalEnv)
}

simulate_games(games)

beta_0_sd <- 1000
home_sd <- 1000

options(mc.cores = parallel::detectCores())
rstan_options(auto_write = TRUE)
setwd("C:/Users/gmore/OneDrive/Desktop/MCCD/stan")


data <- append(list(Games=n_jogos , Times = n_times) , as.list(games))
modelo<- stan_model(file = "Poisson_gols.stan")
fit <- sampling(modelo, data = data, cores = 2, chains = 2)
fit

shinystan::launch_shinystan(fit)
modelo <- readRDS("Poisson_gols.rds")
codigo_cpp <- get_cppcode(modelo)
writeLines(codigo_cpp, "Poisson.cpp")
rstan::