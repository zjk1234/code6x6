/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun.h"
#include "c21_six_plus_six_AcmsteeringV09_main_1lf.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c21_debug_family_names[4] = { "nargin", "nargout", "speed",
  "speed_out" };

/* Function Declarations */
static void initialize_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initialize_params_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void enable_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void disable_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c21_update_debugger_state_c21_six_plus_six_AcmsteeringV09_main_1
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void set_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_st);
static void finalize_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void sf_gateway_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initSimStructsc21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber, uint32_T c21_instanceNumber);
static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static real_T c21_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_speed_out, const char_T *c21_identifier);
static real_T c21_b_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static int32_T c21_c_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static uint8_T c21_d_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_b_is_active_c21_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c21_identifier);
static uint8_T c21_e_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void init_dsm_address_info
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  chartInstance->c21_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c21_is_active_c21_six_plus_six_AcmsteeringV09_main_1lf = 0U;
}

static void initialize_params_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c21_update_debugger_state_c21_six_plus_six_AcmsteeringV09_main_1
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  real_T c21_hoistedGlobal;
  real_T c21_u;
  const mxArray *c21_b_y = NULL;
  uint8_T c21_b_hoistedGlobal;
  uint8_T c21_b_u;
  const mxArray *c21_c_y = NULL;
  real_T *c21_speed_out;
  c21_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellmatrix(2, 1), false);
  c21_hoistedGlobal = *c21_speed_out;
  c21_u = c21_hoistedGlobal;
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_b_hoistedGlobal =
    chartInstance->c21_is_active_c21_six_plus_six_AcmsteeringV09_main_1lf;
  c21_b_u = c21_b_hoistedGlobal;
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y", &c21_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c21_y, 1, c21_c_y);
  sf_mex_assign(&c21_st, c21_y, false);
  return c21_st;
}

static void set_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_st)
{
  const mxArray *c21_u;
  real_T *c21_speed_out;
  c21_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c21_doneDoubleBufferReInit = true;
  c21_u = sf_mex_dup(c21_st);
  *c21_speed_out = c21_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c21_u, 0)), "speed_out");
  chartInstance->c21_is_active_c21_six_plus_six_AcmsteeringV09_main_1lf =
    c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c21_u, 1)),
    "is_active_c21_six_plus_six_AcmsteeringV09_main_1lf");
  sf_mex_destroy(&c21_u);
  c21_update_debugger_state_c21_six_plus_six_AcmsteeringV09_main_1(chartInstance);
  sf_mex_destroy(&c21_st);
}

static void finalize_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real_T c21_hoistedGlobal;
  real_T c21_speed;
  uint32_T c21_debug_family_var_map[4];
  real_T c21_nargin = 1.0;
  real_T c21_nargout = 1.0;
  real_T c21_speed_out;
  real_T *c21_b_speed;
  real_T *c21_b_speed_out;
  c21_b_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_b_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c21_b_speed, 0U);
  chartInstance->c21_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  c21_hoistedGlobal = *c21_b_speed;
  c21_speed = c21_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c21_debug_family_names,
    c21_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_nargin, 0U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_nargout, 1U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c21_speed, 2U, c21_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_speed_out, 3U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 2);
  if (CV_EML_IF(0, 1, 0, c21_speed > 32768.0)) {
    _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 3);
    c21_speed_out = c21_speed - 65535.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 4);
    c21_speed_out = c21_speed;
  }

  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, -4);
  _SFD_SYMBOL_SCOPE_POP();
  *c21_b_speed_out = c21_speed_out;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c21_b_speed_out, 1U);
}

static void initSimStructsc21_six_plus_six_AcmsteeringV09_main_1lf
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber, uint32_T c21_instanceNumber)
{
  (void)c21_machineNumber;
  (void)c21_chartNumber;
  (void)c21_instanceNumber;
}

static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData = NULL;
  real_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_u = *(real_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static real_T c21_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_speed_out, const char_T *c21_identifier)
{
  real_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_speed_out),
    &c21_thisId);
  sf_mex_destroy(&c21_speed_out);
  return c21_y;
}

static real_T c21_b_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  real_T c21_y;
  real_T c21_d0;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_d0, 1, 0, 0U, 0, 0U, 0);
  c21_y = c21_d0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_speed_out;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y;
  SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c21_speed_out = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_speed_out),
    &c21_thisId);
  sf_mex_destroy(&c21_speed_out);
  *(real_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

const mxArray
  *sf_c21_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  sf_mex_assign(&c21_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c21_nameCaptureInfo;
}

static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData = NULL;
  int32_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_u = *(int32_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static int32_T c21_c_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  int32_T c21_y;
  int32_T c21_i0;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_i0, 1, 6, 0U, 0, 0U, 0);
  c21_y = c21_i0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_sfEvent;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  int32_T c21_y;
  SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c21_b_sfEvent = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_sfEvent),
    &c21_thisId);
  sf_mex_destroy(&c21_b_sfEvent);
  *(int32_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static uint8_T c21_d_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_b_is_active_c21_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c21_identifier)
{
  uint8_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c21_b_is_active_c21_six_plus_six_AcmsteeringV09_main_1lf), &c21_thisId);
  sf_mex_destroy(&c21_b_is_active_c21_six_plus_six_AcmsteeringV09_main_1lf);
  return c21_y;
}

static uint8_T c21_e_emlrt_marshallIn
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint8_T c21_y;
  uint8_T c21_u0;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_u0, 1, 3, 0U, 0, 0U, 0);
  c21_y = c21_u0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void init_dsm_address_info
  (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
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

void sf_c21_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(838165629U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(921350203U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1696855142U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3829808477U);
}

mxArray *sf_c21_six_plus_six_AcmsteeringV09_main_1lf_get_autoinheritance_info
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

mxArray *sf_c21_six_plus_six_AcmsteeringV09_main_1lf_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c21_six_plus_six_AcmsteeringV09_main_1lf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c21_six_plus_six_AcmsteeringV09_main_1lf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[7],T\"speed_out\",},{M[8],M[0],T\"is_active_c21_six_plus_six_AcmsteeringV09_main_1lf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           21,
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
          (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
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
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)c21_sf_marshallIn);

        {
          real_T *c21_speed;
          real_T *c21_speed_out;
          c21_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c21_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c21_speed);
          _SFD_SET_DATA_VALUE_PTR(1U, c21_speed_out);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "HHLzMV8o5TfPX7myKJDws";
}

static void sf_opaque_initialize_c21_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
  initialize_c21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c21_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  enable_c21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c21_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  disable_c21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c21_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  sf_gateway_c21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c21_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
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

extern void sf_internal_set_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
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
    sf_get_sim_state_info_c21_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf(SimStruct* S)
{
  return sf_internal_get_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf(S);
}

static void sf_opaque_set_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf(S, st);
}

static void sf_opaque_terminate_c21_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    }

    finalize_c21_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
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
  initSimStructsc21_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_six_plus_six_AcmsteeringV09_main_1lf
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
    initialize_params_c21_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c21_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *
  S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      21);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,21,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,21,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,21);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,21,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,21,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,21);
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

static void mdlRTW_c21_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c21_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    utMalloc(sizeof(SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc21_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c21_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c21_six_plus_six_AcmsteeringV09_main_1lf;
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

void c21_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c21_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
