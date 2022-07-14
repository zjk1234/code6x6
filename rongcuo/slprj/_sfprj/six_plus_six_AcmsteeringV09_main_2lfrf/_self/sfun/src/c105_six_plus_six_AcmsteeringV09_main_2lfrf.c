/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lfrf_sfun.h"
#include "c105_six_plus_six_AcmsteeringV09_main_2lfrf.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "six_plus_six_AcmsteeringV09_main_2lfrf_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c105_debug_family_names[15] = { "nargin", "nargout",
  "RC_switch", "guzhang_lf", "guzhang_lm", "guzhang_lr", "guzhang_rf",
  "guzhang_rm", "guzhang_rr", "guzhang_lf1", "guzhang_lm1", "guzhang_lr1",
  "guzhang_rf1", "guzhang_rm1", "guzhang_rr1" };

/* Function Declarations */
static void initialize_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initialize_params_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void enable_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void disable_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void c105_update_debugger_state_c105_six_plus_six_AcmsteeringV09_main
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void set_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_st);
static void finalize_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void sf_gateway_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initSimStructsc105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c105_machineNumber, uint32_T
  c105_chartNumber, uint32_T c105_instanceNumber);
static const mxArray *c105_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData);
static real32_T c105_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_guzhang_rr1, const char_T *c105_identifier);
static real32_T c105_b_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId);
static void c105_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c105_mxArrayInData, const char_T *c105_varName, void *c105_outData);
static const mxArray *c105_b_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData);
static const mxArray *c105_c_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData);
static real_T c105_c_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId);
static void c105_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c105_mxArrayInData, const char_T *c105_varName, void *c105_outData);
static const mxArray *c105_d_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData);
static int32_T c105_d_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId);
static void c105_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c105_mxArrayInData, const char_T *c105_varName, void *c105_outData);
static uint8_T c105_e_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_b_is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c105_identifier);
static uint8_T c105_f_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId);
static void init_dsm_address_info
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  chartInstance->c105_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c105_is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf = 0U;
}

static void initialize_params_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c105_update_debugger_state_c105_six_plus_six_AcmsteeringV09_main
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  const mxArray *c105_st;
  const mxArray *c105_y = NULL;
  real32_T c105_hoistedGlobal;
  real32_T c105_u;
  const mxArray *c105_b_y = NULL;
  real32_T c105_b_hoistedGlobal;
  real32_T c105_b_u;
  const mxArray *c105_c_y = NULL;
  real32_T c105_c_hoistedGlobal;
  real32_T c105_c_u;
  const mxArray *c105_d_y = NULL;
  real32_T c105_d_hoistedGlobal;
  real32_T c105_d_u;
  const mxArray *c105_e_y = NULL;
  real32_T c105_e_hoistedGlobal;
  real32_T c105_e_u;
  const mxArray *c105_f_y = NULL;
  real32_T c105_f_hoistedGlobal;
  real32_T c105_f_u;
  const mxArray *c105_g_y = NULL;
  uint8_T c105_g_hoistedGlobal;
  uint8_T c105_g_u;
  const mxArray *c105_h_y = NULL;
  real32_T *c105_guzhang_lf1;
  real32_T *c105_guzhang_lm1;
  real32_T *c105_guzhang_lr1;
  real32_T *c105_guzhang_rf1;
  real32_T *c105_guzhang_rm1;
  real32_T *c105_guzhang_rr1;
  c105_guzhang_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c105_guzhang_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c105_guzhang_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c105_guzhang_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c105_guzhang_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c105_guzhang_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c105_st = NULL;
  c105_st = NULL;
  c105_y = NULL;
  sf_mex_assign(&c105_y, sf_mex_createcellmatrix(7, 1), false);
  c105_hoistedGlobal = *c105_guzhang_lf1;
  c105_u = c105_hoistedGlobal;
  c105_b_y = NULL;
  sf_mex_assign(&c105_b_y, sf_mex_create("y", &c105_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c105_y, 0, c105_b_y);
  c105_b_hoistedGlobal = *c105_guzhang_lm1;
  c105_b_u = c105_b_hoistedGlobal;
  c105_c_y = NULL;
  sf_mex_assign(&c105_c_y, sf_mex_create("y", &c105_b_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c105_y, 1, c105_c_y);
  c105_c_hoistedGlobal = *c105_guzhang_lr1;
  c105_c_u = c105_c_hoistedGlobal;
  c105_d_y = NULL;
  sf_mex_assign(&c105_d_y, sf_mex_create("y", &c105_c_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c105_y, 2, c105_d_y);
  c105_d_hoistedGlobal = *c105_guzhang_rf1;
  c105_d_u = c105_d_hoistedGlobal;
  c105_e_y = NULL;
  sf_mex_assign(&c105_e_y, sf_mex_create("y", &c105_d_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c105_y, 3, c105_e_y);
  c105_e_hoistedGlobal = *c105_guzhang_rm1;
  c105_e_u = c105_e_hoistedGlobal;
  c105_f_y = NULL;
  sf_mex_assign(&c105_f_y, sf_mex_create("y", &c105_e_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c105_y, 4, c105_f_y);
  c105_f_hoistedGlobal = *c105_guzhang_rr1;
  c105_f_u = c105_f_hoistedGlobal;
  c105_g_y = NULL;
  sf_mex_assign(&c105_g_y, sf_mex_create("y", &c105_f_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c105_y, 5, c105_g_y);
  c105_g_hoistedGlobal =
    chartInstance->c105_is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  c105_g_u = c105_g_hoistedGlobal;
  c105_h_y = NULL;
  sf_mex_assign(&c105_h_y, sf_mex_create("y", &c105_g_u, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c105_y, 6, c105_h_y);
  sf_mex_assign(&c105_st, c105_y, false);
  return c105_st;
}

static void set_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_st)
{
  const mxArray *c105_u;
  real32_T *c105_guzhang_lf1;
  real32_T *c105_guzhang_lm1;
  real32_T *c105_guzhang_lr1;
  real32_T *c105_guzhang_rf1;
  real32_T *c105_guzhang_rm1;
  real32_T *c105_guzhang_rr1;
  c105_guzhang_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c105_guzhang_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c105_guzhang_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c105_guzhang_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c105_guzhang_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c105_guzhang_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c105_doneDoubleBufferReInit = true;
  c105_u = sf_mex_dup(c105_st);
  *c105_guzhang_lf1 = c105_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c105_u, 0)), "guzhang_lf1");
  *c105_guzhang_lm1 = c105_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c105_u, 1)), "guzhang_lm1");
  *c105_guzhang_lr1 = c105_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c105_u, 2)), "guzhang_lr1");
  *c105_guzhang_rf1 = c105_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c105_u, 3)), "guzhang_rf1");
  *c105_guzhang_rm1 = c105_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c105_u, 4)), "guzhang_rm1");
  *c105_guzhang_rr1 = c105_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c105_u, 5)), "guzhang_rr1");
  chartInstance->c105_is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf =
    c105_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c105_u, 6)),
    "is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf");
  sf_mex_destroy(&c105_u);
  c105_update_debugger_state_c105_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c105_st);
}

static void finalize_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  boolean_T c105_hoistedGlobal;
  boolean_T c105_b_hoistedGlobal;
  real_T c105_c_hoistedGlobal;
  real_T c105_d_hoistedGlobal;
  boolean_T c105_e_hoistedGlobal;
  real_T c105_f_hoistedGlobal;
  real_T c105_g_hoistedGlobal;
  boolean_T c105_RC_switch;
  boolean_T c105_guzhang_lf;
  real_T c105_guzhang_lm;
  real_T c105_guzhang_lr;
  boolean_T c105_guzhang_rf;
  real_T c105_guzhang_rm;
  real_T c105_guzhang_rr;
  uint32_T c105_debug_family_var_map[15];
  real_T c105_nargin = 7.0;
  real_T c105_nargout = 6.0;
  real32_T c105_guzhang_lf1;
  real32_T c105_guzhang_lm1;
  real32_T c105_guzhang_lr1;
  real32_T c105_guzhang_rf1;
  real32_T c105_guzhang_rm1;
  real32_T c105_guzhang_rr1;
  boolean_T *c105_b_RC_switch;
  real32_T *c105_b_guzhang_lf1;
  real32_T *c105_b_guzhang_lm1;
  boolean_T *c105_b_guzhang_lf;
  real_T *c105_b_guzhang_lm;
  real_T *c105_b_guzhang_lr;
  real32_T *c105_b_guzhang_lr1;
  boolean_T *c105_b_guzhang_rf;
  real_T *c105_b_guzhang_rm;
  real_T *c105_b_guzhang_rr;
  real32_T *c105_b_guzhang_rf1;
  real32_T *c105_b_guzhang_rm1;
  real32_T *c105_b_guzhang_rr1;
  c105_b_guzhang_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c105_b_guzhang_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c105_b_guzhang_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c105_b_guzhang_rr = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c105_b_guzhang_rm = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c105_b_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c105_b_guzhang_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c105_b_guzhang_lr = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c105_b_guzhang_lm = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c105_b_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c105_b_guzhang_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c105_b_guzhang_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c105_b_RC_switch = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 104U, chartInstance->c105_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_RC_switch, 0U);
  chartInstance->c105_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 104U,
               chartInstance->c105_sfEvent);
  c105_hoistedGlobal = *c105_b_RC_switch;
  c105_b_hoistedGlobal = *c105_b_guzhang_lf;
  c105_c_hoistedGlobal = *c105_b_guzhang_lm;
  c105_d_hoistedGlobal = *c105_b_guzhang_lr;
  c105_e_hoistedGlobal = *c105_b_guzhang_rf;
  c105_f_hoistedGlobal = *c105_b_guzhang_rm;
  c105_g_hoistedGlobal = *c105_b_guzhang_rr;
  c105_RC_switch = c105_hoistedGlobal;
  c105_guzhang_lf = c105_b_hoistedGlobal;
  c105_guzhang_lm = c105_c_hoistedGlobal;
  c105_guzhang_lr = c105_d_hoistedGlobal;
  c105_guzhang_rf = c105_e_hoistedGlobal;
  c105_guzhang_rm = c105_f_hoistedGlobal;
  c105_guzhang_rr = c105_g_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 15U, 15U, c105_debug_family_names,
    c105_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_nargin, 0U, c105_b_sf_marshallOut,
    c105_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_nargout, 1U, c105_b_sf_marshallOut,
    c105_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c105_RC_switch, 2U, c105_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c105_guzhang_lf, 3U, c105_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c105_guzhang_lm, 4U, c105_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c105_guzhang_lr, 5U, c105_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c105_guzhang_rf, 6U, c105_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c105_guzhang_rm, 7U, c105_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c105_guzhang_rr, 8U, c105_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_guzhang_lf1, 9U,
    c105_sf_marshallOut, c105_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_guzhang_lm1, 10U,
    c105_sf_marshallOut, c105_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_guzhang_lr1, 11U,
    c105_sf_marshallOut, c105_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_guzhang_rf1, 12U,
    c105_sf_marshallOut, c105_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_guzhang_rm1, 13U,
    c105_sf_marshallOut, c105_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c105_guzhang_rr1, 14U,
    c105_sf_marshallOut, c105_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, (real_T)c105_RC_switch == 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 4);
    c105_guzhang_lf1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 5);
    c105_guzhang_lm1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 6);
    c105_guzhang_lr1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 7);
    c105_guzhang_rf1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 8);
    c105_guzhang_rm1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 9);
    c105_guzhang_rr1 = 0.0F;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 11);
    c105_guzhang_lf1 = (real32_T)c105_guzhang_lf;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 12);
    c105_guzhang_lm1 = (real32_T)c105_guzhang_lm;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 13);
    c105_guzhang_lr1 = (real32_T)c105_guzhang_lr;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 14);
    c105_guzhang_rf1 = (real32_T)c105_guzhang_rf;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 15);
    c105_guzhang_rm1 = (real32_T)c105_guzhang_rm;
    _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, 16);
    c105_guzhang_rr1 = (real32_T)c105_guzhang_rr;
  }

  _SFD_EML_CALL(0U, chartInstance->c105_sfEvent, -16);
  _SFD_SYMBOL_SCOPE_POP();
  *c105_b_guzhang_lf1 = c105_guzhang_lf1;
  *c105_b_guzhang_lm1 = c105_guzhang_lm1;
  *c105_b_guzhang_lr1 = c105_guzhang_lr1;
  *c105_b_guzhang_rf1 = c105_guzhang_rf1;
  *c105_b_guzhang_rm1 = c105_guzhang_rm1;
  *c105_b_guzhang_rr1 = c105_guzhang_rr1;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 104U, chartInstance->c105_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_lf1, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_lm1, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_lf, 3U);
  _SFD_DATA_RANGE_CHECK(*c105_b_guzhang_lm, 4U);
  _SFD_DATA_RANGE_CHECK(*c105_b_guzhang_lr, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_lr1, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_rf, 7U);
  _SFD_DATA_RANGE_CHECK(*c105_b_guzhang_rm, 8U);
  _SFD_DATA_RANGE_CHECK(*c105_b_guzhang_rr, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_rf1, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_rm1, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c105_b_guzhang_rr1, 12U);
}

static void initSimStructsc105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c105_machineNumber, uint32_T
  c105_chartNumber, uint32_T c105_instanceNumber)
{
  (void)c105_machineNumber;
  (void)c105_chartNumber;
  (void)c105_instanceNumber;
}

static const mxArray *c105_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData)
{
  const mxArray *c105_mxArrayOutData = NULL;
  real32_T c105_u;
  const mxArray *c105_y = NULL;
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c105_mxArrayOutData = NULL;
  c105_u = *(real32_T *)c105_inData;
  c105_y = NULL;
  sf_mex_assign(&c105_y, sf_mex_create("y", &c105_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c105_mxArrayOutData, c105_y, false);
  return c105_mxArrayOutData;
}

static real32_T c105_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_guzhang_rr1, const char_T *c105_identifier)
{
  real32_T c105_y;
  emlrtMsgIdentifier c105_thisId;
  c105_thisId.fIdentifier = c105_identifier;
  c105_thisId.fParent = NULL;
  c105_y = c105_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c105_guzhang_rr1),
    &c105_thisId);
  sf_mex_destroy(&c105_guzhang_rr1);
  return c105_y;
}

static real32_T c105_b_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId)
{
  real32_T c105_y;
  real32_T c105_f0;
  (void)chartInstance;
  sf_mex_import(c105_parentId, sf_mex_dup(c105_u), &c105_f0, 1, 1, 0U, 0, 0U, 0);
  c105_y = c105_f0;
  sf_mex_destroy(&c105_u);
  return c105_y;
}

static void c105_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c105_mxArrayInData, const char_T *c105_varName, void *c105_outData)
{
  const mxArray *c105_guzhang_rr1;
  const char_T *c105_identifier;
  emlrtMsgIdentifier c105_thisId;
  real32_T c105_y;
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c105_guzhang_rr1 = sf_mex_dup(c105_mxArrayInData);
  c105_identifier = c105_varName;
  c105_thisId.fIdentifier = c105_identifier;
  c105_thisId.fParent = NULL;
  c105_y = c105_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c105_guzhang_rr1),
    &c105_thisId);
  sf_mex_destroy(&c105_guzhang_rr1);
  *(real32_T *)c105_outData = c105_y;
  sf_mex_destroy(&c105_mxArrayInData);
}

static const mxArray *c105_b_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData)
{
  const mxArray *c105_mxArrayOutData = NULL;
  real_T c105_u;
  const mxArray *c105_y = NULL;
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c105_mxArrayOutData = NULL;
  c105_u = *(real_T *)c105_inData;
  c105_y = NULL;
  sf_mex_assign(&c105_y, sf_mex_create("y", &c105_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c105_mxArrayOutData, c105_y, false);
  return c105_mxArrayOutData;
}

static const mxArray *c105_c_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData)
{
  const mxArray *c105_mxArrayOutData = NULL;
  boolean_T c105_u;
  const mxArray *c105_y = NULL;
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c105_mxArrayOutData = NULL;
  c105_u = *(boolean_T *)c105_inData;
  c105_y = NULL;
  sf_mex_assign(&c105_y, sf_mex_create("y", &c105_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c105_mxArrayOutData, c105_y, false);
  return c105_mxArrayOutData;
}

static real_T c105_c_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId)
{
  real_T c105_y;
  real_T c105_d0;
  (void)chartInstance;
  sf_mex_import(c105_parentId, sf_mex_dup(c105_u), &c105_d0, 1, 0, 0U, 0, 0U, 0);
  c105_y = c105_d0;
  sf_mex_destroy(&c105_u);
  return c105_y;
}

static void c105_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c105_mxArrayInData, const char_T *c105_varName, void *c105_outData)
{
  const mxArray *c105_nargout;
  const char_T *c105_identifier;
  emlrtMsgIdentifier c105_thisId;
  real_T c105_y;
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c105_nargout = sf_mex_dup(c105_mxArrayInData);
  c105_identifier = c105_varName;
  c105_thisId.fIdentifier = c105_identifier;
  c105_thisId.fParent = NULL;
  c105_y = c105_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c105_nargout),
    &c105_thisId);
  sf_mex_destroy(&c105_nargout);
  *(real_T *)c105_outData = c105_y;
  sf_mex_destroy(&c105_mxArrayInData);
}

const mxArray
  *sf_c105_six_plus_six_AcmsteeringV09_main_2lfrf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c105_nameCaptureInfo = NULL;
  c105_nameCaptureInfo = NULL;
  sf_mex_assign(&c105_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c105_nameCaptureInfo;
}

static const mxArray *c105_d_sf_marshallOut(void *chartInstanceVoid, void
  *c105_inData)
{
  const mxArray *c105_mxArrayOutData = NULL;
  int32_T c105_u;
  const mxArray *c105_y = NULL;
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c105_mxArrayOutData = NULL;
  c105_u = *(int32_T *)c105_inData;
  c105_y = NULL;
  sf_mex_assign(&c105_y, sf_mex_create("y", &c105_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c105_mxArrayOutData, c105_y, false);
  return c105_mxArrayOutData;
}

static int32_T c105_d_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId)
{
  int32_T c105_y;
  int32_T c105_i0;
  (void)chartInstance;
  sf_mex_import(c105_parentId, sf_mex_dup(c105_u), &c105_i0, 1, 6, 0U, 0, 0U, 0);
  c105_y = c105_i0;
  sf_mex_destroy(&c105_u);
  return c105_y;
}

static void c105_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c105_mxArrayInData, const char_T *c105_varName, void *c105_outData)
{
  const mxArray *c105_b_sfEvent;
  const char_T *c105_identifier;
  emlrtMsgIdentifier c105_thisId;
  int32_T c105_y;
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c105_b_sfEvent = sf_mex_dup(c105_mxArrayInData);
  c105_identifier = c105_varName;
  c105_thisId.fIdentifier = c105_identifier;
  c105_thisId.fParent = NULL;
  c105_y = c105_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c105_b_sfEvent),
    &c105_thisId);
  sf_mex_destroy(&c105_b_sfEvent);
  *(int32_T *)c105_outData = c105_y;
  sf_mex_destroy(&c105_mxArrayInData);
}

static uint8_T c105_e_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_b_is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c105_identifier)
{
  uint8_T c105_y;
  emlrtMsgIdentifier c105_thisId;
  c105_thisId.fIdentifier = c105_identifier;
  c105_thisId.fParent = NULL;
  c105_y = c105_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c105_b_is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf), &c105_thisId);
  sf_mex_destroy(&c105_b_is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf);
  return c105_y;
}

static uint8_T c105_f_emlrt_marshallIn
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c105_u, const emlrtMsgIdentifier *c105_parentId)
{
  uint8_T c105_y;
  uint8_T c105_u0;
  (void)chartInstance;
  sf_mex_import(c105_parentId, sf_mex_dup(c105_u), &c105_u0, 1, 3, 0U, 0, 0U, 0);
  c105_y = c105_u0;
  sf_mex_destroy(&c105_u);
  return c105_y;
}

static void init_dsm_address_info
  (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
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

void sf_c105_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2899807845U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(452252675U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3465018377U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2698297736U);
}

mxArray *sf_c105_six_plus_six_AcmsteeringV09_main_2lfrf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("U2zexU1Mhy68XNyIRpbArF");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

mxArray *sf_c105_six_plus_six_AcmsteeringV09_main_2lfrf_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray
  *sf_c105_six_plus_six_AcmsteeringV09_main_2lfrf_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c105_six_plus_six_AcmsteeringV09_main_2lfrf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[5],T\"guzhang_lf1\",},{M[1],M[15],T\"guzhang_lm1\",},{M[1],M[8],T\"guzhang_lr1\",},{M[1],M[11],T\"guzhang_rf1\",},{M[1],M[16],T\"guzhang_rm1\",},{M[1],M[12],T\"guzhang_rr1\",},{M[8],M[0],T\"is_active_c105_six_plus_six_AcmsteeringV09_main_2lfrf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c105_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct
                     *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
           105,
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
          (_six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
           chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"RC_switch");
          _SFD_SET_DATA_PROPS(1,2,0,1,"guzhang_lf1");
          _SFD_SET_DATA_PROPS(2,2,0,1,"guzhang_lm1");
          _SFD_SET_DATA_PROPS(3,1,1,0,"guzhang_lf");
          _SFD_SET_DATA_PROPS(4,1,1,0,"guzhang_lm");
          _SFD_SET_DATA_PROPS(5,1,1,0,"guzhang_lr");
          _SFD_SET_DATA_PROPS(6,2,0,1,"guzhang_lr1");
          _SFD_SET_DATA_PROPS(7,1,1,0,"guzhang_rf");
          _SFD_SET_DATA_PROPS(8,1,1,0,"guzhang_rm");
          _SFD_SET_DATA_PROPS(9,1,1,0,"guzhang_rr");
          _SFD_SET_DATA_PROPS(10,2,0,1,"guzhang_rf1");
          _SFD_SET_DATA_PROPS(11,2,0,1,"guzhang_rm1");
          _SFD_SET_DATA_PROPS(12,2,0,1,"guzhang_rr1");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",1,-1,583);
        _SFD_CV_INIT_EML_IF(0,1,0,177,192,355,579);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_sf_marshallOut,(MexInFcnForType)c105_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_sf_marshallOut,(MexInFcnForType)c105_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_sf_marshallOut,(MexInFcnForType)c105_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_sf_marshallOut,(MexInFcnForType)c105_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_sf_marshallOut,(MexInFcnForType)c105_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c105_sf_marshallOut,(MexInFcnForType)c105_sf_marshallIn);

        {
          boolean_T *c105_RC_switch;
          real32_T *c105_guzhang_lf1;
          real32_T *c105_guzhang_lm1;
          boolean_T *c105_guzhang_lf;
          real_T *c105_guzhang_lm;
          real_T *c105_guzhang_lr;
          real32_T *c105_guzhang_lr1;
          boolean_T *c105_guzhang_rf;
          real_T *c105_guzhang_rm;
          real_T *c105_guzhang_rr;
          real32_T *c105_guzhang_rf1;
          real32_T *c105_guzhang_rm1;
          real32_T *c105_guzhang_rr1;
          c105_guzhang_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            6);
          c105_guzhang_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            5);
          c105_guzhang_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c105_guzhang_rr = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c105_guzhang_rm = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c105_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            4);
          c105_guzhang_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            3);
          c105_guzhang_lr = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c105_guzhang_lm = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c105_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            1);
          c105_guzhang_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            2);
          c105_guzhang_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c105_RC_switch = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c105_RC_switch);
          _SFD_SET_DATA_VALUE_PTR(1U, c105_guzhang_lf1);
          _SFD_SET_DATA_VALUE_PTR(2U, c105_guzhang_lm1);
          _SFD_SET_DATA_VALUE_PTR(3U, c105_guzhang_lf);
          _SFD_SET_DATA_VALUE_PTR(4U, c105_guzhang_lm);
          _SFD_SET_DATA_VALUE_PTR(5U, c105_guzhang_lr);
          _SFD_SET_DATA_VALUE_PTR(6U, c105_guzhang_lr1);
          _SFD_SET_DATA_VALUE_PTR(7U, c105_guzhang_rf);
          _SFD_SET_DATA_VALUE_PTR(8U, c105_guzhang_rm);
          _SFD_SET_DATA_VALUE_PTR(9U, c105_guzhang_rr);
          _SFD_SET_DATA_VALUE_PTR(10U, c105_guzhang_rf1);
          _SFD_SET_DATA_VALUE_PTR(11U, c105_guzhang_rm1);
          _SFD_SET_DATA_VALUE_PTR(12U, c105_guzhang_rr1);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "gzvSwCKTU28dWOzIGhW2xF";
}

static void sf_opaque_initialize_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (void *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
  initialize_c105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c105_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  enable_c105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c105_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  disable_c105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c105_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  sf_gateway_c105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c105_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
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

extern void
  sf_internal_set_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
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
    sf_get_sim_state_info_c105_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf(S);
}

static void sf_opaque_set_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf(S, st);
}

static void sf_opaque_terminate_c105_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    }

    finalize_c105_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
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
  initSimStructsc105_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c105_six_plus_six_AcmsteeringV09_main_2lfrf
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
    initialize_params_c105_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c105_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      105);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,105,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,105,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,105);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,105,7);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,105,6);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,105);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(810112904U));
  ssSetChecksum1(S,(3164724325U));
  ssSetChecksum2(S,(1224188113U));
  ssSetChecksum3(S,(3005103828U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c105_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c105_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    utMalloc(sizeof(SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc105_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c105_six_plus_six_AcmsteeringV09_main_2lfrf;
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

void c105_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c105_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c105_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c105_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c105_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
