/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun.h"
#include "c54_six_plus_six_AcmsteeringV09_main_2lflm.h"
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
static const char * c54_debug_family_names[4] = { "nargin", "nargout",
  "life_pre", "life" };

/* Function Declarations */
static void initialize_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initialize_params_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void enable_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void disable_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c54_update_debugger_state_c54_six_plus_six_AcmsteeringV09_main_2
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void set_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_st);
static void finalize_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void sf_gateway_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initSimStructsc54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c54_machineNumber, uint32_T
  c54_chartNumber, uint32_T c54_instanceNumber);
static const mxArray *c54_sf_marshallOut(void *chartInstanceVoid, void
  *c54_inData);
static real32_T c54_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_life, const char_T *c54_identifier);
static real32_T c54_b_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId);
static void c54_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c54_mxArrayInData, const char_T *c54_varName, void *c54_outData);
static const mxArray *c54_b_sf_marshallOut(void *chartInstanceVoid, void
  *c54_inData);
static real_T c54_c_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId);
static void c54_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c54_mxArrayInData, const char_T *c54_varName, void *c54_outData);
static const mxArray *c54_c_sf_marshallOut(void *chartInstanceVoid, void
  *c54_inData);
static int32_T c54_d_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId);
static void c54_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c54_mxArrayInData, const char_T *c54_varName, void *c54_outData);
static uint8_T c54_e_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_b_is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c54_identifier);
static uint8_T c54_f_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId);
static void init_dsm_address_info
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  chartInstance->c54_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c54_is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm = 0U;
}

static void initialize_params_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c54_update_debugger_state_c54_six_plus_six_AcmsteeringV09_main_2
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  const mxArray *c54_st;
  const mxArray *c54_y = NULL;
  real32_T c54_hoistedGlobal;
  real32_T c54_u;
  const mxArray *c54_b_y = NULL;
  uint8_T c54_b_hoistedGlobal;
  uint8_T c54_b_u;
  const mxArray *c54_c_y = NULL;
  real32_T *c54_life;
  c54_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c54_st = NULL;
  c54_st = NULL;
  c54_y = NULL;
  sf_mex_assign(&c54_y, sf_mex_createcellmatrix(2, 1), false);
  c54_hoistedGlobal = *c54_life;
  c54_u = c54_hoistedGlobal;
  c54_b_y = NULL;
  sf_mex_assign(&c54_b_y, sf_mex_create("y", &c54_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c54_y, 0, c54_b_y);
  c54_b_hoistedGlobal =
    chartInstance->c54_is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  c54_b_u = c54_b_hoistedGlobal;
  c54_c_y = NULL;
  sf_mex_assign(&c54_c_y, sf_mex_create("y", &c54_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c54_y, 1, c54_c_y);
  sf_mex_assign(&c54_st, c54_y, false);
  return c54_st;
}

static void set_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_st)
{
  const mxArray *c54_u;
  real32_T *c54_life;
  c54_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c54_doneDoubleBufferReInit = true;
  c54_u = sf_mex_dup(c54_st);
  *c54_life = c54_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c54_u, 0)), "life");
  chartInstance->c54_is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm =
    c54_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c54_u, 1)),
    "is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm");
  sf_mex_destroy(&c54_u);
  c54_update_debugger_state_c54_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c54_st);
}

static void finalize_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real32_T c54_hoistedGlobal;
  real32_T c54_life_pre;
  uint32_T c54_debug_family_var_map[4];
  real_T c54_nargin = 1.0;
  real_T c54_nargout = 1.0;
  real32_T c54_life;
  real32_T *c54_b_life_pre;
  real32_T *c54_b_life;
  c54_b_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c54_b_life_pre = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 53U, chartInstance->c54_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c54_b_life_pre, 0U);
  chartInstance->c54_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 53U, chartInstance->c54_sfEvent);
  c54_hoistedGlobal = *c54_b_life_pre;
  c54_life_pre = c54_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c54_debug_family_names,
    c54_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c54_nargin, 0U, c54_b_sf_marshallOut,
    c54_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c54_nargout, 1U, c54_b_sf_marshallOut,
    c54_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c54_life_pre, 2U, c54_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c54_life, 3U, c54_sf_marshallOut,
    c54_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c54_sfEvent, 3);
  c54_life = c54_life_pre + 1.0F;
  _SFD_EML_CALL(0U, chartInstance->c54_sfEvent, 4);
  if (CV_EML_IF(0, 1, 0, c54_life > 255.0F)) {
    _SFD_EML_CALL(0U, chartInstance->c54_sfEvent, 5);
    c54_life = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c54_sfEvent, -5);
  _SFD_SYMBOL_SCOPE_POP();
  *c54_b_life = c54_life;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 53U, chartInstance->c54_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c54_b_life, 1U);
}

static void initSimStructsc54_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c54_machineNumber, uint32_T
  c54_chartNumber, uint32_T c54_instanceNumber)
{
  (void)c54_machineNumber;
  (void)c54_chartNumber;
  (void)c54_instanceNumber;
}

static const mxArray *c54_sf_marshallOut(void *chartInstanceVoid, void
  *c54_inData)
{
  const mxArray *c54_mxArrayOutData = NULL;
  real32_T c54_u;
  const mxArray *c54_y = NULL;
  SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c54_mxArrayOutData = NULL;
  c54_u = *(real32_T *)c54_inData;
  c54_y = NULL;
  sf_mex_assign(&c54_y, sf_mex_create("y", &c54_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c54_mxArrayOutData, c54_y, false);
  return c54_mxArrayOutData;
}

static real32_T c54_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_life, const char_T *c54_identifier)
{
  real32_T c54_y;
  emlrtMsgIdentifier c54_thisId;
  c54_thisId.fIdentifier = c54_identifier;
  c54_thisId.fParent = NULL;
  c54_y = c54_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c54_life),
    &c54_thisId);
  sf_mex_destroy(&c54_life);
  return c54_y;
}

static real32_T c54_b_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId)
{
  real32_T c54_y;
  real32_T c54_f0;
  (void)chartInstance;
  sf_mex_import(c54_parentId, sf_mex_dup(c54_u), &c54_f0, 1, 1, 0U, 0, 0U, 0);
  c54_y = c54_f0;
  sf_mex_destroy(&c54_u);
  return c54_y;
}

static void c54_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c54_mxArrayInData, const char_T *c54_varName, void *c54_outData)
{
  const mxArray *c54_life;
  const char_T *c54_identifier;
  emlrtMsgIdentifier c54_thisId;
  real32_T c54_y;
  SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c54_life = sf_mex_dup(c54_mxArrayInData);
  c54_identifier = c54_varName;
  c54_thisId.fIdentifier = c54_identifier;
  c54_thisId.fParent = NULL;
  c54_y = c54_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c54_life),
    &c54_thisId);
  sf_mex_destroy(&c54_life);
  *(real32_T *)c54_outData = c54_y;
  sf_mex_destroy(&c54_mxArrayInData);
}

static const mxArray *c54_b_sf_marshallOut(void *chartInstanceVoid, void
  *c54_inData)
{
  const mxArray *c54_mxArrayOutData = NULL;
  real_T c54_u;
  const mxArray *c54_y = NULL;
  SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c54_mxArrayOutData = NULL;
  c54_u = *(real_T *)c54_inData;
  c54_y = NULL;
  sf_mex_assign(&c54_y, sf_mex_create("y", &c54_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c54_mxArrayOutData, c54_y, false);
  return c54_mxArrayOutData;
}

static real_T c54_c_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId)
{
  real_T c54_y;
  real_T c54_d0;
  (void)chartInstance;
  sf_mex_import(c54_parentId, sf_mex_dup(c54_u), &c54_d0, 1, 0, 0U, 0, 0U, 0);
  c54_y = c54_d0;
  sf_mex_destroy(&c54_u);
  return c54_y;
}

static void c54_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c54_mxArrayInData, const char_T *c54_varName, void *c54_outData)
{
  const mxArray *c54_nargout;
  const char_T *c54_identifier;
  emlrtMsgIdentifier c54_thisId;
  real_T c54_y;
  SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c54_nargout = sf_mex_dup(c54_mxArrayInData);
  c54_identifier = c54_varName;
  c54_thisId.fIdentifier = c54_identifier;
  c54_thisId.fParent = NULL;
  c54_y = c54_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c54_nargout),
    &c54_thisId);
  sf_mex_destroy(&c54_nargout);
  *(real_T *)c54_outData = c54_y;
  sf_mex_destroy(&c54_mxArrayInData);
}

const mxArray
  *sf_c54_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c54_nameCaptureInfo = NULL;
  c54_nameCaptureInfo = NULL;
  sf_mex_assign(&c54_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c54_nameCaptureInfo;
}

static const mxArray *c54_c_sf_marshallOut(void *chartInstanceVoid, void
  *c54_inData)
{
  const mxArray *c54_mxArrayOutData = NULL;
  int32_T c54_u;
  const mxArray *c54_y = NULL;
  SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c54_mxArrayOutData = NULL;
  c54_u = *(int32_T *)c54_inData;
  c54_y = NULL;
  sf_mex_assign(&c54_y, sf_mex_create("y", &c54_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c54_mxArrayOutData, c54_y, false);
  return c54_mxArrayOutData;
}

static int32_T c54_d_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId)
{
  int32_T c54_y;
  int32_T c54_i0;
  (void)chartInstance;
  sf_mex_import(c54_parentId, sf_mex_dup(c54_u), &c54_i0, 1, 6, 0U, 0, 0U, 0);
  c54_y = c54_i0;
  sf_mex_destroy(&c54_u);
  return c54_y;
}

static void c54_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c54_mxArrayInData, const char_T *c54_varName, void *c54_outData)
{
  const mxArray *c54_b_sfEvent;
  const char_T *c54_identifier;
  emlrtMsgIdentifier c54_thisId;
  int32_T c54_y;
  SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c54_b_sfEvent = sf_mex_dup(c54_mxArrayInData);
  c54_identifier = c54_varName;
  c54_thisId.fIdentifier = c54_identifier;
  c54_thisId.fParent = NULL;
  c54_y = c54_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c54_b_sfEvent),
    &c54_thisId);
  sf_mex_destroy(&c54_b_sfEvent);
  *(int32_T *)c54_outData = c54_y;
  sf_mex_destroy(&c54_mxArrayInData);
}

static uint8_T c54_e_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_b_is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c54_identifier)
{
  uint8_T c54_y;
  emlrtMsgIdentifier c54_thisId;
  c54_thisId.fIdentifier = c54_identifier;
  c54_thisId.fParent = NULL;
  c54_y = c54_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c54_b_is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm), &c54_thisId);
  sf_mex_destroy(&c54_b_is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm);
  return c54_y;
}

static uint8_T c54_f_emlrt_marshallIn
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c54_u, const emlrtMsgIdentifier *c54_parentId)
{
  uint8_T c54_y;
  uint8_T c54_u0;
  (void)chartInstance;
  sf_mex_import(c54_parentId, sf_mex_dup(c54_u), &c54_u0, 1, 3, 0U, 0, 0U, 0);
  c54_y = c54_u0;
  sf_mex_destroy(&c54_u);
  return c54_y;
}

static void init_dsm_address_info
  (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
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

void sf_c54_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(236949923U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(19368107U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1343005286U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(612740664U);
}

mxArray *sf_c54_six_plus_six_AcmsteeringV09_main_2lflm_get_autoinheritance_info
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

mxArray *sf_c54_six_plus_six_AcmsteeringV09_main_2lflm_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c54_six_plus_six_AcmsteeringV09_main_2lflm_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c54_six_plus_six_AcmsteeringV09_main_2lflm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"life\",},{M[8],M[0],T\"is_active_c54_six_plus_six_AcmsteeringV09_main_2lflm\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c54_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           54,
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
          (MexFcnForType)c54_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c54_sf_marshallOut,(MexInFcnForType)c54_sf_marshallIn);

        {
          real32_T *c54_life_pre;
          real32_T *c54_life;
          c54_life = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c54_life_pre = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c54_life_pre);
          _SFD_SET_DATA_VALUE_PTR(1U, c54_life);
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
  return "PqGSbzsTwna8FkKzXLt2iG";
}

static void sf_opaque_initialize_c54_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
  initialize_c54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c54_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  enable_c54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c54_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  disable_c54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c54_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  sf_gateway_c54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c54_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
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

extern void sf_internal_set_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
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
    sf_get_sim_state_info_c54_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm(S);
}

static void sf_opaque_set_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm(S, st);
}

static void sf_opaque_terminate_c54_six_plus_six_AcmsteeringV09_main_2lflm(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    }

    finalize_c54_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
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
  initSimStructsc54_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c54_six_plus_six_AcmsteeringV09_main_2lflm
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
    initialize_params_c54_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c54_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      54);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,54,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,54,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,54);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,54,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,54,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,54);
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

static void mdlRTW_c54_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c54_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    utMalloc(sizeof(SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc54_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c54_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c54_six_plus_six_AcmsteeringV09_main_2lflm;
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

void c54_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c54_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c54_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c54_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c54_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
