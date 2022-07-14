/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lfrf_sfun.h"
#include "c64_six_plus_six_AcmsteeringV09_main_2lfrf.h"
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
static const char * c64_debug_family_names[4] = { "nargin", "nargout", "speed",
  "speed_out" };

/* Function Declarations */
static void initialize_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initialize_params_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void enable_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void disable_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void c64_update_debugger_state_c64_six_plus_six_AcmsteeringV09_main_2
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void set_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_st);
static void finalize_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void sf_gateway_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void initSimStructsc64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c64_machineNumber, uint32_T
  c64_chartNumber, uint32_T c64_instanceNumber);
static const mxArray *c64_sf_marshallOut(void *chartInstanceVoid, void
  *c64_inData);
static real_T c64_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_speed_out, const char_T *c64_identifier);
static real_T c64_b_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_u, const emlrtMsgIdentifier *c64_parentId);
static void c64_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c64_mxArrayInData, const char_T *c64_varName, void *c64_outData);
static const mxArray *c64_b_sf_marshallOut(void *chartInstanceVoid, void
  *c64_inData);
static int32_T c64_c_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_u, const emlrtMsgIdentifier *c64_parentId);
static void c64_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c64_mxArrayInData, const char_T *c64_varName, void *c64_outData);
static uint8_T c64_d_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_b_is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c64_identifier);
static uint8_T c64_e_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_u, const emlrtMsgIdentifier *c64_parentId);
static void init_dsm_address_info
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  chartInstance->c64_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c64_is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf = 0U;
}

static void initialize_params_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c64_update_debugger_state_c64_six_plus_six_AcmsteeringV09_main_2
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  const mxArray *c64_st;
  const mxArray *c64_y = NULL;
  real_T c64_hoistedGlobal;
  real_T c64_u;
  const mxArray *c64_b_y = NULL;
  uint8_T c64_b_hoistedGlobal;
  uint8_T c64_b_u;
  const mxArray *c64_c_y = NULL;
  real_T *c64_speed_out;
  c64_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c64_st = NULL;
  c64_st = NULL;
  c64_y = NULL;
  sf_mex_assign(&c64_y, sf_mex_createcellmatrix(2, 1), false);
  c64_hoistedGlobal = *c64_speed_out;
  c64_u = c64_hoistedGlobal;
  c64_b_y = NULL;
  sf_mex_assign(&c64_b_y, sf_mex_create("y", &c64_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c64_y, 0, c64_b_y);
  c64_b_hoistedGlobal =
    chartInstance->c64_is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  c64_b_u = c64_b_hoistedGlobal;
  c64_c_y = NULL;
  sf_mex_assign(&c64_c_y, sf_mex_create("y", &c64_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c64_y, 1, c64_c_y);
  sf_mex_assign(&c64_st, c64_y, false);
  return c64_st;
}

static void set_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_st)
{
  const mxArray *c64_u;
  real_T *c64_speed_out;
  c64_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c64_doneDoubleBufferReInit = true;
  c64_u = sf_mex_dup(c64_st);
  *c64_speed_out = c64_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c64_u, 0)), "speed_out");
  chartInstance->c64_is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf =
    c64_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c64_u, 1)),
    "is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf");
  sf_mex_destroy(&c64_u);
  c64_update_debugger_state_c64_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c64_st);
}

static void finalize_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  real_T c64_hoistedGlobal;
  real_T c64_speed;
  uint32_T c64_debug_family_var_map[4];
  real_T c64_nargin = 1.0;
  real_T c64_nargout = 1.0;
  real_T c64_speed_out;
  real_T *c64_b_speed;
  real_T *c64_b_speed_out;
  c64_b_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c64_b_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 63U, chartInstance->c64_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c64_b_speed, 0U);
  chartInstance->c64_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 63U, chartInstance->c64_sfEvent);
  c64_hoistedGlobal = *c64_b_speed;
  c64_speed = c64_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c64_debug_family_names,
    c64_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c64_nargin, 0U, c64_sf_marshallOut,
    c64_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c64_nargout, 1U, c64_sf_marshallOut,
    c64_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c64_speed, 2U, c64_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c64_speed_out, 3U, c64_sf_marshallOut,
    c64_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c64_sfEvent, 2);
  if (CV_EML_IF(0, 1, 0, c64_speed > 32768.0)) {
    _SFD_EML_CALL(0U, chartInstance->c64_sfEvent, 3);
    c64_speed_out = c64_speed - 65535.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c64_sfEvent, 4);
    c64_speed_out = c64_speed;
  }

  _SFD_EML_CALL(0U, chartInstance->c64_sfEvent, -4);
  _SFD_SYMBOL_SCOPE_POP();
  *c64_b_speed_out = c64_speed_out;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 63U, chartInstance->c64_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c64_b_speed_out, 1U);
}

static void initSimStructsc64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c64_machineNumber, uint32_T
  c64_chartNumber, uint32_T c64_instanceNumber)
{
  (void)c64_machineNumber;
  (void)c64_chartNumber;
  (void)c64_instanceNumber;
}

static const mxArray *c64_sf_marshallOut(void *chartInstanceVoid, void
  *c64_inData)
{
  const mxArray *c64_mxArrayOutData = NULL;
  real_T c64_u;
  const mxArray *c64_y = NULL;
  SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c64_mxArrayOutData = NULL;
  c64_u = *(real_T *)c64_inData;
  c64_y = NULL;
  sf_mex_assign(&c64_y, sf_mex_create("y", &c64_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c64_mxArrayOutData, c64_y, false);
  return c64_mxArrayOutData;
}

static real_T c64_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_speed_out, const char_T *c64_identifier)
{
  real_T c64_y;
  emlrtMsgIdentifier c64_thisId;
  c64_thisId.fIdentifier = c64_identifier;
  c64_thisId.fParent = NULL;
  c64_y = c64_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c64_speed_out),
    &c64_thisId);
  sf_mex_destroy(&c64_speed_out);
  return c64_y;
}

static real_T c64_b_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_u, const emlrtMsgIdentifier *c64_parentId)
{
  real_T c64_y;
  real_T c64_d0;
  (void)chartInstance;
  sf_mex_import(c64_parentId, sf_mex_dup(c64_u), &c64_d0, 1, 0, 0U, 0, 0U, 0);
  c64_y = c64_d0;
  sf_mex_destroy(&c64_u);
  return c64_y;
}

static void c64_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c64_mxArrayInData, const char_T *c64_varName, void *c64_outData)
{
  const mxArray *c64_speed_out;
  const char_T *c64_identifier;
  emlrtMsgIdentifier c64_thisId;
  real_T c64_y;
  SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c64_speed_out = sf_mex_dup(c64_mxArrayInData);
  c64_identifier = c64_varName;
  c64_thisId.fIdentifier = c64_identifier;
  c64_thisId.fParent = NULL;
  c64_y = c64_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c64_speed_out),
    &c64_thisId);
  sf_mex_destroy(&c64_speed_out);
  *(real_T *)c64_outData = c64_y;
  sf_mex_destroy(&c64_mxArrayInData);
}

const mxArray
  *sf_c64_six_plus_six_AcmsteeringV09_main_2lfrf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c64_nameCaptureInfo = NULL;
  c64_nameCaptureInfo = NULL;
  sf_mex_assign(&c64_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c64_nameCaptureInfo;
}

static const mxArray *c64_b_sf_marshallOut(void *chartInstanceVoid, void
  *c64_inData)
{
  const mxArray *c64_mxArrayOutData = NULL;
  int32_T c64_u;
  const mxArray *c64_y = NULL;
  SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c64_mxArrayOutData = NULL;
  c64_u = *(int32_T *)c64_inData;
  c64_y = NULL;
  sf_mex_assign(&c64_y, sf_mex_create("y", &c64_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c64_mxArrayOutData, c64_y, false);
  return c64_mxArrayOutData;
}

static int32_T c64_c_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_u, const emlrtMsgIdentifier *c64_parentId)
{
  int32_T c64_y;
  int32_T c64_i0;
  (void)chartInstance;
  sf_mex_import(c64_parentId, sf_mex_dup(c64_u), &c64_i0, 1, 6, 0U, 0, 0U, 0);
  c64_y = c64_i0;
  sf_mex_destroy(&c64_u);
  return c64_y;
}

static void c64_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c64_mxArrayInData, const char_T *c64_varName, void *c64_outData)
{
  const mxArray *c64_b_sfEvent;
  const char_T *c64_identifier;
  emlrtMsgIdentifier c64_thisId;
  int32_T c64_y;
  SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  chartInstance = (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    chartInstanceVoid;
  c64_b_sfEvent = sf_mex_dup(c64_mxArrayInData);
  c64_identifier = c64_varName;
  c64_thisId.fIdentifier = c64_identifier;
  c64_thisId.fParent = NULL;
  c64_y = c64_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c64_b_sfEvent),
    &c64_thisId);
  sf_mex_destroy(&c64_b_sfEvent);
  *(int32_T *)c64_outData = c64_y;
  sf_mex_destroy(&c64_mxArrayInData);
}

static uint8_T c64_d_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_b_is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf,
   const char_T *c64_identifier)
{
  uint8_T c64_y;
  emlrtMsgIdentifier c64_thisId;
  c64_thisId.fIdentifier = c64_identifier;
  c64_thisId.fParent = NULL;
  c64_y = c64_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c64_b_is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf), &c64_thisId);
  sf_mex_destroy(&c64_b_is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf);
  return c64_y;
}

static uint8_T c64_e_emlrt_marshallIn
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance,
   const mxArray *c64_u, const emlrtMsgIdentifier *c64_parentId)
{
  uint8_T c64_y;
  uint8_T c64_u0;
  (void)chartInstance;
  sf_mex_import(c64_parentId, sf_mex_dup(c64_u), &c64_u0, 1, 3, 0U, 0, 0U, 0);
  c64_y = c64_u0;
  sf_mex_destroy(&c64_u);
  return c64_y;
}

static void init_dsm_address_info
  (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance)
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

void sf_c64_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(838165629U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(921350203U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1696855142U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3829808477U);
}

mxArray *sf_c64_six_plus_six_AcmsteeringV09_main_2lfrf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("b6aTV8l2Y1xC6eEGfs9zPH");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

mxArray *sf_c64_six_plus_six_AcmsteeringV09_main_2lfrf_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c64_six_plus_six_AcmsteeringV09_main_2lfrf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c64_six_plus_six_AcmsteeringV09_main_2lfrf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[7],T\"speed_out\",},{M[8],M[0],T\"is_active_c64_six_plus_six_AcmsteeringV09_main_2lfrf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c64_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lfrfMachineNumber_,
           64,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"speed");
          _SFD_SET_DATA_PROPS(1,2,0,1,"speed_out");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,127);
        _SFD_CV_INIT_EML_IF(0,1,0,44,58,94,123);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c64_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c64_sf_marshallOut,(MexInFcnForType)c64_sf_marshallIn);

        {
          real_T *c64_speed;
          real_T *c64_speed_out;
          c64_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c64_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c64_speed);
          _SFD_SET_DATA_VALUE_PTR(1U, c64_speed_out);
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
  return "HHLzMV8o5TfPX7myKJDws";
}

static void sf_opaque_initialize_c64_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
  initialize_c64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c64_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  enable_c64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c64_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  disable_c64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c64_six_plus_six_AcmsteeringV09_main_2lfrf(void
  *chartInstanceVar)
{
  sf_gateway_c64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c64_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
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

extern void sf_internal_set_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
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
    sf_get_sim_state_info_c64_six_plus_six_AcmsteeringV09_main_2lfrf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf(S);
}

static void sf_opaque_set_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf(S, st);
}

static void sf_opaque_terminate_c64_six_plus_six_AcmsteeringV09_main_2lfrf(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    }

    finalize_c64_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
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
  initSimStructsc64_six_plus_six_AcmsteeringV09_main_2lfrf
    ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c64_six_plus_six_AcmsteeringV09_main_2lfrf
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
    initialize_params_c64_six_plus_six_AcmsteeringV09_main_2lfrf
      ((SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c64_six_plus_six_AcmsteeringV09_main_2lfrf
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lfrf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      64);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,64,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,64,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,64);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,64,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,64,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,64);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2149537183U));
  ssSetChecksum1(S,(4277353472U));
  ssSetChecksum2(S,(102749005U));
  ssSetChecksum3(S,(2145647340U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c64_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c64_six_plus_six_AcmsteeringV09_main_2lfrf(SimStruct *S)
{
  SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct *)
    utMalloc(sizeof(SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc64_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c64_six_plus_six_AcmsteeringV09_main_2lfrf;
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

void c64_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c64_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c64_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c64_six_plus_six_AcmsteeringV09_main_2lfrf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c64_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
