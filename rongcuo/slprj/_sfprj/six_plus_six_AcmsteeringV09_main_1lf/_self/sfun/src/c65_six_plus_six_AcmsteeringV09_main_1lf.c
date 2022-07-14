/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun.h"
#include "c65_six_plus_six_AcmsteeringV09_main_1lf.h"
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
static const char * c65_debug_family_names[4] = { "nargin", "nargout",
  "current_in", "current_out" };

/* Function Declarations */
static void initialize_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initialize_params_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void enable_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void disable_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c65_update_debugger_state_c65_six_plus_six_AcmsteeringV09_main_1
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void set_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_st);
static void finalize_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void sf_gateway_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initSimStructsc65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c65_machineNumber, uint32_T
  c65_chartNumber, uint32_T c65_instanceNumber);
static const mxArray *c65_sf_marshallOut(void *chartInstanceVoid, void
  *c65_inData);
static real_T c65_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_current_out, const char_T *c65_identifier);
static real_T c65_b_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_u, const emlrtMsgIdentifier *c65_parentId);
static void c65_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c65_mxArrayInData, const char_T *c65_varName, void *c65_outData);
static const mxArray *c65_b_sf_marshallOut(void *chartInstanceVoid, void
  *c65_inData);
static int32_T c65_c_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_u, const emlrtMsgIdentifier *c65_parentId);
static void c65_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c65_mxArrayInData, const char_T *c65_varName, void *c65_outData);
static uint8_T c65_d_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_b_is_active_c65_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c65_identifier);
static uint8_T c65_e_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_u, const emlrtMsgIdentifier *c65_parentId);
static void init_dsm_address_info
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  chartInstance->c65_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c65_is_active_c65_six_plus_six_AcmsteeringV09_main_1lf = 0U;
}

static void initialize_params_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c65_update_debugger_state_c65_six_plus_six_AcmsteeringV09_main_1
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  const mxArray *c65_st;
  const mxArray *c65_y = NULL;
  real_T c65_hoistedGlobal;
  real_T c65_u;
  const mxArray *c65_b_y = NULL;
  uint8_T c65_b_hoistedGlobal;
  uint8_T c65_b_u;
  const mxArray *c65_c_y = NULL;
  real_T *c65_current_out;
  c65_current_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c65_st = NULL;
  c65_st = NULL;
  c65_y = NULL;
  sf_mex_assign(&c65_y, sf_mex_createcellmatrix(2, 1), false);
  c65_hoistedGlobal = *c65_current_out;
  c65_u = c65_hoistedGlobal;
  c65_b_y = NULL;
  sf_mex_assign(&c65_b_y, sf_mex_create("y", &c65_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c65_y, 0, c65_b_y);
  c65_b_hoistedGlobal =
    chartInstance->c65_is_active_c65_six_plus_six_AcmsteeringV09_main_1lf;
  c65_b_u = c65_b_hoistedGlobal;
  c65_c_y = NULL;
  sf_mex_assign(&c65_c_y, sf_mex_create("y", &c65_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c65_y, 1, c65_c_y);
  sf_mex_assign(&c65_st, c65_y, false);
  return c65_st;
}

static void set_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_st)
{
  const mxArray *c65_u;
  real_T *c65_current_out;
  c65_current_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c65_doneDoubleBufferReInit = true;
  c65_u = sf_mex_dup(c65_st);
  *c65_current_out = c65_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c65_u, 0)), "current_out");
  chartInstance->c65_is_active_c65_six_plus_six_AcmsteeringV09_main_1lf =
    c65_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c65_u, 1)),
    "is_active_c65_six_plus_six_AcmsteeringV09_main_1lf");
  sf_mex_destroy(&c65_u);
  c65_update_debugger_state_c65_six_plus_six_AcmsteeringV09_main_1(chartInstance);
  sf_mex_destroy(&c65_st);
}

static void finalize_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real_T c65_hoistedGlobal;
  real_T c65_current_in;
  uint32_T c65_debug_family_var_map[4];
  real_T c65_nargin = 1.0;
  real_T c65_nargout = 1.0;
  real_T c65_current_out;
  real_T *c65_b_current_in;
  real_T *c65_b_current_out;
  c65_b_current_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c65_b_current_in = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 64U, chartInstance->c65_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c65_b_current_in, 0U);
  chartInstance->c65_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 64U, chartInstance->c65_sfEvent);
  c65_hoistedGlobal = *c65_b_current_in;
  c65_current_in = c65_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c65_debug_family_names,
    c65_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c65_nargin, 0U, c65_sf_marshallOut,
    c65_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c65_nargout, 1U, c65_sf_marshallOut,
    c65_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c65_current_in, 2U, c65_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c65_current_out, 3U, c65_sf_marshallOut,
    c65_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c65_sfEvent, 2);
  if (CV_EML_IF(0, 1, 0, c65_current_in > 32768.0)) {
    _SFD_EML_CALL(0U, chartInstance->c65_sfEvent, 3);
    c65_current_out = c65_current_in - 65535.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c65_sfEvent, 5);
    c65_current_out = c65_current_in;
  }

  _SFD_EML_CALL(0U, chartInstance->c65_sfEvent, -5);
  _SFD_SYMBOL_SCOPE_POP();
  *c65_b_current_out = c65_current_out;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 64U, chartInstance->c65_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c65_b_current_out, 1U);
}

static void initSimStructsc65_six_plus_six_AcmsteeringV09_main_1lf
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c65_machineNumber, uint32_T
  c65_chartNumber, uint32_T c65_instanceNumber)
{
  (void)c65_machineNumber;
  (void)c65_chartNumber;
  (void)c65_instanceNumber;
}

static const mxArray *c65_sf_marshallOut(void *chartInstanceVoid, void
  *c65_inData)
{
  const mxArray *c65_mxArrayOutData = NULL;
  real_T c65_u;
  const mxArray *c65_y = NULL;
  SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c65_mxArrayOutData = NULL;
  c65_u = *(real_T *)c65_inData;
  c65_y = NULL;
  sf_mex_assign(&c65_y, sf_mex_create("y", &c65_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c65_mxArrayOutData, c65_y, false);
  return c65_mxArrayOutData;
}

static real_T c65_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_current_out, const char_T *c65_identifier)
{
  real_T c65_y;
  emlrtMsgIdentifier c65_thisId;
  c65_thisId.fIdentifier = c65_identifier;
  c65_thisId.fParent = NULL;
  c65_y = c65_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c65_current_out),
    &c65_thisId);
  sf_mex_destroy(&c65_current_out);
  return c65_y;
}

static real_T c65_b_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_u, const emlrtMsgIdentifier *c65_parentId)
{
  real_T c65_y;
  real_T c65_d0;
  (void)chartInstance;
  sf_mex_import(c65_parentId, sf_mex_dup(c65_u), &c65_d0, 1, 0, 0U, 0, 0U, 0);
  c65_y = c65_d0;
  sf_mex_destroy(&c65_u);
  return c65_y;
}

static void c65_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c65_mxArrayInData, const char_T *c65_varName, void *c65_outData)
{
  const mxArray *c65_current_out;
  const char_T *c65_identifier;
  emlrtMsgIdentifier c65_thisId;
  real_T c65_y;
  SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c65_current_out = sf_mex_dup(c65_mxArrayInData);
  c65_identifier = c65_varName;
  c65_thisId.fIdentifier = c65_identifier;
  c65_thisId.fParent = NULL;
  c65_y = c65_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c65_current_out),
    &c65_thisId);
  sf_mex_destroy(&c65_current_out);
  *(real_T *)c65_outData = c65_y;
  sf_mex_destroy(&c65_mxArrayInData);
}

const mxArray
  *sf_c65_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c65_nameCaptureInfo = NULL;
  c65_nameCaptureInfo = NULL;
  sf_mex_assign(&c65_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c65_nameCaptureInfo;
}

static const mxArray *c65_b_sf_marshallOut(void *chartInstanceVoid, void
  *c65_inData)
{
  const mxArray *c65_mxArrayOutData = NULL;
  int32_T c65_u;
  const mxArray *c65_y = NULL;
  SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c65_mxArrayOutData = NULL;
  c65_u = *(int32_T *)c65_inData;
  c65_y = NULL;
  sf_mex_assign(&c65_y, sf_mex_create("y", &c65_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c65_mxArrayOutData, c65_y, false);
  return c65_mxArrayOutData;
}

static int32_T c65_c_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_u, const emlrtMsgIdentifier *c65_parentId)
{
  int32_T c65_y;
  int32_T c65_i0;
  (void)chartInstance;
  sf_mex_import(c65_parentId, sf_mex_dup(c65_u), &c65_i0, 1, 6, 0U, 0, 0U, 0);
  c65_y = c65_i0;
  sf_mex_destroy(&c65_u);
  return c65_y;
}

static void c65_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c65_mxArrayInData, const char_T *c65_varName, void *c65_outData)
{
  const mxArray *c65_b_sfEvent;
  const char_T *c65_identifier;
  emlrtMsgIdentifier c65_thisId;
  int32_T c65_y;
  SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c65_b_sfEvent = sf_mex_dup(c65_mxArrayInData);
  c65_identifier = c65_varName;
  c65_thisId.fIdentifier = c65_identifier;
  c65_thisId.fParent = NULL;
  c65_y = c65_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c65_b_sfEvent),
    &c65_thisId);
  sf_mex_destroy(&c65_b_sfEvent);
  *(int32_T *)c65_outData = c65_y;
  sf_mex_destroy(&c65_mxArrayInData);
}

static uint8_T c65_d_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_b_is_active_c65_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c65_identifier)
{
  uint8_T c65_y;
  emlrtMsgIdentifier c65_thisId;
  c65_thisId.fIdentifier = c65_identifier;
  c65_thisId.fParent = NULL;
  c65_y = c65_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c65_b_is_active_c65_six_plus_six_AcmsteeringV09_main_1lf), &c65_thisId);
  sf_mex_destroy(&c65_b_is_active_c65_six_plus_six_AcmsteeringV09_main_1lf);
  return c65_y;
}

static uint8_T c65_e_emlrt_marshallIn
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c65_u, const emlrtMsgIdentifier *c65_parentId)
{
  uint8_T c65_y;
  uint8_T c65_u0;
  (void)chartInstance;
  sf_mex_import(c65_parentId, sf_mex_dup(c65_u), &c65_u0, 1, 3, 0U, 0, 0U, 0);
  c65_y = c65_u0;
  sf_mex_destroy(&c65_u);
  return c65_y;
}

static void init_dsm_address_info
  (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
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

void sf_c65_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(410080109U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1575141988U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1930621959U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2438720687U);
}

mxArray *sf_c65_six_plus_six_AcmsteeringV09_main_1lf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("LUvdsHwIFyB2JOtf7V53sB");
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

mxArray *sf_c65_six_plus_six_AcmsteeringV09_main_1lf_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c65_six_plus_six_AcmsteeringV09_main_1lf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c65_six_plus_six_AcmsteeringV09_main_1lf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[7],T\"current_out\",},{M[8],M[0],T\"is_active_c65_six_plus_six_AcmsteeringV09_main_1lf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c65_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           65,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"current_in");
          _SFD_SET_DATA_PROPS(1,2,0,1,"current_out");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,163);
        _SFD_CV_INIT_EML_IF(0,1,0,53,72,115,159);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c65_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c65_sf_marshallOut,(MexInFcnForType)c65_sf_marshallIn);

        {
          real_T *c65_current_in;
          real_T *c65_current_out;
          c65_current_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c65_current_in = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c65_current_in);
          _SFD_SET_DATA_VALUE_PTR(1U, c65_current_out);
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
  return "MZNtAkNe4hVthgOw6NNOeG";
}

static void sf_opaque_initialize_c65_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
  initialize_c65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c65_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  enable_c65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c65_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  disable_c65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c65_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  sf_gateway_c65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c65_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
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

extern void sf_internal_set_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
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
    sf_get_sim_state_info_c65_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf(SimStruct* S)
{
  return sf_internal_get_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf(S);
}

static void sf_opaque_set_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf(S, st);
}

static void sf_opaque_terminate_c65_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    }

    finalize_c65_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
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
  initSimStructsc65_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c65_six_plus_six_AcmsteeringV09_main_1lf
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
    initialize_params_c65_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c65_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *
  S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      65);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,65,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,65,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,65);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,65,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,65,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,65);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1644599130U));
  ssSetChecksum1(S,(2060014686U));
  ssSetChecksum2(S,(3261556858U));
  ssSetChecksum3(S,(4101691400U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c65_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c65_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    utMalloc(sizeof(SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc65_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c65_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c65_six_plus_six_AcmsteeringV09_main_1lf;
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

void c65_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c65_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c65_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c65_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c65_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
