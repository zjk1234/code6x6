/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun.h"
#include "c86_six_plus_six_AcmsteeringV09_main_1lf.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c86_debug_family_names[12] = { "remainder1", "remainder2",
  "nargin", "nargout", "data_1", "data_2", "data", "zero", "position_4",
  "position_3", "position_2", "position_1" };

/* Function Declarations */
static void initialize_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initialize_params_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void enable_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void disable_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c86_update_debugger_state_c86_six_plus_six_AcmsteeringV09_main_1
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void set_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_st);
static void finalize_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void sf_gateway_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c86_chartstep_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initSimStructsc86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c86_machineNumber, uint32_T
  c86_chartNumber, uint32_T c86_instanceNumber);
static const mxArray *c86_sf_marshallOut(void *chartInstanceVoid, void
  *c86_inData);
static real_T c86_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_position_1, const char_T *c86_identifier);
static real_T c86_b_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_u, const emlrtMsgIdentifier *c86_parentId);
static void c86_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c86_mxArrayInData, const char_T *c86_varName, void *c86_outData);
static void c86_info_helper(const mxArray **c86_info);
static const mxArray *c86_emlrt_marshallOut(const char * c86_u);
static const mxArray *c86_b_emlrt_marshallOut(const uint32_T c86_u);
static real_T c86_mod(SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct
                      *chartInstance, real_T c86_x, real_T c86_y);
static void c86_eml_scalar_eg
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *c86_b_sf_marshallOut(void *chartInstanceVoid, void
  *c86_inData);
static int32_T c86_c_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_u, const emlrtMsgIdentifier *c86_parentId);
static void c86_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c86_mxArrayInData, const char_T *c86_varName, void *c86_outData);
static uint8_T c86_d_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_b_is_active_c86_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c86_identifier);
static uint8_T c86_e_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_u, const emlrtMsgIdentifier *c86_parentId);
static void init_dsm_address_info
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  chartInstance->c86_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c86_is_active_c86_six_plus_six_AcmsteeringV09_main_1lf = 0U;
}

static void initialize_params_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c86_update_debugger_state_c86_six_plus_six_AcmsteeringV09_main_1
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  const mxArray *c86_st;
  const mxArray *c86_y = NULL;
  real_T c86_hoistedGlobal;
  real_T c86_u;
  const mxArray *c86_b_y = NULL;
  real_T c86_b_hoistedGlobal;
  real_T c86_b_u;
  const mxArray *c86_c_y = NULL;
  real_T c86_c_hoistedGlobal;
  real_T c86_c_u;
  const mxArray *c86_d_y = NULL;
  real_T c86_d_hoistedGlobal;
  real_T c86_d_u;
  const mxArray *c86_e_y = NULL;
  real_T c86_e_hoistedGlobal;
  real_T c86_e_u;
  const mxArray *c86_f_y = NULL;
  real_T c86_f_hoistedGlobal;
  real_T c86_f_u;
  const mxArray *c86_g_y = NULL;
  uint8_T c86_g_hoistedGlobal;
  uint8_T c86_g_u;
  const mxArray *c86_h_y = NULL;
  real_T *c86_data;
  real_T *c86_position_1;
  real_T *c86_position_2;
  real_T *c86_position_3;
  real_T *c86_position_4;
  real_T *c86_zero;
  c86_position_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c86_position_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c86_position_3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c86_position_4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c86_zero = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c86_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c86_st = NULL;
  c86_st = NULL;
  c86_y = NULL;
  sf_mex_assign(&c86_y, sf_mex_createcellmatrix(7, 1), false);
  c86_hoistedGlobal = *c86_data;
  c86_u = c86_hoistedGlobal;
  c86_b_y = NULL;
  sf_mex_assign(&c86_b_y, sf_mex_create("y", &c86_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c86_y, 0, c86_b_y);
  c86_b_hoistedGlobal = *c86_position_1;
  c86_b_u = c86_b_hoistedGlobal;
  c86_c_y = NULL;
  sf_mex_assign(&c86_c_y, sf_mex_create("y", &c86_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c86_y, 1, c86_c_y);
  c86_c_hoistedGlobal = *c86_position_2;
  c86_c_u = c86_c_hoistedGlobal;
  c86_d_y = NULL;
  sf_mex_assign(&c86_d_y, sf_mex_create("y", &c86_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c86_y, 2, c86_d_y);
  c86_d_hoistedGlobal = *c86_position_3;
  c86_d_u = c86_d_hoistedGlobal;
  c86_e_y = NULL;
  sf_mex_assign(&c86_e_y, sf_mex_create("y", &c86_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c86_y, 3, c86_e_y);
  c86_e_hoistedGlobal = *c86_position_4;
  c86_e_u = c86_e_hoistedGlobal;
  c86_f_y = NULL;
  sf_mex_assign(&c86_f_y, sf_mex_create("y", &c86_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c86_y, 4, c86_f_y);
  c86_f_hoistedGlobal = *c86_zero;
  c86_f_u = c86_f_hoistedGlobal;
  c86_g_y = NULL;
  sf_mex_assign(&c86_g_y, sf_mex_create("y", &c86_f_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c86_y, 5, c86_g_y);
  c86_g_hoistedGlobal =
    chartInstance->c86_is_active_c86_six_plus_six_AcmsteeringV09_main_1lf;
  c86_g_u = c86_g_hoistedGlobal;
  c86_h_y = NULL;
  sf_mex_assign(&c86_h_y, sf_mex_create("y", &c86_g_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c86_y, 6, c86_h_y);
  sf_mex_assign(&c86_st, c86_y, false);
  return c86_st;
}

static void set_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_st)
{
  const mxArray *c86_u;
  real_T *c86_data;
  real_T *c86_position_1;
  real_T *c86_position_2;
  real_T *c86_position_3;
  real_T *c86_position_4;
  real_T *c86_zero;
  c86_position_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c86_position_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c86_position_3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c86_position_4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c86_zero = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c86_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c86_doneDoubleBufferReInit = true;
  c86_u = sf_mex_dup(c86_st);
  *c86_data = c86_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c86_u, 0)), "data");
  *c86_position_1 = c86_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c86_u, 1)), "position_1");
  *c86_position_2 = c86_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c86_u, 2)), "position_2");
  *c86_position_3 = c86_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c86_u, 3)), "position_3");
  *c86_position_4 = c86_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c86_u, 4)), "position_4");
  *c86_zero = c86_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c86_u, 5)), "zero");
  chartInstance->c86_is_active_c86_six_plus_six_AcmsteeringV09_main_1lf =
    c86_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c86_u, 6)),
    "is_active_c86_six_plus_six_AcmsteeringV09_main_1lf");
  sf_mex_destroy(&c86_u);
  c86_update_debugger_state_c86_six_plus_six_AcmsteeringV09_main_1(chartInstance);
  sf_mex_destroy(&c86_st);
}

static void finalize_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real_T *c86_data_1;
  real_T *c86_data;
  real_T *c86_data_2;
  real_T *c86_zero;
  real_T *c86_position_4;
  real_T *c86_position_3;
  real_T *c86_position_2;
  real_T *c86_position_1;
  c86_position_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c86_position_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c86_position_3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c86_position_4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c86_zero = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c86_data_2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c86_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c86_data_1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 85U, chartInstance->c86_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c86_data_1, 0U);
  chartInstance->c86_sfEvent = CALL_EVENT;
  c86_chartstep_c86_six_plus_six_AcmsteeringV09_main_1lf(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c86_data, 1U);
  _SFD_DATA_RANGE_CHECK(*c86_data_2, 2U);
  _SFD_DATA_RANGE_CHECK(*c86_zero, 3U);
  _SFD_DATA_RANGE_CHECK(*c86_position_4, 4U);
  _SFD_DATA_RANGE_CHECK(*c86_position_3, 5U);
  _SFD_DATA_RANGE_CHECK(*c86_position_2, 6U);
  _SFD_DATA_RANGE_CHECK(*c86_position_1, 7U);
}

static void c86_chartstep_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real_T c86_hoistedGlobal;
  real_T c86_b_hoistedGlobal;
  real_T c86_data_1;
  real_T c86_data_2;
  uint32_T c86_debug_family_var_map[12];
  real_T c86_remainder1;
  real_T c86_remainder2;
  real_T c86_nargin = 2.0;
  real_T c86_nargout = 6.0;
  real_T c86_data;
  real_T c86_zero;
  real_T c86_position_4;
  real_T c86_position_3;
  real_T c86_position_2;
  real_T c86_position_1;
  real_T c86_A;
  real_T c86_x;
  real_T c86_b_x;
  real_T c86_c_x;
  real_T c86_y;
  real_T c86_d_x;
  real_T c86_e_x;
  real_T c86_f_x;
  real_T c86_g_x;
  real_T c86_b_A;
  real_T c86_h_x;
  real_T c86_i_x;
  real_T c86_j_x;
  real_T c86_b_y;
  real_T c86_k_x;
  real_T c86_l_x;
  real_T c86_m_x;
  real_T c86_n_x;
  real_T c86_c_A;
  real_T c86_o_x;
  real_T c86_p_x;
  real_T c86_q_x;
  real_T c86_c_y;
  real_T c86_r_x;
  real_T c86_s_x;
  real_T c86_t_x;
  real_T c86_u_x;
  real_T *c86_b_position_1;
  real_T *c86_b_position_2;
  real_T *c86_b_position_3;
  real_T *c86_b_position_4;
  real_T *c86_b_zero;
  real_T *c86_b_data;
  real_T *c86_b_data_2;
  real_T *c86_b_data_1;
  c86_b_position_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c86_b_position_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c86_b_position_3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c86_b_position_4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c86_b_zero = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c86_b_data_2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c86_b_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c86_b_data_1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 85U, chartInstance->c86_sfEvent);
  c86_hoistedGlobal = *c86_b_data_1;
  c86_b_hoistedGlobal = *c86_b_data_2;
  c86_data_1 = c86_hoistedGlobal;
  c86_data_2 = c86_b_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 12U, 12U, c86_debug_family_names,
    c86_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_remainder1, 0U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_remainder2, 1U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_nargin, 2U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_nargout, 3U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c86_data_1, 4U, c86_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c86_data_2, 5U, c86_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_data, 6U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_zero, 7U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_position_4, 8U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_position_3, 9U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_position_2, 10U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c86_position_1, 11U, c86_sf_marshallOut,
    c86_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 2);
  if (CV_EML_IF(0, 1, 0, c86_data_1 < 150.0)) {
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 3);
    if (CV_EML_IF(0, 1, 1, c86_mod(chartInstance, c86_data_1, 6.0) < 3.0)) {
      _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 4);
      c86_data = 6.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 6);
      c86_data = 7.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 8);
    c86_zero = 0.0;
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 9);
    c86_position_1 = 0.0;
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 10);
    c86_position_2 = 0.0;
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 11);
    c86_position_3 = 0.0;
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 12);
    c86_position_4 = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 14);
    if (CV_EML_IF(0, 1, 2, c86_mod(chartInstance, c86_data_1, 2.0) == 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 15);
      c86_data = 15.0;
      _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 16);
      c86_zero = 0.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 18);
      c86_zero = 0.0;
      _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 19);
      c86_data = 95.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 22);
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 23);
    if (CV_EML_IF(0, 1, 3, c86_data_2 < 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 24);
      c86_eml_scalar_eg(chartInstance);
      c86_eml_scalar_eg(chartInstance);
      c86_data_2 += 4.294967296E+9;
    }

    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 27);
    c86_A = c86_data_2;
    c86_x = c86_A;
    c86_b_x = c86_x;
    c86_c_x = c86_b_x;
    c86_y = c86_c_x / 1.6777216E+7;
    c86_d_x = c86_y;
    c86_position_1 = c86_d_x;
    c86_e_x = c86_position_1;
    c86_position_1 = c86_e_x;
    c86_position_1 = muDoubleScalarFloor(c86_position_1);
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 28);
    c86_f_x = c86_mod(chartInstance, c86_data_2, 1.6777216E+7);
    c86_remainder1 = c86_f_x;
    c86_g_x = c86_remainder1;
    c86_remainder1 = c86_g_x;
    c86_remainder1 = muDoubleScalarFloor(c86_remainder1);
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 29);
    c86_b_A = c86_remainder1;
    c86_h_x = c86_b_A;
    c86_i_x = c86_h_x;
    c86_j_x = c86_i_x;
    c86_b_y = c86_j_x / 65536.0;
    c86_k_x = c86_b_y;
    c86_position_2 = c86_k_x;
    c86_l_x = c86_position_2;
    c86_position_2 = c86_l_x;
    c86_position_2 = muDoubleScalarFloor(c86_position_2);
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 30);
    c86_m_x = c86_mod(chartInstance, c86_remainder1, 65536.0);
    c86_remainder2 = c86_m_x;
    c86_n_x = c86_remainder2;
    c86_remainder2 = c86_n_x;
    c86_remainder2 = muDoubleScalarFloor(c86_remainder2);
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 31);
    c86_c_A = c86_remainder2;
    c86_o_x = c86_c_A;
    c86_p_x = c86_o_x;
    c86_q_x = c86_p_x;
    c86_c_y = c86_q_x / 256.0;
    c86_r_x = c86_c_y;
    c86_position_3 = c86_r_x;
    c86_s_x = c86_position_3;
    c86_position_3 = c86_s_x;
    c86_position_3 = muDoubleScalarFloor(c86_position_3);
    _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, 32);
    c86_t_x = c86_mod(chartInstance, c86_remainder2, 256.0);
    c86_position_4 = c86_t_x;
    c86_u_x = c86_position_4;
    c86_position_4 = c86_u_x;
    c86_position_4 = muDoubleScalarFloor(c86_position_4);
  }

  _SFD_EML_CALL(0U, chartInstance->c86_sfEvent, -32);
  _SFD_SYMBOL_SCOPE_POP();
  *c86_b_data = c86_data;
  *c86_b_zero = c86_zero;
  *c86_b_position_4 = c86_position_4;
  *c86_b_position_3 = c86_position_3;
  *c86_b_position_2 = c86_position_2;
  *c86_b_position_1 = c86_position_1;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 85U, chartInstance->c86_sfEvent);
}

static void initSimStructsc86_six_plus_six_AcmsteeringV09_main_1lf
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c86_machineNumber, uint32_T
  c86_chartNumber, uint32_T c86_instanceNumber)
{
  (void)c86_machineNumber;
  (void)c86_chartNumber;
  (void)c86_instanceNumber;
}

static const mxArray *c86_sf_marshallOut(void *chartInstanceVoid, void
  *c86_inData)
{
  const mxArray *c86_mxArrayOutData = NULL;
  real_T c86_u;
  const mxArray *c86_y = NULL;
  SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c86_mxArrayOutData = NULL;
  c86_u = *(real_T *)c86_inData;
  c86_y = NULL;
  sf_mex_assign(&c86_y, sf_mex_create("y", &c86_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c86_mxArrayOutData, c86_y, false);
  return c86_mxArrayOutData;
}

static real_T c86_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_position_1, const char_T *c86_identifier)
{
  real_T c86_y;
  emlrtMsgIdentifier c86_thisId;
  c86_thisId.fIdentifier = c86_identifier;
  c86_thisId.fParent = NULL;
  c86_y = c86_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c86_position_1),
    &c86_thisId);
  sf_mex_destroy(&c86_position_1);
  return c86_y;
}

static real_T c86_b_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_u, const emlrtMsgIdentifier *c86_parentId)
{
  real_T c86_y;
  real_T c86_d0;
  (void)chartInstance;
  sf_mex_import(c86_parentId, sf_mex_dup(c86_u), &c86_d0, 1, 0, 0U, 0, 0U, 0);
  c86_y = c86_d0;
  sf_mex_destroy(&c86_u);
  return c86_y;
}

static void c86_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c86_mxArrayInData, const char_T *c86_varName, void *c86_outData)
{
  const mxArray *c86_position_1;
  const char_T *c86_identifier;
  emlrtMsgIdentifier c86_thisId;
  real_T c86_y;
  SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c86_position_1 = sf_mex_dup(c86_mxArrayInData);
  c86_identifier = c86_varName;
  c86_thisId.fIdentifier = c86_identifier;
  c86_thisId.fParent = NULL;
  c86_y = c86_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c86_position_1),
    &c86_thisId);
  sf_mex_destroy(&c86_position_1);
  *(real_T *)c86_outData = c86_y;
  sf_mex_destroy(&c86_mxArrayInData);
}

const mxArray
  *sf_c86_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c86_nameCaptureInfo = NULL;
  c86_nameCaptureInfo = NULL;
  sf_mex_assign(&c86_nameCaptureInfo, sf_mex_createstruct("structure", 2, 34, 1),
                false);
  c86_info_helper(&c86_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c86_nameCaptureInfo);
  return c86_nameCaptureInfo;
}

static void c86_info_helper(const mxArray **c86_info)
{
  const mxArray *c86_rhs0 = NULL;
  const mxArray *c86_lhs0 = NULL;
  const mxArray *c86_rhs1 = NULL;
  const mxArray *c86_lhs1 = NULL;
  const mxArray *c86_rhs2 = NULL;
  const mxArray *c86_lhs2 = NULL;
  const mxArray *c86_rhs3 = NULL;
  const mxArray *c86_lhs3 = NULL;
  const mxArray *c86_rhs4 = NULL;
  const mxArray *c86_lhs4 = NULL;
  const mxArray *c86_rhs5 = NULL;
  const mxArray *c86_lhs5 = NULL;
  const mxArray *c86_rhs6 = NULL;
  const mxArray *c86_lhs6 = NULL;
  const mxArray *c86_rhs7 = NULL;
  const mxArray *c86_lhs7 = NULL;
  const mxArray *c86_rhs8 = NULL;
  const mxArray *c86_lhs8 = NULL;
  const mxArray *c86_rhs9 = NULL;
  const mxArray *c86_lhs9 = NULL;
  const mxArray *c86_rhs10 = NULL;
  const mxArray *c86_lhs10 = NULL;
  const mxArray *c86_rhs11 = NULL;
  const mxArray *c86_lhs11 = NULL;
  const mxArray *c86_rhs12 = NULL;
  const mxArray *c86_lhs12 = NULL;
  const mxArray *c86_rhs13 = NULL;
  const mxArray *c86_lhs13 = NULL;
  const mxArray *c86_rhs14 = NULL;
  const mxArray *c86_lhs14 = NULL;
  const mxArray *c86_rhs15 = NULL;
  const mxArray *c86_lhs15 = NULL;
  const mxArray *c86_rhs16 = NULL;
  const mxArray *c86_lhs16 = NULL;
  const mxArray *c86_rhs17 = NULL;
  const mxArray *c86_lhs17 = NULL;
  const mxArray *c86_rhs18 = NULL;
  const mxArray *c86_lhs18 = NULL;
  const mxArray *c86_rhs19 = NULL;
  const mxArray *c86_lhs19 = NULL;
  const mxArray *c86_rhs20 = NULL;
  const mxArray *c86_lhs20 = NULL;
  const mxArray *c86_rhs21 = NULL;
  const mxArray *c86_lhs21 = NULL;
  const mxArray *c86_rhs22 = NULL;
  const mxArray *c86_lhs22 = NULL;
  const mxArray *c86_rhs23 = NULL;
  const mxArray *c86_lhs23 = NULL;
  const mxArray *c86_rhs24 = NULL;
  const mxArray *c86_lhs24 = NULL;
  const mxArray *c86_rhs25 = NULL;
  const mxArray *c86_lhs25 = NULL;
  const mxArray *c86_rhs26 = NULL;
  const mxArray *c86_lhs26 = NULL;
  const mxArray *c86_rhs27 = NULL;
  const mxArray *c86_lhs27 = NULL;
  const mxArray *c86_rhs28 = NULL;
  const mxArray *c86_lhs28 = NULL;
  const mxArray *c86_rhs29 = NULL;
  const mxArray *c86_lhs29 = NULL;
  const mxArray *c86_rhs30 = NULL;
  const mxArray *c86_lhs30 = NULL;
  const mxArray *c86_rhs31 = NULL;
  const mxArray *c86_lhs31 = NULL;
  const mxArray *c86_rhs32 = NULL;
  const mxArray *c86_lhs32 = NULL;
  const mxArray *c86_rhs33 = NULL;
  const mxArray *c86_lhs33 = NULL;
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("mod"), "name", "name", 0);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363717454U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c86_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context",
                  "context", 1);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 1);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c86_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context",
                  "context", 2);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 2);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c86_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 3);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c86_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 4);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c86_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 5);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 5);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 5);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c86_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                  "context", 6);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 6);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c86_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                  "context", 7);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_floor"), "name",
                  "name", 7);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                  "resolved", "resolved", 7);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1286825926U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c86_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                  "context", 8);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_round"), "name",
                  "name", 8);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1307658438U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c86_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                  "context", 9);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_abs"), "name",
                  "name", 9);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1286825912U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c86_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs9), "lhs", "lhs",
                  9);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                  "context", 10);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eps"), "name", "name", 10);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved",
                  "resolved", 10);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1326731596U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c86_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs10), "lhs", "lhs",
                  10);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context",
                  "context", 11);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_is_float_class"), "name",
                  "name", 11);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 11);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                  "resolved", "resolved", 11);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1286825982U), "fileTimeLo",
                  "fileTimeLo", 11);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 11);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 11);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 11);
  sf_mex_assign(&c86_rhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs11), "rhs", "rhs",
                  11);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs11), "lhs", "lhs",
                  11);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context",
                  "context", 12);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_eps"), "name", "name",
                  12);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 12);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "resolved",
                  "resolved", 12);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1326731596U), "fileTimeLo",
                  "fileTimeLo", 12);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 12);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 12);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 12);
  sf_mex_assign(&c86_rhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs12), "rhs", "rhs",
                  12);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs12), "lhs", "lhs",
                  12);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "context",
                  "context", 13);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_float_model"), "name",
                  "name", 13);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 13);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                  "resolved", "resolved", 13);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1326731596U), "fileTimeLo",
                  "fileTimeLo", 13);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 13);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 13);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 13);
  sf_mex_assign(&c86_rhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs13), "rhs", "rhs",
                  13);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs13), "lhs", "lhs",
                  13);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(""), "context", "context", 14);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("hex2dec"), "name", "name",
                  14);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 14);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/hex2dec.m"), "resolved",
                  "resolved", 14);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1374180274U), "fileTimeLo",
                  "fileTimeLo", 14);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 14);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 14);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 14);
  sf_mex_assign(&c86_rhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs14), "rhs", "rhs",
                  14);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs14), "lhs", "lhs",
                  14);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(""), "context", "context", 15);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("mpower"), "name", "name", 15);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 15);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "resolved",
                  "resolved", 15);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363717478U), "fileTimeLo",
                  "fileTimeLo", 15);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 15);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 15);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 15);
  sf_mex_assign(&c86_rhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs15), "rhs", "rhs",
                  15);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs15), "lhs", "lhs",
                  15);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 16);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 16);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 16);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 16);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 16);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 16);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 16);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 16);
  sf_mex_assign(&c86_rhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs16), "rhs", "rhs",
                  16);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs16), "lhs", "lhs",
                  16);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 17);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("ismatrix"), "name", "name",
                  17);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 17);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                  "resolved", 17);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1331308458U), "fileTimeLo",
                  "fileTimeLo", 17);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 17);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 17);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 17);
  sf_mex_assign(&c86_rhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs17), "rhs", "rhs",
                  17);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs17), "lhs", "lhs",
                  17);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 18);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("power"), "name", "name", 18);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 18);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "resolved",
                  "resolved", 18);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 18);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 18);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 18);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 18);
  sf_mex_assign(&c86_rhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs18), "rhs", "rhs",
                  18);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs18), "lhs", "lhs",
                  18);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "context",
                  "context", 19);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 19);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 19);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 19);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 19);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 19);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 19);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 19);
  sf_mex_assign(&c86_rhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs19), "rhs", "rhs",
                  19);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs19), "lhs", "lhs",
                  19);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 20);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 20);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 20);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 20);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 20);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 20);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 20);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 20);
  sf_mex_assign(&c86_rhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs20), "rhs", "rhs",
                  20);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs20), "lhs", "lhs",
                  20);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 21);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 21);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 21);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 21);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 21);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 21);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 21);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 21);
  sf_mex_assign(&c86_rhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs21), "rhs", "rhs",
                  21);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs21), "lhs", "lhs",
                  21);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 22);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("floor"), "name", "name", 22);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 22);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved",
                  "resolved", 22);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363717454U), "fileTimeLo",
                  "fileTimeLo", 22);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 22);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 22);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 22);
  sf_mex_assign(&c86_rhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs22), "rhs", "rhs",
                  22);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs22), "lhs", "lhs",
                  22);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 23);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 23);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 23);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 23);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 23);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 23);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 23);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 23);
  sf_mex_assign(&c86_rhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs23), "rhs", "rhs",
                  23);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs23), "lhs", "lhs",
                  23);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 24);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_floor"), "name",
                  "name", 24);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 24);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                  "resolved", "resolved", 24);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1286825926U), "fileTimeLo",
                  "fileTimeLo", 24);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 24);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 24);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 24);
  sf_mex_assign(&c86_rhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs24), "rhs", "rhs",
                  24);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs24), "lhs", "lhs",
                  24);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                  "context", "context", 25);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 25);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 25);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 25);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 25);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 25);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 25);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 25);
  sf_mex_assign(&c86_rhs25, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs25, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs25), "rhs", "rhs",
                  25);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs25), "lhs", "lhs",
                  25);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(""), "context", "context", 26);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("mrdivide"), "name", "name",
                  26);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 26);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 26);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1388463696U), "fileTimeLo",
                  "fileTimeLo", 26);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 26);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1370017086U), "mFileTimeLo",
                  "mFileTimeLo", 26);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 26);
  sf_mex_assign(&c86_rhs26, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs26, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs26), "rhs", "rhs",
                  26);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs26), "lhs", "lhs",
                  26);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 27);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 27);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 27);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 27);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 27);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 27);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 27);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 27);
  sf_mex_assign(&c86_rhs27, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs27, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs27), "rhs", "rhs",
                  27);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs27), "lhs", "lhs",
                  27);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 28);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("rdivide"), "name", "name",
                  28);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 28);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 28);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 28);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 28);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 28);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 28);
  sf_mex_assign(&c86_rhs28, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs28, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs28), "rhs", "rhs",
                  28);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs28), "lhs", "lhs",
                  28);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 29);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 29);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 29);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 29);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 29);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 29);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 29);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 29);
  sf_mex_assign(&c86_rhs29, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs29, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs29), "rhs", "rhs",
                  29);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs29), "lhs", "lhs",
                  29);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 30);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 30);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 30);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 30);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1286825996U), "fileTimeLo",
                  "fileTimeLo", 30);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 30);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 30);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 30);
  sf_mex_assign(&c86_rhs30, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs30, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs30), "rhs", "rhs",
                  30);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs30), "lhs", "lhs",
                  30);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 31);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("eml_div"), "name", "name",
                  31);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 31);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 31);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 31);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 31);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 31);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 31);
  sf_mex_assign(&c86_rhs31, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs31, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs31), "rhs", "rhs",
                  31);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs31), "lhs", "lhs",
                  31);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 32);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("coder.internal.div"), "name",
                  "name", 32);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 32);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 32);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 32);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 32);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 32);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 32);
  sf_mex_assign(&c86_rhs32, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs32, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs32), "rhs", "rhs",
                  32);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs32), "lhs", "lhs",
                  32);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(""), "context", "context", 33);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("floor"), "name", "name", 33);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 33);
  sf_mex_addfield(*c86_info, c86_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved",
                  "resolved", 33);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(1363717454U), "fileTimeLo",
                  "fileTimeLo", 33);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 33);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 33);
  sf_mex_addfield(*c86_info, c86_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 33);
  sf_mex_assign(&c86_rhs33, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c86_lhs33, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_rhs33), "rhs", "rhs",
                  33);
  sf_mex_addfield(*c86_info, sf_mex_duplicatearraysafe(&c86_lhs33), "lhs", "lhs",
                  33);
  sf_mex_destroy(&c86_rhs0);
  sf_mex_destroy(&c86_lhs0);
  sf_mex_destroy(&c86_rhs1);
  sf_mex_destroy(&c86_lhs1);
  sf_mex_destroy(&c86_rhs2);
  sf_mex_destroy(&c86_lhs2);
  sf_mex_destroy(&c86_rhs3);
  sf_mex_destroy(&c86_lhs3);
  sf_mex_destroy(&c86_rhs4);
  sf_mex_destroy(&c86_lhs4);
  sf_mex_destroy(&c86_rhs5);
  sf_mex_destroy(&c86_lhs5);
  sf_mex_destroy(&c86_rhs6);
  sf_mex_destroy(&c86_lhs6);
  sf_mex_destroy(&c86_rhs7);
  sf_mex_destroy(&c86_lhs7);
  sf_mex_destroy(&c86_rhs8);
  sf_mex_destroy(&c86_lhs8);
  sf_mex_destroy(&c86_rhs9);
  sf_mex_destroy(&c86_lhs9);
  sf_mex_destroy(&c86_rhs10);
  sf_mex_destroy(&c86_lhs10);
  sf_mex_destroy(&c86_rhs11);
  sf_mex_destroy(&c86_lhs11);
  sf_mex_destroy(&c86_rhs12);
  sf_mex_destroy(&c86_lhs12);
  sf_mex_destroy(&c86_rhs13);
  sf_mex_destroy(&c86_lhs13);
  sf_mex_destroy(&c86_rhs14);
  sf_mex_destroy(&c86_lhs14);
  sf_mex_destroy(&c86_rhs15);
  sf_mex_destroy(&c86_lhs15);
  sf_mex_destroy(&c86_rhs16);
  sf_mex_destroy(&c86_lhs16);
  sf_mex_destroy(&c86_rhs17);
  sf_mex_destroy(&c86_lhs17);
  sf_mex_destroy(&c86_rhs18);
  sf_mex_destroy(&c86_lhs18);
  sf_mex_destroy(&c86_rhs19);
  sf_mex_destroy(&c86_lhs19);
  sf_mex_destroy(&c86_rhs20);
  sf_mex_destroy(&c86_lhs20);
  sf_mex_destroy(&c86_rhs21);
  sf_mex_destroy(&c86_lhs21);
  sf_mex_destroy(&c86_rhs22);
  sf_mex_destroy(&c86_lhs22);
  sf_mex_destroy(&c86_rhs23);
  sf_mex_destroy(&c86_lhs23);
  sf_mex_destroy(&c86_rhs24);
  sf_mex_destroy(&c86_lhs24);
  sf_mex_destroy(&c86_rhs25);
  sf_mex_destroy(&c86_lhs25);
  sf_mex_destroy(&c86_rhs26);
  sf_mex_destroy(&c86_lhs26);
  sf_mex_destroy(&c86_rhs27);
  sf_mex_destroy(&c86_lhs27);
  sf_mex_destroy(&c86_rhs28);
  sf_mex_destroy(&c86_lhs28);
  sf_mex_destroy(&c86_rhs29);
  sf_mex_destroy(&c86_lhs29);
  sf_mex_destroy(&c86_rhs30);
  sf_mex_destroy(&c86_lhs30);
  sf_mex_destroy(&c86_rhs31);
  sf_mex_destroy(&c86_lhs31);
  sf_mex_destroy(&c86_rhs32);
  sf_mex_destroy(&c86_lhs32);
  sf_mex_destroy(&c86_rhs33);
  sf_mex_destroy(&c86_lhs33);
}

static const mxArray *c86_emlrt_marshallOut(const char * c86_u)
{
  const mxArray *c86_y = NULL;
  c86_y = NULL;
  sf_mex_assign(&c86_y, sf_mex_create("y", c86_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c86_u)), false);
  return c86_y;
}

static const mxArray *c86_b_emlrt_marshallOut(const uint32_T c86_u)
{
  const mxArray *c86_y = NULL;
  c86_y = NULL;
  sf_mex_assign(&c86_y, sf_mex_create("y", &c86_u, 7, 0U, 0U, 0U, 0), false);
  return c86_y;
}

static real_T c86_mod(SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct
                      *chartInstance, real_T c86_x, real_T c86_y)
{
  real_T c86_r;
  real_T c86_xk;
  real_T c86_yk;
  real_T c86_b_x;
  real_T c86_b_y;
  real_T c86_c_x;
  real_T c86_d_x;
  real_T c86_e_x;
  real_T c86_f_x;
  real_T c86_g_x;
  real_T c86_h_x;
  real_T c86_i_x;
  real_T c86_c_y;
  real_T c86_j_x;
  real_T c86_d_y;
  real_T c86_k_x;
  real_T c86_l_x;
  c86_eml_scalar_eg(chartInstance);
  c86_xk = c86_x;
  c86_yk = c86_y;
  c86_b_x = c86_xk;
  c86_b_y = c86_yk;
  c86_eml_scalar_eg(chartInstance);
  if (c86_b_y == 0.0) {
    c86_r = c86_b_x;
  } else {
    c86_c_x = c86_b_y;
    c86_d_x = c86_c_x;
    c86_d_x = muDoubleScalarFloor(c86_d_x);
    if (c86_b_y == c86_d_x) {
      c86_e_x = c86_b_x / c86_b_y;
      c86_f_x = c86_e_x;
      c86_f_x = muDoubleScalarFloor(c86_f_x);
      c86_r = c86_b_x - c86_f_x * c86_b_y;
    } else {
      c86_r = c86_b_x / c86_b_y;
      c86_g_x = c86_r;
      c86_h_x = c86_g_x;
      c86_h_x = muDoubleScalarRound(c86_h_x);
      c86_i_x = c86_r - c86_h_x;
      c86_c_y = muDoubleScalarAbs(c86_i_x);
      c86_j_x = c86_r;
      c86_d_y = muDoubleScalarAbs(c86_j_x);
      if (c86_c_y <= 2.2204460492503131E-16 * c86_d_y) {
        c86_r = 0.0;
      } else {
        c86_k_x = c86_r;
        c86_l_x = c86_k_x;
        c86_l_x = muDoubleScalarFloor(c86_l_x);
        c86_r = (c86_r - c86_l_x) * c86_b_y;
      }
    }
  }

  return c86_r;
}

static void c86_eml_scalar_eg
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *c86_b_sf_marshallOut(void *chartInstanceVoid, void
  *c86_inData)
{
  const mxArray *c86_mxArrayOutData = NULL;
  int32_T c86_u;
  const mxArray *c86_y = NULL;
  SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c86_mxArrayOutData = NULL;
  c86_u = *(int32_T *)c86_inData;
  c86_y = NULL;
  sf_mex_assign(&c86_y, sf_mex_create("y", &c86_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c86_mxArrayOutData, c86_y, false);
  return c86_mxArrayOutData;
}

static int32_T c86_c_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_u, const emlrtMsgIdentifier *c86_parentId)
{
  int32_T c86_y;
  int32_T c86_i0;
  (void)chartInstance;
  sf_mex_import(c86_parentId, sf_mex_dup(c86_u), &c86_i0, 1, 6, 0U, 0, 0U, 0);
  c86_y = c86_i0;
  sf_mex_destroy(&c86_u);
  return c86_y;
}

static void c86_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c86_mxArrayInData, const char_T *c86_varName, void *c86_outData)
{
  const mxArray *c86_b_sfEvent;
  const char_T *c86_identifier;
  emlrtMsgIdentifier c86_thisId;
  int32_T c86_y;
  SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c86_b_sfEvent = sf_mex_dup(c86_mxArrayInData);
  c86_identifier = c86_varName;
  c86_thisId.fIdentifier = c86_identifier;
  c86_thisId.fParent = NULL;
  c86_y = c86_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c86_b_sfEvent),
    &c86_thisId);
  sf_mex_destroy(&c86_b_sfEvent);
  *(int32_T *)c86_outData = c86_y;
  sf_mex_destroy(&c86_mxArrayInData);
}

static uint8_T c86_d_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_b_is_active_c86_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c86_identifier)
{
  uint8_T c86_y;
  emlrtMsgIdentifier c86_thisId;
  c86_thisId.fIdentifier = c86_identifier;
  c86_thisId.fParent = NULL;
  c86_y = c86_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c86_b_is_active_c86_six_plus_six_AcmsteeringV09_main_1lf), &c86_thisId);
  sf_mex_destroy(&c86_b_is_active_c86_six_plus_six_AcmsteeringV09_main_1lf);
  return c86_y;
}

static uint8_T c86_e_emlrt_marshallIn
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c86_u, const emlrtMsgIdentifier *c86_parentId)
{
  uint8_T c86_y;
  uint8_T c86_u0;
  (void)chartInstance;
  sf_mex_import(c86_parentId, sf_mex_dup(c86_u), &c86_u0, 1, 3, 0U, 0, 0U, 0);
  c86_y = c86_u0;
  sf_mex_destroy(&c86_u);
  return c86_y;
}

static void init_dsm_address_info
  (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c86_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1559337961U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3379621280U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2312742269U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(422720535U);
}

mxArray *sf_c86_six_plus_six_AcmsteeringV09_main_1lf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("2BX3CwkGg1VHmgr68QVld");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c86_six_plus_six_AcmsteeringV09_main_1lf_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c86_six_plus_six_AcmsteeringV09_main_1lf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c86_six_plus_six_AcmsteeringV09_main_1lf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[5],T\"data\",},{M[1],M[8],T\"position_1\",},{M[1],M[9],T\"position_2\",},{M[1],M[10],T\"position_3\",},{M[1],M[11],T\"position_4\",},{M[1],M[7],T\"zero\",},{M[8],M[0],T\"is_active_c86_six_plus_six_AcmsteeringV09_main_1lf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c86_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           86,
           1,
           1,
           0,
           8,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize ist own list of scripts */
        init_script_number_translation
          (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"data_1");
          _SFD_SET_DATA_PROPS(1,2,0,1,"data");
          _SFD_SET_DATA_PROPS(2,1,1,0,"data_2");
          _SFD_SET_DATA_PROPS(3,2,0,1,"zero");
          _SFD_SET_DATA_PROPS(4,2,0,1,"position_4");
          _SFD_SET_DATA_PROPS(5,2,0,1,"position_3");
          _SFD_SET_DATA_PROPS(6,2,0,1,"position_2");
          _SFD_SET_DATA_PROPS(7,2,0,1,"position_1");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,4,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,939);
        _SFD_CV_INIT_EML_IF(0,1,0,94,108,321,937);
        _SFD_CV_INIT_EML_IF(0,1,1,113,133,150,174);
        _SFD_CV_INIT_EML_IF(0,1,2,330,351,401,462);
        _SFD_CV_INIT_EML_IF(0,1,3,560,571,-1,610);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)c86_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)c86_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)c86_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)c86_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)c86_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c86_sf_marshallOut,(MexInFcnForType)c86_sf_marshallIn);

        {
          real_T *c86_data_1;
          real_T *c86_data;
          real_T *c86_data_2;
          real_T *c86_zero;
          real_T *c86_position_4;
          real_T *c86_position_3;
          real_T *c86_position_2;
          real_T *c86_position_1;
          c86_position_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c86_position_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c86_position_3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c86_position_4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c86_zero = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c86_data_2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c86_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c86_data_1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c86_data_1);
          _SFD_SET_DATA_VALUE_PTR(1U, c86_data);
          _SFD_SET_DATA_VALUE_PTR(2U, c86_data_2);
          _SFD_SET_DATA_VALUE_PTR(3U, c86_zero);
          _SFD_SET_DATA_VALUE_PTR(4U, c86_position_4);
          _SFD_SET_DATA_VALUE_PTR(5U, c86_position_3);
          _SFD_SET_DATA_VALUE_PTR(6U, c86_position_2);
          _SFD_SET_DATA_VALUE_PTR(7U, c86_position_1);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "FqADLlOIGC89ZWasNLQMIF";
}

static void sf_opaque_initialize_c86_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
  initialize_c86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c86_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  enable_c86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c86_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  disable_c86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c86_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  sf_gateway_c86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c86_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[3];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxDuplicateArray(st);      /* high level simctx */
  prhs[2] = (mxArray*)
    sf_get_sim_state_info_c86_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf(SimStruct* S)
{
  return sf_internal_get_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf(S);
}

static void sf_opaque_set_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf(S, st);
}

static void sf_opaque_terminate_c86_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    }

    finalize_c86_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc86_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c86_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    initialize_params_c86_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c86_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *
  S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      86);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,86,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,86,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,86);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,86,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,86,6);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=6; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,86);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1019712375U));
  ssSetChecksum1(S,(527004124U));
  ssSetChecksum2(S,(2360805648U));
  ssSetChecksum3(S,(2908506479U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c86_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c86_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    utMalloc(sizeof(SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc86_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c86_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  crtInfo->instanceInfo = (&(chartInstance->chartInfo));
  crtInfo->isJITEnabled = false;
  ssSetUserData(S,(void *)(crtInfo));  /* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c86_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c86_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c86_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c86_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c86_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
