/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_sfun.h"
#include "c71_six_plus_six_AcmsteeringV09_main.h"
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
static const char * c71_debug_family_names[7] = { "nargin", "nargout",
  "s_act_lr", "s_opt_zhuan", "s_opt_zhuan_add", "flag_lr_pre", "flag_lr" };

/* Function Declarations */
static void initialize_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initialize_params_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void enable_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void disable_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c71_update_debugger_state_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void set_sim_state_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_st);
static void finalize_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void sf_gateway_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initSimStructsc71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c71_machineNumber, uint32_T
  c71_chartNumber, uint32_T c71_instanceNumber);
static const mxArray *c71_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData);
static int8_T c71_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_flag_lr, const char_T *c71_identifier);
static int8_T c71_b_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId);
static void c71_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c71_mxArrayInData, const char_T *c71_varName, void *c71_outData);
static const mxArray *c71_b_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData);
static const mxArray *c71_c_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData);
static real_T c71_c_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId);
static void c71_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c71_mxArrayInData, const char_T *c71_varName, void *c71_outData);
static const mxArray *c71_d_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData);
static int32_T c71_d_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId);
static void c71_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c71_mxArrayInData, const char_T *c71_varName, void *c71_outData);
static uint8_T c71_e_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_b_is_active_c71_six_plus_six_AcmsteeringV09_main, const char_T
   *c71_identifier);
static uint8_T c71_f_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId);
static void init_dsm_address_info
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  chartInstance->c71_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c71_is_active_c71_six_plus_six_AcmsteeringV09_main = 0U;
}

static void initialize_params_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c71_update_debugger_state_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  const mxArray *c71_st;
  const mxArray *c71_y = NULL;
  int8_T c71_hoistedGlobal;
  int8_T c71_u;
  const mxArray *c71_b_y = NULL;
  uint8_T c71_b_hoistedGlobal;
  uint8_T c71_b_u;
  const mxArray *c71_c_y = NULL;
  int8_T *c71_flag_lr;
  c71_flag_lr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c71_st = NULL;
  c71_st = NULL;
  c71_y = NULL;
  sf_mex_assign(&c71_y, sf_mex_createcellmatrix(2, 1), false);
  c71_hoistedGlobal = *c71_flag_lr;
  c71_u = c71_hoistedGlobal;
  c71_b_y = NULL;
  sf_mex_assign(&c71_b_y, sf_mex_create("y", &c71_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c71_y, 0, c71_b_y);
  c71_b_hoistedGlobal =
    chartInstance->c71_is_active_c71_six_plus_six_AcmsteeringV09_main;
  c71_b_u = c71_b_hoistedGlobal;
  c71_c_y = NULL;
  sf_mex_assign(&c71_c_y, sf_mex_create("y", &c71_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c71_y, 1, c71_c_y);
  sf_mex_assign(&c71_st, c71_y, false);
  return c71_st;
}

static void set_sim_state_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_st)
{
  const mxArray *c71_u;
  int8_T *c71_flag_lr;
  c71_flag_lr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c71_doneDoubleBufferReInit = true;
  c71_u = sf_mex_dup(c71_st);
  *c71_flag_lr = c71_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c71_u, 0)), "flag_lr");
  chartInstance->c71_is_active_c71_six_plus_six_AcmsteeringV09_main =
    c71_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c71_u, 1)),
    "is_active_c71_six_plus_six_AcmsteeringV09_main");
  sf_mex_destroy(&c71_u);
  c71_update_debugger_state_c71_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c71_st);
}

static void finalize_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real32_T c71_hoistedGlobal;
  real32_T c71_b_hoistedGlobal;
  real32_T c71_c_hoistedGlobal;
  int8_T c71_d_hoistedGlobal;
  real32_T c71_s_act_lr;
  real32_T c71_s_opt_zhuan;
  real32_T c71_s_opt_zhuan_add;
  int8_T c71_flag_lr_pre;
  uint32_T c71_debug_family_var_map[7];
  real_T c71_nargin = 4.0;
  real_T c71_nargout = 1.0;
  int8_T c71_flag_lr;
  real32_T *c71_b_s_act_lr;
  int8_T *c71_b_flag_lr;
  real32_T *c71_b_s_opt_zhuan;
  real32_T *c71_b_s_opt_zhuan_add;
  int8_T *c71_b_flag_lr_pre;
  c71_b_flag_lr_pre = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c71_b_s_opt_zhuan_add = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c71_b_s_opt_zhuan = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c71_b_flag_lr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c71_b_s_act_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 70U, chartInstance->c71_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c71_b_s_act_lr, 0U);
  chartInstance->c71_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 70U, chartInstance->c71_sfEvent);
  c71_hoistedGlobal = *c71_b_s_act_lr;
  c71_b_hoistedGlobal = *c71_b_s_opt_zhuan;
  c71_c_hoistedGlobal = *c71_b_s_opt_zhuan_add;
  c71_d_hoistedGlobal = *c71_b_flag_lr_pre;
  c71_s_act_lr = c71_hoistedGlobal;
  c71_s_opt_zhuan = c71_b_hoistedGlobal;
  c71_s_opt_zhuan_add = c71_c_hoistedGlobal;
  c71_flag_lr_pre = c71_d_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 7U, 7U, c71_debug_family_names,
    c71_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c71_nargin, 0U, c71_c_sf_marshallOut,
    c71_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c71_nargout, 1U, c71_c_sf_marshallOut,
    c71_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c71_s_act_lr, 2U, c71_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c71_s_opt_zhuan, 3U, c71_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c71_s_opt_zhuan_add, 4U, c71_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c71_flag_lr_pre, 5U, c71_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c71_flag_lr, 6U, c71_sf_marshallOut,
    c71_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c71_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c71_s_act_lr > c71_s_opt_zhuan + c71_s_opt_zhuan_add))
  {
    _SFD_EML_CALL(0U, chartInstance->c71_sfEvent, 4);
    c71_flag_lr = 1;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c71_sfEvent, 5);
    if (CV_EML_IF(0, 1, 1, c71_s_act_lr < c71_s_opt_zhuan)) {
      _SFD_EML_CALL(0U, chartInstance->c71_sfEvent, 6);
      c71_flag_lr = 0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c71_sfEvent, 8);
      c71_flag_lr = c71_flag_lr_pre;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c71_sfEvent, -8);
  _SFD_SYMBOL_SCOPE_POP();
  *c71_b_flag_lr = c71_flag_lr;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 70U, chartInstance->c71_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_mainMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c71_b_flag_lr, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c71_b_s_opt_zhuan, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c71_b_s_opt_zhuan_add, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c71_b_flag_lr_pre, 4U);
}

static void initSimStructsc71_six_plus_six_AcmsteeringV09_main
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c71_machineNumber, uint32_T
  c71_chartNumber, uint32_T c71_instanceNumber)
{
  (void)c71_machineNumber;
  (void)c71_chartNumber;
  (void)c71_instanceNumber;
}

static const mxArray *c71_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData)
{
  const mxArray *c71_mxArrayOutData = NULL;
  int8_T c71_u;
  const mxArray *c71_y = NULL;
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c71_mxArrayOutData = NULL;
  c71_u = *(int8_T *)c71_inData;
  c71_y = NULL;
  sf_mex_assign(&c71_y, sf_mex_create("y", &c71_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c71_mxArrayOutData, c71_y, false);
  return c71_mxArrayOutData;
}

static int8_T c71_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_flag_lr, const char_T *c71_identifier)
{
  int8_T c71_y;
  emlrtMsgIdentifier c71_thisId;
  c71_thisId.fIdentifier = c71_identifier;
  c71_thisId.fParent = NULL;
  c71_y = c71_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c71_flag_lr),
    &c71_thisId);
  sf_mex_destroy(&c71_flag_lr);
  return c71_y;
}

static int8_T c71_b_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId)
{
  int8_T c71_y;
  int8_T c71_i0;
  (void)chartInstance;
  sf_mex_import(c71_parentId, sf_mex_dup(c71_u), &c71_i0, 1, 2, 0U, 0, 0U, 0);
  c71_y = c71_i0;
  sf_mex_destroy(&c71_u);
  return c71_y;
}

static void c71_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c71_mxArrayInData, const char_T *c71_varName, void *c71_outData)
{
  const mxArray *c71_flag_lr;
  const char_T *c71_identifier;
  emlrtMsgIdentifier c71_thisId;
  int8_T c71_y;
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c71_flag_lr = sf_mex_dup(c71_mxArrayInData);
  c71_identifier = c71_varName;
  c71_thisId.fIdentifier = c71_identifier;
  c71_thisId.fParent = NULL;
  c71_y = c71_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c71_flag_lr),
    &c71_thisId);
  sf_mex_destroy(&c71_flag_lr);
  *(int8_T *)c71_outData = c71_y;
  sf_mex_destroy(&c71_mxArrayInData);
}

static const mxArray *c71_b_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData)
{
  const mxArray *c71_mxArrayOutData = NULL;
  real32_T c71_u;
  const mxArray *c71_y = NULL;
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c71_mxArrayOutData = NULL;
  c71_u = *(real32_T *)c71_inData;
  c71_y = NULL;
  sf_mex_assign(&c71_y, sf_mex_create("y", &c71_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c71_mxArrayOutData, c71_y, false);
  return c71_mxArrayOutData;
}

static const mxArray *c71_c_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData)
{
  const mxArray *c71_mxArrayOutData = NULL;
  real_T c71_u;
  const mxArray *c71_y = NULL;
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c71_mxArrayOutData = NULL;
  c71_u = *(real_T *)c71_inData;
  c71_y = NULL;
  sf_mex_assign(&c71_y, sf_mex_create("y", &c71_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c71_mxArrayOutData, c71_y, false);
  return c71_mxArrayOutData;
}

static real_T c71_c_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId)
{
  real_T c71_y;
  real_T c71_d0;
  (void)chartInstance;
  sf_mex_import(c71_parentId, sf_mex_dup(c71_u), &c71_d0, 1, 0, 0U, 0, 0U, 0);
  c71_y = c71_d0;
  sf_mex_destroy(&c71_u);
  return c71_y;
}

static void c71_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c71_mxArrayInData, const char_T *c71_varName, void *c71_outData)
{
  const mxArray *c71_nargout;
  const char_T *c71_identifier;
  emlrtMsgIdentifier c71_thisId;
  real_T c71_y;
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c71_nargout = sf_mex_dup(c71_mxArrayInData);
  c71_identifier = c71_varName;
  c71_thisId.fIdentifier = c71_identifier;
  c71_thisId.fParent = NULL;
  c71_y = c71_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c71_nargout),
    &c71_thisId);
  sf_mex_destroy(&c71_nargout);
  *(real_T *)c71_outData = c71_y;
  sf_mex_destroy(&c71_mxArrayInData);
}

const mxArray
  *sf_c71_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void)
{
  const mxArray *c71_nameCaptureInfo = NULL;
  c71_nameCaptureInfo = NULL;
  sf_mex_assign(&c71_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c71_nameCaptureInfo;
}

static const mxArray *c71_d_sf_marshallOut(void *chartInstanceVoid, void
  *c71_inData)
{
  const mxArray *c71_mxArrayOutData = NULL;
  int32_T c71_u;
  const mxArray *c71_y = NULL;
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c71_mxArrayOutData = NULL;
  c71_u = *(int32_T *)c71_inData;
  c71_y = NULL;
  sf_mex_assign(&c71_y, sf_mex_create("y", &c71_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c71_mxArrayOutData, c71_y, false);
  return c71_mxArrayOutData;
}

static int32_T c71_d_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId)
{
  int32_T c71_y;
  int32_T c71_i1;
  (void)chartInstance;
  sf_mex_import(c71_parentId, sf_mex_dup(c71_u), &c71_i1, 1, 6, 0U, 0, 0U, 0);
  c71_y = c71_i1;
  sf_mex_destroy(&c71_u);
  return c71_y;
}

static void c71_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c71_mxArrayInData, const char_T *c71_varName, void *c71_outData)
{
  const mxArray *c71_b_sfEvent;
  const char_T *c71_identifier;
  emlrtMsgIdentifier c71_thisId;
  int32_T c71_y;
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c71_b_sfEvent = sf_mex_dup(c71_mxArrayInData);
  c71_identifier = c71_varName;
  c71_thisId.fIdentifier = c71_identifier;
  c71_thisId.fParent = NULL;
  c71_y = c71_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c71_b_sfEvent),
    &c71_thisId);
  sf_mex_destroy(&c71_b_sfEvent);
  *(int32_T *)c71_outData = c71_y;
  sf_mex_destroy(&c71_mxArrayInData);
}

static uint8_T c71_e_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_b_is_active_c71_six_plus_six_AcmsteeringV09_main, const char_T
   *c71_identifier)
{
  uint8_T c71_y;
  emlrtMsgIdentifier c71_thisId;
  c71_thisId.fIdentifier = c71_identifier;
  c71_thisId.fParent = NULL;
  c71_y = c71_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c71_b_is_active_c71_six_plus_six_AcmsteeringV09_main), &c71_thisId);
  sf_mex_destroy(&c71_b_is_active_c71_six_plus_six_AcmsteeringV09_main);
  return c71_y;
}

static uint8_T c71_f_emlrt_marshallIn
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c71_u, const emlrtMsgIdentifier *c71_parentId)
{
  uint8_T c71_y;
  uint8_T c71_u0;
  (void)chartInstance;
  sf_mex_import(c71_parentId, sf_mex_dup(c71_u), &c71_u0, 1, 3, 0U, 0, 0U, 0);
  c71_y = c71_u0;
  sf_mex_destroy(&c71_u);
  return c71_y;
}

static void init_dsm_address_info
  (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
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

void sf_c71_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3788532360U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3233777109U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3484630868U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(462808963U);
}

mxArray *sf_c71_six_plus_six_AcmsteeringV09_main_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("gEzaKK9JLdglNV915NB4hE");
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

mxArray *sf_c71_six_plus_six_AcmsteeringV09_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c71_six_plus_six_AcmsteeringV09_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c71_six_plus_six_AcmsteeringV09_main
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"flag_lr\",},{M[8],M[0],T\"is_active_c71_six_plus_six_AcmsteeringV09_main\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c71_six_plus_six_AcmsteeringV09_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_mainMachineNumber_,
           71,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"s_act_lr");
          _SFD_SET_DATA_PROPS(1,2,0,1,"flag_lr");
          _SFD_SET_DATA_PROPS(2,1,1,0,"s_opt_zhuan");
          _SFD_SET_DATA_PROPS(3,1,1,0,"s_opt_zhuan_add");
          _SFD_SET_DATA_PROPS(4,1,1,0,"flag_lr_pre");
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
          (MexFcnForType)c71_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c71_sf_marshallOut,(MexInFcnForType)c71_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c71_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c71_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c71_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real32_T *c71_s_act_lr;
          int8_T *c71_flag_lr;
          real32_T *c71_s_opt_zhuan;
          real32_T *c71_s_opt_zhuan_add;
          int8_T *c71_flag_lr_pre;
          c71_flag_lr_pre = (int8_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c71_s_opt_zhuan_add = (real32_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c71_s_opt_zhuan = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c71_flag_lr = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c71_s_act_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c71_s_act_lr);
          _SFD_SET_DATA_VALUE_PTR(1U, c71_flag_lr);
          _SFD_SET_DATA_VALUE_PTR(2U, c71_s_opt_zhuan);
          _SFD_SET_DATA_VALUE_PTR(3U, c71_s_opt_zhuan_add);
          _SFD_SET_DATA_VALUE_PTR(4U, c71_flag_lr_pre);
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
  return "7CvPfmjAagro4P8Babp9i";
}

static void sf_opaque_initialize_c71_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
  initialize_c71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c71_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  enable_c71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c71_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  disable_c71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c71_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  sf_gateway_c71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c71_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c71_six_plus_six_AcmsteeringV09_main();/* state var info */
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

extern void sf_internal_set_sim_state_c71_six_plus_six_AcmsteeringV09_main
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
    sf_get_sim_state_info_c71_six_plus_six_AcmsteeringV09_main();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c71_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  return sf_internal_get_sim_state_c71_six_plus_six_AcmsteeringV09_main(S);
}

static void sf_opaque_set_sim_state_c71_six_plus_six_AcmsteeringV09_main
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c71_six_plus_six_AcmsteeringV09_main(S, st);
}

static void sf_opaque_terminate_c71_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_optimization_info();
    }

    finalize_c71_six_plus_six_AcmsteeringV09_main
      ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc71_six_plus_six_AcmsteeringV09_main
    ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c71_six_plus_six_AcmsteeringV09_main(SimStruct *
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
    initialize_params_c71_six_plus_six_AcmsteeringV09_main
      ((SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c71_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      71);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,71,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,71,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,71);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,71,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,71,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,71);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4002457064U));
  ssSetChecksum1(S,(974562572U));
  ssSetChecksum2(S,(2647586964U));
  ssSetChecksum3(S,(2385773807U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c71_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c71_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    utMalloc(sizeof(SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc71_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c71_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c71_six_plus_six_AcmsteeringV09_main;
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

void c71_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c71_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c71_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c71_six_plus_six_AcmsteeringV09_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c71_six_plus_six_AcmsteeringV09_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
