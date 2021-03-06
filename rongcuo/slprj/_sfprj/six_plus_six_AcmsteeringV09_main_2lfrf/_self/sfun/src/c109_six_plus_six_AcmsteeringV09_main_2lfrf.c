/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lfrf_sfun.h"
#include "c109_six_plus_six_AcmsteeringV09_main_2lfrf.h"
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
static const char * c109_debug_family_names[5] = { "nargin", "nargout", "acc_y",
  "ag_thr", "y" };

/* Function Declarations */
static void initialize_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initialize_params_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void enable_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void disable_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void c109_update_debugger_state_c109_six_plus_six_AcmsteeringV09_main
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void set_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_st);
static void finalize_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void sf_gateway_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initSimStructsc109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c109_machineNumber, uint32_T
  c109_chartNumber, uint32_T c109_instanceNumber);
static const mxArray *c109_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData);
static int8_T c109_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_y, const char_T *c109_identifier);
static int8_T c109_b_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId);
static void c109_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c109_mxArrayInData, const char_T *c109_varName, void *c109_outData);
static const mxArray *c109_b_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData);
static const mxArray *c109_c_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData);
static real_T c109_c_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId);
static void c109_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c109_mxArrayInData, const char_T *c109_varName, void *c109_outData);
static void c109_info_helper(const mxArray **c109_info);
static const mxArray *c109_emlrt_marshallOut(const char * c109_u);
static const mxArray *c109_b_emlrt_marshallOut(const uint32_T c109_u);
static const mxArray *c109_d_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData);
static int32_T c109_d_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId);
static void c109_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c109_mxArrayInData, const char_T *c109_varName, void *c109_outData);
static uint8_T c109_e_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_b_is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c109_identifier);
static uint8_T c109_f_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId);
static void init_dsm_address_info
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  chartInstance->c109_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c109_is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf = 0U;
}

static void initialize_params_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c109_update_debugger_state_c109_six_plus_six_AcmsteeringV09_main
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  const mxArray *c109_st;
  const mxArray *c109_y = NULL;
  int8_T c109_hoistedGlobal;
  int8_T c109_u;
  const mxArray *c109_b_y = NULL;
  uint8_T c109_b_hoistedGlobal;
  uint8_T c109_b_u;
  const mxArray *c109_c_y = NULL;
  int8_T *c109_d_y;
  c109_d_y = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c109_st = NULL;
  c109_st = NULL;
  c109_y = NULL;
  sf_mex_assign(&c109_y, sf_mex_createcellmatrix(2, 1), false);
  c109_hoistedGlobal = *c109_d_y;
  c109_u = c109_hoistedGlobal;
  c109_b_y = NULL;
  sf_mex_assign(&c109_b_y, sf_mex_create("y", &c109_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c109_y, 0, c109_b_y);
  c109_b_hoistedGlobal =
    chartInstance->c109_is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  c109_b_u = c109_b_hoistedGlobal;
  c109_c_y = NULL;
  sf_mex_assign(&c109_c_y, sf_mex_create("y", &c109_b_u, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c109_y, 1, c109_c_y);
  sf_mex_assign(&c109_st, c109_y, false);
  return c109_st;
}

static void set_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_st)
{
  const mxArray *c109_u;
  int8_T *c109_y;
  c109_y = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c109_doneDoubleBufferReInit = true;
  c109_u = sf_mex_dup(c109_st);
  *c109_y = c109_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c109_u, 0)), "y");
  chartInstance->c109_is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf =
    c109_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c109_u, 1)),
    "is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf");
  sf_mex_destroy(&c109_u);
  c109_update_debugger_state_c109_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c109_st);
}

static void finalize_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  real_T c109_hoistedGlobal;
  real32_T c109_b_hoistedGlobal;
  real_T c109_acc_y;
  real32_T c109_ag_thr;
  uint32_T c109_debug_family_var_map[5];
  real_T c109_nargin = 2.0;
  real_T c109_nargout = 1.0;
  int8_T c109_y;
  real_T c109_x;
  real_T c109_b_x;
  real_T c109_b_y;
  real_T *c109_b_acc_y;
  int8_T *c109_c_y;
  real32_T *c109_b_ag_thr;
  c109_b_ag_thr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c109_c_y = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c109_b_acc_y = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 107U, chartInstance->c109_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c109_b_acc_y, 0U);
  chartInstance->c109_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 107U,
               chartInstance->c109_sfEvent);
  c109_hoistedGlobal = *c109_b_acc_y;
  c109_b_hoistedGlobal = *c109_b_ag_thr;
  c109_acc_y = c109_hoistedGlobal;
  c109_ag_thr = c109_b_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c109_debug_family_names,
    c109_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c109_nargin, 0U, c109_c_sf_marshallOut,
    c109_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c109_nargout, 1U, c109_c_sf_marshallOut,
    c109_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c109_acc_y, 2U, c109_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c109_ag_thr, 3U, c109_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c109_y, 4U, c109_sf_marshallOut,
    c109_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c109_sfEvent, 3);
  c109_x = c109_acc_y;
  c109_b_x = c109_x;
  c109_b_y = muDoubleScalarAbs(c109_b_x);
  if (CV_EML_IF(0, 1, 0, c109_b_y >= (real_T)c109_ag_thr)) {
    _SFD_EML_CALL(0U, chartInstance->c109_sfEvent, 4);
    c109_y = 0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c109_sfEvent, 6);
    c109_y = 1;
  }

  _SFD_EML_CALL(0U, chartInstance->c109_sfEvent, -6);
  _SFD_SYMBOL_SCOPE_POP();
  *c109_c_y = c109_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 107U, chartInstance->c109_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c109_c_y, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c109_b_ag_thr, 2U);
}

static void initSimStructsc109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c109_machineNumber, uint32_T
  c109_chartNumber, uint32_T c109_instanceNumber)
{
  (void)c109_machineNumber;
  (void)c109_chartNumber;
  (void)c109_instanceNumber;
}

static const mxArray *c109_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData)
{
  const mxArray *c109_mxArrayOutData = NULL;
  int8_T c109_u;
  const mxArray *c109_y = NULL;
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c109_mxArrayOutData = NULL;
  c109_u = *(int8_T *)c109_inData;
  c109_y = NULL;
  sf_mex_assign(&c109_y, sf_mex_create("y", &c109_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c109_mxArrayOutData, c109_y, false);
  return c109_mxArrayOutData;
}

static int8_T c109_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_y, const char_T *c109_identifier)
{
  int8_T c109_b_y;
  emlrtMsgIdentifier c109_thisId;
  c109_thisId.fIdentifier = c109_identifier;
  c109_thisId.fParent = NULL;
  c109_b_y = c109_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c109_y),
    &c109_thisId);
  sf_mex_destroy(&c109_y);
  return c109_b_y;
}

static int8_T c109_b_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId)
{
  int8_T c109_y;
  int8_T c109_i0;
  (void)chartInstance;
  sf_mex_import(c109_parentId, sf_mex_dup(c109_u), &c109_i0, 1, 2, 0U, 0, 0U, 0);
  c109_y = c109_i0;
  sf_mex_destroy(&c109_u);
  return c109_y;
}

static void c109_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c109_mxArrayInData, const char_T *c109_varName, void *c109_outData)
{
  const mxArray *c109_y;
  const char_T *c109_identifier;
  emlrtMsgIdentifier c109_thisId;
  int8_T c109_b_y;
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c109_y = sf_mex_dup(c109_mxArrayInData);
  c109_identifier = c109_varName;
  c109_thisId.fIdentifier = c109_identifier;
  c109_thisId.fParent = NULL;
  c109_b_y = c109_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c109_y),
    &c109_thisId);
  sf_mex_destroy(&c109_y);
  *(int8_T *)c109_outData = c109_b_y;
  sf_mex_destroy(&c109_mxArrayInData);
}

static const mxArray *c109_b_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData)
{
  const mxArray *c109_mxArrayOutData = NULL;
  real32_T c109_u;
  const mxArray *c109_y = NULL;
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c109_mxArrayOutData = NULL;
  c109_u = *(real32_T *)c109_inData;
  c109_y = NULL;
  sf_mex_assign(&c109_y, sf_mex_create("y", &c109_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c109_mxArrayOutData, c109_y, false);
  return c109_mxArrayOutData;
}

static const mxArray *c109_c_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData)
{
  const mxArray *c109_mxArrayOutData = NULL;
  real_T c109_u;
  const mxArray *c109_y = NULL;
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c109_mxArrayOutData = NULL;
  c109_u = *(real_T *)c109_inData;
  c109_y = NULL;
  sf_mex_assign(&c109_y, sf_mex_create("y", &c109_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c109_mxArrayOutData, c109_y, false);
  return c109_mxArrayOutData;
}

static real_T c109_c_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId)
{
  real_T c109_y;
  real_T c109_d0;
  (void)chartInstance;
  sf_mex_import(c109_parentId, sf_mex_dup(c109_u), &c109_d0, 1, 0, 0U, 0, 0U, 0);
  c109_y = c109_d0;
  sf_mex_destroy(&c109_u);
  return c109_y;
}

static void c109_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c109_mxArrayInData, const char_T *c109_varName, void *c109_outData)
{
  const mxArray *c109_nargout;
  const char_T *c109_identifier;
  emlrtMsgIdentifier c109_thisId;
  real_T c109_y;
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c109_nargout = sf_mex_dup(c109_mxArrayInData);
  c109_identifier = c109_varName;
  c109_thisId.fIdentifier = c109_identifier;
  c109_thisId.fParent = NULL;
  c109_y = c109_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c109_nargout),
    &c109_thisId);
  sf_mex_destroy(&c109_nargout);
  *(real_T *)c109_outData = c109_y;
  sf_mex_destroy(&c109_mxArrayInData);
}

const mxArray
  *sf_c109_six_plus_six_AcmsteeringV09_main_2lfrf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c109_nameCaptureInfo = NULL;
  c109_nameCaptureInfo = NULL;
  sf_mex_assign(&c109_nameCaptureInfo, sf_mex_createstruct("structure", 2, 3, 1),
                false);
  c109_info_helper(&c109_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c109_nameCaptureInfo);
  return c109_nameCaptureInfo;
}

static void c109_info_helper(const mxArray **c109_info)
{
  const mxArray *c109_rhs0 = NULL;
  const mxArray *c109_lhs0 = NULL;
  const mxArray *c109_rhs1 = NULL;
  const mxArray *c109_lhs1 = NULL;
  const mxArray *c109_rhs2 = NULL;
  const mxArray *c109_lhs2 = NULL;
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut(""), "context", "context",
                  0);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut("abs"), "name", "name", 0);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(1363717452U),
                  "fileTimeLo", "fileTimeLo", 0);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c109_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c109_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c109_info, sf_mex_duplicatearraysafe(&c109_rhs0), "rhs",
                  "rhs", 0);
  sf_mex_addfield(*c109_info, sf_mex_duplicatearraysafe(&c109_lhs0), "lhs",
                  "lhs", 0);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context",
                  "context", 1);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 1);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(1363718156U),
                  "fileTimeLo", "fileTimeLo", 1);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c109_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c109_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c109_info, sf_mex_duplicatearraysafe(&c109_rhs1), "rhs",
                  "rhs", 1);
  sf_mex_addfield(*c109_info, sf_mex_duplicatearraysafe(&c109_lhs1), "lhs",
                  "lhs", 1);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context",
                  "context", 2);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut("eml_scalar_abs"), "name",
                  "name", 2);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c109_info, c109_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                  "resolved", "resolved", 2);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(1286825912U),
                  "fileTimeLo", "fileTimeLo", 2);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c109_info, c109_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c109_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c109_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c109_info, sf_mex_duplicatearraysafe(&c109_rhs2), "rhs",
                  "rhs", 2);
  sf_mex_addfield(*c109_info, sf_mex_duplicatearraysafe(&c109_lhs2), "lhs",
                  "lhs", 2);
  sf_mex_destroy(&c109_rhs0);
  sf_mex_destroy(&c109_lhs0);
  sf_mex_destroy(&c109_rhs1);
  sf_mex_destroy(&c109_lhs1);
  sf_mex_destroy(&c109_rhs2);
  sf_mex_destroy(&c109_lhs2);
}

static const mxArray *c109_emlrt_marshallOut(const char * c109_u)
{
  const mxArray *c109_y = NULL;
  c109_y = NULL;
  sf_mex_assign(&c109_y, sf_mex_create("y", c109_u, 15, 0U, 0U, 0U, 2, 1, strlen
                 (c109_u)), false);
  return c109_y;
}

static const mxArray *c109_b_emlrt_marshallOut(const uint32_T c109_u)
{
  const mxArray *c109_y = NULL;
  c109_y = NULL;
  sf_mex_assign(&c109_y, sf_mex_create("y", &c109_u, 7, 0U, 0U, 0U, 0), false);
  return c109_y;
}

static const mxArray *c109_d_sf_marshallOut(void *chartInstanceVoid, void
  *c109_inData)
{
  const mxArray *c109_mxArrayOutData = NULL;
  int32_T c109_u;
  const mxArray *c109_y = NULL;
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c109_mxArrayOutData = NULL;
  c109_u = *(int32_T *)c109_inData;
  c109_y = NULL;
  sf_mex_assign(&c109_y, sf_mex_create("y", &c109_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c109_mxArrayOutData, c109_y, false);
  return c109_mxArrayOutData;
}

static int32_T c109_d_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId)
{
  int32_T c109_y;
  int32_T c109_i1;
  (void)chartInstance;
  sf_mex_import(c109_parentId, sf_mex_dup(c109_u), &c109_i1, 1, 6, 0U, 0, 0U, 0);
  c109_y = c109_i1;
  sf_mex_destroy(&c109_u);
  return c109_y;
}

static void c109_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c109_mxArrayInData, const char_T *c109_varName, void *c109_outData)
{
  const mxArray *c109_b_sfEvent;
  const char_T *c109_identifier;
  emlrtMsgIdentifier c109_thisId;
  int32_T c109_y;
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c109_b_sfEvent = sf_mex_dup(c109_mxArrayInData);
  c109_identifier = c109_varName;
  c109_thisId.fIdentifier = c109_identifier;
  c109_thisId.fParent = NULL;
  c109_y = c109_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c109_b_sfEvent),
    &c109_thisId);
  sf_mex_destroy(&c109_b_sfEvent);
  *(int32_T *)c109_outData = c109_y;
  sf_mex_destroy(&c109_mxArrayInData);
}

static uint8_T c109_e_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_b_is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c109_identifier)
{
  uint8_T c109_y;
  emlrtMsgIdentifier c109_thisId;
  c109_thisId.fIdentifier = c109_identifier;
  c109_thisId.fParent = NULL;
  c109_y = c109_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c109_b_is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf), &c109_thisId);
  sf_mex_destroy(&c109_b_is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf);
  return c109_y;
}

static uint8_T c109_f_emlrt_marshallIn
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c109_u, const emlrtMsgIdentifier *c109_parentId)
{
  uint8_T c109_y;
  uint8_T c109_u0;
  (void)chartInstance;
  sf_mex_import(c109_parentId, sf_mex_dup(c109_u), &c109_u0, 1, 3, 0U, 0, 0U, 0);
  c109_y = c109_u0;
  sf_mex_destroy(&c109_u);
  return c109_y;
}

static void init_dsm_address_info
  (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
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

void sf_c109_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2930639262U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(41866836U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(70451972U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2498363170U);
}

mxArray *sf_c109_six_plus_six_AcmsteeringV09_main_2lfrf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("dFd8g3GqCh9YSBReyprOGB");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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

mxArray *sf_c109_six_plus_six_AcmsteeringV09_main_2lfrf_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray
  *sf_c109_six_plus_six_AcmsteeringV09_main_2lfrf_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c109_six_plus_six_AcmsteeringV09_main_2lfrf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c109_six_plus_six_AcmsteeringV09_main_2lfrf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c109_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct
                     *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
           109,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"acc_y");
          _SFD_SET_DATA_PROPS(1,2,0,1,"y");
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
        _SFD_CV_INIT_EML(0,1,1,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,106);
        _SFD_CV_INIT_EML_IF(0,1,0,41,62,78,102);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c109_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c109_sf_marshallOut,(MexInFcnForType)c109_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c109_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c109_acc_y;
          int8_T *c109_y;
          real32_T *c109_ag_thr;
          c109_ag_thr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c109_y = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c109_acc_y = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c109_acc_y);
          _SFD_SET_DATA_VALUE_PTR(1U, c109_y);
          _SFD_SET_DATA_VALUE_PTR(2U, c109_ag_thr);
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
  return "5OupvNQ7MZVVXp8wAwhq0D";
}

static void sf_opaque_initialize_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (void *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
  initialize_c109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c109_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  enable_c109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c109_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  disable_c109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c109_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  sf_gateway_c109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c109_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
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
  sf_internal_set_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
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
    sf_get_sim_state_info_c109_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf(S);
}

static void sf_opaque_set_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf(S, st);
}

static void sf_opaque_terminate_c109_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    }

    finalize_c109_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
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
  initSimStructsc109_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c109_six_plus_six_AcmsteeringV09_main_2lfrf
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
    initialize_params_c109_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c109_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      109);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,109,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,109,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,109);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,109,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,109,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,109);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1332184004U));
  ssSetChecksum1(S,(1849895013U));
  ssSetChecksum2(S,(3377074734U));
  ssSetChecksum3(S,(1807843308U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c109_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c109_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    utMalloc(sizeof(SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc109_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c109_six_plus_six_AcmsteeringV09_main_2lfrf;
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

void c109_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c109_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c109_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c109_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c109_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
