/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_sfun.h"
#include "c80_six_plus_six_AcmsteeringV09_main.h"
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
static const char * c80_debug_family_names[7] = { "nargin", "nargout",
  "s_act_rr", "s_opt_zhuan", "s_opt_zhuan_add", "flag_rr_pre", "flag_rr" };

/* Function Declarations */
static void initialize_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initialize_params_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void enable_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void disable_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c80_update_debugger_state_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void set_sim_state_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_st);
static void finalize_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void sf_gateway_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initSimStructsc80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c80_machineNumber, uint32_T
  c80_chartNumber, uint32_T c80_instanceNumber);
static const mxArray *c80_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData);
static int8_T c80_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_flag_rr, const char_T *c80_identifier);
static int8_T c80_b_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId);
static void c80_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c80_mxArrayInData, const char_T *c80_varName, void *c80_outData);
static const mxArray *c80_b_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData);
static const mxArray *c80_c_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData);
static real_T c80_c_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId);
static void c80_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c80_mxArrayInData, const char_T *c80_varName, void *c80_outData);
static const mxArray *c80_d_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData);
static int32_T c80_d_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId);
static void c80_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c80_mxArrayInData, const char_T *c80_varName, void *c80_outData);
static uint8_T c80_e_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_b_is_active_c80_six_plus_six_AcmsteeringV09_main, const char_T
   *c80_identifier);
static uint8_T c80_f_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId);
static void init_dsm_address_info
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  chartInstance->c80_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c80_is_active_c80_six_plus_six_AcmsteeringV09_main = 0U;
}

static void initialize_params_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c80_update_debugger_state_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  const mxArray *c80_st;
  const mxArray *c80_y = NULL;
  int8_T c80_hoistedGlobal;
  int8_T c80_u;
  const mxArray *c80_b_y = NULL;
  uint8_T c80_b_hoistedGlobal;
  uint8_T c80_b_u;
  const mxArray *c80_c_y = NULL;
  int8_T *c80_flag_rr;
  c80_flag_rr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c80_st = NULL;
  c80_st = NULL;
  c80_y = NULL;
  sf_mex_assign(&c80_y, sf_mex_createcellmatrix(2, 1), false);
  c80_hoistedGlobal = *c80_flag_rr;
  c80_u = c80_hoistedGlobal;
  c80_b_y = NULL;
  sf_mex_assign(&c80_b_y, sf_mex_create("y", &c80_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c80_y, 0, c80_b_y);
  c80_b_hoistedGlobal =
    chartInstance->c80_is_active_c80_six_plus_six_AcmsteeringV09_main;
  c80_b_u = c80_b_hoistedGlobal;
  c80_c_y = NULL;
  sf_mex_assign(&c80_c_y, sf_mex_create("y", &c80_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c80_y, 1, c80_c_y);
  sf_mex_assign(&c80_st, c80_y, false);
  return c80_st;
}

static void set_sim_state_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_st)
{
  const mxArray *c80_u;
  int8_T *c80_flag_rr;
  c80_flag_rr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c80_doneDoubleBufferReInit = true;
  c80_u = sf_mex_dup(c80_st);
  *c80_flag_rr = c80_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c80_u, 0)), "flag_rr");
  chartInstance->c80_is_active_c80_six_plus_six_AcmsteeringV09_main =
    c80_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c80_u, 1)),
    "is_active_c80_six_plus_six_AcmsteeringV09_main");
  sf_mex_destroy(&c80_u);
  c80_update_debugger_state_c80_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c80_st);
}

static void finalize_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real32_T c80_hoistedGlobal;
  real32_T c80_b_hoistedGlobal;
  real32_T c80_c_hoistedGlobal;
  int8_T c80_d_hoistedGlobal;
  real32_T c80_s_act_rr;
  real32_T c80_s_opt_zhuan;
  real32_T c80_s_opt_zhuan_add;
  int8_T c80_flag_rr_pre;
  uint32_T c80_debug_family_var_map[7];
  real_T c80_nargin = 4.0;
  real_T c80_nargout = 1.0;
  int8_T c80_flag_rr;
  real32_T *c80_b_s_act_rr;
  int8_T *c80_b_flag_rr;
  real32_T *c80_b_s_opt_zhuan;
  real32_T *c80_b_s_opt_zhuan_add;
  int8_T *c80_b_flag_rr_pre;
  c80_b_flag_rr_pre = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c80_b_s_opt_zhuan_add = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c80_b_s_opt_zhuan = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c80_b_flag_rr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c80_b_s_act_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 79U, chartInstance->c80_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c80_b_s_act_rr, 0U);
  chartInstance->c80_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 79U, chartInstance->c80_sfEvent);
  c80_hoistedGlobal = *c80_b_s_act_rr;
  c80_b_hoistedGlobal = *c80_b_s_opt_zhuan;
  c80_c_hoistedGlobal = *c80_b_s_opt_zhuan_add;
  c80_d_hoistedGlobal = *c80_b_flag_rr_pre;
  c80_s_act_rr = c80_hoistedGlobal;
  c80_s_opt_zhuan = c80_b_hoistedGlobal;
  c80_s_opt_zhuan_add = c80_c_hoistedGlobal;
  c80_flag_rr_pre = c80_d_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 7U, 7U, c80_debug_family_names,
    c80_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c80_nargin, 0U, c80_c_sf_marshallOut,
    c80_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c80_nargout, 1U, c80_c_sf_marshallOut,
    c80_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c80_s_act_rr, 2U, c80_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c80_s_opt_zhuan, 3U, c80_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c80_s_opt_zhuan_add, 4U, c80_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c80_flag_rr_pre, 5U, c80_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c80_flag_rr, 6U, c80_sf_marshallOut,
    c80_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c80_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c80_s_act_rr > c80_s_opt_zhuan + c80_s_opt_zhuan_add))
  {
    _SFD_EML_CALL(0U, chartInstance->c80_sfEvent, 4);
    c80_flag_rr = 1;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c80_sfEvent, 5);
    if (CV_EML_IF(0, 1, 1, c80_s_act_rr < c80_s_opt_zhuan)) {
      _SFD_EML_CALL(0U, chartInstance->c80_sfEvent, 6);
      c80_flag_rr = 0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c80_sfEvent, 8);
      c80_flag_rr = c80_flag_rr_pre;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c80_sfEvent, -8);
  _SFD_SYMBOL_SCOPE_POP();
  *c80_b_flag_rr = c80_flag_rr;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 79U, chartInstance->c80_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_mainMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c80_b_flag_rr, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c80_b_s_opt_zhuan, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c80_b_s_opt_zhuan_add, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c80_b_flag_rr_pre, 4U);
}

static void initSimStructsc80_six_plus_six_AcmsteeringV09_main
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c80_machineNumber, uint32_T
  c80_chartNumber, uint32_T c80_instanceNumber)
{
  (void)c80_machineNumber;
  (void)c80_chartNumber;
  (void)c80_instanceNumber;
}

static const mxArray *c80_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData)
{
  const mxArray *c80_mxArrayOutData = NULL;
  int8_T c80_u;
  const mxArray *c80_y = NULL;
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c80_mxArrayOutData = NULL;
  c80_u = *(int8_T *)c80_inData;
  c80_y = NULL;
  sf_mex_assign(&c80_y, sf_mex_create("y", &c80_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c80_mxArrayOutData, c80_y, false);
  return c80_mxArrayOutData;
}

static int8_T c80_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_flag_rr, const char_T *c80_identifier)
{
  int8_T c80_y;
  emlrtMsgIdentifier c80_thisId;
  c80_thisId.fIdentifier = c80_identifier;
  c80_thisId.fParent = NULL;
  c80_y = c80_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c80_flag_rr),
    &c80_thisId);
  sf_mex_destroy(&c80_flag_rr);
  return c80_y;
}

static int8_T c80_b_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId)
{
  int8_T c80_y;
  int8_T c80_i0;
  (void)chartInstance;
  sf_mex_import(c80_parentId, sf_mex_dup(c80_u), &c80_i0, 1, 2, 0U, 0, 0U, 0);
  c80_y = c80_i0;
  sf_mex_destroy(&c80_u);
  return c80_y;
}

static void c80_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c80_mxArrayInData, const char_T *c80_varName, void *c80_outData)
{
  const mxArray *c80_flag_rr;
  const char_T *c80_identifier;
  emlrtMsgIdentifier c80_thisId;
  int8_T c80_y;
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c80_flag_rr = sf_mex_dup(c80_mxArrayInData);
  c80_identifier = c80_varName;
  c80_thisId.fIdentifier = c80_identifier;
  c80_thisId.fParent = NULL;
  c80_y = c80_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c80_flag_rr),
    &c80_thisId);
  sf_mex_destroy(&c80_flag_rr);
  *(int8_T *)c80_outData = c80_y;
  sf_mex_destroy(&c80_mxArrayInData);
}

static const mxArray *c80_b_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData)
{
  const mxArray *c80_mxArrayOutData = NULL;
  real32_T c80_u;
  const mxArray *c80_y = NULL;
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c80_mxArrayOutData = NULL;
  c80_u = *(real32_T *)c80_inData;
  c80_y = NULL;
  sf_mex_assign(&c80_y, sf_mex_create("y", &c80_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c80_mxArrayOutData, c80_y, false);
  return c80_mxArrayOutData;
}

static const mxArray *c80_c_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData)
{
  const mxArray *c80_mxArrayOutData = NULL;
  real_T c80_u;
  const mxArray *c80_y = NULL;
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c80_mxArrayOutData = NULL;
  c80_u = *(real_T *)c80_inData;
  c80_y = NULL;
  sf_mex_assign(&c80_y, sf_mex_create("y", &c80_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c80_mxArrayOutData, c80_y, false);
  return c80_mxArrayOutData;
}

static real_T c80_c_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId)
{
  real_T c80_y;
  real_T c80_d0;
  (void)chartInstance;
  sf_mex_import(c80_parentId, sf_mex_dup(c80_u), &c80_d0, 1, 0, 0U, 0, 0U, 0);
  c80_y = c80_d0;
  sf_mex_destroy(&c80_u);
  return c80_y;
}

static void c80_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c80_mxArrayInData, const char_T *c80_varName, void *c80_outData)
{
  const mxArray *c80_nargout;
  const char_T *c80_identifier;
  emlrtMsgIdentifier c80_thisId;
  real_T c80_y;
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c80_nargout = sf_mex_dup(c80_mxArrayInData);
  c80_identifier = c80_varName;
  c80_thisId.fIdentifier = c80_identifier;
  c80_thisId.fParent = NULL;
  c80_y = c80_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c80_nargout),
    &c80_thisId);
  sf_mex_destroy(&c80_nargout);
  *(real_T *)c80_outData = c80_y;
  sf_mex_destroy(&c80_mxArrayInData);
}

const mxArray
  *sf_c80_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void)
{
  const mxArray *c80_nameCaptureInfo = NULL;
  c80_nameCaptureInfo = NULL;
  sf_mex_assign(&c80_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c80_nameCaptureInfo;
}

static const mxArray *c80_d_sf_marshallOut(void *chartInstanceVoid, void
  *c80_inData)
{
  const mxArray *c80_mxArrayOutData = NULL;
  int32_T c80_u;
  const mxArray *c80_y = NULL;
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c80_mxArrayOutData = NULL;
  c80_u = *(int32_T *)c80_inData;
  c80_y = NULL;
  sf_mex_assign(&c80_y, sf_mex_create("y", &c80_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c80_mxArrayOutData, c80_y, false);
  return c80_mxArrayOutData;
}

static int32_T c80_d_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId)
{
  int32_T c80_y;
  int32_T c80_i1;
  (void)chartInstance;
  sf_mex_import(c80_parentId, sf_mex_dup(c80_u), &c80_i1, 1, 6, 0U, 0, 0U, 0);
  c80_y = c80_i1;
  sf_mex_destroy(&c80_u);
  return c80_y;
}

static void c80_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c80_mxArrayInData, const char_T *c80_varName, void *c80_outData)
{
  const mxArray *c80_b_sfEvent;
  const char_T *c80_identifier;
  emlrtMsgIdentifier c80_thisId;
  int32_T c80_y;
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c80_b_sfEvent = sf_mex_dup(c80_mxArrayInData);
  c80_identifier = c80_varName;
  c80_thisId.fIdentifier = c80_identifier;
  c80_thisId.fParent = NULL;
  c80_y = c80_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c80_b_sfEvent),
    &c80_thisId);
  sf_mex_destroy(&c80_b_sfEvent);
  *(int32_T *)c80_outData = c80_y;
  sf_mex_destroy(&c80_mxArrayInData);
}

static uint8_T c80_e_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_b_is_active_c80_six_plus_six_AcmsteeringV09_main, const char_T
   *c80_identifier)
{
  uint8_T c80_y;
  emlrtMsgIdentifier c80_thisId;
  c80_thisId.fIdentifier = c80_identifier;
  c80_thisId.fParent = NULL;
  c80_y = c80_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c80_b_is_active_c80_six_plus_six_AcmsteeringV09_main), &c80_thisId);
  sf_mex_destroy(&c80_b_is_active_c80_six_plus_six_AcmsteeringV09_main);
  return c80_y;
}

static uint8_T c80_f_emlrt_marshallIn
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c80_u, const emlrtMsgIdentifier *c80_parentId)
{
  uint8_T c80_y;
  uint8_T c80_u0;
  (void)chartInstance;
  sf_mex_import(c80_parentId, sf_mex_dup(c80_u), &c80_u0, 1, 3, 0U, 0, 0U, 0);
  c80_y = c80_u0;
  sf_mex_destroy(&c80_u);
  return c80_y;
}

static void init_dsm_address_info
  (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
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

void sf_c80_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2308904991U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3411942771U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(872083174U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(268481397U);
}

mxArray *sf_c80_six_plus_six_AcmsteeringV09_main_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("T0nmEXK8ILw8gkLsj703dF");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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

mxArray *sf_c80_six_plus_six_AcmsteeringV09_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c80_six_plus_six_AcmsteeringV09_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c80_six_plus_six_AcmsteeringV09_main
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"flag_rr\",},{M[8],M[0],T\"is_active_c80_six_plus_six_AcmsteeringV09_main\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c80_six_plus_six_AcmsteeringV09_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_mainMachineNumber_,
           80,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"s_act_rr");
          _SFD_SET_DATA_PROPS(1,2,0,1,"flag_rr");
          _SFD_SET_DATA_PROPS(2,1,1,0,"s_opt_zhuan");
          _SFD_SET_DATA_PROPS(3,1,1,0,"s_opt_zhuan_add");
          _SFD_SET_DATA_PROPS(4,1,1,0,"flag_rr_pre");
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
        _SFD_CV_INIT_EML(0,1,1,2,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,237);
        _SFD_CV_INIT_EML_IF(0,1,0,83,122,144,233);
        _SFD_CV_INIT_EML_IF(0,1,1,144,171,194,233);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c80_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c80_sf_marshallOut,(MexInFcnForType)c80_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c80_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c80_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c80_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real32_T *c80_s_act_rr;
          int8_T *c80_flag_rr;
          real32_T *c80_s_opt_zhuan;
          real32_T *c80_s_opt_zhuan_add;
          int8_T *c80_flag_rr_pre;
          c80_flag_rr_pre = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c80_s_opt_zhuan_add = (real32_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c80_s_opt_zhuan = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c80_flag_rr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c80_s_act_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c80_s_act_rr);
          _SFD_SET_DATA_VALUE_PTR(1U, c80_flag_rr);
          _SFD_SET_DATA_VALUE_PTR(2U, c80_s_opt_zhuan);
          _SFD_SET_DATA_VALUE_PTR(3U, c80_s_opt_zhuan_add);
          _SFD_SET_DATA_VALUE_PTR(4U, c80_flag_rr_pre);
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
  return "nAqPMtqPmwkq1mhOWbWySC";
}

static void sf_opaque_initialize_c80_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
  initialize_c80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c80_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  enable_c80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c80_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  disable_c80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c80_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  sf_gateway_c80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c80_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c80_six_plus_six_AcmsteeringV09_main();/* state var info */
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

extern void sf_internal_set_sim_state_c80_six_plus_six_AcmsteeringV09_main
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
    sf_get_sim_state_info_c80_six_plus_six_AcmsteeringV09_main();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c80_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  return sf_internal_get_sim_state_c80_six_plus_six_AcmsteeringV09_main(S);
}

static void sf_opaque_set_sim_state_c80_six_plus_six_AcmsteeringV09_main
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c80_six_plus_six_AcmsteeringV09_main(S, st);
}

static void sf_opaque_terminate_c80_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_optimization_info();
    }

    finalize_c80_six_plus_six_AcmsteeringV09_main
      ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc80_six_plus_six_AcmsteeringV09_main
    ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c80_six_plus_six_AcmsteeringV09_main(SimStruct *
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
    initialize_params_c80_six_plus_six_AcmsteeringV09_main
      ((SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c80_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      80);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,80,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,80,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,80);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,80,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,80,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,80);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(952439373U));
  ssSetChecksum1(S,(2449323760U));
  ssSetChecksum2(S,(851609245U));
  ssSetChecksum3(S,(3381122410U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c80_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c80_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    utMalloc(sizeof(SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc80_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c80_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c80_six_plus_six_AcmsteeringV09_main;
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

void c80_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c80_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c80_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c80_six_plus_six_AcmsteeringV09_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c80_six_plus_six_AcmsteeringV09_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
