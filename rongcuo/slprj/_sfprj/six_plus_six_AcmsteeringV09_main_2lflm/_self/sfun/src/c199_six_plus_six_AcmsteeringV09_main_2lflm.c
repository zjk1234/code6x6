/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun.h"
#include "c199_six_plus_six_AcmsteeringV09_main_2lflm.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c199_debug_family_names[15] = { "nargin", "nargout",
  "TCS_switch", "flag_lf", "flag_lm", "flag_lr", "flag_rf", "flag_rm", "flag_rr",
  "flag_lf1", "flag_lm1", "flag_lr1", "flag_rf1", "flag_rm1", "flag_rr1" };

/* Function Declarations */
static void initialize_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initialize_params_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void enable_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void disable_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c199_update_debugger_state_c199_six_plus_six_AcmsteeringV09_main
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void set_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_st);
static void finalize_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void sf_gateway_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initSimStructsc199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c199_machineNumber, uint32_T
  c199_chartNumber, uint32_T c199_instanceNumber);
static const mxArray *c199_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData);
static real32_T c199_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_flag_rr1, const char_T *c199_identifier);
static real32_T c199_b_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId);
static void c199_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c199_mxArrayInData, const char_T *c199_varName, void *c199_outData);
static const mxArray *c199_b_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData);
static const mxArray *c199_c_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData);
static real_T c199_c_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId);
static void c199_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c199_mxArrayInData, const char_T *c199_varName, void *c199_outData);
static const mxArray *c199_d_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData);
static int32_T c199_d_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId);
static void c199_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c199_mxArrayInData, const char_T *c199_varName, void *c199_outData);
static uint8_T c199_e_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_b_is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c199_identifier);
static uint8_T c199_f_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId);
static void init_dsm_address_info
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  chartInstance->c199_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c199_is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm = 0U;
}

static void initialize_params_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c199_update_debugger_state_c199_six_plus_six_AcmsteeringV09_main
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  const mxArray *c199_st;
  const mxArray *c199_y = NULL;
  real32_T c199_hoistedGlobal;
  real32_T c199_u;
  const mxArray *c199_b_y = NULL;
  real32_T c199_b_hoistedGlobal;
  real32_T c199_b_u;
  const mxArray *c199_c_y = NULL;
  real32_T c199_c_hoistedGlobal;
  real32_T c199_c_u;
  const mxArray *c199_d_y = NULL;
  real32_T c199_d_hoistedGlobal;
  real32_T c199_d_u;
  const mxArray *c199_e_y = NULL;
  real32_T c199_e_hoistedGlobal;
  real32_T c199_e_u;
  const mxArray *c199_f_y = NULL;
  real32_T c199_f_hoistedGlobal;
  real32_T c199_f_u;
  const mxArray *c199_g_y = NULL;
  uint8_T c199_g_hoistedGlobal;
  uint8_T c199_g_u;
  const mxArray *c199_h_y = NULL;
  real32_T *c199_flag_lf1;
  real32_T *c199_flag_lm1;
  real32_T *c199_flag_lr1;
  real32_T *c199_flag_rf1;
  real32_T *c199_flag_rm1;
  real32_T *c199_flag_rr1;
  c199_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c199_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c199_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c199_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c199_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c199_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c199_st = NULL;
  c199_st = NULL;
  c199_y = NULL;
  sf_mex_assign(&c199_y, sf_mex_createcellmatrix(7, 1), false);
  c199_hoistedGlobal = *c199_flag_lf1;
  c199_u = c199_hoistedGlobal;
  c199_b_y = NULL;
  sf_mex_assign(&c199_b_y, sf_mex_create("y", &c199_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c199_y, 0, c199_b_y);
  c199_b_hoistedGlobal = *c199_flag_lm1;
  c199_b_u = c199_b_hoistedGlobal;
  c199_c_y = NULL;
  sf_mex_assign(&c199_c_y, sf_mex_create("y", &c199_b_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c199_y, 1, c199_c_y);
  c199_c_hoistedGlobal = *c199_flag_lr1;
  c199_c_u = c199_c_hoistedGlobal;
  c199_d_y = NULL;
  sf_mex_assign(&c199_d_y, sf_mex_create("y", &c199_c_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c199_y, 2, c199_d_y);
  c199_d_hoistedGlobal = *c199_flag_rf1;
  c199_d_u = c199_d_hoistedGlobal;
  c199_e_y = NULL;
  sf_mex_assign(&c199_e_y, sf_mex_create("y", &c199_d_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c199_y, 3, c199_e_y);
  c199_e_hoistedGlobal = *c199_flag_rm1;
  c199_e_u = c199_e_hoistedGlobal;
  c199_f_y = NULL;
  sf_mex_assign(&c199_f_y, sf_mex_create("y", &c199_e_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c199_y, 4, c199_f_y);
  c199_f_hoistedGlobal = *c199_flag_rr1;
  c199_f_u = c199_f_hoistedGlobal;
  c199_g_y = NULL;
  sf_mex_assign(&c199_g_y, sf_mex_create("y", &c199_f_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c199_y, 5, c199_g_y);
  c199_g_hoistedGlobal =
    chartInstance->c199_is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  c199_g_u = c199_g_hoistedGlobal;
  c199_h_y = NULL;
  sf_mex_assign(&c199_h_y, sf_mex_create("y", &c199_g_u, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c199_y, 6, c199_h_y);
  sf_mex_assign(&c199_st, c199_y, false);
  return c199_st;
}

static void set_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_st)
{
  const mxArray *c199_u;
  real32_T *c199_flag_lf1;
  real32_T *c199_flag_lm1;
  real32_T *c199_flag_lr1;
  real32_T *c199_flag_rf1;
  real32_T *c199_flag_rm1;
  real32_T *c199_flag_rr1;
  c199_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c199_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c199_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c199_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c199_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c199_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c199_doneDoubleBufferReInit = true;
  c199_u = sf_mex_dup(c199_st);
  *c199_flag_lf1 = c199_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c199_u, 0)), "flag_lf1");
  *c199_flag_lm1 = c199_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c199_u, 1)), "flag_lm1");
  *c199_flag_lr1 = c199_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c199_u, 2)), "flag_lr1");
  *c199_flag_rf1 = c199_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c199_u, 3)), "flag_rf1");
  *c199_flag_rm1 = c199_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c199_u, 4)), "flag_rm1");
  *c199_flag_rr1 = c199_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c199_u, 5)), "flag_rr1");
  chartInstance->c199_is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm =
    c199_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c199_u, 6)),
    "is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm");
  sf_mex_destroy(&c199_u);
  c199_update_debugger_state_c199_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c199_st);
}

static void finalize_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real32_T c199_hoistedGlobal;
  int8_T c199_b_hoistedGlobal;
  int8_T c199_c_hoistedGlobal;
  int8_T c199_d_hoistedGlobal;
  int8_T c199_e_hoistedGlobal;
  int8_T c199_f_hoistedGlobal;
  int8_T c199_g_hoistedGlobal;
  real32_T c199_TCS_switch;
  int8_T c199_flag_lf;
  int8_T c199_flag_lm;
  int8_T c199_flag_lr;
  int8_T c199_flag_rf;
  int8_T c199_flag_rm;
  int8_T c199_flag_rr;
  uint32_T c199_debug_family_var_map[15];
  real_T c199_nargin = 7.0;
  real_T c199_nargout = 6.0;
  real32_T c199_flag_lf1;
  real32_T c199_flag_lm1;
  real32_T c199_flag_lr1;
  real32_T c199_flag_rf1;
  real32_T c199_flag_rm1;
  real32_T c199_flag_rr1;
  real32_T *c199_b_TCS_switch;
  real32_T *c199_b_flag_lf1;
  real32_T *c199_b_flag_lm1;
  int8_T *c199_b_flag_lf;
  int8_T *c199_b_flag_lm;
  int8_T *c199_b_flag_lr;
  real32_T *c199_b_flag_lr1;
  int8_T *c199_b_flag_rf;
  int8_T *c199_b_flag_rm;
  int8_T *c199_b_flag_rr;
  real32_T *c199_b_flag_rf1;
  real32_T *c199_b_flag_rm1;
  real32_T *c199_b_flag_rr1;
  c199_b_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c199_b_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c199_b_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c199_b_flag_rr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c199_b_flag_rm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c199_b_flag_rf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c199_b_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c199_b_flag_lr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c199_b_flag_lm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c199_b_flag_lf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c199_b_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c199_b_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c199_b_TCS_switch = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 113U, chartInstance->c199_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_TCS_switch, 0U);
  chartInstance->c199_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 113U,
               chartInstance->c199_sfEvent);
  c199_hoistedGlobal = *c199_b_TCS_switch;
  c199_b_hoistedGlobal = *c199_b_flag_lf;
  c199_c_hoistedGlobal = *c199_b_flag_lm;
  c199_d_hoistedGlobal = *c199_b_flag_lr;
  c199_e_hoistedGlobal = *c199_b_flag_rf;
  c199_f_hoistedGlobal = *c199_b_flag_rm;
  c199_g_hoistedGlobal = *c199_b_flag_rr;
  c199_TCS_switch = c199_hoistedGlobal;
  c199_flag_lf = c199_b_hoistedGlobal;
  c199_flag_lm = c199_c_hoistedGlobal;
  c199_flag_lr = c199_d_hoistedGlobal;
  c199_flag_rf = c199_e_hoistedGlobal;
  c199_flag_rm = c199_f_hoistedGlobal;
  c199_flag_rr = c199_g_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 15U, 15U, c199_debug_family_names,
    c199_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_nargin, 0U, c199_c_sf_marshallOut,
    c199_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_nargout, 1U, c199_c_sf_marshallOut,
    c199_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c199_TCS_switch, 2U, c199_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c199_flag_lf, 3U, c199_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c199_flag_lm, 4U, c199_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c199_flag_lr, 5U, c199_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c199_flag_rf, 6U, c199_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c199_flag_rm, 7U, c199_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c199_flag_rr, 8U, c199_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_flag_lf1, 9U, c199_sf_marshallOut,
    c199_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_flag_lm1, 10U, c199_sf_marshallOut,
    c199_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_flag_lr1, 11U, c199_sf_marshallOut,
    c199_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_flag_rf1, 12U, c199_sf_marshallOut,
    c199_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_flag_rm1, 13U, c199_sf_marshallOut,
    c199_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c199_flag_rr1, 14U, c199_sf_marshallOut,
    c199_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c199_TCS_switch == 0.0F)) {
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 4);
    c199_flag_lf1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 5);
    c199_flag_lm1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 6);
    c199_flag_lr1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 7);
    c199_flag_rf1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 8);
    c199_flag_rm1 = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 9);
    c199_flag_rr1 = 0.0F;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 11);
    c199_flag_lf1 = (real32_T)c199_flag_lf;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 12);
    c199_flag_lm1 = (real32_T)c199_flag_lm;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 13);
    c199_flag_lr1 = (real32_T)c199_flag_lr;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 14);
    c199_flag_rf1 = (real32_T)c199_flag_rf;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 15);
    c199_flag_rm1 = (real32_T)c199_flag_rm;
    _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, 16);
    c199_flag_rr1 = (real32_T)c199_flag_rr;
  }

  _SFD_EML_CALL(0U, chartInstance->c199_sfEvent, -16);
  _SFD_SYMBOL_SCOPE_POP();
  *c199_b_flag_lf1 = c199_flag_lf1;
  *c199_b_flag_lm1 = c199_flag_lm1;
  *c199_b_flag_lr1 = c199_flag_lr1;
  *c199_b_flag_rf1 = c199_flag_rf1;
  *c199_b_flag_rm1 = c199_flag_rm1;
  *c199_b_flag_rr1 = c199_flag_rr1;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 113U, chartInstance->c199_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_lf1, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_lm1, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_lf, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_lm, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_lr, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_lr1, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_rf, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_rm, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_rr, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_rf1, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_rm1, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c199_b_flag_rr1, 12U);
}

static void initSimStructsc199_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c199_machineNumber, uint32_T
  c199_chartNumber, uint32_T c199_instanceNumber)
{
  (void)c199_machineNumber;
  (void)c199_chartNumber;
  (void)c199_instanceNumber;
}

static const mxArray *c199_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData)
{
  const mxArray *c199_mxArrayOutData = NULL;
  real32_T c199_u;
  const mxArray *c199_y = NULL;
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c199_mxArrayOutData = NULL;
  c199_u = *(real32_T *)c199_inData;
  c199_y = NULL;
  sf_mex_assign(&c199_y, sf_mex_create("y", &c199_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c199_mxArrayOutData, c199_y, false);
  return c199_mxArrayOutData;
}

static real32_T c199_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_flag_rr1, const char_T *c199_identifier)
{
  real32_T c199_y;
  emlrtMsgIdentifier c199_thisId;
  c199_thisId.fIdentifier = c199_identifier;
  c199_thisId.fParent = NULL;
  c199_y = c199_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c199_flag_rr1),
    &c199_thisId);
  sf_mex_destroy(&c199_flag_rr1);
  return c199_y;
}

static real32_T c199_b_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId)
{
  real32_T c199_y;
  real32_T c199_f0;
  (void)chartInstance;
  sf_mex_import(c199_parentId, sf_mex_dup(c199_u), &c199_f0, 1, 1, 0U, 0, 0U, 0);
  c199_y = c199_f0;
  sf_mex_destroy(&c199_u);
  return c199_y;
}

static void c199_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c199_mxArrayInData, const char_T *c199_varName, void *c199_outData)
{
  const mxArray *c199_flag_rr1;
  const char_T *c199_identifier;
  emlrtMsgIdentifier c199_thisId;
  real32_T c199_y;
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c199_flag_rr1 = sf_mex_dup(c199_mxArrayInData);
  c199_identifier = c199_varName;
  c199_thisId.fIdentifier = c199_identifier;
  c199_thisId.fParent = NULL;
  c199_y = c199_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c199_flag_rr1),
    &c199_thisId);
  sf_mex_destroy(&c199_flag_rr1);
  *(real32_T *)c199_outData = c199_y;
  sf_mex_destroy(&c199_mxArrayInData);
}

static const mxArray *c199_b_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData)
{
  const mxArray *c199_mxArrayOutData = NULL;
  int8_T c199_u;
  const mxArray *c199_y = NULL;
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c199_mxArrayOutData = NULL;
  c199_u = *(int8_T *)c199_inData;
  c199_y = NULL;
  sf_mex_assign(&c199_y, sf_mex_create("y", &c199_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c199_mxArrayOutData, c199_y, false);
  return c199_mxArrayOutData;
}

static const mxArray *c199_c_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData)
{
  const mxArray *c199_mxArrayOutData = NULL;
  real_T c199_u;
  const mxArray *c199_y = NULL;
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c199_mxArrayOutData = NULL;
  c199_u = *(real_T *)c199_inData;
  c199_y = NULL;
  sf_mex_assign(&c199_y, sf_mex_create("y", &c199_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c199_mxArrayOutData, c199_y, false);
  return c199_mxArrayOutData;
}

static real_T c199_c_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId)
{
  real_T c199_y;
  real_T c199_d0;
  (void)chartInstance;
  sf_mex_import(c199_parentId, sf_mex_dup(c199_u), &c199_d0, 1, 0, 0U, 0, 0U, 0);
  c199_y = c199_d0;
  sf_mex_destroy(&c199_u);
  return c199_y;
}

static void c199_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c199_mxArrayInData, const char_T *c199_varName, void *c199_outData)
{
  const mxArray *c199_nargout;
  const char_T *c199_identifier;
  emlrtMsgIdentifier c199_thisId;
  real_T c199_y;
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c199_nargout = sf_mex_dup(c199_mxArrayInData);
  c199_identifier = c199_varName;
  c199_thisId.fIdentifier = c199_identifier;
  c199_thisId.fParent = NULL;
  c199_y = c199_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c199_nargout),
    &c199_thisId);
  sf_mex_destroy(&c199_nargout);
  *(real_T *)c199_outData = c199_y;
  sf_mex_destroy(&c199_mxArrayInData);
}

const mxArray
  *sf_c199_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c199_nameCaptureInfo = NULL;
  c199_nameCaptureInfo = NULL;
  sf_mex_assign(&c199_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c199_nameCaptureInfo;
}

static const mxArray *c199_d_sf_marshallOut(void *chartInstanceVoid, void
  *c199_inData)
{
  const mxArray *c199_mxArrayOutData = NULL;
  int32_T c199_u;
  const mxArray *c199_y = NULL;
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c199_mxArrayOutData = NULL;
  c199_u = *(int32_T *)c199_inData;
  c199_y = NULL;
  sf_mex_assign(&c199_y, sf_mex_create("y", &c199_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c199_mxArrayOutData, c199_y, false);
  return c199_mxArrayOutData;
}

static int32_T c199_d_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId)
{
  int32_T c199_y;
  int32_T c199_i0;
  (void)chartInstance;
  sf_mex_import(c199_parentId, sf_mex_dup(c199_u), &c199_i0, 1, 6, 0U, 0, 0U, 0);
  c199_y = c199_i0;
  sf_mex_destroy(&c199_u);
  return c199_y;
}

static void c199_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c199_mxArrayInData, const char_T *c199_varName, void *c199_outData)
{
  const mxArray *c199_b_sfEvent;
  const char_T *c199_identifier;
  emlrtMsgIdentifier c199_thisId;
  int32_T c199_y;
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c199_b_sfEvent = sf_mex_dup(c199_mxArrayInData);
  c199_identifier = c199_varName;
  c199_thisId.fIdentifier = c199_identifier;
  c199_thisId.fParent = NULL;
  c199_y = c199_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c199_b_sfEvent),
    &c199_thisId);
  sf_mex_destroy(&c199_b_sfEvent);
  *(int32_T *)c199_outData = c199_y;
  sf_mex_destroy(&c199_mxArrayInData);
}

static uint8_T c199_e_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_b_is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c199_identifier)
{
  uint8_T c199_y;
  emlrtMsgIdentifier c199_thisId;
  c199_thisId.fIdentifier = c199_identifier;
  c199_thisId.fParent = NULL;
  c199_y = c199_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c199_b_is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm), &c199_thisId);
  sf_mex_destroy(&c199_b_is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm);
  return c199_y;
}

static uint8_T c199_f_emlrt_marshallIn
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c199_u, const emlrtMsgIdentifier *c199_parentId)
{
  uint8_T c199_y;
  uint8_T c199_u0;
  (void)chartInstance;
  sf_mex_import(c199_parentId, sf_mex_dup(c199_u), &c199_u0, 1, 3, 0U, 0, 0U, 0);
  c199_y = c199_u0;
  sf_mex_destroy(&c199_u);
  return c199_y;
}

static void init_dsm_address_info
  (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
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

void sf_c199_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3953250322U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2057820734U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3113636533U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1799981661U);
}

mxArray *sf_c199_six_plus_six_AcmsteeringV09_main_2lflm_get_autoinheritance_info
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

mxArray *sf_c199_six_plus_six_AcmsteeringV09_main_2lflm_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray
  *sf_c199_six_plus_six_AcmsteeringV09_main_2lflm_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c199_six_plus_six_AcmsteeringV09_main_2lflm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[5],T\"flag_lf1\",},{M[1],M[15],T\"flag_lm1\",},{M[1],M[8],T\"flag_lr1\",},{M[1],M[11],T\"flag_rf1\",},{M[1],M[16],T\"flag_rm1\",},{M[1],M[12],T\"flag_rr1\",},{M[8],M[0],T\"is_active_c199_six_plus_six_AcmsteeringV09_main_2lflm\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c199_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct
                     *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           199,
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
          (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
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
          (MexFcnForType)c199_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_sf_marshallOut,(MexInFcnForType)c199_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_sf_marshallOut,(MexInFcnForType)c199_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_sf_marshallOut,(MexInFcnForType)c199_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_sf_marshallOut,(MexInFcnForType)c199_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_sf_marshallOut,(MexInFcnForType)c199_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c199_sf_marshallOut,(MexInFcnForType)c199_sf_marshallIn);

        {
          real32_T *c199_TCS_switch;
          real32_T *c199_flag_lf1;
          real32_T *c199_flag_lm1;
          int8_T *c199_flag_lf;
          int8_T *c199_flag_lm;
          int8_T *c199_flag_lr;
          real32_T *c199_flag_lr1;
          int8_T *c199_flag_rf;
          int8_T *c199_flag_rm;
          int8_T *c199_flag_rr;
          real32_T *c199_flag_rf1;
          real32_T *c199_flag_rm1;
          real32_T *c199_flag_rr1;
          c199_flag_rr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c199_flag_rm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c199_flag_rf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c199_flag_rr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c199_flag_rm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c199_flag_rf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c199_flag_lr1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c199_flag_lr = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c199_flag_lm = (int8_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c199_flag_lf = (int8_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c199_flag_lm1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c199_flag_lf1 = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c199_TCS_switch = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c199_TCS_switch);
          _SFD_SET_DATA_VALUE_PTR(1U, c199_flag_lf1);
          _SFD_SET_DATA_VALUE_PTR(2U, c199_flag_lm1);
          _SFD_SET_DATA_VALUE_PTR(3U, c199_flag_lf);
          _SFD_SET_DATA_VALUE_PTR(4U, c199_flag_lm);
          _SFD_SET_DATA_VALUE_PTR(5U, c199_flag_lr);
          _SFD_SET_DATA_VALUE_PTR(6U, c199_flag_lr1);
          _SFD_SET_DATA_VALUE_PTR(7U, c199_flag_rf);
          _SFD_SET_DATA_VALUE_PTR(8U, c199_flag_rm);
          _SFD_SET_DATA_VALUE_PTR(9U, c199_flag_rr);
          _SFD_SET_DATA_VALUE_PTR(10U, c199_flag_rf1);
          _SFD_SET_DATA_VALUE_PTR(11U, c199_flag_rm1);
          _SFD_SET_DATA_VALUE_PTR(12U, c199_flag_rr1);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "NkiHmI9zVIyWcgV2jxD6DD";
}

static void sf_opaque_initialize_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (void *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
  initialize_c199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c199_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  enable_c199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c199_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  disable_c199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c199_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  sf_gateway_c199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c199_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
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
  sf_internal_set_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
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
    sf_get_sim_state_info_c199_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm(S);
}

static void sf_opaque_set_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm(S, st);
}

static void sf_opaque_terminate_c199_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    }

    finalize_c199_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
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
  initSimStructsc199_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c199_six_plus_six_AcmsteeringV09_main_2lflm
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
    initialize_params_c199_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c199_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      199);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,199,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,199,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,199);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,199,7);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,199,6);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,199);
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

static void mdlRTW_c199_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c199_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    utMalloc(sizeof(SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc199_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c199_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c199_six_plus_six_AcmsteeringV09_main_2lflm;
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

void c199_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c199_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c199_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c199_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c199_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
