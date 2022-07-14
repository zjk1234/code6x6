/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lfrf_sfun.h"
#include "c33_six_plus_six_AcmsteeringV09_main_2lfrf.h"
#include "mwmathutil.h"
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
static const char * c33_debug_family_names[9] = { "nargin", "nargout",
  "trqlim_l", "trq_dem_l1", "trqlim_r", "trq_dem_r1", "delta_T_dem", "trq_dem_l",
  "trq_dem_r" };

/* Function Declarations */
static void initialize_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initialize_params_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void enable_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void disable_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void c33_update_debugger_state_c33_six_plus_six_AcmsteeringV09_main_2
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void set_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_st);
static void finalize_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void sf_gateway_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void c33_chartstep_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initSimStructsc33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c33_machineNumber, uint32_T
  c33_chartNumber, uint32_T c33_instanceNumber);
static const mxArray *c33_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData);
static real32_T c33_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_trq_dem_r, const char_T *c33_identifier);
static real32_T c33_b_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId);
static void c33_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData);
static const mxArray *c33_b_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData);
static real_T c33_c_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId);
static void c33_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData);
static void c33_info_helper(const mxArray **c33_info);
static const mxArray *c33_emlrt_marshallOut(const char * c33_u);
static const mxArray *c33_b_emlrt_marshallOut(const uint32_T c33_u);
static void c33_eml_scalar_eg
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static const mxArray *c33_c_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData);
static int32_T c33_d_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId);
static void c33_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData);
static uint8_T c33_e_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_b_is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c33_identifier);
static uint8_T c33_f_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId);
static void init_dsm_address_info
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  chartInstance->c33_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c33_is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf = 0U;
}

static void initialize_params_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c33_update_debugger_state_c33_six_plus_six_AcmsteeringV09_main_2
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  const mxArray *c33_st;
  const mxArray *c33_y = NULL;
  real32_T c33_hoistedGlobal;
  real32_T c33_u;
  const mxArray *c33_b_y = NULL;
  real32_T c33_b_hoistedGlobal;
  real32_T c33_b_u;
  const mxArray *c33_c_y = NULL;
  uint8_T c33_c_hoistedGlobal;
  uint8_T c33_c_u;
  const mxArray *c33_d_y = NULL;
  real32_T *c33_trq_dem_l;
  real32_T *c33_trq_dem_r;
  c33_trq_dem_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_trq_dem_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c33_st = NULL;
  c33_st = NULL;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_createcellmatrix(3, 1), false);
  c33_hoistedGlobal = *c33_trq_dem_l;
  c33_u = c33_hoistedGlobal;
  c33_b_y = NULL;
  sf_mex_assign(&c33_b_y, sf_mex_create("y", &c33_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c33_y, 0, c33_b_y);
  c33_b_hoistedGlobal = *c33_trq_dem_r;
  c33_b_u = c33_b_hoistedGlobal;
  c33_c_y = NULL;
  sf_mex_assign(&c33_c_y, sf_mex_create("y", &c33_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c33_y, 1, c33_c_y);
  c33_c_hoistedGlobal =
    chartInstance->c33_is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  c33_c_u = c33_c_hoistedGlobal;
  c33_d_y = NULL;
  sf_mex_assign(&c33_d_y, sf_mex_create("y", &c33_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c33_y, 2, c33_d_y);
  sf_mex_assign(&c33_st, c33_y, false);
  return c33_st;
}

static void set_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_st)
{
  const mxArray *c33_u;
  real32_T *c33_trq_dem_l;
  real32_T *c33_trq_dem_r;
  c33_trq_dem_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_trq_dem_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c33_doneDoubleBufferReInit = true;
  c33_u = sf_mex_dup(c33_st);
  *c33_trq_dem_l = c33_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c33_u, 0)), "trq_dem_l");
  *c33_trq_dem_r = c33_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c33_u, 1)), "trq_dem_r");
  chartInstance->c33_is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf =
    c33_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c33_u, 2)),
    "is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf");
  sf_mex_destroy(&c33_u);
  c33_update_debugger_state_c33_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c33_st);
}

static void finalize_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  real_T *c33_trqlim_l;
  real32_T *c33_trq_dem_l;
  real32_T *c33_trq_dem_r;
  real_T *c33_trq_dem_l1;
  real_T *c33_trqlim_r;
  real_T *c33_trq_dem_r1;
  real32_T *c33_delta_T_dem;
  c33_delta_T_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c33_trq_dem_r1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c33_trqlim_r = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c33_trq_dem_l1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c33_trq_dem_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_trq_dem_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c33_trqlim_l = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c33_trqlim_l, 0U);
  chartInstance->c33_sfEvent = CALL_EVENT;
  c33_chartstep_c33_six_plus_six_AcmsteeringV09_main_2lfrf(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c33_trq_dem_l, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c33_trq_dem_r, 2U);
  _SFD_DATA_RANGE_CHECK(*c33_trq_dem_l1, 3U);
  _SFD_DATA_RANGE_CHECK(*c33_trqlim_r, 4U);
  _SFD_DATA_RANGE_CHECK(*c33_trq_dem_r1, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c33_delta_T_dem, 6U);
}

static void c33_chartstep_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  real_T c33_hoistedGlobal;
  real_T c33_b_hoistedGlobal;
  real_T c33_c_hoistedGlobal;
  real_T c33_d_hoistedGlobal;
  real32_T c33_e_hoistedGlobal;
  real_T c33_trqlim_l;
  real_T c33_trq_dem_l1;
  real_T c33_trqlim_r;
  real_T c33_trq_dem_r1;
  real32_T c33_delta_T_dem;
  uint32_T c33_debug_family_var_map[9];
  real_T c33_nargin = 5.0;
  real_T c33_nargout = 2.0;
  real32_T c33_trq_dem_l;
  real32_T c33_trq_dem_r;
  real_T c33_varargin_1;
  real32_T c33_varargin_2;
  real_T c33_b_varargin_2;
  real32_T c33_varargin_3;
  real_T c33_x;
  real32_T c33_y;
  real_T c33_b_x;
  real32_T c33_b_y;
  real_T c33_xk;
  real32_T c33_yk;
  real_T c33_c_x;
  real32_T c33_c_y;
  real_T c33_a;
  real32_T c33_b;
  boolean_T c33_p;
  real_T c33_d_x;
  boolean_T c33_b_b;
  real_T c33_b_varargin_1;
  real32_T c33_c_varargin_2;
  real_T c33_d_varargin_2;
  real32_T c33_b_varargin_3;
  real_T c33_e_x;
  real32_T c33_d_y;
  real_T c33_f_x;
  real32_T c33_e_y;
  real_T c33_b_xk;
  real32_T c33_b_yk;
  real_T c33_g_x;
  real32_T c33_f_y;
  real_T c33_b_a;
  real32_T c33_c_b;
  boolean_T c33_b_p;
  real_T c33_h_x;
  boolean_T c33_d_b;
  real_T *c33_b_trqlim_l;
  real_T *c33_b_trq_dem_l1;
  real_T *c33_b_trqlim_r;
  real_T *c33_b_trq_dem_r1;
  real32_T *c33_b_delta_T_dem;
  real32_T *c33_b_trq_dem_l;
  real32_T *c33_b_trq_dem_r;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  c33_b_delta_T_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c33_b_trq_dem_r1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c33_b_trqlim_r = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c33_b_trq_dem_l1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c33_b_trq_dem_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_b_trq_dem_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c33_b_trqlim_l = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
  c33_hoistedGlobal = *c33_b_trqlim_l;
  c33_b_hoistedGlobal = *c33_b_trq_dem_l1;
  c33_c_hoistedGlobal = *c33_b_trqlim_r;
  c33_d_hoistedGlobal = *c33_b_trq_dem_r1;
  c33_e_hoistedGlobal = *c33_b_delta_T_dem;
  c33_trqlim_l = c33_hoistedGlobal;
  c33_trq_dem_l1 = c33_b_hoistedGlobal;
  c33_trqlim_r = c33_c_hoistedGlobal;
  c33_trq_dem_r1 = c33_d_hoistedGlobal;
  c33_delta_T_dem = c33_e_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 9U, 9U, c33_debug_family_names,
    c33_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c33_nargin, 0U, c33_b_sf_marshallOut,
    c33_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c33_nargout, 1U, c33_b_sf_marshallOut,
    c33_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c33_trqlim_l, 2U, c33_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c33_trq_dem_l1, 3U, c33_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c33_trqlim_r, 4U, c33_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c33_trq_dem_r1, 5U, c33_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c33_delta_T_dem, 6U, c33_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c33_trq_dem_l, 7U, c33_sf_marshallOut,
    c33_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c33_trq_dem_r, 8U, c33_sf_marshallOut,
    c33_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c33_trq_dem_l1 == c33_trqlim_l)) {
    _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 4);
    c33_trq_dem_l = (real32_T)c33_trq_dem_l1;
    _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 5);
    c33_trq_dem_r = (real32_T)c33_trq_dem_l1 + c33_delta_T_dem;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 6);
    if (CV_EML_IF(0, 1, 1, c33_trq_dem_r1 == c33_trqlim_r)) {
      _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 7);
      c33_trq_dem_l = (real32_T)c33_trq_dem_r1 - c33_delta_T_dem;
      _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 8);
      c33_trq_dem_r = (real32_T)c33_trq_dem_r1;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 11);
      c33_trq_dem_l = (real32_T)c33_trq_dem_l1;
      _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 12);
      c33_trq_dem_r = (real32_T)c33_trq_dem_r1;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 16);
  c33_varargin_1 = -c33_trqlim_l;
  c33_varargin_2 = c33_trq_dem_l;
  c33_b_varargin_2 = c33_varargin_1;
  c33_varargin_3 = c33_varargin_2;
  c33_x = c33_b_varargin_2;
  c33_y = c33_varargin_3;
  c33_b_x = c33_x;
  c33_b_y = c33_y;
  c33_eml_scalar_eg(chartInstance);
  c33_xk = c33_b_x;
  c33_yk = c33_b_y;
  c33_c_x = c33_xk;
  c33_c_y = c33_yk;
  c33_eml_scalar_eg(chartInstance);
  c33_a = c33_c_x;
  c33_b = c33_c_y;
  c33_p = (c33_a < (real_T)c33_b);
  guard2 = false;
  if (c33_p) {
    guard2 = true;
  } else {
    c33_d_x = c33_c_x;
    c33_b_b = muDoubleScalarIsNaN(c33_d_x);
    if (c33_b_b) {
      guard2 = true;
    } else {
      c33_trq_dem_l = (real32_T)c33_c_x;
    }
  }

  if (guard2 == true) {
    c33_trq_dem_l = c33_c_y;
  }

  _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, 17);
  c33_b_varargin_1 = -c33_trqlim_r;
  c33_c_varargin_2 = c33_trq_dem_r;
  c33_d_varargin_2 = c33_b_varargin_1;
  c33_b_varargin_3 = c33_c_varargin_2;
  c33_e_x = c33_d_varargin_2;
  c33_d_y = c33_b_varargin_3;
  c33_f_x = c33_e_x;
  c33_e_y = c33_d_y;
  c33_eml_scalar_eg(chartInstance);
  c33_b_xk = c33_f_x;
  c33_b_yk = c33_e_y;
  c33_g_x = c33_b_xk;
  c33_f_y = c33_b_yk;
  c33_eml_scalar_eg(chartInstance);
  c33_b_a = c33_g_x;
  c33_c_b = c33_f_y;
  c33_b_p = (c33_b_a < (real_T)c33_c_b);
  guard1 = false;
  if (c33_b_p) {
    guard1 = true;
  } else {
    c33_h_x = c33_g_x;
    c33_d_b = muDoubleScalarIsNaN(c33_h_x);
    if (c33_d_b) {
      guard1 = true;
    } else {
      c33_trq_dem_r = (real32_T)c33_g_x;
    }
  }

  if (guard1 == true) {
    c33_trq_dem_r = c33_f_y;
  }

  _SFD_EML_CALL(0U, chartInstance->c33_sfEvent, -17);
  _SFD_SYMBOL_SCOPE_POP();
  *c33_b_trq_dem_l = c33_trq_dem_l;
  *c33_b_trq_dem_r = c33_trq_dem_r;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
}

static void initSimStructsc33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c33_machineNumber, uint32_T
  c33_chartNumber, uint32_T c33_instanceNumber)
{
  (void)c33_machineNumber;
  (void)c33_chartNumber;
  (void)c33_instanceNumber;
}

static const mxArray *c33_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData)
{
  const mxArray *c33_mxArrayOutData = NULL;
  real32_T c33_u;
  const mxArray *c33_y = NULL;
  SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c33_mxArrayOutData = NULL;
  c33_u = *(real32_T *)c33_inData;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", &c33_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c33_mxArrayOutData, c33_y, false);
  return c33_mxArrayOutData;
}

static real32_T c33_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_trq_dem_r, const char_T *c33_identifier)
{
  real32_T c33_y;
  emlrtMsgIdentifier c33_thisId;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_trq_dem_r),
    &c33_thisId);
  sf_mex_destroy(&c33_trq_dem_r);
  return c33_y;
}

static real32_T c33_b_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId)
{
  real32_T c33_y;
  real32_T c33_f0;
  (void)chartInstance;
  sf_mex_import(c33_parentId, sf_mex_dup(c33_u), &c33_f0, 1, 1, 0U, 0, 0U, 0);
  c33_y = c33_f0;
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void c33_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData)
{
  const mxArray *c33_trq_dem_r;
  const char_T *c33_identifier;
  emlrtMsgIdentifier c33_thisId;
  real32_T c33_y;
  SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c33_trq_dem_r = sf_mex_dup(c33_mxArrayInData);
  c33_identifier = c33_varName;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_trq_dem_r),
    &c33_thisId);
  sf_mex_destroy(&c33_trq_dem_r);
  *(real32_T *)c33_outData = c33_y;
  sf_mex_destroy(&c33_mxArrayInData);
}

static const mxArray *c33_b_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData)
{
  const mxArray *c33_mxArrayOutData = NULL;
  real_T c33_u;
  const mxArray *c33_y = NULL;
  SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c33_mxArrayOutData = NULL;
  c33_u = *(real_T *)c33_inData;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", &c33_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c33_mxArrayOutData, c33_y, false);
  return c33_mxArrayOutData;
}

static real_T c33_c_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId)
{
  real_T c33_y;
  real_T c33_d0;
  (void)chartInstance;
  sf_mex_import(c33_parentId, sf_mex_dup(c33_u), &c33_d0, 1, 0, 0U, 0, 0U, 0);
  c33_y = c33_d0;
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void c33_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData)
{
  const mxArray *c33_nargout;
  const char_T *c33_identifier;
  emlrtMsgIdentifier c33_thisId;
  real_T c33_y;
  SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c33_nargout = sf_mex_dup(c33_mxArrayInData);
  c33_identifier = c33_varName;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_nargout),
    &c33_thisId);
  sf_mex_destroy(&c33_nargout);
  *(real_T *)c33_outData = c33_y;
  sf_mex_destroy(&c33_mxArrayInData);
}

const mxArray
  *sf_c33_six_plus_six_AcmsteeringV09_main_2lfrf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c33_nameCaptureInfo = NULL;
  c33_nameCaptureInfo = NULL;
  sf_mex_assign(&c33_nameCaptureInfo, sf_mex_createstruct("structure", 2, 11, 1),
                false);
  c33_info_helper(&c33_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c33_nameCaptureInfo);
  return c33_nameCaptureInfo;
}

static void c33_info_helper(const mxArray **c33_info)
{
  const mxArray *c33_rhs0 = NULL;
  const mxArray *c33_lhs0 = NULL;
  const mxArray *c33_rhs1 = NULL;
  const mxArray *c33_lhs1 = NULL;
  const mxArray *c33_rhs2 = NULL;
  const mxArray *c33_lhs2 = NULL;
  const mxArray *c33_rhs3 = NULL;
  const mxArray *c33_lhs3 = NULL;
  const mxArray *c33_rhs4 = NULL;
  const mxArray *c33_lhs4 = NULL;
  const mxArray *c33_rhs5 = NULL;
  const mxArray *c33_lhs5 = NULL;
  const mxArray *c33_rhs6 = NULL;
  const mxArray *c33_lhs6 = NULL;
  const mxArray *c33_rhs7 = NULL;
  const mxArray *c33_lhs7 = NULL;
  const mxArray *c33_rhs8 = NULL;
  const mxArray *c33_lhs8 = NULL;
  const mxArray *c33_rhs9 = NULL;
  const mxArray *c33_lhs9 = NULL;
  const mxArray *c33_rhs10 = NULL;
  const mxArray *c33_lhs10 = NULL;
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("max"), "name", "name", 0);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1311262516U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c33_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "context",
                  "context", 1);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("eml_min_or_max"), "name",
                  "name", 1);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1378303184U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c33_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 2);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 2);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c33_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 3);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c33_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 4);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 4);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c33_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 5);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 5);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 5);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c33_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 6);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("eml_index_class"), "name",
                  "name", 6);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                  "resolved", "resolved", 6);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1323174178U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c33_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 7);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 7);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 7);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c33_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 8);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("eml_relop"), "name", "name",
                  8);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("function_handle"),
                  "dominantType", "dominantType", 8);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved",
                  "resolved", 8);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1342458382U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c33_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 9);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("isnan"), "name", "name", 9);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved",
                  "resolved", 9);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1363717458U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c33_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs9), "lhs", "lhs",
                  9);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context",
                  "context", 10);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 10);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c33_info, c33_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 10);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c33_info, c33_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c33_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c33_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c33_info, sf_mex_duplicatearraysafe(&c33_lhs10), "lhs", "lhs",
                  10);
  sf_mex_destroy(&c33_rhs0);
  sf_mex_destroy(&c33_lhs0);
  sf_mex_destroy(&c33_rhs1);
  sf_mex_destroy(&c33_lhs1);
  sf_mex_destroy(&c33_rhs2);
  sf_mex_destroy(&c33_lhs2);
  sf_mex_destroy(&c33_rhs3);
  sf_mex_destroy(&c33_lhs3);
  sf_mex_destroy(&c33_rhs4);
  sf_mex_destroy(&c33_lhs4);
  sf_mex_destroy(&c33_rhs5);
  sf_mex_destroy(&c33_lhs5);
  sf_mex_destroy(&c33_rhs6);
  sf_mex_destroy(&c33_lhs6);
  sf_mex_destroy(&c33_rhs7);
  sf_mex_destroy(&c33_lhs7);
  sf_mex_destroy(&c33_rhs8);
  sf_mex_destroy(&c33_lhs8);
  sf_mex_destroy(&c33_rhs9);
  sf_mex_destroy(&c33_lhs9);
  sf_mex_destroy(&c33_rhs10);
  sf_mex_destroy(&c33_lhs10);
}

static const mxArray *c33_emlrt_marshallOut(const char * c33_u)
{
  const mxArray *c33_y = NULL;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", c33_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c33_u)), false);
  return c33_y;
}

static const mxArray *c33_b_emlrt_marshallOut(const uint32_T c33_u)
{
  const mxArray *c33_y = NULL;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", &c33_u, 7, 0U, 0U, 0U, 0), false);
  return c33_y;
}

static void c33_eml_scalar_eg
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *c33_c_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData)
{
  const mxArray *c33_mxArrayOutData = NULL;
  int32_T c33_u;
  const mxArray *c33_y = NULL;
  SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c33_mxArrayOutData = NULL;
  c33_u = *(int32_T *)c33_inData;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", &c33_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c33_mxArrayOutData, c33_y, false);
  return c33_mxArrayOutData;
}

static int32_T c33_d_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId)
{
  int32_T c33_y;
  int32_T c33_i0;
  (void)chartInstance;
  sf_mex_import(c33_parentId, sf_mex_dup(c33_u), &c33_i0, 1, 6, 0U, 0, 0U, 0);
  c33_y = c33_i0;
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void c33_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData)
{
  const mxArray *c33_b_sfEvent;
  const char_T *c33_identifier;
  emlrtMsgIdentifier c33_thisId;
  int32_T c33_y;
  SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c33_b_sfEvent = sf_mex_dup(c33_mxArrayInData);
  c33_identifier = c33_varName;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_b_sfEvent),
    &c33_thisId);
  sf_mex_destroy(&c33_b_sfEvent);
  *(int32_T *)c33_outData = c33_y;
  sf_mex_destroy(&c33_mxArrayInData);
}

static uint8_T c33_e_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_b_is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c33_identifier)
{
  uint8_T c33_y;
  emlrtMsgIdentifier c33_thisId;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c33_b_is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf), &c33_thisId);
  sf_mex_destroy(&c33_b_is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf);
  return c33_y;
}

static uint8_T c33_f_emlrt_marshallIn
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId)
{
  uint8_T c33_y;
  uint8_T c33_u0;
  (void)chartInstance;
  sf_mex_import(c33_parentId, sf_mex_dup(c33_u), &c33_u0, 1, 3, 0U, 0, 0U, 0);
  c33_y = c33_u0;
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void init_dsm_address_info
  (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
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

void sf_c33_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3837985839U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4164267993U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1382741870U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3808526201U);
}

mxArray *sf_c33_six_plus_six_AcmsteeringV09_main_2lfrf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("wMmJXSeS2QJboMMJ3ggZHF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c33_six_plus_six_AcmsteeringV09_main_2lfrf_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c33_six_plus_six_AcmsteeringV09_main_2lfrf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c33_six_plus_six_AcmsteeringV09_main_2lfrf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"trq_dem_l\",},{M[1],M[6],T\"trq_dem_r\",},{M[8],M[0],T\"is_active_c33_six_plus_six_AcmsteeringV09_main_2lfrf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c33_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
           33,
           1,
           1,
           0,
           7,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"trqlim_l");
          _SFD_SET_DATA_PROPS(1,2,0,1,"trq_dem_l");
          _SFD_SET_DATA_PROPS(2,2,0,1,"trq_dem_r");
          _SFD_SET_DATA_PROPS(3,1,1,0,"trq_dem_l1");
          _SFD_SET_DATA_PROPS(4,1,1,0,"trqlim_r");
          _SFD_SET_DATA_PROPS(5,1,1,0,"trq_dem_r1");
          _SFD_SET_DATA_PROPS(6,1,1,0,"delta_T_dem");
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
        _SFD_CV_INIT_EML(0,1,1,2,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,706);
        _SFD_CV_INIT_EML_IF(0,1,0,100,123,221,410);
        _SFD_CV_INIT_EML_IF(0,1,1,221,248,334,410);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_sf_marshallOut,(MexInFcnForType)c33_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_sf_marshallOut,(MexInFcnForType)c33_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c33_trqlim_l;
          real32_T *c33_trq_dem_l;
          real32_T *c33_trq_dem_r;
          real_T *c33_trq_dem_l1;
          real_T *c33_trqlim_r;
          real_T *c33_trq_dem_r1;
          real32_T *c33_delta_T_dem;
          c33_delta_T_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c33_trq_dem_r1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c33_trqlim_r = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c33_trq_dem_l1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c33_trq_dem_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c33_trq_dem_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c33_trqlim_l = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c33_trqlim_l);
          _SFD_SET_DATA_VALUE_PTR(1U, c33_trq_dem_l);
          _SFD_SET_DATA_VALUE_PTR(2U, c33_trq_dem_r);
          _SFD_SET_DATA_VALUE_PTR(3U, c33_trq_dem_l1);
          _SFD_SET_DATA_VALUE_PTR(4U, c33_trqlim_r);
          _SFD_SET_DATA_VALUE_PTR(5U, c33_trq_dem_r1);
          _SFD_SET_DATA_VALUE_PTR(6U, c33_delta_T_dem);
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
  return "usc4XSudNxwCXJtHa6cXeB";
}

static void sf_opaque_initialize_c33_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
  initialize_c33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c33_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  enable_c33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c33_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  disable_c33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c33_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  sf_gateway_c33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c33_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
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

extern void sf_internal_set_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
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
    sf_get_sim_state_info_c33_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf(S);
}

static void sf_opaque_set_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf(S, st);
}

static void sf_opaque_terminate_c33_six_plus_six_AcmsteeringV09_main_2lfrf(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    }

    finalize_c33_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
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
  initSimStructsc33_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c33_six_plus_six_AcmsteeringV09_main_2lfrf
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
    initialize_params_c33_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c33_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      33);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,33,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,33,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,33);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,33,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,33,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 5; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,33);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(242260294U));
  ssSetChecksum1(S,(1079153133U));
  ssSetChecksum2(S,(43613784U));
  ssSetChecksum3(S,(1676838430U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c33_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c33_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    utMalloc(sizeof(SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc33_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c33_six_plus_six_AcmsteeringV09_main_2lfrf;
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

void c33_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c33_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c33_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c33_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c33_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
