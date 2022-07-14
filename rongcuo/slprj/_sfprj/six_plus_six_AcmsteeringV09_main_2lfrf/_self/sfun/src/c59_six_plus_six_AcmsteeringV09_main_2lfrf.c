/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lfrf_sfun.h"
#include "c59_six_plus_six_AcmsteeringV09_main_2lfrf.h"
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
static const char * c59_debug_family_names[4] = { "nargin", "nargout",
  "life_pre", "life" };

/* Function Declarations */
static void initialize_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initialize_params_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void enable_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void disable_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void c59_update_debugger_state_c59_six_plus_six_AcmsteeringV09_main_2
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void set_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_st);
static void finalize_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void sf_gateway_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initSimStructsc59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c59_machineNumber, uint32_T
  c59_chartNumber, uint32_T c59_instanceNumber);
static const mxArray *c59_sf_marshallOut(void *chartInstanceVoid, void
  *c59_inData);
static real32_T c59_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_life, const char_T *c59_identifier);
static real32_T c59_b_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId);
static void c59_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c59_mxArrayInData, const char_T *c59_varName, void *c59_outData);
static const mxArray *c59_b_sf_marshallOut(void *chartInstanceVoid, void
  *c59_inData);
static real_T c59_c_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId);
static void c59_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c59_mxArrayInData, const char_T *c59_varName, void *c59_outData);
static const mxArray *c59_c_sf_marshallOut(void *chartInstanceVoid, void
  *c59_inData);
static int32_T c59_d_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId);
static void c59_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c59_mxArrayInData, const char_T *c59_varName, void *c59_outData);
static uint8_T c59_e_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_b_is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c59_identifier);
static uint8_T c59_f_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId);
static void init_dsm_address_info
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  chartInstance->c59_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c59_is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf = 0U;
}

static void initialize_params_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c59_update_debugger_state_c59_six_plus_six_AcmsteeringV09_main_2
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  const mxArray *c59_st;
  const mxArray *c59_y = NULL;
  real32_T c59_hoistedGlobal;
  real32_T c59_u;
  const mxArray *c59_b_y = NULL;
  uint8_T c59_b_hoistedGlobal;
  uint8_T c59_b_u;
  const mxArray *c59_c_y = NULL;
  real32_T *c59_life;
  c59_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c59_st = NULL;
  c59_st = NULL;
  c59_y = NULL;
  sf_mex_assign(&c59_y, sf_mex_createcellmatrix(2, 1), false);
  c59_hoistedGlobal = *c59_life;
  c59_u = c59_hoistedGlobal;
  c59_b_y = NULL;
  sf_mex_assign(&c59_b_y, sf_mex_create("y", &c59_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c59_y, 0, c59_b_y);
  c59_b_hoistedGlobal =
    chartInstance->c59_is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  c59_b_u = c59_b_hoistedGlobal;
  c59_c_y = NULL;
  sf_mex_assign(&c59_c_y, sf_mex_create("y", &c59_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c59_y, 1, c59_c_y);
  sf_mex_assign(&c59_st, c59_y, false);
  return c59_st;
}

static void set_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_st)
{
  const mxArray *c59_u;
  real32_T *c59_life;
  c59_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c59_doneDoubleBufferReInit = true;
  c59_u = sf_mex_dup(c59_st);
  *c59_life = c59_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c59_u, 0)), "life");
  chartInstance->c59_is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf =
    c59_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c59_u, 1)),
    "is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf");
  sf_mex_destroy(&c59_u);
  c59_update_debugger_state_c59_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c59_st);
}

static void finalize_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  real32_T c59_hoistedGlobal;
  real32_T c59_life_pre;
  uint32_T c59_debug_family_var_map[4];
  real_T c59_nargin = 1.0;
  real_T c59_nargout = 1.0;
  real32_T c59_life;
  real32_T *c59_b_life_pre;
  real32_T *c59_b_life;
  c59_b_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c59_b_life_pre = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 58U, chartInstance->c59_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c59_b_life_pre, 0U);
  chartInstance->c59_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 58U, chartInstance->c59_sfEvent);
  c59_hoistedGlobal = *c59_b_life_pre;
  c59_life_pre = c59_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c59_debug_family_names,
    c59_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c59_nargin, 0U, c59_b_sf_marshallOut,
    c59_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c59_nargout, 1U, c59_b_sf_marshallOut,
    c59_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c59_life_pre, 2U, c59_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c59_life, 3U, c59_sf_marshallOut,
    c59_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c59_sfEvent, 3);
  c59_life = c59_life_pre + 1.0F;
  _SFD_EML_CALL(0U, chartInstance->c59_sfEvent, 4);
  if (CV_EML_IF(0, 1, 0, c59_life > 255.0F)) {
    _SFD_EML_CALL(0U, chartInstance->c59_sfEvent, 5);
    c59_life = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c59_sfEvent, -5);
  _SFD_SYMBOL_SCOPE_POP();
  *c59_b_life = c59_life;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 58U, chartInstance->c59_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c59_b_life, 1U);
}

static void initSimStructsc59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c59_machineNumber, uint32_T
  c59_chartNumber, uint32_T c59_instanceNumber)
{
  (void)c59_machineNumber;
  (void)c59_chartNumber;
  (void)c59_instanceNumber;
}

static const mxArray *c59_sf_marshallOut(void *chartInstanceVoid, void
  *c59_inData)
{
  const mxArray *c59_mxArrayOutData = NULL;
  real32_T c59_u;
  const mxArray *c59_y = NULL;
  SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c59_mxArrayOutData = NULL;
  c59_u = *(real32_T *)c59_inData;
  c59_y = NULL;
  sf_mex_assign(&c59_y, sf_mex_create("y", &c59_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c59_mxArrayOutData, c59_y, false);
  return c59_mxArrayOutData;
}

static real32_T c59_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_life, const char_T *c59_identifier)
{
  real32_T c59_y;
  emlrtMsgIdentifier c59_thisId;
  c59_thisId.fIdentifier = c59_identifier;
  c59_thisId.fParent = NULL;
  c59_y = c59_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c59_life),
    &c59_thisId);
  sf_mex_destroy(&c59_life);
  return c59_y;
}

static real32_T c59_b_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId)
{
  real32_T c59_y;
  real32_T c59_f0;
  (void)chartInstance;
  sf_mex_import(c59_parentId, sf_mex_dup(c59_u), &c59_f0, 1, 1, 0U, 0, 0U, 0);
  c59_y = c59_f0;
  sf_mex_destroy(&c59_u);
  return c59_y;
}

static void c59_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c59_mxArrayInData, const char_T *c59_varName, void *c59_outData)
{
  const mxArray *c59_life;
  const char_T *c59_identifier;
  emlrtMsgIdentifier c59_thisId;
  real32_T c59_y;
  SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c59_life = sf_mex_dup(c59_mxArrayInData);
  c59_identifier = c59_varName;
  c59_thisId.fIdentifier = c59_identifier;
  c59_thisId.fParent = NULL;
  c59_y = c59_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c59_life),
    &c59_thisId);
  sf_mex_destroy(&c59_life);
  *(real32_T *)c59_outData = c59_y;
  sf_mex_destroy(&c59_mxArrayInData);
}

static const mxArray *c59_b_sf_marshallOut(void *chartInstanceVoid, void
  *c59_inData)
{
  const mxArray *c59_mxArrayOutData = NULL;
  real_T c59_u;
  const mxArray *c59_y = NULL;
  SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c59_mxArrayOutData = NULL;
  c59_u = *(real_T *)c59_inData;
  c59_y = NULL;
  sf_mex_assign(&c59_y, sf_mex_create("y", &c59_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c59_mxArrayOutData, c59_y, false);
  return c59_mxArrayOutData;
}

static real_T c59_c_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId)
{
  real_T c59_y;
  real_T c59_d0;
  (void)chartInstance;
  sf_mex_import(c59_parentId, sf_mex_dup(c59_u), &c59_d0, 1, 0, 0U, 0, 0U, 0);
  c59_y = c59_d0;
  sf_mex_destroy(&c59_u);
  return c59_y;
}

static void c59_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c59_mxArrayInData, const char_T *c59_varName, void *c59_outData)
{
  const mxArray *c59_nargout;
  const char_T *c59_identifier;
  emlrtMsgIdentifier c59_thisId;
  real_T c59_y;
  SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c59_nargout = sf_mex_dup(c59_mxArrayInData);
  c59_identifier = c59_varName;
  c59_thisId.fIdentifier = c59_identifier;
  c59_thisId.fParent = NULL;
  c59_y = c59_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c59_nargout),
    &c59_thisId);
  sf_mex_destroy(&c59_nargout);
  *(real_T *)c59_outData = c59_y;
  sf_mex_destroy(&c59_mxArrayInData);
}

const mxArray
  *sf_c59_six_plus_six_AcmsteeringV09_main_2lfrf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c59_nameCaptureInfo = NULL;
  c59_nameCaptureInfo = NULL;
  sf_mex_assign(&c59_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c59_nameCaptureInfo;
}

static const mxArray *c59_c_sf_marshallOut(void *chartInstanceVoid, void
  *c59_inData)
{
  const mxArray *c59_mxArrayOutData = NULL;
  int32_T c59_u;
  const mxArray *c59_y = NULL;
  SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c59_mxArrayOutData = NULL;
  c59_u = *(int32_T *)c59_inData;
  c59_y = NULL;
  sf_mex_assign(&c59_y, sf_mex_create("y", &c59_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c59_mxArrayOutData, c59_y, false);
  return c59_mxArrayOutData;
}

static int32_T c59_d_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId)
{
  int32_T c59_y;
  int32_T c59_i0;
  (void)chartInstance;
  sf_mex_import(c59_parentId, sf_mex_dup(c59_u), &c59_i0, 1, 6, 0U, 0, 0U, 0);
  c59_y = c59_i0;
  sf_mex_destroy(&c59_u);
  return c59_y;
}

static void c59_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c59_mxArrayInData, const char_T *c59_varName, void *c59_outData)
{
  const mxArray *c59_b_sfEvent;
  const char_T *c59_identifier;
  emlrtMsgIdentifier c59_thisId;
  int32_T c59_y;
  SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c59_b_sfEvent = sf_mex_dup(c59_mxArrayInData);
  c59_identifier = c59_varName;
  c59_thisId.fIdentifier = c59_identifier;
  c59_thisId.fParent = NULL;
  c59_y = c59_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c59_b_sfEvent),
    &c59_thisId);
  sf_mex_destroy(&c59_b_sfEvent);
  *(int32_T *)c59_outData = c59_y;
  sf_mex_destroy(&c59_mxArrayInData);
}

static uint8_T c59_e_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_b_is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c59_identifier)
{
  uint8_T c59_y;
  emlrtMsgIdentifier c59_thisId;
  c59_thisId.fIdentifier = c59_identifier;
  c59_thisId.fParent = NULL;
  c59_y = c59_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c59_b_is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf), &c59_thisId);
  sf_mex_destroy(&c59_b_is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf);
  return c59_y;
}

static uint8_T c59_f_emlrt_marshallIn
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c59_u, const emlrtMsgIdentifier *c59_parentId)
{
  uint8_T c59_y;
  uint8_T c59_u0;
  (void)chartInstance;
  sf_mex_import(c59_parentId, sf_mex_dup(c59_u), &c59_u0, 1, 3, 0U, 0, 0U, 0);
  c59_y = c59_u0;
  sf_mex_destroy(&c59_u);
  return c59_y;
}

static void init_dsm_address_info
  (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
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

void sf_c59_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(236949923U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(19368107U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1343005286U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(612740664U);
}

mxArray *sf_c59_six_plus_six_AcmsteeringV09_main_2lfrf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("hCfRJWSbzBOyVEkMrqSJFD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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

mxArray *sf_c59_six_plus_six_AcmsteeringV09_main_2lfrf_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c59_six_plus_six_AcmsteeringV09_main_2lfrf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c59_six_plus_six_AcmsteeringV09_main_2lfrf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"life\",},{M[8],M[0],T\"is_active_c59_six_plus_six_AcmsteeringV09_main_2lfrf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c59_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
           59,
           1,
           1,
           0,
           2,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"life_pre");
          _SFD_SET_DATA_PROPS(1,2,0,1,"life");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,104);
        _SFD_CV_INIT_EML_IF(0,1,0,65,76,-1,100);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c59_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c59_sf_marshallOut,(MexInFcnForType)c59_sf_marshallIn);

        {
          real32_T *c59_life_pre;
          real32_T *c59_life;
          c59_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c59_life_pre = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c59_life_pre);
          _SFD_SET_DATA_VALUE_PTR(1U, c59_life);
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
  return "PqGSbzsTwna8FkKzXLt2iG";
}

static void sf_opaque_initialize_c59_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
  initialize_c59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c59_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  enable_c59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c59_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  disable_c59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c59_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  sf_gateway_c59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c59_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
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

extern void sf_internal_set_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
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
    sf_get_sim_state_info_c59_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf(S);
}

static void sf_opaque_set_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf(S, st);
}

static void sf_opaque_terminate_c59_six_plus_six_AcmsteeringV09_main_2lfrf(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    }

    finalize_c59_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
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
  initSimStructsc59_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c59_six_plus_six_AcmsteeringV09_main_2lfrf
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
    initialize_params_c59_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c59_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      59);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,59,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,59,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,59);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,59,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,59,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,59);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3580122502U));
  ssSetChecksum1(S,(2581719128U));
  ssSetChecksum2(S,(4123034341U));
  ssSetChecksum3(S,(2115902381U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c59_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c59_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    utMalloc(sizeof(SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc59_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c59_six_plus_six_AcmsteeringV09_main_2lfrf;
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

void c59_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c59_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c59_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c59_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c59_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}