/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun.h"
#include "c66_six_plus_six_AcmsteeringV09_main_2lflm.h"
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
static const char * c66_debug_family_names[4] = { "nargin", "nargout", "speed",
  "speed_out" };

/* Function Declarations */
static void initialize_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initialize_params_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void enable_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void disable_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c66_update_debugger_state_c66_six_plus_six_AcmsteeringV09_main_2
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void set_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_st);
static void finalize_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void sf_gateway_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initSimStructsc66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c66_machineNumber, uint32_T
  c66_chartNumber, uint32_T c66_instanceNumber);
static const mxArray *c66_sf_marshallOut(void *chartInstanceVoid, void
  *c66_inData);
static real_T c66_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_speed_out, const char_T *c66_identifier);
static real_T c66_b_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_u, const emlrtMsgIdentifier *c66_parentId);
static void c66_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c66_mxArrayInData, const char_T *c66_varName, void *c66_outData);
static const mxArray *c66_b_sf_marshallOut(void *chartInstanceVoid, void
  *c66_inData);
static int32_T c66_c_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_u, const emlrtMsgIdentifier *c66_parentId);
static void c66_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c66_mxArrayInData, const char_T *c66_varName, void *c66_outData);
static uint8_T c66_d_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_b_is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c66_identifier);
static uint8_T c66_e_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_u, const emlrtMsgIdentifier *c66_parentId);
static void init_dsm_address_info
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  chartInstance->c66_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c66_is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm = 0U;
}

static void initialize_params_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c66_update_debugger_state_c66_six_plus_six_AcmsteeringV09_main_2
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  const mxArray *c66_st;
  const mxArray *c66_y = NULL;
  real_T c66_hoistedGlobal;
  real_T c66_u;
  const mxArray *c66_b_y = NULL;
  uint8_T c66_b_hoistedGlobal;
  uint8_T c66_b_u;
  const mxArray *c66_c_y = NULL;
  real_T *c66_speed_out;
  c66_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c66_st = NULL;
  c66_st = NULL;
  c66_y = NULL;
  sf_mex_assign(&c66_y, sf_mex_createcellmatrix(2, 1), false);
  c66_hoistedGlobal = *c66_speed_out;
  c66_u = c66_hoistedGlobal;
  c66_b_y = NULL;
  sf_mex_assign(&c66_b_y, sf_mex_create("y", &c66_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c66_y, 0, c66_b_y);
  c66_b_hoistedGlobal =
    chartInstance->c66_is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  c66_b_u = c66_b_hoistedGlobal;
  c66_c_y = NULL;
  sf_mex_assign(&c66_c_y, sf_mex_create("y", &c66_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c66_y, 1, c66_c_y);
  sf_mex_assign(&c66_st, c66_y, false);
  return c66_st;
}

static void set_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_st)
{
  const mxArray *c66_u;
  real_T *c66_speed_out;
  c66_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c66_doneDoubleBufferReInit = true;
  c66_u = sf_mex_dup(c66_st);
  *c66_speed_out = c66_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c66_u, 0)), "speed_out");
  chartInstance->c66_is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm =
    c66_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c66_u, 1)),
    "is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm");
  sf_mex_destroy(&c66_u);
  c66_update_debugger_state_c66_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c66_st);
}

static void finalize_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real_T c66_hoistedGlobal;
  real_T c66_speed;
  uint32_T c66_debug_family_var_map[4];
  real_T c66_nargin = 1.0;
  real_T c66_nargout = 1.0;
  real_T c66_speed_out;
  real_T *c66_b_speed;
  real_T *c66_b_speed_out;
  c66_b_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c66_b_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 65U, chartInstance->c66_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c66_b_speed, 0U);
  chartInstance->c66_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 65U, chartInstance->c66_sfEvent);
  c66_hoistedGlobal = *c66_b_speed;
  c66_speed = c66_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c66_debug_family_names,
    c66_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c66_nargin, 0U, c66_sf_marshallOut,
    c66_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c66_nargout, 1U, c66_sf_marshallOut,
    c66_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c66_speed, 2U, c66_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c66_speed_out, 3U, c66_sf_marshallOut,
    c66_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c66_sfEvent, 2);
  if (CV_EML_IF(0, 1, 0, c66_speed > 32768.0)) {
    _SFD_EML_CALL(0U, chartInstance->c66_sfEvent, 3);
    c66_speed_out = c66_speed - 65535.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c66_sfEvent, 4);
    c66_speed_out = c66_speed;
  }

  _SFD_EML_CALL(0U, chartInstance->c66_sfEvent, -4);
  _SFD_SYMBOL_SCOPE_POP();
  *c66_b_speed_out = c66_speed_out;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 65U, chartInstance->c66_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c66_b_speed_out, 1U);
}

static void initSimStructsc66_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c66_machineNumber, uint32_T
  c66_chartNumber, uint32_T c66_instanceNumber)
{
  (void)c66_machineNumber;
  (void)c66_chartNumber;
  (void)c66_instanceNumber;
}

static const mxArray *c66_sf_marshallOut(void *chartInstanceVoid, void
  *c66_inData)
{
  const mxArray *c66_mxArrayOutData = NULL;
  real_T c66_u;
  const mxArray *c66_y = NULL;
  SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c66_mxArrayOutData = NULL;
  c66_u = *(real_T *)c66_inData;
  c66_y = NULL;
  sf_mex_assign(&c66_y, sf_mex_create("y", &c66_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c66_mxArrayOutData, c66_y, false);
  return c66_mxArrayOutData;
}

static real_T c66_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_speed_out, const char_T *c66_identifier)
{
  real_T c66_y;
  emlrtMsgIdentifier c66_thisId;
  c66_thisId.fIdentifier = c66_identifier;
  c66_thisId.fParent = NULL;
  c66_y = c66_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c66_speed_out),
    &c66_thisId);
  sf_mex_destroy(&c66_speed_out);
  return c66_y;
}

static real_T c66_b_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_u, const emlrtMsgIdentifier *c66_parentId)
{
  real_T c66_y;
  real_T c66_d0;
  (void)chartInstance;
  sf_mex_import(c66_parentId, sf_mex_dup(c66_u), &c66_d0, 1, 0, 0U, 0, 0U, 0);
  c66_y = c66_d0;
  sf_mex_destroy(&c66_u);
  return c66_y;
}

static void c66_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c66_mxArrayInData, const char_T *c66_varName, void *c66_outData)
{
  const mxArray *c66_speed_out;
  const char_T *c66_identifier;
  emlrtMsgIdentifier c66_thisId;
  real_T c66_y;
  SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c66_speed_out = sf_mex_dup(c66_mxArrayInData);
  c66_identifier = c66_varName;
  c66_thisId.fIdentifier = c66_identifier;
  c66_thisId.fParent = NULL;
  c66_y = c66_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c66_speed_out),
    &c66_thisId);
  sf_mex_destroy(&c66_speed_out);
  *(real_T *)c66_outData = c66_y;
  sf_mex_destroy(&c66_mxArrayInData);
}

const mxArray
  *sf_c66_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c66_nameCaptureInfo = NULL;
  c66_nameCaptureInfo = NULL;
  sf_mex_assign(&c66_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c66_nameCaptureInfo;
}

static const mxArray *c66_b_sf_marshallOut(void *chartInstanceVoid, void
  *c66_inData)
{
  const mxArray *c66_mxArrayOutData = NULL;
  int32_T c66_u;
  const mxArray *c66_y = NULL;
  SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c66_mxArrayOutData = NULL;
  c66_u = *(int32_T *)c66_inData;
  c66_y = NULL;
  sf_mex_assign(&c66_y, sf_mex_create("y", &c66_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c66_mxArrayOutData, c66_y, false);
  return c66_mxArrayOutData;
}

static int32_T c66_c_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_u, const emlrtMsgIdentifier *c66_parentId)
{
  int32_T c66_y;
  int32_T c66_i0;
  (void)chartInstance;
  sf_mex_import(c66_parentId, sf_mex_dup(c66_u), &c66_i0, 1, 6, 0U, 0, 0U, 0);
  c66_y = c66_i0;
  sf_mex_destroy(&c66_u);
  return c66_y;
}

static void c66_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c66_mxArrayInData, const char_T *c66_varName, void *c66_outData)
{
  const mxArray *c66_b_sfEvent;
  const char_T *c66_identifier;
  emlrtMsgIdentifier c66_thisId;
  int32_T c66_y;
  SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c66_b_sfEvent = sf_mex_dup(c66_mxArrayInData);
  c66_identifier = c66_varName;
  c66_thisId.fIdentifier = c66_identifier;
  c66_thisId.fParent = NULL;
  c66_y = c66_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c66_b_sfEvent),
    &c66_thisId);
  sf_mex_destroy(&c66_b_sfEvent);
  *(int32_T *)c66_outData = c66_y;
  sf_mex_destroy(&c66_mxArrayInData);
}

static uint8_T c66_d_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_b_is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c66_identifier)
{
  uint8_T c66_y;
  emlrtMsgIdentifier c66_thisId;
  c66_thisId.fIdentifier = c66_identifier;
  c66_thisId.fParent = NULL;
  c66_y = c66_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c66_b_is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm), &c66_thisId);
  sf_mex_destroy(&c66_b_is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm);
  return c66_y;
}

static uint8_T c66_e_emlrt_marshallIn
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c66_u, const emlrtMsgIdentifier *c66_parentId)
{
  uint8_T c66_y;
  uint8_T c66_u0;
  (void)chartInstance;
  sf_mex_import(c66_parentId, sf_mex_dup(c66_u), &c66_u0, 1, 3, 0U, 0, 0U, 0);
  c66_y = c66_u0;
  sf_mex_destroy(&c66_u);
  return c66_y;
}

static void init_dsm_address_info
  (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
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

void sf_c66_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(838165629U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(921350203U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1696855142U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3829808477U);
}

mxArray *sf_c66_six_plus_six_AcmsteeringV09_main_2lflm_get_autoinheritance_info
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

mxArray *sf_c66_six_plus_six_AcmsteeringV09_main_2lflm_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c66_six_plus_six_AcmsteeringV09_main_2lflm_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c66_six_plus_six_AcmsteeringV09_main_2lflm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[7],T\"speed_out\",},{M[8],M[0],T\"is_active_c66_six_plus_six_AcmsteeringV09_main_2lflm\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c66_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           66,
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
          (MexFcnForType)c66_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c66_sf_marshallOut,(MexInFcnForType)c66_sf_marshallIn);

        {
          real_T *c66_speed;
          real_T *c66_speed_out;
          c66_speed_out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c66_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c66_speed);
          _SFD_SET_DATA_VALUE_PTR(1U, c66_speed_out);
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
  return "HHLzMV8o5TfPX7myKJDws";
}

static void sf_opaque_initialize_c66_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
  initialize_c66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c66_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  enable_c66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c66_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  disable_c66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c66_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  sf_gateway_c66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c66_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
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

extern void sf_internal_set_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
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
    sf_get_sim_state_info_c66_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm(S);
}

static void sf_opaque_set_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm(S, st);
}

static void sf_opaque_terminate_c66_six_plus_six_AcmsteeringV09_main_2lflm(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    }

    finalize_c66_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
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
  initSimStructsc66_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c66_six_plus_six_AcmsteeringV09_main_2lflm
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
    initialize_params_c66_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c66_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      66);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,66,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,66,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,66);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,66,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,66,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,66);
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

static void mdlRTW_c66_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c66_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    utMalloc(sizeof(SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc66_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c66_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c66_six_plus_six_AcmsteeringV09_main_2lflm;
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

void c66_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c66_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c66_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c66_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c66_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
