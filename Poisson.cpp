#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
#ifndef USE_STANC3
#define USE_STANC3
#endif
// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model11b0559c5d80__namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 39> locations_array__ =
  {" (found before start of program)",
  " (in 'string', line 10, column 2 to column 10)",
  " (in 'string', line 11, column 2 to column 12)",
  " (in 'string', line 12, column 2 to column 30)",
  " (in 'string', line 13, column 2 to column 30)",
  " (in 'string', line 14, column 2 to column 20)",
  " (in 'string', line 15, column 2 to column 20)",
  " (in 'string', line 32, column 2 to column 27)",
  " (in 'string', line 33, column 2 to column 27)",
  " (in 'string', line 35, column 4 to column 71)",
  " (in 'string', line 36, column 4 to column 64)",
  " (in 'string', line 34, column 20 to line 37, column 3)",
  " (in 'string', line 34, column 2 to line 37, column 3)",
  " (in 'string', line 19, column 4 to column 60)",
  " (in 'string', line 20, column 4 to column 52)",
  " (in 'string', line 18, column 20 to line 21, column 3)",
  " (in 'string', line 18, column 2 to line 21, column 3)",
  " (in 'string', line 23, column 4 to column 35)",
  " (in 'string', line 24, column 4 to column 35)",
  " (in 'string', line 22, column 20 to line 25, column 3)",
  " (in 'string', line 22, column 2 to line 25, column 3)",
  " (in 'string', line 26, column 2 to column 22)",
  " (in 'string', line 27, column 2 to column 24)",
  " (in 'string', line 28, column 2 to column 29)",
  " (in 'string', line 29, column 2 to column 29)",
  " (in 'string', line 2, column 2 to column 25)",
  " (in 'string', line 3, column 2 to column 25)",
  " (in 'string', line 4, column 37 to column 42)",
  " (in 'string', line 4, column 2 to column 44)",
  " (in 'string', line 5, column 37 to column 42)",
  " (in 'string', line 5, column 2 to column 44)",
  " (in 'string', line 6, column 22 to column 27)",
  " (in 'string', line 6, column 2 to column 29)",
  " (in 'string', line 7, column 22 to column 27)",
  " (in 'string', line 7, column 2 to column 29)",
  " (in 'string', line 14, column 9 to column 14)",
  " (in 'string', line 15, column 9 to column 14)",
  " (in 'string', line 32, column 9 to column 14)",
  " (in 'string', line 33, column 9 to column 14)"};
class model11b0559c5d80_ final : public model_base_crtp<model11b0559c5d80_> {
private:
  int Games;
  int Times;
  std::vector<int> h;
  std::vector<int> a;
  std::vector<int> y1;
  std::vector<int> y2;
public:
  ~model11b0559c5d80_() {}
  model11b0559c5d80_(stan::io::var_context& context__, unsigned int
                     random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model11b0559c5d80__namespace::model11b0559c5d80_";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 25;
      context__.validate_dims("data initialization", "Games", "int",
        std::vector<size_t>{});
      Games = std::numeric_limits<int>::min();
      current_statement__ = 25;
      Games = context__.vals_i("Games")[(1 - 1)];
      current_statement__ = 25;
      stan::math::check_greater_or_equal(function__, "Games", Games, 1);
      current_statement__ = 26;
      context__.validate_dims("data initialization", "Times", "int",
        std::vector<size_t>{});
      Times = std::numeric_limits<int>::min();
      current_statement__ = 26;
      Times = context__.vals_i("Times")[(1 - 1)];
      current_statement__ = 26;
      stan::math::check_greater_or_equal(function__, "Times", Times, 1);
      current_statement__ = 27;
      stan::math::validate_non_negative_index("h", "Games", Games);
      current_statement__ = 28;
      context__.validate_dims("data initialization", "h", "int",
        std::vector<size_t>{static_cast<size_t>(Games)});
      h = std::vector<int>(Games, std::numeric_limits<int>::min());
      current_statement__ = 28;
      h = context__.vals_i("h");
      current_statement__ = 28;
      stan::math::check_greater_or_equal(function__, "h", h, 1);
      current_statement__ = 28;
      stan::math::check_less_or_equal(function__, "h", h, Times);
      current_statement__ = 29;
      stan::math::validate_non_negative_index("a", "Games", Games);
      current_statement__ = 30;
      context__.validate_dims("data initialization", "a", "int",
        std::vector<size_t>{static_cast<size_t>(Games)});
      a = std::vector<int>(Games, std::numeric_limits<int>::min());
      current_statement__ = 30;
      a = context__.vals_i("a");
      current_statement__ = 30;
      stan::math::check_greater_or_equal(function__, "a", a, 1);
      current_statement__ = 30;
      stan::math::check_less_or_equal(function__, "a", a, Times);
      current_statement__ = 31;
      stan::math::validate_non_negative_index("y1", "Games", Games);
      current_statement__ = 32;
      context__.validate_dims("data initialization", "y1", "int",
        std::vector<size_t>{static_cast<size_t>(Games)});
      y1 = std::vector<int>(Games, std::numeric_limits<int>::min());
      current_statement__ = 32;
      y1 = context__.vals_i("y1");
      current_statement__ = 32;
      stan::math::check_greater_or_equal(function__, "y1", y1, 0);
      current_statement__ = 33;
      stan::math::validate_non_negative_index("y2", "Games", Games);
      current_statement__ = 34;
      context__.validate_dims("data initialization", "y2", "int",
        std::vector<size_t>{static_cast<size_t>(Games)});
      y2 = std::vector<int>(Games, std::numeric_limits<int>::min());
      current_statement__ = 34;
      y2 = context__.vals_i("y2");
      current_statement__ = 34;
      stan::math::check_greater_or_equal(function__, "y2", y2, 0);
      current_statement__ = 35;
      stan::math::validate_non_negative_index("att", "Times", Times);
      current_statement__ = 36;
      stan::math::validate_non_negative_index("def", "Times", Times);
      current_statement__ = 37;
      stan::math::validate_non_negative_index("y1_predito", "Games", Games);
      current_statement__ = 38;
      stan::math::validate_non_negative_index("y2_predito", "Games", Games);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1 + 1 + Times + Times;
  }
  inline std::string model_name() const final {
    return "model11b0559c5d80_";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --"};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "model11b0559c5d80__namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ b0 = DUMMY_VAR__;
      current_statement__ = 1;
      b0 = in__.template read<local_scalar_t__>();
      local_scalar_t__ home = DUMMY_VAR__;
      current_statement__ = 2;
      home = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma_att = DUMMY_VAR__;
      current_statement__ = 3;
      sigma_att = in__.template read_constrain_lb<local_scalar_t__,
                    jacobian__>(0, lp__);
      local_scalar_t__ sigma_def = DUMMY_VAR__;
      current_statement__ = 4;
      sigma_def = in__.template read_constrain_lb<local_scalar_t__,
                    jacobian__>(0, lp__);
      Eigen::Matrix<local_scalar_t__,-1,1> att =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(Times, DUMMY_VAR__);
      current_statement__ = 5;
      att = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(Times);
      Eigen::Matrix<local_scalar_t__,-1,1> def =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(Times, DUMMY_VAR__);
      current_statement__ = 6;
      def = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(Times);
      {
        current_statement__ = 16;
        for (int g = 1; g <= Games; ++g) {
          current_statement__ = 13;
          lp_accum__.add(stan::math::poisson_log_lpmf<propto__>(
                           stan::model::rvalue(y1, "y1",
                             stan::model::index_uni(g)), (((b0 + home) +
                           stan::model::rvalue(att, "att",
                             stan::model::index_uni(
                               stan::model::rvalue(h, "h",
                                 stan::model::index_uni(g))))) +
                           stan::model::rvalue(def, "def",
                             stan::model::index_uni(
                               stan::model::rvalue(a, "a",
                                 stan::model::index_uni(g)))))));
          current_statement__ = 14;
          lp_accum__.add(stan::math::poisson_log_lpmf<propto__>(
                           stan::model::rvalue(y2, "y2",
                             stan::model::index_uni(g)), ((b0 +
                           stan::model::rvalue(att, "att",
                             stan::model::index_uni(
                               stan::model::rvalue(a, "a",
                                 stan::model::index_uni(g))))) +
                           stan::model::rvalue(def, "def",
                             stan::model::index_uni(
                               stan::model::rvalue(h, "h",
                                 stan::model::index_uni(g)))))));
        }
        current_statement__ = 20;
        for (int t = 1; t <= Times; ++t) {
          current_statement__ = 17;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(att, "att",
                             stan::model::index_uni(t)), 0, sigma_att));
          current_statement__ = 18;
          lp_accum__.add(stan::math::normal_lpdf<propto__>(
                           stan::model::rvalue(def, "def",
                             stan::model::index_uni(t)), 0, sigma_def));
        }
        current_statement__ = 21;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(b0, 0, 10));
        current_statement__ = 22;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(home, 0, 10));
        current_statement__ = 23;
        lp_accum__.add(stan::math::cauchy_lpdf<propto__>(sigma_att, 0, 2.5));
        current_statement__ = 24;
        lp_accum__.add(stan::math::cauchy_lpdf<propto__>(sigma_def, 0, 2.5));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model11b0559c5d80__namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double b0 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      b0 = in__.template read<local_scalar_t__>();
      double home = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      home = in__.template read<local_scalar_t__>();
      double sigma_att = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      sigma_att = in__.template read_constrain_lb<local_scalar_t__,
                    jacobian__>(0, lp__);
      double sigma_def = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      sigma_def = in__.template read_constrain_lb<local_scalar_t__,
                    jacobian__>(0, lp__);
      Eigen::Matrix<double,-1,1> att =
        Eigen::Matrix<double,-1,1>::Constant(Times,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 5;
      att = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(Times);
      Eigen::Matrix<double,-1,1> def =
        Eigen::Matrix<double,-1,1>::Constant(Times,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 6;
      def = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(Times);
      out__.write(b0);
      out__.write(home);
      out__.write(sigma_att);
      out__.write(sigma_def);
      out__.write(att);
      out__.write(def);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      Eigen::Matrix<double,-1,1> y1_predito =
        Eigen::Matrix<double,-1,1>::Constant(Games,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,1> y2_predito =
        Eigen::Matrix<double,-1,1>::Constant(Games,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 12;
      for (int g = 1; g <= Games; ++g) {
        current_statement__ = 9;
        stan::model::assign(y1_predito,
          stan::math::poisson_log_rng((((b0 + home) +
            stan::model::rvalue(att, "att",
              stan::model::index_uni(
                stan::model::rvalue(h, "h", stan::model::index_uni(g))))) +
            stan::model::rvalue(def, "def",
              stan::model::index_uni(
                stan::model::rvalue(a, "a", stan::model::index_uni(g))))),
            base_rng__), "assigning variable y1_predito",
          stan::model::index_uni(g));
        current_statement__ = 10;
        stan::model::assign(y2_predito,
          stan::math::poisson_log_rng(((b0 +
            stan::model::rvalue(att, "att",
              stan::model::index_uni(
                stan::model::rvalue(a, "a", stan::model::index_uni(g))))) +
            stan::model::rvalue(def, "def",
              stan::model::index_uni(
                stan::model::rvalue(h, "h", stan::model::index_uni(g))))),
            base_rng__), "assigning variable y2_predito",
          stan::model::index_uni(g));
      }
      out__.write(y1_predito);
      out__.write(y2_predito);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ b0 = DUMMY_VAR__;
      current_statement__ = 1;
      b0 = in__.read<local_scalar_t__>();
      out__.write(b0);
      local_scalar_t__ home = DUMMY_VAR__;
      current_statement__ = 2;
      home = in__.read<local_scalar_t__>();
      out__.write(home);
      local_scalar_t__ sigma_att = DUMMY_VAR__;
      current_statement__ = 3;
      sigma_att = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma_att);
      local_scalar_t__ sigma_def = DUMMY_VAR__;
      current_statement__ = 4;
      sigma_def = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma_def);
      Eigen::Matrix<local_scalar_t__,-1,1> att =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(Times, DUMMY_VAR__);
      current_statement__ = 5;
      stan::model::assign(att,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(Times),
        "assigning variable att");
      out__.write(att);
      Eigen::Matrix<local_scalar_t__,-1,1> def =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(Times, DUMMY_VAR__);
      current_statement__ = 6;
      stan::model::assign(def,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(Times),
        "assigning variable def");
      out__.write(def);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "b0", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "home", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "sigma_att",
        "double", std::vector<size_t>{});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "sigma_def",
        "double", std::vector<size_t>{});
      current_statement__ = 5;
      context__.validate_dims("parameter initialization", "att", "double",
        std::vector<size_t>{static_cast<size_t>(Times)});
      current_statement__ = 6;
      context__.validate_dims("parameter initialization", "def", "double",
        std::vector<size_t>{static_cast<size_t>(Times)});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ b0 = DUMMY_VAR__;
      current_statement__ = 1;
      b0 = context__.vals_r("b0")[(1 - 1)];
      out__.write(b0);
      local_scalar_t__ home = DUMMY_VAR__;
      current_statement__ = 2;
      home = context__.vals_r("home")[(1 - 1)];
      out__.write(home);
      local_scalar_t__ sigma_att = DUMMY_VAR__;
      current_statement__ = 3;
      sigma_att = context__.vals_r("sigma_att")[(1 - 1)];
      out__.write_free_lb(0, sigma_att);
      local_scalar_t__ sigma_def = DUMMY_VAR__;
      current_statement__ = 4;
      sigma_def = context__.vals_r("sigma_def")[(1 - 1)];
      out__.write_free_lb(0, sigma_def);
      Eigen::Matrix<local_scalar_t__,-1,1> att =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(Times, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> att_flat__;
        current_statement__ = 5;
        att_flat__ = context__.vals_r("att");
        current_statement__ = 5;
        pos__ = 1;
        current_statement__ = 5;
        for (int sym1__ = 1; sym1__ <= Times; ++sym1__) {
          current_statement__ = 5;
          stan::model::assign(att, att_flat__[(pos__ - 1)],
            "assigning variable att", stan::model::index_uni(sym1__));
          current_statement__ = 5;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(att);
      Eigen::Matrix<local_scalar_t__,-1,1> def =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(Times, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> def_flat__;
        current_statement__ = 6;
        def_flat__ = context__.vals_r("def");
        current_statement__ = 6;
        pos__ = 1;
        current_statement__ = 6;
        for (int sym1__ = 1; sym1__ <= Times; ++sym1__) {
          current_statement__ = 6;
          stan::model::assign(def, def_flat__[(pos__ - 1)],
            "assigning variable def", stan::model::index_uni(sym1__));
          current_statement__ = 6;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(def);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"b0", "home", "sigma_att",
                "sigma_def", "att", "def"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"y1_predito", "y2_predito"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{},
                std::vector<size_t>{},
                std::vector<size_t>{static_cast<size_t>(Times)},
                std::vector<size_t>{static_cast<size_t>(Times)}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(Games)},
             std::vector<size_t>{static_cast<size_t>(Games)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "b0");
    param_names__.emplace_back(std::string() + "home");
    param_names__.emplace_back(std::string() + "sigma_att");
    param_names__.emplace_back(std::string() + "sigma_def");
    for (int sym1__ = 1; sym1__ <= Times; ++sym1__) {
      param_names__.emplace_back(std::string() + "att" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= Times; ++sym1__) {
      param_names__.emplace_back(std::string() + "def" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= Games; ++sym1__) {
        param_names__.emplace_back(std::string() + "y1_predito" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= Games; ++sym1__) {
        param_names__.emplace_back(std::string() + "y2_predito" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "b0");
    param_names__.emplace_back(std::string() + "home");
    param_names__.emplace_back(std::string() + "sigma_att");
    param_names__.emplace_back(std::string() + "sigma_def");
    for (int sym1__ = 1; sym1__ <= Times; ++sym1__) {
      param_names__.emplace_back(std::string() + "att" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= Times; ++sym1__) {
      param_names__.emplace_back(std::string() + "def" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= Games; ++sym1__) {
        param_names__.emplace_back(std::string() + "y1_predito" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= Games; ++sym1__) {
        param_names__.emplace_back(std::string() + "y2_predito" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"b0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"home\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_att\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_def\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"att\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Times) + "},\"block\":\"parameters\"},{\"name\":\"def\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Times) + "},\"block\":\"parameters\"},{\"name\":\"y1_predito\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Games) + "},\"block\":\"generated_quantities\"},{\"name\":\"y2_predito\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Games) + "},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"b0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"home\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_att\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_def\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"att\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Times) + "},\"block\":\"parameters\"},{\"name\":\"def\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Times) + "},\"block\":\"parameters\"},{\"name\":\"y1_predito\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Games) + "},\"block\":\"generated_quantities\"},{\"name\":\"y2_predito\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(Games) + "},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (((((1 + 1) + 1) + 1) + Times) + Times);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * ((Games +
      Games));
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (((((1 + 1) + 1) + 1) + Times) + Times);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * ((Games +
      Games));
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model11b0559c5d80__namespace::model11b0559c5d80_;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model11b0559c5d80__namespace::profiles__;
}
#endif
#endif
