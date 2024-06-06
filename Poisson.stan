data {
  int<lower=1> G;
  int<lower=1> T;
  int<lower=0, upper=T> h[G];
  int<lower=0, upper=T> a[G];
  int<lower=0> y1[G];
  int<lower=0> y2[G];
}
parameters {
  real home;
  real mu;
  real<lower=0> sigma_att;
  real<lower=0> sigma_def;
  vector[T] att;
  vector[T] def;
}

model {
  for (g in 1:G) {
    y1[g] ~ poisson_log(mu + home + att[h[g]] + def[a[g]]);
    y2[g] ~ poisson_log(mu + att[a[g]] + def[h[g]]);
  }
  for (t in 1:T) {
    att[t] ~ normal(0, sigma_att);
    def[t] ~ normal(0, sigma_def);
  }
  home ~ normal(0, 10);
  mu ~ normal(0, 10);
  sigma_att ~ cauchy(0, 2.5);
  sigma_def ~ cauchy(0, 2.5);
}
generated quantities {
  vector[G] y1_tilde;
  vector[G] y2_tilde;
  vector[G] log_lik;
  for (g in 1:G) {
    y1_tilde[g] = poisson_log_rng(mu + home + att[h[g]] + def[a[g]]);
    y2_tilde[g] = poisson_log_rng(mu + att[a[g]] + def[h[g]]);
    log_lik[g] = poisson_log_lpmf(y1[g] | mu + home + att[h[g]] + def[a[g]]) + poisson_log_lpmf(y2[g] | mu + att[a[g]] + def[h[g]]);
  } 
}
