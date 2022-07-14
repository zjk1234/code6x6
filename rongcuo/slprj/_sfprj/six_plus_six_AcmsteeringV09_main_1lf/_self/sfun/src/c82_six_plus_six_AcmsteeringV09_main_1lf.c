/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun.h"
#include "c82_six_plus_six_AcmsteeringV09_main_1lf.h"
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
static const char * c82_debug_family_names[15] = { "nargin", "nargout",
  "TCS_switch", "flag_lf", "flag_lm", "flag_lr", "flag_rf", "flag_rm", "flag_rr",
  "flag_lf1", "flag_lm1", "flag_lr1", "flag_rf1", "flag_rm1", "flag_rr1" };

/* Function Declarations */
static void initialize_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initialize_params_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void enable_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void disable_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c82_update_debugger_state_c82_six_plus_six_AcmsteeringV09_main_1
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void set_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_st);
static void finalize_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void sf_gateway_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initSimStructsc82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c82_machineNumber, uint32_T
  c82_chartNumber, uint32_T c82_instanceNumber);
static const mxArray *c82_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData);
static real32_T c82_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_flag_rr1, const char_T *c82_identifier);
static real32_T c82_b_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId);
static void c82_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c82_mxArrayInData, const char_T *c82_varName, void *c82_outData);
static const mxArray *c82_b_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData);
static const mxArray *c82_c_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData);
static real_T c82_c_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId);
static void c82_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c82_mxArrayInData, const char_T *c82_varName, void *c82_outData);
static const mxArray *c82_d_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData);
static int32_T c82_d_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId);
static void c82_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c82_mxArrayInData, const char_T *c82_varName, void *c82_outData);
static uint8_T c82_e_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_b_is_active_c82_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c82_identifier);
static uint8_T c82_f_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId);
static void init_dsm_address_info
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  chartInstance->c82_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c82_is_active_c82_six_plus_six_AcmsteeringV09_main_1lf = 0U;
}

static void initialize_params_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c82_update_debugger_state_c82_six_plus_six_AcmsteeringV09_main_1
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  const mxArray *c82_st;
  const mxArray *c82_y = NULL;
  real32_T c82_hoistedGlobal;
  real32_T c82_u;
  const mxArray *c82_b_y = NULL;
  real32_T c82_b_hoistedGlobal;
  real32_T c82_b_u;
  const mxArray *c82_c_y = NULL;
  real32_T c82_c_hoistedGlobal;
  real32_T c82_c_u;
  const mxArray *c82_d_y = NULL;
  real32_T c82_d_hoistedGlobal;
  real32_T c82_d_u;
  const mxArray *c82_e_y = NULL;
  real32_T c82_e_hoistedGlobal;
  real32_T c82_e_u;
  const mxArray *c82_f_y = NULL;
  real32_T c82_f_hoistedGlobal;
  real32_T c82_f_u;
  const mxArray *c82_g_y = NULL;
  uint8_T c82_g_hoistedGlobal;
  uint8_T c82_g_u;
  const mxArray *c82_h_y = NULL;
  real32_T *c82_flag_lf1;
  real32_T *c82_flag_lm1;
  real32_T *c82_flag_lr1;
  real32_T *c82_flag_rf1;
  real32_T *c82_flag_rm1;
  real32_T *c82_flag_rr1;
  c82_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c82_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c82_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c82_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c82_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c82_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c82_st = NULL;
  c82_st = NULL;
  c82_y = NULL;
  sf_mex_assign(&c82_y, sf_mex_createcellmatrix(7, 1), false);
  c82_hoistedGlobal = *c82_flag_lf1;
  c82_u = c82_hoistedGlobal;
  c82_b_y = NULL;
  sf_mex_assign(&c82_b_y, sf_mex_create("y", &c82_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c82_y, 0, c82_b_y);
  c82_b_hoistedGlobal = *c82_flag_lm1;
  c82_b_u = c82_b_hoistedGlobal;
  c82_c_y = NULL;
  sf_mex_assign(&c82_c_y, sf_mex_create("y", &c82_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c82_y, 1, c82_c_y);
  c82_c_hoistedGlobal = *c82_flag_lr1;
  c82_c_u = c82_c_hoistedGlobal;
  c82_d_y = NULL;
  sf_mex_assign(&c82_d_y, sf_mex_create("y", &c82_c_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c82_y, 2, c82_d_y);
  c82_d_hoistedGlobal = *c82_flag_rf1;
  c82_d_u = c82_d_hoistedGlobal;
  c82_e_y = NULL;
  sf_mex_assign(&c82_e_y, sf_mex_create("y", &c82_d_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c82_y, 3, c82_e_y);
  c82_e_hoistedGlobal = *c82_flag_rm1;
  c82_e_u = c82_e_hoistedGlobal;
  c82_f_y = NULL;
  sf_mex_assign(&c82_f_y, sf_mex_create("y", &c82_e_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c82_y, 4, c82_f_y);
  c82_f_hoistedGlobal = *c82_flag_rr1;
  c82_f_u = c82_f_hoistedGlobal;
  c82_g_y = NULL;
  sf_mex_assign(&c82_g_y, sf_mex_create("y", &c82_f_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c82_y, 5, c82_g_y);
  c82_g_hoistedGlobal =
    chartInstance->c82_is_active_c82_six_plus_six_AcmsteeringV09_main_1lf;
  c82_g_u = c82_g_hoistedGlobal;
  c82_h_y = NULL;
  sf_mex_assign(&c82_h_y, sf_mex_create("y", &c82_g_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c82_y, 6, c82_h_y);
  sf_mex_assign(&c82_st, c82_y, false);
  return c82_st;
}

static void set_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_st)
{
  const mxArray *c82_u;
  real32_T *c82_flag_lf1;
  real32_T *c82_flag_lm1;
  real32_T *c82_flag_lr1;
  real32_T *c82_flag_rf1;
  real32_T *c82_flag_rm1;
  real32_T *c82_flag_rr1;
  c82_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c82_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c82_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c82_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c82_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c82_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c82_doneDoubleBufferReInit = true;
  c82_u = sf_mex_dup(c82_st);
  *c82_flag_lf1 = c82_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c82_u, 0)), "flag_lf1");
  *c82_flag_lm1 = c82_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c82_u, 1)), "flag_lm1");
  *c82_flag_lr1 = c82_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c82_u, 2)), "flag_lr1");
  *c82_flag_rf1 = c82_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c82_u, 3)), "flag_rf1");
  *c82_flag_rm1 = c82_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c82_u, 4)), "flag_rm1");
  *c82_flag_rr1 = c82_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c82_u, 5)), "flag_rr1");
  chartInstance->c82_is_active_c82_six_plus_six_AcmsteeringV09_main_1lf =
    c82_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c82_u, 6)),
    "is_active_c82_six_plus_six_AcmsteeringV09_main_1lf");
  sf_mex_destroy(&c82_u);
  c82_update_debugger_state_c82_six_plus_six_AcmsteeringV09_main_1(chartInstance);
  sf_mex_destroy(&c82_st);
}

static void finalize_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real32_T c82_hoistedGlobal;
  int8_T c82_b_hoistedGlobal;
  int8_T c82_c_hoistedGlobal;
  int8_T c82_d_hoistedGlobal;
  int8_T c82_e_hoistedGlobal;
  int8_T c82_f_hoistedGlobal;
  int8_T c82_g_hoistedGlobal;
  real32_T c82_TCS_switch;
  int8_T c82_flag_lf;
  int8_T c82_flag_lm;
  int8_T c82_flag_lr;
  int8_T c82_flag_rf;
  int8_T c82_flag_rm;
  int8_T c82_flag_rr;
  uint32_T c82_debug_family_var_map[15];
  real_T c82_nargin = 7.0;
  real_T c82_nargout = 6.0;
  real32_T c82_flag_lf1;
  real32_T c82_flag_lm1;
  real32_T c82_flag_lr1;
  real32_T c82_flag_rf1;
  real32_T c82_flag_rm1;
  real32_T c82_flag_rr1;
  real32_T *c82_b_TCS_switch;
  real32_T *c82_b_flag_lf1;
  real32_T *c82_b_flag_lm1;
  int8_T *c82_b_flag_lf;
  int8_T *c82_b_flag_lm;
  int8_T *c82_b_flag_lr;
  real32_T *c82_b_flag_lr1;
  int8_T *c82_b_flag_rf;
  int8_T *c82_b_flag_rm;
  int8_T *c82_b_flag_rr;
  real32_T *c82_b_flag_rf1;
  real32_T *c82_b_flag_rm1;
  real32_T *c82_b_flag_rr1;
  c82_b_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c82_b_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c82_b_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c82_b_flag_rr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c82_b_flag_rm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c82_b_flag_rf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c82_b_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c82_b_flag_lr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c82_b_flag_lm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c82_b_flag_lf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c82_b_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c82_b_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c82_b_TCS_switch = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 81U, chartInstance->c82_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_TCS_switch, 0U);
  chartInstance->c82_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 81U, chartInstance->c82_sfEvent);
  c82_hoistedGlobal = *c82_b_TCS_switch;
  c82_b_hoistedGlobal = *c82_b_flag_lf;
  c82_c_hoistedGlobal = *c82_b_flag_lm;
  c82_d_hoistedGlobal = *c82_b_flag_lr;
  c82_e_hoistedGlobal = *c82_b_flag_rf;
  c82_f_hoistedGlobal = *c82_b_flag_rm;
  c82_g_hoistedGlobal = *c82_b_flag_rr;
  c82_TCS_switch = c82_hoistedGlobal;
  c82_flag_lf = c82_b_hoistedGlobal;
  c82_flag_lm = c82_c_hoistedGlobal;
  c82_flag_lr = c82_d_hoistedGlobal;
  c82_flag_rf = c82_e_hoistedGlobal;
  c82_flag_rm = c82_f_hoistedGlobal;
  c82_flag_rr = c82_g_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 15U, 15U, c82_debug_family_names,
    c82_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_nargin, 0U, c82_c_sf_marshallOut,
    c82_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_nargout, 1U, c82_c_sf_marshallOut,
    c82_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c82_TCS_switch, 2U, c82_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c82_flag_lf, 3U, c82_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c82_flag_lm, 4U, c82_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c82_flag_lr, 5U, c82_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c82_flag_rf, 6U, c82_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c82_flag_rm, 7U, c82_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c82_flag_rr, 8U, c82_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_flag_lf1, 9U, c82_sf_marshallOut,
    c82_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_flag_lm1, 10U, c82_sf_marshallOut,
    c82_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_flag_lr1, 11U, c82_sf_marshallOut,
    c82_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_flag_rf1, 12U, c82_sf_marshallOut,
    c82_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_flag_rm1, 13U, c82_sf_marshallOut,
    c82_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c82_flag_rr1, 14U, c82_sf_marshallOut,
    c82_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c82_TCS_switch == 0.0F)) {
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 4);
    c82_flag_lf1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 5);
    c82_flag_lm1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 6);
    c82_flag_lr1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 7);
    c82_flag_rf1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 8);
    c82_flag_rm1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 9);
    c82_flag_rr1 = 0.0F;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 11);
    c82_flag_lf1 = (real32_T)c82_flag_lf;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 12);
    c82_flag_lm1 = (real32_T)c82_flag_lm;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 13);
    c82_flag_lr1 = (real32_T)c82_flag_lr;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 14);
    c82_flag_rf1 = (real32_T)c82_flag_rf;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 15);
    c82_flag_rm1 = (real32_T)c82_flag_rm;
    _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, 16);
    c82_flag_rr1 = (real32_T)c82_flag_rr;
  }

  _SFD_EML_CALL(0U, chartInstance->c82_sfEvent, -16);
  _SFD_SYMBOL_SCOPE_POP();
  *c82_b_flag_lf1 = c82_flag_lf1;
  *c82_b_flag_lm1 = c82_flag_lm1;
  *c82_b_flag_lr1 = c82_flag_lr1;
  *c82_b_flag_rf1 = c82_flag_rf1;
  *c82_b_flag_rm1 = c82_flag_rm1;
  *c82_b_flag_rr1 = c82_flag_rr1;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 81U, chartInstance->c82_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_lf1, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_lm1, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_lf, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_lm, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_lr, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_lr1, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_rf, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_rm, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_rr, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_rf1, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_rm1, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c82_b_flag_rr1, 12U);
}

static void initSimStructsc82_six_plus_six_AcmsteeringV09_main_1lf
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c82_machineNumber, uint32_T
  c82_chartNumber, uint32_T c82_instanceNumber)
{
  (void)c82_machineNumber;
  (void)c82_chartNumber;
  (void)c82_instanceNumber;
}

static const mxArray *c82_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData)
{
  const mxArray *c82_mxArrayOutData = NULL;
  real32_T c82_u;
  const mxArray *c82_y = NULL;
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c82_mxArrayOutData = NULL;
  c82_u = *(real32_T *)c82_inData;
  c82_y = NULL;
  sf_mex_assign(&c82_y, sf_mex_create("y", &c82_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c82_mxArrayOutData, c82_y, false);
  return c82_mxArrayOutData;
}

static real32_T c82_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_flag_rr1, const char_T *c82_identifier)
{
  real32_T c82_y;
  emlrtMsgIdentifier c82_thisId;
  c82_thisId.fIdentifier = c82_identifier;
  c82_thisId.fParent = NULL;
  c82_y = c82_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c82_flag_rr1),
    &c82_thisId);
  sf_mex_destroy(&c82_flag_rr1);
  return c82_y;
}

static real32_T c82_b_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId)
{
  real32_T c82_y;
  real32_T c82_f0;
  (void)chartInstance;
  sf_mex_import(c82_parentId, sf_mex_dup(c82_u), &c82_f0, 1, 1, 0U, 0, 0U, 0);
  c82_y = c82_f0;
  sf_mex_destroy(&c82_u);
  return c82_y;
}

static void c82_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c82_mxArrayInData, const char_T *c82_varName, void *c82_outData)
{
  const mxArray *c82_flag_rr1;
  const char_T *c82_identifier;
  emlrtMsgIdentifier c82_thisId;
  real32_T c82_y;
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c82_flag_rr1 = sf_mex_dup(c82_mxArrayInData);
  c82_identifier = c82_varName;
  c82_thisId.fIdentifier = c82_identifier;
  c82_thisId.fParent = NULL;
  c82_y = c82_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c82_flag_rr1),
    &c82_thisId);
  sf_mex_destroy(&c82_flag_rr1);
  *(real32_T *)c82_outData = c82_y;
  sf_mex_destroy(&c82_mxArrayInData);
}

static const mxArray *c82_b_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData)
{
  const mxArray *c82_mxArrayOutData = NULL;
  int8_T c82_u;
  const mxArray *c82_y = NULL;
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c82_mxArrayOutData = NULL;
  c82_u = *(int8_T *)c82_inData;
  c82_y = NULL;
  sf_mex_assign(&c82_y, sf_mex_create("y", &c82_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c82_mxArrayOutData, c82_y, false);
  return c82_mxArrayOutData;
}

static const mxArray *c82_c_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData)
{
  const mxArray *c82_mxArrayOutData = NULL;
  real_T c82_u;
  const mxArray *c82_y = NULL;
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c82_mxArrayOutData = NULL;
  c82_u = *(real_T *)c82_inData;
  c82_y = NULL;
  sf_mex_assign(&c82_y, sf_mex_create("y", &c82_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c82_mxArrayOutData, c82_y, false);
  return c82_mxArrayOutData;
}

static real_T c82_c_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId)
{
  real_T c82_y;
  real_T c82_d0;
  (void)chartInstance;
  sf_mex_import(c82_parentId, sf_mex_dup(c82_u), &c82_d0, 1, 0, 0U, 0, 0U, 0);
  c82_y = c82_d0;
  sf_mex_destroy(&c82_u);
  return c82_y;
}

static void c82_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c82_mxArrayInData, const char_T *c82_varName, void *c82_outData)
{
  const mxArray *c82_nargout;
  const char_T *c82_identifier;
  emlrtMsgIdentifier c82_thisId;
  real_T c82_y;
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c82_nargout = sf_mex_dup(c82_mxArrayInData);
  c82_identifier = c82_varName;
  c82_thisId.fIdentifier = c82_identifier;
  c82_thisId.fParent = NULL;
  c82_y = c82_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c82_nargout),
    &c82_thisId);
  sf_mex_destroy(&c82_nargout);
  *(real_T *)c82_outData = c82_y;
  sf_mex_destroy(&c82_mxArrayInData);
}

const mxArray
  *sf_c82_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c82_nameCaptureInfo = NULL;
  c82_nameCaptureInfo = NULL;
  sf_mex_assign(&c82_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c82_nameCaptureInfo;
}

static const mxArray *c82_d_sf_marshallOut(void *chartInstanceVoid, void
  *c82_inData)
{
  const mxArray *c82_mxArrayOutData = NULL;
  int32_T c82_u;
  const mxArray *c82_y = NULL;
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c82_mxArrayOutData = NULL;
  c82_u = *(int32_T *)c82_inData;
  c82_y = NULL;
  sf_mex_assign(&c82_y, sf_mex_create("y", &c82_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c82_mxArrayOutData, c82_y, false);
  return c82_mxArrayOutData;
}

static int32_T c82_d_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId)
{
  int32_T c82_y;
  int32_T c82_i0;
  (void)chartInstance;
  sf_mex_import(c82_parentId, sf_mex_dup(c82_u), &c82_i0, 1, 6, 0U, 0, 0U, 0);
  c82_y = c82_i0;
  sf_mex_destroy(&c82_u);
  return c82_y;
}

static void c82_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c82_mxArrayInData, const char_T *c82_varName, void *c82_outData)
{
  const mxArray *c82_b_sfEvent;
  const char_T *c82_identifier;
  emlrtMsgIdentifier c82_thisId;
  int32_T c82_y;
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c82_b_sfEvent = sf_mex_dup(c82_mxArrayInData);
  c82_identifier = c82_varName;
  c82_thisId.fIdentifier = c82_identifier;
  c82_thisId.fParent = NULL;
  c82_y = c82_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c82_b_sfEvent),
    &c82_thisId);
  sf_mex_destroy(&c82_b_sfEvent);
  *(int32_T *)c82_outData = c82_y;
  sf_mex_destroy(&c82_mxArrayInData);
}

static uint8_T c82_e_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_b_is_active_c82_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c82_identifier)
{
  uint8_T c82_y;
  emlrtMsgIdentifier c82_thisId;
  c82_thisId.fIdentifier = c82_identifier;
  c82_thisId.fParent = NULL;
  c82_y = c82_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c82_b_is_active_c82_six_plus_six_AcmsteeringV09_main_1lf), &c82_thisId);
  sf_mex_destroy(&c82_b_is_active_c82_six_plus_six_AcmsteeringV09_main_1lf);
  return c82_y;
}

static uint8_T c82_f_emlrt_marshallIn
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c82_u, const emlrtMsgIdentifier *c82_parentId)
{
  uint8_T c82_y;
  uint8_T c82_u0;
  (void)chartInstance;
  sf_mex_import(c82_parentId, sf_mex_dup(c82_u), &c82_u0, 1, 3, 0U, 0, 0U, 0);
  c82_y = c82_u0;
  sf_mex_destroy(&c82_u);
  return c82_y;
}

static void init_dsm_address_info
  (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
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

void sf_c82_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3953250322U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2057820734U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3113636533U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1799981661U);
}

mxArray *sf_c82_six_plus_six_AcmsteeringV09_main_1lf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("ZC8qGkJSRLTB6E5EsQUeiD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,7,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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

mxArray *sf_c82_six_plus_six_AcmsteeringV09_main_1lf_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c82_six_plus_six_AcmsteeringV09_main_1lf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c82_six_plus_six_AcmsteeringV09_main_1lf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[5],T\"flag_lf1\",},{M[1],M[15],T\"flag_lm1\",},{M[1],M[8],T\"flag_lr1\",},{M[1],M[11],T\"flag_rf1\",},{M[1],M[16],T\"flag_rm1\",},{M[1],M[12],T\"flag_rr1\",},{M[8],M[0],T\"is_active_c82_six_plus_six_AcmsteeringV09_main_1lf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c82_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           82,
           1,
           1,
           0,
           13,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"TCS_switch");
          _SFD_SET_DATA_PROPS(1,2,0,1,"flag_lf1");
          _SFD_SET_DATA_PROPS(2,2,0,1,"flag_lm1");
          _SFD_SET_DATA_PROPS(3,1,1,0,"flag_lf");
          _SFD_SET_DATA_PROPS(4,1,1,0,"flag_lm");
          _SFD_SET_DATA_PROPS(5,1,1,0,"flag_lr");
          _SFD_SET_DATA_PROPS(6,2,0,1,"flag_lr1");
          _SFD_SET_DATA_PROPS(7,1,1,0,"flag_rf");
          _SFD_SET_DATA_PROPS(8,1,1,0,"flag_rm");
          _SFD_SET_DATA_PROPS(9,1,1,0,"flag_rr");
          _SFD_SET_DATA_PROPS(10,2,0,1,"flag_rf1");
          _SFD_SET_DATA_PROPS(11,2,0,1,"flag_rm1");
          _SFD_SET_DATA_PROPS(12,2,0,1,"flag_rr1");
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
        _SFD_CV_INIT_EML(0,1,1,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",1,-1,495);
        _SFD_CV_INIT_EML_IF(0,1,0,142,158,303,491);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_sf_marshallOut,(MexInFcnForType)c82_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_sf_marshallOut,(MexInFcnForType)c82_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_sf_marshallOut,(MexInFcnForType)c82_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_sf_marshallOut,(MexInFcnForType)c82_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_sf_marshallOut,(MexInFcnForType)c82_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c82_sf_marshallOut,(MexInFcnForType)c82_sf_marshallIn);

        {
          real32_T *c82_TCS_switch;
          real32_T *c82_flag_lf1;
          real32_T *c82_flag_lm1;
          int8_T *c82_flag_lf;
          int8_T *c82_flag_lm;
          int8_T *c82_flag_lr;
          real32_T *c82_flag_lr1;
          int8_T *c82_flag_rf;
          int8_T *c82_flag_rm;
          int8_T *c82_flag_rr;
          real32_T *c82_flag_rf1;
          real32_T *c82_flag_rm1;
          real32_T *c82_flag_rr1;
          c82_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c82_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c82_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c82_flag_rr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c82_flag_rm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c82_flag_rf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c82_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c82_flag_lr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c82_flag_lm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c82_flag_lf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c82_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c82_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c82_TCS_switch = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c82_TCS_switch);
          _SFD_SET_DATA_VALUE_PTR(1U, c82_flag_lf1);
          _SFD_SET_DATA_VALUE_PTR(2U, c82_flag_lm1);
          _SFD_SET_DATA_VALUE_PTR(3U, c82_flag_lf);
          _SFD_SET_DATA_VALUE_PTR(4U, c82_flag_lm);
          _SFD_SET_DATA_VALUE_PTR(5U, c82_flag_lr);
          _SFD_SET_DATA_VALUE_PTR(6U, c82_flag_lr1);
          _SFD_SET_DATA_VALUE_PTR(7U, c82_flag_rf);
          _SFD_SET_DATA_VALUE_PTR(8U, c82_flag_rm);
          _SFD_SET_DATA_VALUE_PTR(9U, c82_flag_rr);
          _SFD_SET_DATA_VALUE_PTR(10U, c82_flag_rf1);
          _SFD_SET_DATA_VALUE_PTR(11U, c82_flag_rm1);
          _SFD_SET_DATA_VALUE_PTR(12U, c82_flag_rr1);
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
  return "NkiHmI9zVIyWcgV2jxD6DD";
}

static void sf_opaque_initialize_c82_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
  initialize_c82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c82_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  enable_c82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c82_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  disable_c82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c82_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  sf_gateway_c82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c82_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
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

extern void sf_internal_set_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
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
    sf_get_sim_state_info_c82_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf(SimStruct* S)
{
  return sf_internal_get_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf(S);
}

static void sf_opaque_set_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf(S, st);
}

static void sf_opaque_terminate_c82_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    }

    finalize_c82_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
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
  initSimStructsc82_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c82_six_plus_six_AcmsteeringV09_main_1lf
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
    initialize_params_c82_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c82_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *
  S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      82);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,82,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,82,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,82);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,82,7);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,82,6);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=6; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 7; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,82);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3213552260U));
  ssSetChecksum1(S,(788970237U));
  ssSetChecksum2(S,(1772166469U));
  ssSetChecksum3(S,(1332852828U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c82_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c82_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    utMalloc(sizeof(SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc82_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c82_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c82_six_plus_six_AcmsteeringV09_main_1lf;
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

void c82_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c82_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c82_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c82_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c82_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
