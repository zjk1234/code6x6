/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_sfun.h"
#include "c35_six_plus_six_AcmsteeringV09_main.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "six_plus_six_AcmsteeringV09_main_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c35_debug_family_names[5] = { "nargin", "nargout", "v_act",
  "ag_thr", "Rturn_min_ag" };

/* Function Declarations */
static void initialize_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initialize_params_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void enable_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void disable_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c35_update_debugger_state_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void set_sim_state_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_st);
static void finalize_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void sf_gateway_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initSimStructsc35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c35_machineNumber, uint32_T
  c35_chartNumber, uint32_T c35_instanceNumber);
static const mxArray *c35_sf_marshallOut(void *chartInstanceVoid, void
  *c35_inData);
static real32_T c35_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_Rturn_min_ag, const char_T *c35_identifier);
static real32_T c35_b_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId);
static void c35_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c35_mxArrayInData, const char_T *c35_varName, void *c35_outData);
static const mxArray *c35_b_sf_marshallOut(void *chartInstanceVoid, void
  *c35_inData);
static real_T c35_c_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId);
static void c35_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c35_mxArrayInData, const char_T *c35_varName, void *c35_outData);
static void c35_info_helper(const mxArray **c35_info);
static const mxArray *c35_emlrt_marshallOut(const char * c35_u);
static const mxArray *c35_b_emlrt_marshallOut(const uint32_T c35_u);
static void c35_eml_scalar_eg
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *c35_c_sf_marshallOut(void *chartInstanceVoid, void
  *c35_inData);
static int32_T c35_d_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId);
static void c35_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c35_mxArrayInData, const char_T *c35_varName, void *c35_outData);
static uint8_T c35_e_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_b_is_active_c35_six_plus_six_AcmsteeringV09_main, const char_T
   *c35_identifier);
static uint8_T c35_f_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId);
static void init_dsm_address_info
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  chartInstance->c35_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c35_is_active_c35_six_plus_six_AcmsteeringV09_main = 0U;
}

static void initialize_params_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c35_update_debugger_state_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  const mxArray *c35_st;
  const mxArray *c35_y = NULL;
  real32_T c35_hoistedGlobal;
  real32_T c35_u;
  const mxArray *c35_b_y = NULL;
  uint8_T c35_b_hoistedGlobal;
  uint8_T c35_b_u;
  const mxArray *c35_c_y = NULL;
  real32_T *c35_Rturn_min_ag;
  c35_Rturn_min_ag = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c35_st = NULL;
  c35_st = NULL;
  c35_y = NULL;
  sf_mex_assign(&c35_y, sf_mex_createcellmatrix(2, 1), false);
  c35_hoistedGlobal = *c35_Rturn_min_ag;
  c35_u = c35_hoistedGlobal;
  c35_b_y = NULL;
  sf_mex_assign(&c35_b_y, sf_mex_create("y", &c35_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c35_y, 0, c35_b_y);
  c35_b_hoistedGlobal =
    chartInstance->c35_is_active_c35_six_plus_six_AcmsteeringV09_main;
  c35_b_u = c35_b_hoistedGlobal;
  c35_c_y = NULL;
  sf_mex_assign(&c35_c_y, sf_mex_create("y", &c35_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c35_y, 1, c35_c_y);
  sf_mex_assign(&c35_st, c35_y, false);
  return c35_st;
}

static void set_sim_state_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_st)
{
  const mxArray *c35_u;
  real32_T *c35_Rturn_min_ag;
  c35_Rturn_min_ag = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c35_doneDoubleBufferReInit = true;
  c35_u = sf_mex_dup(c35_st);
  *c35_Rturn_min_ag = c35_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c35_u, 0)), "Rturn_min_ag");
  chartInstance->c35_is_active_c35_six_plus_six_AcmsteeringV09_main =
    c35_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c35_u, 1)),
    "is_active_c35_six_plus_six_AcmsteeringV09_main");
  sf_mex_destroy(&c35_u);
  c35_update_debugger_state_c35_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c35_st);
}

static void finalize_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real32_T c35_hoistedGlobal;
  real32_T c35_b_hoistedGlobal;
  real32_T c35_v_act;
  real32_T c35_ag_thr;
  uint32_T c35_debug_family_var_map[5];
  real_T c35_nargin = 2.0;
  real_T c35_nargout = 1.0;
  real32_T c35_Rturn_min_ag;
  real32_T c35_A;
  real32_T c35_x;
  real32_T c35_b_x;
  real32_T c35_c_x;
  real32_T c35_y;
  real32_T c35_a;
  real32_T c35_b_a;
  real32_T c35_c_a;
  real32_T c35_ak;
  real32_T c35_d_a;
  real32_T c35_c;
  real32_T c35_b_A;
  real32_T c35_B;
  real32_T c35_d_x;
  real32_T c35_b_y;
  real32_T c35_e_x;
  real32_T c35_c_y;
  real32_T c35_f_x;
  real32_T c35_d_y;
  real32_T *c35_b_ag_thr;
  real32_T *c35_b_v_act;
  real32_T *c35_b_Rturn_min_ag;
  c35_b_ag_thr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c35_b_Rturn_min_ag = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c35_b_v_act = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 34U, chartInstance->c35_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c35_b_v_act, 0U);
  chartInstance->c35_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 34U, chartInstance->c35_sfEvent);
  c35_hoistedGlobal = *c35_b_v_act;
  c35_b_hoistedGlobal = *c35_b_ag_thr;
  c35_v_act = c35_hoistedGlobal;
  c35_ag_thr = c35_b_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c35_debug_family_names,
    c35_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c35_nargin, 0U, c35_b_sf_marshallOut,
    c35_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c35_nargout, 1U, c35_b_sf_marshallOut,
    c35_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c35_v_act, 2U, c35_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c35_ag_thr, 3U, c35_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c35_Rturn_min_ag, 4U, c35_sf_marshallOut,
    c35_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c35_sfEvent, 4);
  c35_A = c35_v_act;
  c35_x = c35_A;
  c35_b_x = c35_x;
  c35_c_x = c35_b_x;
  c35_y = c35_c_x / 3.6F;
  c35_a = c35_y;
  c35_b_a = c35_a;
  c35_c_a = c35_b_a;
  c35_eml_scalar_eg(chartInstance);
  c35_ak = c35_c_a;
  c35_d_a = c35_ak;
  c35_eml_scalar_eg(chartInstance);
  c35_c = c35_d_a * c35_d_a;
  c35_b_A = c35_c;
  c35_B = c35_ag_thr;
  c35_d_x = c35_b_A;
  c35_b_y = c35_B;
  c35_e_x = c35_d_x;
  c35_c_y = c35_b_y;
  c35_f_x = c35_e_x;
  c35_d_y = c35_c_y;
  c35_Rturn_min_ag = c35_f_x / c35_d_y;
  _SFD_EML_CALL(0U, chartInstance->c35_sfEvent, -4);
  _SFD_SYMBOL_SCOPE_POP();
  *c35_b_Rturn_min_ag = c35_Rturn_min_ag;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 34U, chartInstance->c35_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_mainMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c35_b_Rturn_min_ag, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c35_b_ag_thr, 2U);
}

static void initSimStructsc35_six_plus_six_AcmsteeringV09_main
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c35_machineNumber, uint32_T
  c35_chartNumber, uint32_T c35_instanceNumber)
{
  (void)c35_machineNumber;
  (void)c35_chartNumber;
  (void)c35_instanceNumber;
}

static const mxArray *c35_sf_marshallOut(void *chartInstanceVoid, void
  *c35_inData)
{
  const mxArray *c35_mxArrayOutData = NULL;
  real32_T c35_u;
  const mxArray *c35_y = NULL;
  SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c35_mxArrayOutData = NULL;
  c35_u = *(real32_T *)c35_inData;
  c35_y = NULL;
  sf_mex_assign(&c35_y, sf_mex_create("y", &c35_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c35_mxArrayOutData, c35_y, false);
  return c35_mxArrayOutData;
}

static real32_T c35_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_Rturn_min_ag, const char_T *c35_identifier)
{
  real32_T c35_y;
  emlrtMsgIdentifier c35_thisId;
  c35_thisId.fIdentifier = c35_identifier;
  c35_thisId.fParent = NULL;
  c35_y = c35_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c35_Rturn_min_ag),
    &c35_thisId);
  sf_mex_destroy(&c35_Rturn_min_ag);
  return c35_y;
}

static real32_T c35_b_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId)
{
  real32_T c35_y;
  real32_T c35_f0;
  (void)chartInstance;
  sf_mex_import(c35_parentId, sf_mex_dup(c35_u), &c35_f0, 1, 1, 0U, 0, 0U, 0);
  c35_y = c35_f0;
  sf_mex_destroy(&c35_u);
  return c35_y;
}

static void c35_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c35_mxArrayInData, const char_T *c35_varName, void *c35_outData)
{
  const mxArray *c35_Rturn_min_ag;
  const char_T *c35_identifier;
  emlrtMsgIdentifier c35_thisId;
  real32_T c35_y;
  SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c35_Rturn_min_ag = sf_mex_dup(c35_mxArrayInData);
  c35_identifier = c35_varName;
  c35_thisId.fIdentifier = c35_identifier;
  c35_thisId.fParent = NULL;
  c35_y = c35_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c35_Rturn_min_ag),
    &c35_thisId);
  sf_mex_destroy(&c35_Rturn_min_ag);
  *(real32_T *)c35_outData = c35_y;
  sf_mex_destroy(&c35_mxArrayInData);
}

static const mxArray *c35_b_sf_marshallOut(void *chartInstanceVoid, void
  *c35_inData)
{
  const mxArray *c35_mxArrayOutData = NULL;
  real_T c35_u;
  const mxArray *c35_y = NULL;
  SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c35_mxArrayOutData = NULL;
  c35_u = *(real_T *)c35_inData;
  c35_y = NULL;
  sf_mex_assign(&c35_y, sf_mex_create("y", &c35_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c35_mxArrayOutData, c35_y, false);
  return c35_mxArrayOutData;
}

static real_T c35_c_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId)
{
  real_T c35_y;
  real_T c35_d0;
  (void)chartInstance;
  sf_mex_import(c35_parentId, sf_mex_dup(c35_u), &c35_d0, 1, 0, 0U, 0, 0U, 0);
  c35_y = c35_d0;
  sf_mex_destroy(&c35_u);
  return c35_y;
}

static void c35_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c35_mxArrayInData, const char_T *c35_varName, void *c35_outData)
{
  const mxArray *c35_nargout;
  const char_T *c35_identifier;
  emlrtMsgIdentifier c35_thisId;
  real_T c35_y;
  SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c35_nargout = sf_mex_dup(c35_mxArrayInData);
  c35_identifier = c35_varName;
  c35_thisId.fIdentifier = c35_identifier;
  c35_thisId.fParent = NULL;
  c35_y = c35_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c35_nargout),
    &c35_thisId);
  sf_mex_destroy(&c35_nargout);
  *(real_T *)c35_outData = c35_y;
  sf_mex_destroy(&c35_mxArrayInData);
}

const mxArray
  *sf_c35_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void)
{
  const mxArray *c35_nameCaptureInfo = NULL;
  c35_nameCaptureInfo = NULL;
  sf_mex_assign(&c35_nameCaptureInfo, sf_mex_createstruct("structure", 2, 24, 1),
                false);
  c35_info_helper(&c35_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c35_nameCaptureInfo);
  return c35_nameCaptureInfo;
}

static void c35_info_helper(const mxArray **c35_info)
{
  const mxArray *c35_rhs0 = NULL;
  const mxArray *c35_lhs0 = NULL;
  const mxArray *c35_rhs1 = NULL;
  const mxArray *c35_lhs1 = NULL;
  const mxArray *c35_rhs2 = NULL;
  const mxArray *c35_lhs2 = NULL;
  const mxArray *c35_rhs3 = NULL;
  const mxArray *c35_lhs3 = NULL;
  const mxArray *c35_rhs4 = NULL;
  const mxArray *c35_lhs4 = NULL;
  const mxArray *c35_rhs5 = NULL;
  const mxArray *c35_lhs5 = NULL;
  const mxArray *c35_rhs6 = NULL;
  const mxArray *c35_lhs6 = NULL;
  const mxArray *c35_rhs7 = NULL;
  const mxArray *c35_lhs7 = NULL;
  const mxArray *c35_rhs8 = NULL;
  const mxArray *c35_lhs8 = NULL;
  const mxArray *c35_rhs9 = NULL;
  const mxArray *c35_lhs9 = NULL;
  const mxArray *c35_rhs10 = NULL;
  const mxArray *c35_lhs10 = NULL;
  const mxArray *c35_rhs11 = NULL;
  const mxArray *c35_lhs11 = NULL;
  const mxArray *c35_rhs12 = NULL;
  const mxArray *c35_lhs12 = NULL;
  const mxArray *c35_rhs13 = NULL;
  const mxArray *c35_lhs13 = NULL;
  const mxArray *c35_rhs14 = NULL;
  const mxArray *c35_lhs14 = NULL;
  const mxArray *c35_rhs15 = NULL;
  const mxArray *c35_lhs15 = NULL;
  const mxArray *c35_rhs16 = NULL;
  const mxArray *c35_lhs16 = NULL;
  const mxArray *c35_rhs17 = NULL;
  const mxArray *c35_lhs17 = NULL;
  const mxArray *c35_rhs18 = NULL;
  const mxArray *c35_lhs18 = NULL;
  const mxArray *c35_rhs19 = NULL;
  const mxArray *c35_lhs19 = NULL;
  const mxArray *c35_rhs20 = NULL;
  const mxArray *c35_lhs20 = NULL;
  const mxArray *c35_rhs21 = NULL;
  const mxArray *c35_lhs21 = NULL;
  const mxArray *c35_rhs22 = NULL;
  const mxArray *c35_lhs22 = NULL;
  const mxArray *c35_rhs23 = NULL;
  const mxArray *c35_lhs23 = NULL;
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("mrdivide"), "name", "name",
                  0);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1388463696U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1370017086U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c35_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 1);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 1);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c35_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 2);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("rdivide"), "name", "name", 2);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c35_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 3);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c35_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 4);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c35_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 5);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 5);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1286825996U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c35_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("eml_div"), "name", "name", 6);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c35_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 7);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("coder.internal.div"), "name",
                  "name", 7);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 7);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c35_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(""), "context", "context", 8);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("mpower"), "name", "name", 8);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "resolved",
                  "resolved", 8);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363717478U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c35_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 9);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 9);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c35_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs9), "lhs", "lhs",
                  9);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 10);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 10);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 10);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c35_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs10), "lhs", "lhs",
                  10);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 11);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("ismatrix"), "name", "name",
                  11);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 11);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                  "resolved", 11);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1331308458U), "fileTimeLo",
                  "fileTimeLo", 11);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 11);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 11);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 11);
  sf_mex_assign(&c35_rhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs11), "rhs", "rhs",
                  11);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs11), "lhs", "lhs",
                  11);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 12);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("ismatrix"), "name", "name",
                  12);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 12);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                  "resolved", 12);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1331308458U), "fileTimeLo",
                  "fileTimeLo", 12);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 12);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 12);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 12);
  sf_mex_assign(&c35_rhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs12), "rhs", "rhs",
                  12);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs12), "lhs", "lhs",
                  12);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 13);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("power"), "name", "name", 13);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 13);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "resolved",
                  "resolved", 13);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 13);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 13);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 13);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 13);
  sf_mex_assign(&c35_rhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs13), "rhs", "rhs",
                  13);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs13), "lhs", "lhs",
                  13);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "context",
                  "context", 14);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 14);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 14);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 14);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 14);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 14);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 14);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 14);
  sf_mex_assign(&c35_rhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs14), "rhs", "rhs",
                  14);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs14), "lhs", "lhs",
                  14);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "context",
                  "context", 15);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 15);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 15);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 15);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 15);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 15);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 15);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 15);
  sf_mex_assign(&c35_rhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs15), "rhs", "rhs",
                  15);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs15), "lhs", "lhs",
                  15);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 16);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 16);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 16);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 16);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 16);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 16);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 16);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 16);
  sf_mex_assign(&c35_rhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs16), "rhs", "rhs",
                  16);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs16), "lhs", "lhs",
                  16);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 17);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 17);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 17);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 17);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 17);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 17);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 17);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 17);
  sf_mex_assign(&c35_rhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs17), "rhs", "rhs",
                  17);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs17), "lhs", "lhs",
                  17);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 18);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 18);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 18);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 18);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 18);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 18);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 18);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 18);
  sf_mex_assign(&c35_rhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs18), "rhs", "rhs",
                  18);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs18), "lhs", "lhs",
                  18);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 19);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 19);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 19);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 19);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 19);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 19);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 19);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 19);
  sf_mex_assign(&c35_rhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs19), "rhs", "rhs",
                  19);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs19), "lhs", "lhs",
                  19);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 20);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("floor"), "name", "name", 20);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 20);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved",
                  "resolved", 20);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363717454U), "fileTimeLo",
                  "fileTimeLo", 20);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 20);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 20);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 20);
  sf_mex_assign(&c35_rhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs20), "rhs", "rhs",
                  20);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs20), "lhs", "lhs",
                  20);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 21);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 21);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 21);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 21);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 21);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 21);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 21);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 21);
  sf_mex_assign(&c35_rhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs21), "rhs", "rhs",
                  21);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs21), "lhs", "lhs",
                  21);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 22);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("eml_scalar_floor"), "name",
                  "name", 22);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 22);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                  "resolved", "resolved", 22);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1286825926U), "fileTimeLo",
                  "fileTimeLo", 22);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 22);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 22);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 22);
  sf_mex_assign(&c35_rhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs22), "rhs", "rhs",
                  22);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs22), "lhs", "lhs",
                  22);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                  "context", "context", 23);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 23);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 23);
  sf_mex_addfield(*c35_info, c35_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 23);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 23);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 23);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 23);
  sf_mex_addfield(*c35_info, c35_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 23);
  sf_mex_assign(&c35_rhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c35_lhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_rhs23), "rhs", "rhs",
                  23);
  sf_mex_addfield(*c35_info, sf_mex_duplicatearraysafe(&c35_lhs23), "lhs", "lhs",
                  23);
  sf_mex_destroy(&c35_rhs0);
  sf_mex_destroy(&c35_lhs0);
  sf_mex_destroy(&c35_rhs1);
  sf_mex_destroy(&c35_lhs1);
  sf_mex_destroy(&c35_rhs2);
  sf_mex_destroy(&c35_lhs2);
  sf_mex_destroy(&c35_rhs3);
  sf_mex_destroy(&c35_lhs3);
  sf_mex_destroy(&c35_rhs4);
  sf_mex_destroy(&c35_lhs4);
  sf_mex_destroy(&c35_rhs5);
  sf_mex_destroy(&c35_lhs5);
  sf_mex_destroy(&c35_rhs6);
  sf_mex_destroy(&c35_lhs6);
  sf_mex_destroy(&c35_rhs7);
  sf_mex_destroy(&c35_lhs7);
  sf_mex_destroy(&c35_rhs8);
  sf_mex_destroy(&c35_lhs8);
  sf_mex_destroy(&c35_rhs9);
  sf_mex_destroy(&c35_lhs9);
  sf_mex_destroy(&c35_rhs10);
  sf_mex_destroy(&c35_lhs10);
  sf_mex_destroy(&c35_rhs11);
  sf_mex_destroy(&c35_lhs11);
  sf_mex_destroy(&c35_rhs12);
  sf_mex_destroy(&c35_lhs12);
  sf_mex_destroy(&c35_rhs13);
  sf_mex_destroy(&c35_lhs13);
  sf_mex_destroy(&c35_rhs14);
  sf_mex_destroy(&c35_lhs14);
  sf_mex_destroy(&c35_rhs15);
  sf_mex_destroy(&c35_lhs15);
  sf_mex_destroy(&c35_rhs16);
  sf_mex_destroy(&c35_lhs16);
  sf_mex_destroy(&c35_rhs17);
  sf_mex_destroy(&c35_lhs17);
  sf_mex_destroy(&c35_rhs18);
  sf_mex_destroy(&c35_lhs18);
  sf_mex_destroy(&c35_rhs19);
  sf_mex_destroy(&c35_lhs19);
  sf_mex_destroy(&c35_rhs20);
  sf_mex_destroy(&c35_lhs20);
  sf_mex_destroy(&c35_rhs21);
  sf_mex_destroy(&c35_lhs21);
  sf_mex_destroy(&c35_rhs22);
  sf_mex_destroy(&c35_lhs22);
  sf_mex_destroy(&c35_rhs23);
  sf_mex_destroy(&c35_lhs23);
}

static const mxArray *c35_emlrt_marshallOut(const char * c35_u)
{
  const mxArray *c35_y = NULL;
  c35_y = NULL;
  sf_mex_assign(&c35_y, sf_mex_create("y", c35_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c35_u)), false);
  return c35_y;
}

static const mxArray *c35_b_emlrt_marshallOut(const uint32_T c35_u)
{
  const mxArray *c35_y = NULL;
  c35_y = NULL;
  sf_mex_assign(&c35_y, sf_mex_create("y", &c35_u, 7, 0U, 0U, 0U, 0), false);
  return c35_y;
}

static void c35_eml_scalar_eg
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *c35_c_sf_marshallOut(void *chartInstanceVoid, void
  *c35_inData)
{
  const mxArray *c35_mxArrayOutData = NULL;
  int32_T c35_u;
  const mxArray *c35_y = NULL;
  SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c35_mxArrayOutData = NULL;
  c35_u = *(int32_T *)c35_inData;
  c35_y = NULL;
  sf_mex_assign(&c35_y, sf_mex_create("y", &c35_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c35_mxArrayOutData, c35_y, false);
  return c35_mxArrayOutData;
}

static int32_T c35_d_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId)
{
  int32_T c35_y;
  int32_T c35_i0;
  (void)chartInstance;
  sf_mex_import(c35_parentId, sf_mex_dup(c35_u), &c35_i0, 1, 6, 0U, 0, 0U, 0);
  c35_y = c35_i0;
  sf_mex_destroy(&c35_u);
  return c35_y;
}

static void c35_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c35_mxArrayInData, const char_T *c35_varName, void *c35_outData)
{
  const mxArray *c35_b_sfEvent;
  const char_T *c35_identifier;
  emlrtMsgIdentifier c35_thisId;
  int32_T c35_y;
  SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c35_b_sfEvent = sf_mex_dup(c35_mxArrayInData);
  c35_identifier = c35_varName;
  c35_thisId.fIdentifier = c35_identifier;
  c35_thisId.fParent = NULL;
  c35_y = c35_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c35_b_sfEvent),
    &c35_thisId);
  sf_mex_destroy(&c35_b_sfEvent);
  *(int32_T *)c35_outData = c35_y;
  sf_mex_destroy(&c35_mxArrayInData);
}

static uint8_T c35_e_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_b_is_active_c35_six_plus_six_AcmsteeringV09_main, const char_T
   *c35_identifier)
{
  uint8_T c35_y;
  emlrtMsgIdentifier c35_thisId;
  c35_thisId.fIdentifier = c35_identifier;
  c35_thisId.fParent = NULL;
  c35_y = c35_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c35_b_is_active_c35_six_plus_six_AcmsteeringV09_main), &c35_thisId);
  sf_mex_destroy(&c35_b_is_active_c35_six_plus_six_AcmsteeringV09_main);
  return c35_y;
}

static uint8_T c35_f_emlrt_marshallIn
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c35_u, const emlrtMsgIdentifier *c35_parentId)
{
  uint8_T c35_y;
  uint8_T c35_u0;
  (void)chartInstance;
  sf_mex_import(c35_parentId, sf_mex_dup(c35_u), &c35_u0, 1, 3, 0U, 0, 0U, 0);
  c35_y = c35_u0;
  sf_mex_destroy(&c35_u);
  return c35_y;
}

static void init_dsm_address_info
  (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
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

void sf_c35_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(639806683U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(80985886U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3085942470U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1290537059U);
}

mxArray *sf_c35_six_plus_six_AcmsteeringV09_main_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("mH9THhfPmw05IO9RTEq6vD");
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c35_six_plus_six_AcmsteeringV09_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c35_six_plus_six_AcmsteeringV09_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c35_six_plus_six_AcmsteeringV09_main
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"Rturn_min_ag\",},{M[8],M[0],T\"is_active_c35_six_plus_six_AcmsteeringV09_main\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c35_six_plus_six_AcmsteeringV09_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_mainMachineNumber_,
           35,
           1,
           1,
           0,
           3,
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
          (_six_plus_six_AcmsteeringV09_mainMachineNumber_,
           chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _six_plus_six_AcmsteeringV09_mainMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _six_plus_six_AcmsteeringV09_mainMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"v_act");
          _SFD_SET_DATA_PROPS(1,2,0,1,"Rturn_min_ag");
          _SFD_SET_DATA_PROPS(2,1,1,0,"ag_thr");
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
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",1,-1,104);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c35_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c35_sf_marshallOut,(MexInFcnForType)c35_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c35_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real32_T *c35_v_act;
          real32_T *c35_Rturn_min_ag;
          real32_T *c35_ag_thr;
          c35_ag_thr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c35_Rturn_min_ag = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c35_v_act = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c35_v_act);
          _SFD_SET_DATA_VALUE_PTR(1U, c35_Rturn_min_ag);
          _SFD_SET_DATA_VALUE_PTR(2U, c35_ag_thr);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _six_plus_six_AcmsteeringV09_mainMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "FiptDdGu43VGn6YgnI9RMG";
}

static void sf_opaque_initialize_c35_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
  initialize_c35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c35_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  enable_c35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c35_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  disable_c35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c35_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  sf_gateway_c35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c35_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c35_six_plus_six_AcmsteeringV09_main();/* state var info */
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

extern void sf_internal_set_sim_state_c35_six_plus_six_AcmsteeringV09_main
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
    sf_get_sim_state_info_c35_six_plus_six_AcmsteeringV09_main();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c35_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  return sf_internal_get_sim_state_c35_six_plus_six_AcmsteeringV09_main(S);
}

static void sf_opaque_set_sim_state_c35_six_plus_six_AcmsteeringV09_main
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c35_six_plus_six_AcmsteeringV09_main(S, st);
}

static void sf_opaque_terminate_c35_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_optimization_info();
    }

    finalize_c35_six_plus_six_AcmsteeringV09_main
      ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc35_six_plus_six_AcmsteeringV09_main
    ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c35_six_plus_six_AcmsteeringV09_main(SimStruct *
  S)
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
    initialize_params_c35_six_plus_six_AcmsteeringV09_main
      ((SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c35_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      35);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,35,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,35,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,35);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,35,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,35,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,35);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2995208442U));
  ssSetChecksum1(S,(2670790892U));
  ssSetChecksum2(S,(3419639775U));
  ssSetChecksum3(S,(610968562U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c35_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c35_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    utMalloc(sizeof(SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc35_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c35_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c35_six_plus_six_AcmsteeringV09_main;
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

void c35_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c35_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c35_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c35_six_plus_six_AcmsteeringV09_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c35_six_plus_six_AcmsteeringV09_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
