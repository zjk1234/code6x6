/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun.h"
#include "c99_six_plus_six_AcmsteeringV09_main_2lflm.h"
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
static const char * c99_debug_family_names[8] = { "y1", "nargin", "nargout",
  "data1", "data2", "data3", "data4", "y" };

/* Function Declarations */
static void initialize_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initialize_params_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void enable_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void disable_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c99_update_debugger_state_c99_six_plus_six_AcmsteeringV09_main_2
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void set_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_st);
static void finalize_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void sf_gateway_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initSimStructsc99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c99_machineNumber, uint32_T
  c99_chartNumber, uint32_T c99_instanceNumber);
static const mxArray *c99_sf_marshallOut(void *chartInstanceVoid, void
  *c99_inData);
static real32_T c99_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_y, const char_T *c99_identifier);
static real32_T c99_b_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId);
static void c99_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c99_mxArrayInData, const char_T *c99_varName, void *c99_outData);
static const mxArray *c99_b_sf_marshallOut(void *chartInstanceVoid, void
  *c99_inData);
static real_T c99_c_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId);
static void c99_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c99_mxArrayInData, const char_T *c99_varName, void *c99_outData);
static void c99_info_helper(const mxArray **c99_info);
static const mxArray *c99_emlrt_marshallOut(const char * c99_u);
static const mxArray *c99_b_emlrt_marshallOut(const uint32_T c99_u);
static const mxArray *c99_c_sf_marshallOut(void *chartInstanceVoid, void
  *c99_inData);
static int32_T c99_d_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId);
static void c99_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c99_mxArrayInData, const char_T *c99_varName, void *c99_outData);
static uint8_T c99_e_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_b_is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c99_identifier);
static uint8_T c99_f_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId);
static void init_dsm_address_info
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  chartInstance->c99_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c99_is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm = 0U;
}

static void initialize_params_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c99_update_debugger_state_c99_six_plus_six_AcmsteeringV09_main_2
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  const mxArray *c99_st;
  const mxArray *c99_y = NULL;
  real32_T c99_hoistedGlobal;
  real32_T c99_u;
  const mxArray *c99_b_y = NULL;
  uint8_T c99_b_hoistedGlobal;
  uint8_T c99_b_u;
  const mxArray *c99_c_y = NULL;
  real32_T *c99_d_y;
  c99_d_y = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c99_st = NULL;
  c99_st = NULL;
  c99_y = NULL;
  sf_mex_assign(&c99_y, sf_mex_createcellmatrix(2, 1), false);
  c99_hoistedGlobal = *c99_d_y;
  c99_u = c99_hoistedGlobal;
  c99_b_y = NULL;
  sf_mex_assign(&c99_b_y, sf_mex_create("y", &c99_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c99_y, 0, c99_b_y);
  c99_b_hoistedGlobal =
    chartInstance->c99_is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  c99_b_u = c99_b_hoistedGlobal;
  c99_c_y = NULL;
  sf_mex_assign(&c99_c_y, sf_mex_create("y", &c99_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c99_y, 1, c99_c_y);
  sf_mex_assign(&c99_st, c99_y, false);
  return c99_st;
}

static void set_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_st)
{
  const mxArray *c99_u;
  real32_T *c99_y;
  c99_y = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c99_doneDoubleBufferReInit = true;
  c99_u = sf_mex_dup(c99_st);
  *c99_y = c99_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c99_u,
    0)), "y");
  chartInstance->c99_is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm =
    c99_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c99_u, 1)),
    "is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm");
  sf_mex_destroy(&c99_u);
  c99_update_debugger_state_c99_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c99_st);
}

static void finalize_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real_T c99_hoistedGlobal;
  real_T c99_b_hoistedGlobal;
  real_T c99_c_hoistedGlobal;
  real_T c99_d_hoistedGlobal;
  real_T c99_data1;
  real_T c99_data2;
  real_T c99_data3;
  real_T c99_data4;
  uint32_T c99_debug_family_var_map[8];
  real_T c99_y1;
  real_T c99_nargin = 4.0;
  real_T c99_nargout = 1.0;
  real32_T c99_y;
  real_T *c99_b_data1;
  real32_T *c99_b_y;
  real_T *c99_b_data2;
  real_T *c99_b_data3;
  real_T *c99_b_data4;
  c99_b_data4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c99_b_data3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c99_b_data2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c99_b_y = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c99_b_data1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 98U, chartInstance->c99_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c99_b_data1, 0U);
  chartInstance->c99_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 98U, chartInstance->c99_sfEvent);
  c99_hoistedGlobal = *c99_b_data1;
  c99_b_hoistedGlobal = *c99_b_data2;
  c99_c_hoistedGlobal = *c99_b_data3;
  c99_d_hoistedGlobal = *c99_b_data4;
  c99_data1 = c99_hoistedGlobal;
  c99_data2 = c99_b_hoistedGlobal;
  c99_data3 = c99_c_hoistedGlobal;
  c99_data4 = c99_d_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 8U, 8U, c99_debug_family_names,
    c99_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c99_y1, 0U, c99_b_sf_marshallOut,
    c99_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c99_nargin, 1U, c99_b_sf_marshallOut,
    c99_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c99_nargout, 2U, c99_b_sf_marshallOut,
    c99_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c99_data1, 3U, c99_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c99_data2, 4U, c99_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c99_data3, 5U, c99_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c99_data4, 6U, c99_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c99_y, 7U, c99_sf_marshallOut,
    c99_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c99_sfEvent, 3);
  c99_y1 = ((c99_data4 * 1.6777216E+7 + c99_data3 * 65536.0) + c99_data2 * 256.0)
    + c99_data1;
  _SFD_EML_CALL(0U, chartInstance->c99_sfEvent, 5);
  c99_y = (real32_T)(c99_y1 * 1.0E-7);
  _SFD_EML_CALL(0U, chartInstance->c99_sfEvent, -5);
  _SFD_SYMBOL_SCOPE_POP();
  *c99_b_y = c99_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 98U, chartInstance->c99_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c99_b_y, 1U);
  _SFD_DATA_RANGE_CHECK(*c99_b_data2, 2U);
  _SFD_DATA_RANGE_CHECK(*c99_b_data3, 3U);
  _SFD_DATA_RANGE_CHECK(*c99_b_data4, 4U);
}

static void initSimStructsc99_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c99_machineNumber, uint32_T
  c99_chartNumber, uint32_T c99_instanceNumber)
{
  (void)c99_machineNumber;
  (void)c99_chartNumber;
  (void)c99_instanceNumber;
}

static const mxArray *c99_sf_marshallOut(void *chartInstanceVoid, void
  *c99_inData)
{
  const mxArray *c99_mxArrayOutData = NULL;
  real32_T c99_u;
  const mxArray *c99_y = NULL;
  SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c99_mxArrayOutData = NULL;
  c99_u = *(real32_T *)c99_inData;
  c99_y = NULL;
  sf_mex_assign(&c99_y, sf_mex_create("y", &c99_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c99_mxArrayOutData, c99_y, false);
  return c99_mxArrayOutData;
}

static real32_T c99_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_y, const char_T *c99_identifier)
{
  real32_T c99_b_y;
  emlrtMsgIdentifier c99_thisId;
  c99_thisId.fIdentifier = c99_identifier;
  c99_thisId.fParent = NULL;
  c99_b_y = c99_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c99_y), &c99_thisId);
  sf_mex_destroy(&c99_y);
  return c99_b_y;
}

static real32_T c99_b_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId)
{
  real32_T c99_y;
  real32_T c99_f0;
  (void)chartInstance;
  sf_mex_import(c99_parentId, sf_mex_dup(c99_u), &c99_f0, 1, 1, 0U, 0, 0U, 0);
  c99_y = c99_f0;
  sf_mex_destroy(&c99_u);
  return c99_y;
}

static void c99_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c99_mxArrayInData, const char_T *c99_varName, void *c99_outData)
{
  const mxArray *c99_y;
  const char_T *c99_identifier;
  emlrtMsgIdentifier c99_thisId;
  real32_T c99_b_y;
  SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c99_y = sf_mex_dup(c99_mxArrayInData);
  c99_identifier = c99_varName;
  c99_thisId.fIdentifier = c99_identifier;
  c99_thisId.fParent = NULL;
  c99_b_y = c99_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c99_y), &c99_thisId);
  sf_mex_destroy(&c99_y);
  *(real32_T *)c99_outData = c99_b_y;
  sf_mex_destroy(&c99_mxArrayInData);
}

static const mxArray *c99_b_sf_marshallOut(void *chartInstanceVoid, void
  *c99_inData)
{
  const mxArray *c99_mxArrayOutData = NULL;
  real_T c99_u;
  const mxArray *c99_y = NULL;
  SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c99_mxArrayOutData = NULL;
  c99_u = *(real_T *)c99_inData;
  c99_y = NULL;
  sf_mex_assign(&c99_y, sf_mex_create("y", &c99_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c99_mxArrayOutData, c99_y, false);
  return c99_mxArrayOutData;
}

static real_T c99_c_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId)
{
  real_T c99_y;
  real_T c99_d0;
  (void)chartInstance;
  sf_mex_import(c99_parentId, sf_mex_dup(c99_u), &c99_d0, 1, 0, 0U, 0, 0U, 0);
  c99_y = c99_d0;
  sf_mex_destroy(&c99_u);
  return c99_y;
}

static void c99_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c99_mxArrayInData, const char_T *c99_varName, void *c99_outData)
{
  const mxArray *c99_nargout;
  const char_T *c99_identifier;
  emlrtMsgIdentifier c99_thisId;
  real_T c99_y;
  SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c99_nargout = sf_mex_dup(c99_mxArrayInData);
  c99_identifier = c99_varName;
  c99_thisId.fIdentifier = c99_identifier;
  c99_thisId.fParent = NULL;
  c99_y = c99_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c99_nargout),
    &c99_thisId);
  sf_mex_destroy(&c99_nargout);
  *(real_T *)c99_outData = c99_y;
  sf_mex_destroy(&c99_mxArrayInData);
}

const mxArray
  *sf_c99_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c99_nameCaptureInfo = NULL;
  c99_nameCaptureInfo = NULL;
  sf_mex_assign(&c99_nameCaptureInfo, sf_mex_createstruct("structure", 2, 13, 1),
                false);
  c99_info_helper(&c99_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c99_nameCaptureInfo);
  return c99_nameCaptureInfo;
}

static void c99_info_helper(const mxArray **c99_info)
{
  const mxArray *c99_rhs0 = NULL;
  const mxArray *c99_lhs0 = NULL;
  const mxArray *c99_rhs1 = NULL;
  const mxArray *c99_lhs1 = NULL;
  const mxArray *c99_rhs2 = NULL;
  const mxArray *c99_lhs2 = NULL;
  const mxArray *c99_rhs3 = NULL;
  const mxArray *c99_lhs3 = NULL;
  const mxArray *c99_rhs4 = NULL;
  const mxArray *c99_lhs4 = NULL;
  const mxArray *c99_rhs5 = NULL;
  const mxArray *c99_lhs5 = NULL;
  const mxArray *c99_rhs6 = NULL;
  const mxArray *c99_lhs6 = NULL;
  const mxArray *c99_rhs7 = NULL;
  const mxArray *c99_lhs7 = NULL;
  const mxArray *c99_rhs8 = NULL;
  const mxArray *c99_lhs8 = NULL;
  const mxArray *c99_rhs9 = NULL;
  const mxArray *c99_lhs9 = NULL;
  const mxArray *c99_rhs10 = NULL;
  const mxArray *c99_lhs10 = NULL;
  const mxArray *c99_rhs11 = NULL;
  const mxArray *c99_lhs11 = NULL;
  const mxArray *c99_rhs12 = NULL;
  const mxArray *c99_lhs12 = NULL;
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("mpower"), "name", "name", 0);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1363717478U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c99_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 1);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 1);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c99_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 2);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("ismatrix"), "name", "name",
                  2);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1331308458U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c99_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("power"), "name", "name", 3);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "resolved",
                  "resolved", 3);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c99_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 4);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c99_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 5);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 5);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 5);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c99_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 6);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 6);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c99_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 7);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 7);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 7);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c99_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 8);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 8);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c99_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                  "context", 9);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("floor"), "name", "name", 9);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved",
                  "resolved", 9);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1363717454U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c99_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs9), "lhs", "lhs",
                  9);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 10);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 10);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 10);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c99_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs10), "lhs", "lhs",
                  10);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 11);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("eml_scalar_floor"), "name",
                  "name", 11);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 11);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                  "resolved", "resolved", 11);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1286825926U), "fileTimeLo",
                  "fileTimeLo", 11);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 11);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 11);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 11);
  sf_mex_assign(&c99_rhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs11), "rhs", "rhs",
                  11);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs11), "lhs", "lhs",
                  11);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                  "context", "context", 12);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 12);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 12);
  sf_mex_addfield(*c99_info, c99_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 12);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 12);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 12);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 12);
  sf_mex_addfield(*c99_info, c99_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 12);
  sf_mex_assign(&c99_rhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c99_lhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_rhs12), "rhs", "rhs",
                  12);
  sf_mex_addfield(*c99_info, sf_mex_duplicatearraysafe(&c99_lhs12), "lhs", "lhs",
                  12);
  sf_mex_destroy(&c99_rhs0);
  sf_mex_destroy(&c99_lhs0);
  sf_mex_destroy(&c99_rhs1);
  sf_mex_destroy(&c99_lhs1);
  sf_mex_destroy(&c99_rhs2);
  sf_mex_destroy(&c99_lhs2);
  sf_mex_destroy(&c99_rhs3);
  sf_mex_destroy(&c99_lhs3);
  sf_mex_destroy(&c99_rhs4);
  sf_mex_destroy(&c99_lhs4);
  sf_mex_destroy(&c99_rhs5);
  sf_mex_destroy(&c99_lhs5);
  sf_mex_destroy(&c99_rhs6);
  sf_mex_destroy(&c99_lhs6);
  sf_mex_destroy(&c99_rhs7);
  sf_mex_destroy(&c99_lhs7);
  sf_mex_destroy(&c99_rhs8);
  sf_mex_destroy(&c99_lhs8);
  sf_mex_destroy(&c99_rhs9);
  sf_mex_destroy(&c99_lhs9);
  sf_mex_destroy(&c99_rhs10);
  sf_mex_destroy(&c99_lhs10);
  sf_mex_destroy(&c99_rhs11);
  sf_mex_destroy(&c99_lhs11);
  sf_mex_destroy(&c99_rhs12);
  sf_mex_destroy(&c99_lhs12);
}

static const mxArray *c99_emlrt_marshallOut(const char * c99_u)
{
  const mxArray *c99_y = NULL;
  c99_y = NULL;
  sf_mex_assign(&c99_y, sf_mex_create("y", c99_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c99_u)), false);
  return c99_y;
}

static const mxArray *c99_b_emlrt_marshallOut(const uint32_T c99_u)
{
  const mxArray *c99_y = NULL;
  c99_y = NULL;
  sf_mex_assign(&c99_y, sf_mex_create("y", &c99_u, 7, 0U, 0U, 0U, 0), false);
  return c99_y;
}

static const mxArray *c99_c_sf_marshallOut(void *chartInstanceVoid, void
  *c99_inData)
{
  const mxArray *c99_mxArrayOutData = NULL;
  int32_T c99_u;
  const mxArray *c99_y = NULL;
  SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c99_mxArrayOutData = NULL;
  c99_u = *(int32_T *)c99_inData;
  c99_y = NULL;
  sf_mex_assign(&c99_y, sf_mex_create("y", &c99_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c99_mxArrayOutData, c99_y, false);
  return c99_mxArrayOutData;
}

static int32_T c99_d_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId)
{
  int32_T c99_y;
  int32_T c99_i0;
  (void)chartInstance;
  sf_mex_import(c99_parentId, sf_mex_dup(c99_u), &c99_i0, 1, 6, 0U, 0, 0U, 0);
  c99_y = c99_i0;
  sf_mex_destroy(&c99_u);
  return c99_y;
}

static void c99_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c99_mxArrayInData, const char_T *c99_varName, void *c99_outData)
{
  const mxArray *c99_b_sfEvent;
  const char_T *c99_identifier;
  emlrtMsgIdentifier c99_thisId;
  int32_T c99_y;
  SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c99_b_sfEvent = sf_mex_dup(c99_mxArrayInData);
  c99_identifier = c99_varName;
  c99_thisId.fIdentifier = c99_identifier;
  c99_thisId.fParent = NULL;
  c99_y = c99_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c99_b_sfEvent),
    &c99_thisId);
  sf_mex_destroy(&c99_b_sfEvent);
  *(int32_T *)c99_outData = c99_y;
  sf_mex_destroy(&c99_mxArrayInData);
}

static uint8_T c99_e_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_b_is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c99_identifier)
{
  uint8_T c99_y;
  emlrtMsgIdentifier c99_thisId;
  c99_thisId.fIdentifier = c99_identifier;
  c99_thisId.fParent = NULL;
  c99_y = c99_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c99_b_is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm), &c99_thisId);
  sf_mex_destroy(&c99_b_is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm);
  return c99_y;
}

static uint8_T c99_f_emlrt_marshallIn
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c99_u, const emlrtMsgIdentifier *c99_parentId)
{
  uint8_T c99_y;
  uint8_T c99_u0;
  (void)chartInstance;
  sf_mex_import(c99_parentId, sf_mex_dup(c99_u), &c99_u0, 1, 3, 0U, 0, 0U, 0);
  c99_y = c99_u0;
  sf_mex_destroy(&c99_u);
  return c99_y;
}

static void init_dsm_address_info
  (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
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

void sf_c99_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(536726325U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1517067180U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1862515062U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1059433608U);
}

mxArray *sf_c99_six_plus_six_AcmsteeringV09_main_2lflm_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("aKeaSDEQSTevVtpNC7uWM");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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

mxArray *sf_c99_six_plus_six_AcmsteeringV09_main_2lflm_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c99_six_plus_six_AcmsteeringV09_main_2lflm_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c99_six_plus_six_AcmsteeringV09_main_2lflm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c99_six_plus_six_AcmsteeringV09_main_2lflm\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c99_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           99,
           1,
           1,
           0,
           5,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"data1");
          _SFD_SET_DATA_PROPS(1,2,0,1,"y");
          _SFD_SET_DATA_PROPS(2,1,1,0,"data2");
          _SFD_SET_DATA_PROPS(3,1,1,0,"data3");
          _SFD_SET_DATA_PROPS(4,1,1,0,"data4");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,154);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c99_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c99_sf_marshallOut,(MexInFcnForType)c99_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c99_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c99_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c99_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c99_data1;
          real32_T *c99_y;
          real_T *c99_data2;
          real_T *c99_data3;
          real_T *c99_data4;
          c99_data4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c99_data3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c99_data2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c99_y = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c99_data1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c99_data1);
          _SFD_SET_DATA_VALUE_PTR(1U, c99_y);
          _SFD_SET_DATA_VALUE_PTR(2U, c99_data2);
          _SFD_SET_DATA_VALUE_PTR(3U, c99_data3);
          _SFD_SET_DATA_VALUE_PTR(4U, c99_data4);
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
  return "X98go7RJHqU9bhdZkLMNUB";
}

static void sf_opaque_initialize_c99_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
  initialize_c99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c99_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  enable_c99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c99_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  disable_c99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c99_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  sf_gateway_c99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c99_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
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

extern void sf_internal_set_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
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
    sf_get_sim_state_info_c99_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm(S);
}

static void sf_opaque_set_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm(S, st);
}

static void sf_opaque_terminate_c99_six_plus_six_AcmsteeringV09_main_2lflm(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    }

    finalize_c99_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
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
  initSimStructsc99_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c99_six_plus_six_AcmsteeringV09_main_2lflm
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
    initialize_params_c99_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c99_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      99);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,99,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,99,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,99);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,99,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,99,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,99);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4136419602U));
  ssSetChecksum1(S,(3880571139U));
  ssSetChecksum2(S,(1328742116U));
  ssSetChecksum3(S,(2393823358U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c99_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c99_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    utMalloc(sizeof(SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc99_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c99_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c99_six_plus_six_AcmsteeringV09_main_2lflm;
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

void c99_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c99_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c99_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c99_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c99_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
