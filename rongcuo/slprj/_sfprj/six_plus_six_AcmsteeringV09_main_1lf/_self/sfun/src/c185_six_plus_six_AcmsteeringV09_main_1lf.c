/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun.h"
#include "c185_six_plus_six_AcmsteeringV09_main_1lf.h"
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
static const char * c185_debug_family_names[8] = { "nargin", "nargout",
  "LeftJoystick_UpDown", "LeftJoystick_LeftRight", "RirhtJoystick_UpDown",
  "acc_dem", "steer_dem", "brake_dem" };

/* Function Declarations */
static void initialize_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initialize_params_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void enable_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void disable_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c185_update_debugger_state_c185_six_plus_six_AcmsteeringV09_main
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void set_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_st);
static void finalize_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void sf_gateway_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initSimStructsc185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c185_machineNumber, uint32_T
  c185_chartNumber, uint32_T c185_instanceNumber);
static const mxArray *c185_sf_marshallOut(void *chartInstanceVoid, void
  *c185_inData);
static real32_T c185_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_brake_dem, const char_T *c185_identifier);
static real32_T c185_b_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId);
static void c185_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c185_mxArrayInData, const char_T *c185_varName, void *c185_outData);
static const mxArray *c185_b_sf_marshallOut(void *chartInstanceVoid, void
  *c185_inData);
static real_T c185_c_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId);
static void c185_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c185_mxArrayInData, const char_T *c185_varName, void *c185_outData);
static void c185_info_helper(const mxArray **c185_info);
static const mxArray *c185_emlrt_marshallOut(const char * c185_u);
static const mxArray *c185_b_emlrt_marshallOut(const uint32_T c185_u);
static const mxArray *c185_c_sf_marshallOut(void *chartInstanceVoid, void
  *c185_inData);
static int32_T c185_d_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId);
static void c185_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c185_mxArrayInData, const char_T *c185_varName, void *c185_outData);
static uint8_T c185_e_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_b_is_active_c185_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c185_identifier);
static uint8_T c185_f_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId);
static void init_dsm_address_info
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  chartInstance->c185_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c185_is_active_c185_six_plus_six_AcmsteeringV09_main_1lf = 0U;
}

static void initialize_params_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c185_update_debugger_state_c185_six_plus_six_AcmsteeringV09_main
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  const mxArray *c185_st;
  const mxArray *c185_y = NULL;
  real32_T c185_hoistedGlobal;
  real32_T c185_u;
  const mxArray *c185_b_y = NULL;
  real32_T c185_b_hoistedGlobal;
  real32_T c185_b_u;
  const mxArray *c185_c_y = NULL;
  real32_T c185_c_hoistedGlobal;
  real32_T c185_c_u;
  const mxArray *c185_d_y = NULL;
  uint8_T c185_d_hoistedGlobal;
  uint8_T c185_d_u;
  const mxArray *c185_e_y = NULL;
  real32_T *c185_acc_dem;
  real32_T *c185_brake_dem;
  real32_T *c185_steer_dem;
  c185_brake_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c185_steer_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c185_acc_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c185_st = NULL;
  c185_st = NULL;
  c185_y = NULL;
  sf_mex_assign(&c185_y, sf_mex_createcellmatrix(4, 1), false);
  c185_hoistedGlobal = *c185_acc_dem;
  c185_u = c185_hoistedGlobal;
  c185_b_y = NULL;
  sf_mex_assign(&c185_b_y, sf_mex_create("y", &c185_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c185_y, 0, c185_b_y);
  c185_b_hoistedGlobal = *c185_brake_dem;
  c185_b_u = c185_b_hoistedGlobal;
  c185_c_y = NULL;
  sf_mex_assign(&c185_c_y, sf_mex_create("y", &c185_b_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c185_y, 1, c185_c_y);
  c185_c_hoistedGlobal = *c185_steer_dem;
  c185_c_u = c185_c_hoistedGlobal;
  c185_d_y = NULL;
  sf_mex_assign(&c185_d_y, sf_mex_create("y", &c185_c_u, 1, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c185_y, 2, c185_d_y);
  c185_d_hoistedGlobal =
    chartInstance->c185_is_active_c185_six_plus_six_AcmsteeringV09_main_1lf;
  c185_d_u = c185_d_hoistedGlobal;
  c185_e_y = NULL;
  sf_mex_assign(&c185_e_y, sf_mex_create("y", &c185_d_u, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c185_y, 3, c185_e_y);
  sf_mex_assign(&c185_st, c185_y, false);
  return c185_st;
}

static void set_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_st)
{
  const mxArray *c185_u;
  real32_T *c185_acc_dem;
  real32_T *c185_brake_dem;
  real32_T *c185_steer_dem;
  c185_brake_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c185_steer_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c185_acc_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c185_doneDoubleBufferReInit = true;
  c185_u = sf_mex_dup(c185_st);
  *c185_acc_dem = c185_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c185_u, 0)), "acc_dem");
  *c185_brake_dem = c185_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c185_u, 1)), "brake_dem");
  *c185_steer_dem = c185_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c185_u, 2)), "steer_dem");
  chartInstance->c185_is_active_c185_six_plus_six_AcmsteeringV09_main_1lf =
    c185_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c185_u, 3)),
    "is_active_c185_six_plus_six_AcmsteeringV09_main_1lf");
  sf_mex_destroy(&c185_u);
  c185_update_debugger_state_c185_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c185_st);
}

static void finalize_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real_T c185_hoistedGlobal;
  real_T c185_b_hoistedGlobal;
  real_T c185_c_hoistedGlobal;
  real_T c185_LeftJoystick_UpDown;
  real_T c185_LeftJoystick_LeftRight;
  real_T c185_RirhtJoystick_UpDown;
  uint32_T c185_debug_family_var_map[8];
  real_T c185_nargin = 3.0;
  real_T c185_nargout = 3.0;
  real32_T c185_acc_dem;
  real32_T c185_steer_dem;
  real32_T c185_brake_dem;
  real_T c185_A;
  real_T c185_x;
  real_T c185_b_x;
  real_T c185_c_x;
  real_T c185_y;
  real_T c185_b_A;
  real_T c185_d_x;
  real_T c185_e_x;
  real_T c185_f_x;
  real_T c185_b_y;
  real_T c185_c_A;
  real_T c185_g_x;
  real_T c185_h_x;
  real_T c185_i_x;
  real_T c185_c_y;
  real_T c185_d_A;
  real_T c185_j_x;
  real_T c185_k_x;
  real_T c185_l_x;
  real_T c185_d_y;
  real_T c185_e_A;
  real_T c185_m_x;
  real_T c185_n_x;
  real_T c185_o_x;
  real_T c185_e_y;
  real32_T *c185_b_brake_dem;
  real32_T *c185_b_steer_dem;
  real32_T *c185_b_acc_dem;
  real_T *c185_b_RirhtJoystick_UpDown;
  real_T *c185_b_LeftJoystick_LeftRight;
  real_T *c185_b_LeftJoystick_UpDown;
  boolean_T guard1 = false;
  c185_b_RirhtJoystick_UpDown = (real_T *)ssGetInputPortSignal(chartInstance->S,
    2);
  c185_b_LeftJoystick_LeftRight = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 1);
  c185_b_brake_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c185_b_steer_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c185_b_acc_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c185_b_LeftJoystick_UpDown = (real_T *)ssGetInputPortSignal(chartInstance->S,
    0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 108U, chartInstance->c185_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c185_b_LeftJoystick_UpDown, 0U);
  chartInstance->c185_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 108U,
               chartInstance->c185_sfEvent);
  c185_hoistedGlobal = *c185_b_LeftJoystick_UpDown;
  c185_b_hoistedGlobal = *c185_b_LeftJoystick_LeftRight;
  c185_c_hoistedGlobal = *c185_b_RirhtJoystick_UpDown;
  c185_LeftJoystick_UpDown = c185_hoistedGlobal;
  c185_LeftJoystick_LeftRight = c185_b_hoistedGlobal;
  c185_RirhtJoystick_UpDown = c185_c_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 8U, 8U, c185_debug_family_names,
    c185_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c185_nargin, 0U, c185_b_sf_marshallOut,
    c185_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c185_nargout, 1U, c185_b_sf_marshallOut,
    c185_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c185_LeftJoystick_UpDown, 2U, c185_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c185_LeftJoystick_LeftRight, 3U,
    c185_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c185_RirhtJoystick_UpDown, 4U,
    c185_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c185_acc_dem, 5U, c185_sf_marshallOut,
    c185_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c185_steer_dem, 6U, c185_sf_marshallOut,
    c185_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c185_brake_dem, 7U, c185_sf_marshallOut,
    c185_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c185_LeftJoystick_UpDown <= 1512.0)) {
    _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 4);
    c185_A = c185_LeftJoystick_UpDown - 1512.0;
    c185_x = c185_A;
    c185_b_x = c185_x;
    c185_c_x = c185_b_x;
    c185_y = c185_c_x / -418.0;
    c185_acc_dem = (real32_T)(c185_y * 100.0);
  } else {
    _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 6);
    c185_b_A = c185_LeftJoystick_UpDown - 1512.0;
    c185_d_x = c185_b_A;
    c185_e_x = c185_d_x;
    c185_f_x = c185_e_x;
    c185_b_y = c185_f_x / 422.0;
    c185_acc_dem = (real32_T)-(c185_b_y * 100.0);
  }

  _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 9);
  guard1 = false;
  if (CV_EML_COND(0, 1, 0, c185_LeftJoystick_LeftRight < 500.0)) {
    guard1 = true;
  } else if (CV_EML_COND(0, 1, 1, c185_LeftJoystick_LeftRight > 2500.0)) {
    guard1 = true;
  } else {
    CV_EML_MCDC(0, 1, 0, false);
    CV_EML_IF(0, 1, 1, false);
    _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 11);
    if (CV_EML_IF(0, 1, 2, c185_LeftJoystick_LeftRight <= 1503.0)) {
      _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 12);
      c185_c_A = c185_LeftJoystick_LeftRight - 1503.0;
      c185_g_x = c185_c_A;
      c185_h_x = c185_g_x;
      c185_i_x = c185_h_x;
      c185_c_y = c185_i_x / -419.0;
      c185_steer_dem = (real32_T)(c185_c_y * 100.0);
    } else {
      _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 14);
      c185_d_A = c185_LeftJoystick_LeftRight - 1503.0;
      c185_j_x = c185_d_A;
      c185_k_x = c185_j_x;
      c185_l_x = c185_k_x;
      c185_d_y = c185_l_x / 420.0;
      c185_steer_dem = (real32_T)-(c185_d_y * 100.0);
    }
  }

  if (guard1 == true) {
    CV_EML_MCDC(0, 1, 0, true);
    CV_EML_IF(0, 1, 1, true);
    _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 10);
    c185_steer_dem = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, 17);
  c185_e_A = c185_RirhtJoystick_UpDown - 1094.0;
  c185_m_x = c185_e_A;
  c185_n_x = c185_m_x;
  c185_o_x = c185_n_x;
  c185_e_y = c185_o_x / 840.0;
  c185_brake_dem = (real32_T)(c185_e_y * 100.0);
  _SFD_EML_CALL(0U, chartInstance->c185_sfEvent, -17);
  _SFD_SYMBOL_SCOPE_POP();
  *c185_b_acc_dem = c185_acc_dem;
  *c185_b_steer_dem = c185_steer_dem;
  *c185_b_brake_dem = c185_brake_dem;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 108U, chartInstance->c185_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c185_b_acc_dem, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c185_b_steer_dem, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c185_b_brake_dem, 3U);
  _SFD_DATA_RANGE_CHECK(*c185_b_LeftJoystick_LeftRight, 4U);
  _SFD_DATA_RANGE_CHECK(*c185_b_RirhtJoystick_UpDown, 5U);
}

static void initSimStructsc185_six_plus_six_AcmsteeringV09_main_1lf
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c185_machineNumber, uint32_T
  c185_chartNumber, uint32_T c185_instanceNumber)
{
  (void)c185_machineNumber;
  (void)c185_chartNumber;
  (void)c185_instanceNumber;
}

static const mxArray *c185_sf_marshallOut(void *chartInstanceVoid, void
  *c185_inData)
{
  const mxArray *c185_mxArrayOutData = NULL;
  real32_T c185_u;
  const mxArray *c185_y = NULL;
  SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c185_mxArrayOutData = NULL;
  c185_u = *(real32_T *)c185_inData;
  c185_y = NULL;
  sf_mex_assign(&c185_y, sf_mex_create("y", &c185_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c185_mxArrayOutData, c185_y, false);
  return c185_mxArrayOutData;
}

static real32_T c185_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_brake_dem, const char_T *c185_identifier)
{
  real32_T c185_y;
  emlrtMsgIdentifier c185_thisId;
  c185_thisId.fIdentifier = c185_identifier;
  c185_thisId.fParent = NULL;
  c185_y = c185_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c185_brake_dem),
    &c185_thisId);
  sf_mex_destroy(&c185_brake_dem);
  return c185_y;
}

static real32_T c185_b_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId)
{
  real32_T c185_y;
  real32_T c185_f0;
  (void)chartInstance;
  sf_mex_import(c185_parentId, sf_mex_dup(c185_u), &c185_f0, 1, 1, 0U, 0, 0U, 0);
  c185_y = c185_f0;
  sf_mex_destroy(&c185_u);
  return c185_y;
}

static void c185_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c185_mxArrayInData, const char_T *c185_varName, void *c185_outData)
{
  const mxArray *c185_brake_dem;
  const char_T *c185_identifier;
  emlrtMsgIdentifier c185_thisId;
  real32_T c185_y;
  SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c185_brake_dem = sf_mex_dup(c185_mxArrayInData);
  c185_identifier = c185_varName;
  c185_thisId.fIdentifier = c185_identifier;
  c185_thisId.fParent = NULL;
  c185_y = c185_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c185_brake_dem),
    &c185_thisId);
  sf_mex_destroy(&c185_brake_dem);
  *(real32_T *)c185_outData = c185_y;
  sf_mex_destroy(&c185_mxArrayInData);
}

static const mxArray *c185_b_sf_marshallOut(void *chartInstanceVoid, void
  *c185_inData)
{
  const mxArray *c185_mxArrayOutData = NULL;
  real_T c185_u;
  const mxArray *c185_y = NULL;
  SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c185_mxArrayOutData = NULL;
  c185_u = *(real_T *)c185_inData;
  c185_y = NULL;
  sf_mex_assign(&c185_y, sf_mex_create("y", &c185_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c185_mxArrayOutData, c185_y, false);
  return c185_mxArrayOutData;
}

static real_T c185_c_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId)
{
  real_T c185_y;
  real_T c185_d0;
  (void)chartInstance;
  sf_mex_import(c185_parentId, sf_mex_dup(c185_u), &c185_d0, 1, 0, 0U, 0, 0U, 0);
  c185_y = c185_d0;
  sf_mex_destroy(&c185_u);
  return c185_y;
}

static void c185_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c185_mxArrayInData, const char_T *c185_varName, void *c185_outData)
{
  const mxArray *c185_nargout;
  const char_T *c185_identifier;
  emlrtMsgIdentifier c185_thisId;
  real_T c185_y;
  SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c185_nargout = sf_mex_dup(c185_mxArrayInData);
  c185_identifier = c185_varName;
  c185_thisId.fIdentifier = c185_identifier;
  c185_thisId.fParent = NULL;
  c185_y = c185_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c185_nargout),
    &c185_thisId);
  sf_mex_destroy(&c185_nargout);
  *(real_T *)c185_outData = c185_y;
  sf_mex_destroy(&c185_mxArrayInData);
}

const mxArray
  *sf_c185_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c185_nameCaptureInfo = NULL;
  c185_nameCaptureInfo = NULL;
  sf_mex_assign(&c185_nameCaptureInfo, sf_mex_createstruct("structure", 2, 7, 1),
                false);
  c185_info_helper(&c185_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c185_nameCaptureInfo);
  return c185_nameCaptureInfo;
}

static void c185_info_helper(const mxArray **c185_info)
{
  const mxArray *c185_rhs0 = NULL;
  const mxArray *c185_lhs0 = NULL;
  const mxArray *c185_rhs1 = NULL;
  const mxArray *c185_lhs1 = NULL;
  const mxArray *c185_rhs2 = NULL;
  const mxArray *c185_lhs2 = NULL;
  const mxArray *c185_rhs3 = NULL;
  const mxArray *c185_lhs3 = NULL;
  const mxArray *c185_rhs4 = NULL;
  const mxArray *c185_lhs4 = NULL;
  const mxArray *c185_rhs5 = NULL;
  const mxArray *c185_lhs5 = NULL;
  const mxArray *c185_rhs6 = NULL;
  const mxArray *c185_lhs6 = NULL;
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(""), "context", "context",
                  0);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("mrdivide"), "name", "name",
                  0);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1388463696U),
                  "fileTimeLo", "fileTimeLo", 0);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1370017086U),
                  "mFileTimeLo", "mFileTimeLo", 0);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c185_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c185_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_rhs0), "rhs",
                  "rhs", 0);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_lhs0), "lhs",
                  "lhs", 0);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 1);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 1);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1363718156U),
                  "fileTimeLo", "fileTimeLo", 1);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c185_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c185_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_rhs1), "rhs",
                  "rhs", 1);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_lhs1), "lhs",
                  "lhs", 1);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 2);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("rdivide"), "name", "name",
                  2);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1363717480U),
                  "fileTimeLo", "fileTimeLo", 2);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c185_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c185_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_rhs2), "rhs",
                  "rhs", 2);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_lhs2), "lhs",
                  "lhs", 2);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 3);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1363718156U),
                  "fileTimeLo", "fileTimeLo", 3);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c185_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c185_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_rhs3), "rhs",
                  "rhs", 3);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_lhs3), "lhs",
                  "lhs", 3);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 4);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1286825996U),
                  "fileTimeLo", "fileTimeLo", 4);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c185_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c185_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_rhs4), "rhs",
                  "rhs", 4);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_lhs4), "lhs",
                  "lhs", 4);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("eml_div"), "name", "name",
                  5);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 5);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1375987888U),
                  "fileTimeLo", "fileTimeLo", 5);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c185_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c185_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_rhs5), "rhs",
                  "rhs", 5);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_lhs5), "lhs",
                  "lhs", 5);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("coder.internal.div"),
                  "name", "name", 6);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c185_info, c185_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(1389311520U),
                  "fileTimeLo", "fileTimeLo", 6);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c185_info, c185_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c185_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c185_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_rhs6), "rhs",
                  "rhs", 6);
  sf_mex_addfield(*c185_info, sf_mex_duplicatearraysafe(&c185_lhs6), "lhs",
                  "lhs", 6);
  sf_mex_destroy(&c185_rhs0);
  sf_mex_destroy(&c185_lhs0);
  sf_mex_destroy(&c185_rhs1);
  sf_mex_destroy(&c185_lhs1);
  sf_mex_destroy(&c185_rhs2);
  sf_mex_destroy(&c185_lhs2);
  sf_mex_destroy(&c185_rhs3);
  sf_mex_destroy(&c185_lhs3);
  sf_mex_destroy(&c185_rhs4);
  sf_mex_destroy(&c185_lhs4);
  sf_mex_destroy(&c185_rhs5);
  sf_mex_destroy(&c185_lhs5);
  sf_mex_destroy(&c185_rhs6);
  sf_mex_destroy(&c185_lhs6);
}

static const mxArray *c185_emlrt_marshallOut(const char * c185_u)
{
  const mxArray *c185_y = NULL;
  c185_y = NULL;
  sf_mex_assign(&c185_y, sf_mex_create("y", c185_u, 15, 0U, 0U, 0U, 2, 1, strlen
                 (c185_u)), false);
  return c185_y;
}

static const mxArray *c185_b_emlrt_marshallOut(const uint32_T c185_u)
{
  const mxArray *c185_y = NULL;
  c185_y = NULL;
  sf_mex_assign(&c185_y, sf_mex_create("y", &c185_u, 7, 0U, 0U, 0U, 0), false);
  return c185_y;
}

static const mxArray *c185_c_sf_marshallOut(void *chartInstanceVoid, void
  *c185_inData)
{
  const mxArray *c185_mxArrayOutData = NULL;
  int32_T c185_u;
  const mxArray *c185_y = NULL;
  SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c185_mxArrayOutData = NULL;
  c185_u = *(int32_T *)c185_inData;
  c185_y = NULL;
  sf_mex_assign(&c185_y, sf_mex_create("y", &c185_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c185_mxArrayOutData, c185_y, false);
  return c185_mxArrayOutData;
}

static int32_T c185_d_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId)
{
  int32_T c185_y;
  int32_T c185_i0;
  (void)chartInstance;
  sf_mex_import(c185_parentId, sf_mex_dup(c185_u), &c185_i0, 1, 6, 0U, 0, 0U, 0);
  c185_y = c185_i0;
  sf_mex_destroy(&c185_u);
  return c185_y;
}

static void c185_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c185_mxArrayInData, const char_T *c185_varName, void *c185_outData)
{
  const mxArray *c185_b_sfEvent;
  const char_T *c185_identifier;
  emlrtMsgIdentifier c185_thisId;
  int32_T c185_y;
  SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c185_b_sfEvent = sf_mex_dup(c185_mxArrayInData);
  c185_identifier = c185_varName;
  c185_thisId.fIdentifier = c185_identifier;
  c185_thisId.fParent = NULL;
  c185_y = c185_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c185_b_sfEvent),
    &c185_thisId);
  sf_mex_destroy(&c185_b_sfEvent);
  *(int32_T *)c185_outData = c185_y;
  sf_mex_destroy(&c185_mxArrayInData);
}

static uint8_T c185_e_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_b_is_active_c185_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c185_identifier)
{
  uint8_T c185_y;
  emlrtMsgIdentifier c185_thisId;
  c185_thisId.fIdentifier = c185_identifier;
  c185_thisId.fParent = NULL;
  c185_y = c185_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c185_b_is_active_c185_six_plus_six_AcmsteeringV09_main_1lf), &c185_thisId);
  sf_mex_destroy(&c185_b_is_active_c185_six_plus_six_AcmsteeringV09_main_1lf);
  return c185_y;
}

static uint8_T c185_f_emlrt_marshallIn
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c185_u, const emlrtMsgIdentifier *c185_parentId)
{
  uint8_T c185_y;
  uint8_T c185_u0;
  (void)chartInstance;
  sf_mex_import(c185_parentId, sf_mex_dup(c185_u), &c185_u0, 1, 3, 0U, 0, 0U, 0);
  c185_y = c185_u0;
  sf_mex_destroy(&c185_u);
  return c185_y;
}

static void init_dsm_address_info
  (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
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

void sf_c185_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1909728260U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1747041583U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(183118791U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2864236298U);
}

mxArray *sf_c185_six_plus_six_AcmsteeringV09_main_1lf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("OkiO2zHVSAkvBfYf1XLZNG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c185_six_plus_six_AcmsteeringV09_main_1lf_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c185_six_plus_six_AcmsteeringV09_main_1lf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c185_six_plus_six_AcmsteeringV09_main_1lf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[5],T\"acc_dem\",},{M[1],M[7],T\"brake_dem\",},{M[1],M[6],T\"steer_dem\",},{M[8],M[0],T\"is_active_c185_six_plus_six_AcmsteeringV09_main_1lf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c185_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           185,
           1,
           1,
           0,
           6,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"LeftJoystick_UpDown");
          _SFD_SET_DATA_PROPS(1,2,0,1,"acc_dem");
          _SFD_SET_DATA_PROPS(2,2,0,1,"steer_dem");
          _SFD_SET_DATA_PROPS(3,2,0,1,"brake_dem");
          _SFD_SET_DATA_PROPS(4,1,1,0,"LeftJoystick_LeftRight");
          _SFD_SET_DATA_PROPS(5,1,1,0,"RirhtJoystick_UpDown");
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
        _SFD_CV_INIT_EML(0,1,1,3,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,635);
        _SFD_CV_INIT_EML_IF(0,1,0,120,148,213,288);
        _SFD_CV_INIT_EML_IF(0,1,1,290,353,381,566);
        _SFD_CV_INIT_EML_IF(0,1,2,381,416,486,566);

        {
          static int condStart[] = { 294, 325 };

          static int condEnd[] = { 321, 353 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,294,353,2,0,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c185_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c185_sf_marshallOut,(MexInFcnForType)c185_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c185_sf_marshallOut,(MexInFcnForType)c185_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c185_sf_marshallOut,(MexInFcnForType)c185_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c185_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c185_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c185_LeftJoystick_UpDown;
          real32_T *c185_acc_dem;
          real32_T *c185_steer_dem;
          real32_T *c185_brake_dem;
          real_T *c185_LeftJoystick_LeftRight;
          real_T *c185_RirhtJoystick_UpDown;
          c185_RirhtJoystick_UpDown = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c185_LeftJoystick_LeftRight = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c185_brake_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c185_steer_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c185_acc_dem = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c185_LeftJoystick_UpDown = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c185_LeftJoystick_UpDown);
          _SFD_SET_DATA_VALUE_PTR(1U, c185_acc_dem);
          _SFD_SET_DATA_VALUE_PTR(2U, c185_steer_dem);
          _SFD_SET_DATA_VALUE_PTR(3U, c185_brake_dem);
          _SFD_SET_DATA_VALUE_PTR(4U, c185_LeftJoystick_LeftRight);
          _SFD_SET_DATA_VALUE_PTR(5U, c185_RirhtJoystick_UpDown);
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
  return "XyCqWdsAje78TST6m5cjEB";
}

static void sf_opaque_initialize_c185_six_plus_six_AcmsteeringV09_main_1lf(void *
  chartInstanceVar)
{
  chart_debug_initialization
    (((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
  initialize_c185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c185_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  enable_c185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c185_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  disable_c185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c185_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  sf_gateway_c185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c185_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
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

extern void sf_internal_set_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
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
    sf_get_sim_state_info_c185_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf(SimStruct* S)
{
  return sf_internal_get_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf(S);
}

static void sf_opaque_set_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf(S, st);
}

static void sf_opaque_terminate_c185_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    }

    finalize_c185_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
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
  initSimStructsc185_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c185_six_plus_six_AcmsteeringV09_main_1lf
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
    initialize_params_c185_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c185_six_plus_six_AcmsteeringV09_main_1lf(SimStruct
  *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      185);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,185,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,185,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,185);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,185,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,185,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,185);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(319394416U));
  ssSetChecksum1(S,(3908345944U));
  ssSetChecksum2(S,(2468239953U));
  ssSetChecksum3(S,(2659590497U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c185_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c185_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    utMalloc(sizeof(SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc185_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c185_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c185_six_plus_six_AcmsteeringV09_main_1lf;
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

void c185_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c185_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c185_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c185_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c185_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
