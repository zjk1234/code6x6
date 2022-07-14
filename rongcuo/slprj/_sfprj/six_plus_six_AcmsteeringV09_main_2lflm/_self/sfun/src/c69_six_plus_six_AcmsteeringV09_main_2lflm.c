/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun.h"
#include "c69_six_plus_six_AcmsteeringV09_main_2lflm.h"
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
static const char * c69_debug_family_names[7] = { "nargin", "nargout", "u1",
  "u2", "u3", "u4", "y" };

/* Function Declarations */
static void initialize_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initialize_params_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void enable_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void disable_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c69_update_debugger_state_c69_six_plus_six_AcmsteeringV09_main_2
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void set_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_st);
static void finalize_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void sf_gateway_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initSimStructsc69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c69_machineNumber, uint32_T
  c69_chartNumber, uint32_T c69_instanceNumber);
static const mxArray *c69_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static real_T c69_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_y, const char_T *c69_identifier);
static real_T c69_b_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId);
static void c69_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData);
static const mxArray *c69_b_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static int32_T c69_c_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId);
static void c69_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData);
static uint8_T c69_d_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_b_is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c69_identifier);
static uint8_T c69_e_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId);
static void init_dsm_address_info
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  chartInstance->c69_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c69_is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm = 0U;
}

static void initialize_params_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c69_update_debugger_state_c69_six_plus_six_AcmsteeringV09_main_2
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  const mxArray *c69_st;
  const mxArray *c69_y = NULL;
  real_T c69_hoistedGlobal;
  real_T c69_u;
  const mxArray *c69_b_y = NULL;
  uint8_T c69_b_hoistedGlobal;
  uint8_T c69_b_u;
  const mxArray *c69_c_y = NULL;
  real_T *c69_d_y;
  c69_d_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c69_st = NULL;
  c69_st = NULL;
  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_createcellmatrix(2, 1), false);
  c69_hoistedGlobal = *c69_d_y;
  c69_u = c69_hoistedGlobal;
  c69_b_y = NULL;
  sf_mex_assign(&c69_b_y, sf_mex_create("y", &c69_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 0, c69_b_y);
  c69_b_hoistedGlobal =
    chartInstance->c69_is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  c69_b_u = c69_b_hoistedGlobal;
  c69_c_y = NULL;
  sf_mex_assign(&c69_c_y, sf_mex_create("y", &c69_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 1, c69_c_y);
  sf_mex_assign(&c69_st, c69_y, false);
  return c69_st;
}

static void set_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_st)
{
  const mxArray *c69_u;
  real_T *c69_y;
  c69_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c69_doneDoubleBufferReInit = true;
  c69_u = sf_mex_dup(c69_st);
  *c69_y = c69_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c69_u,
    0)), "y");
  chartInstance->c69_is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm =
    c69_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c69_u, 1)),
    "is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm");
  sf_mex_destroy(&c69_u);
  c69_update_debugger_state_c69_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c69_st);
}

static void finalize_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real_T c69_hoistedGlobal;
  real_T c69_b_hoistedGlobal;
  real_T c69_c_hoistedGlobal;
  real_T c69_d_hoistedGlobal;
  real_T c69_u1;
  real_T c69_u2;
  real_T c69_u3;
  real_T c69_u4;
  uint32_T c69_debug_family_var_map[7];
  real_T c69_nargin = 4.0;
  real_T c69_nargout = 1.0;
  real_T c69_y;
  real_T *c69_b_u1;
  real_T *c69_b_y;
  real_T *c69_b_u2;
  real_T *c69_b_u3;
  real_T *c69_b_u4;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  c69_b_u4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c69_b_u3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c69_b_u2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c69_b_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c69_b_u1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 68U, chartInstance->c69_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c69_b_u1, 0U);
  chartInstance->c69_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 68U, chartInstance->c69_sfEvent);
  c69_hoistedGlobal = *c69_b_u1;
  c69_b_hoistedGlobal = *c69_b_u2;
  c69_c_hoistedGlobal = *c69_b_u3;
  c69_d_hoistedGlobal = *c69_b_u4;
  c69_u1 = c69_hoistedGlobal;
  c69_u2 = c69_b_hoistedGlobal;
  c69_u3 = c69_c_hoistedGlobal;
  c69_u4 = c69_d_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 7U, 7U, c69_debug_family_names,
    c69_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c69_nargin, 0U, c69_sf_marshallOut,
    c69_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c69_nargout, 1U, c69_sf_marshallOut,
    c69_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c69_u1, 2U, c69_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c69_u2, 3U, c69_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c69_u3, 4U, c69_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c69_u4, 5U, c69_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c69_y, 6U, c69_sf_marshallOut,
    c69_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c69_sfEvent, 2);
  guard1 = false;
  guard2 = false;
  guard3 = false;
  if (CV_EML_COND(0, 1, 0, c69_u1 == 0.0)) {
    guard3 = true;
  } else if (CV_EML_COND(0, 1, 1, c69_u2 == 0.0)) {
    guard3 = true;
  } else if (CV_EML_COND(0, 1, 2, c69_u3 == 0.0)) {
    guard2 = true;
  } else if (CV_EML_COND(0, 1, 3, c69_u4 == 0.0)) {
    guard1 = true;
  } else {
    CV_EML_MCDC(0, 1, 0, false);
    CV_EML_IF(0, 1, 0, false);
    _SFD_EML_CALL(0U, chartInstance->c69_sfEvent, 5);
    c69_y = 0.0;
  }

  if (guard3 == true) {
    guard2 = true;
  }

  if (guard2 == true) {
    guard1 = true;
  }

  if (guard1 == true) {
    CV_EML_MCDC(0, 1, 0, true);
    CV_EML_IF(0, 1, 0, true);
    _SFD_EML_CALL(0U, chartInstance->c69_sfEvent, 3);
    c69_y = 1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c69_sfEvent, -5);
  _SFD_SYMBOL_SCOPE_POP();
  *c69_b_y = c69_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 68U, chartInstance->c69_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c69_b_y, 1U);
  _SFD_DATA_RANGE_CHECK(*c69_b_u2, 2U);
  _SFD_DATA_RANGE_CHECK(*c69_b_u3, 3U);
  _SFD_DATA_RANGE_CHECK(*c69_b_u4, 4U);
}

static void initSimStructsc69_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c69_machineNumber, uint32_T
  c69_chartNumber, uint32_T c69_instanceNumber)
{
  (void)c69_machineNumber;
  (void)c69_chartNumber;
  (void)c69_instanceNumber;
}

static const mxArray *c69_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  real_T c69_u;
  const mxArray *c69_y = NULL;
  SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  c69_u = *(real_T *)c69_inData;
  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", &c69_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static real_T c69_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_y, const char_T *c69_identifier)
{
  real_T c69_b_y;
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_b_y = c69_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_y), &c69_thisId);
  sf_mex_destroy(&c69_y);
  return c69_b_y;
}

static real_T c69_b_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId)
{
  real_T c69_y;
  real_T c69_d0;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), &c69_d0, 1, 0, 0U, 0, 0U, 0);
  c69_y = c69_d0;
  sf_mex_destroy(&c69_u);
  return c69_y;
}

static void c69_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData)
{
  const mxArray *c69_y;
  const char_T *c69_identifier;
  emlrtMsgIdentifier c69_thisId;
  real_T c69_b_y;
  SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c69_y = sf_mex_dup(c69_mxArrayInData);
  c69_identifier = c69_varName;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_b_y = c69_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_y), &c69_thisId);
  sf_mex_destroy(&c69_y);
  *(real_T *)c69_outData = c69_b_y;
  sf_mex_destroy(&c69_mxArrayInData);
}

const mxArray
  *sf_c69_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c69_nameCaptureInfo = NULL;
  c69_nameCaptureInfo = NULL;
  sf_mex_assign(&c69_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c69_nameCaptureInfo;
}

static const mxArray *c69_b_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  int32_T c69_u;
  const mxArray *c69_y = NULL;
  SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  c69_u = *(int32_T *)c69_inData;
  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", &c69_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static int32_T c69_c_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId)
{
  int32_T c69_y;
  int32_T c69_i0;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), &c69_i0, 1, 6, 0U, 0, 0U, 0);
  c69_y = c69_i0;
  sf_mex_destroy(&c69_u);
  return c69_y;
}

static void c69_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData)
{
  const mxArray *c69_b_sfEvent;
  const char_T *c69_identifier;
  emlrtMsgIdentifier c69_thisId;
  int32_T c69_y;
  SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c69_b_sfEvent = sf_mex_dup(c69_mxArrayInData);
  c69_identifier = c69_varName;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_y = c69_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_sfEvent),
    &c69_thisId);
  sf_mex_destroy(&c69_b_sfEvent);
  *(int32_T *)c69_outData = c69_y;
  sf_mex_destroy(&c69_mxArrayInData);
}

static uint8_T c69_d_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_b_is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c69_identifier)
{
  uint8_T c69_y;
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_y = c69_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c69_b_is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm), &c69_thisId);
  sf_mex_destroy(&c69_b_is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm);
  return c69_y;
}

static uint8_T c69_e_emlrt_marshallIn
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId)
{
  uint8_T c69_y;
  uint8_T c69_u0;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), &c69_u0, 1, 3, 0U, 0, 0U, 0);
  c69_y = c69_u0;
  sf_mex_destroy(&c69_u);
  return c69_y;
}

static void init_dsm_address_info
  (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
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

void sf_c69_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(352103246U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2531757562U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1390165533U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3242639512U);
}

mxArray *sf_c69_six_plus_six_AcmsteeringV09_main_2lflm_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("jhC3hzgVR6ZT7M1aY6obNF");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

mxArray *sf_c69_six_plus_six_AcmsteeringV09_main_2lflm_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c69_six_plus_six_AcmsteeringV09_main_2lflm_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c69_six_plus_six_AcmsteeringV09_main_2lflm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c69_six_plus_six_AcmsteeringV09_main_2lflm\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c69_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           69,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"u1");
          _SFD_SET_DATA_PROPS(1,2,0,1,"y");
          _SFD_SET_DATA_PROPS(2,1,1,0,"u2");
          _SFD_SET_DATA_PROPS(3,1,1,0,"u3");
          _SFD_SET_DATA_PROPS(4,1,1,0,"u4");
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
        _SFD_CV_INIT_EML(0,1,1,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,88);
        _SFD_CV_INIT_EML_IF(0,1,0,30,65,73,88);

        {
          static int condStart[] = { 33, 42, 51, 60 };

          static int condEnd[] = { 38, 47, 56, 65 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,33,65,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)c69_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c69_u1;
          real_T *c69_y;
          real_T *c69_u2;
          real_T *c69_u3;
          real_T *c69_u4;
          c69_u4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c69_u3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c69_u2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c69_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c69_u1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c69_u1);
          _SFD_SET_DATA_VALUE_PTR(1U, c69_y);
          _SFD_SET_DATA_VALUE_PTR(2U, c69_u2);
          _SFD_SET_DATA_VALUE_PTR(3U, c69_u3);
          _SFD_SET_DATA_VALUE_PTR(4U, c69_u4);
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
  return "IJroxaj0gRZf2sF1Nl73JG";
}

static void sf_opaque_initialize_c69_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
  initialize_c69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c69_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  enable_c69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c69_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  disable_c69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c69_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  sf_gateway_c69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c69_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
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

extern void sf_internal_set_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
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
    sf_get_sim_state_info_c69_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm(S);
}

static void sf_opaque_set_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm(S, st);
}

static void sf_opaque_terminate_c69_six_plus_six_AcmsteeringV09_main_2lflm(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    }

    finalize_c69_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
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
  initSimStructsc69_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c69_six_plus_six_AcmsteeringV09_main_2lflm
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
    initialize_params_c69_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c69_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      69);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,69,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,69,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,69);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,69,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,69,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,69);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3831599831U));
  ssSetChecksum1(S,(3596963182U));
  ssSetChecksum2(S,(2057901071U));
  ssSetChecksum3(S,(434110407U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c69_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c69_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    utMalloc(sizeof(SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc69_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c69_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c69_six_plus_six_AcmsteeringV09_main_2lflm;
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

void c69_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c69_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c69_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c69_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c69_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
