/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_sfun.h"
#include "c34_six_plus_six_AcmsteeringV09_main.h"
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
static const char * c34_debug_family_names[13] = { "nargin", "nargout",
  "steer_dem", "G", "L", "umax", "B", "Tpeak_L", "Tpeak_R", "eff_tran", "Radius",
  "f", "Rturn_min" };

/* Function Declarations */
static void initialize_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initialize_params_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void enable_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void disable_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c34_update_debugger_state_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void set_sim_state_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_st);
static void finalize_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void sf_gateway_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c34_chartstep_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initSimStructsc34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c34_machineNumber, uint32_T
  c34_chartNumber, uint32_T c34_instanceNumber);
static const mxArray *c34_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static real32_T c34_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_Rturn_min, const char_T *c34_identifier);
static real32_T c34_b_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId);
static void c34_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData);
static const mxArray *c34_b_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static real_T c34_c_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId);
static void c34_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData);
static void c34_info_helper(const mxArray **c34_info);
static const mxArray *c34_emlrt_marshallOut(const char * c34_u);
static const mxArray *c34_b_emlrt_marshallOut(const uint32_T c34_u);
static const mxArray *c34_c_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static int32_T c34_d_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId);
static void c34_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData);
static uint8_T c34_e_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_b_is_active_c34_six_plus_six_AcmsteeringV09_main, const char_T
   *c34_identifier);
static uint8_T c34_f_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId);
static void init_dsm_address_info
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  chartInstance->c34_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c34_is_active_c34_six_plus_six_AcmsteeringV09_main = 0U;
}

static void initialize_params_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c34_update_debugger_state_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  const mxArray *c34_st;
  const mxArray *c34_y = NULL;
  real32_T c34_hoistedGlobal;
  real32_T c34_u;
  const mxArray *c34_b_y = NULL;
  uint8_T c34_b_hoistedGlobal;
  uint8_T c34_b_u;
  const mxArray *c34_c_y = NULL;
  real32_T *c34_Rturn_min;
  c34_Rturn_min = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c34_st = NULL;
  c34_st = NULL;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_createcellmatrix(2, 1), false);
  c34_hoistedGlobal = *c34_Rturn_min;
  c34_u = c34_hoistedGlobal;
  c34_b_y = NULL;
  sf_mex_assign(&c34_b_y, sf_mex_create("y", &c34_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c34_y, 0, c34_b_y);
  c34_b_hoistedGlobal =
    chartInstance->c34_is_active_c34_six_plus_six_AcmsteeringV09_main;
  c34_b_u = c34_b_hoistedGlobal;
  c34_c_y = NULL;
  sf_mex_assign(&c34_c_y, sf_mex_create("y", &c34_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c34_y, 1, c34_c_y);
  sf_mex_assign(&c34_st, c34_y, false);
  return c34_st;
}

static void set_sim_state_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_st)
{
  const mxArray *c34_u;
  real32_T *c34_Rturn_min;
  c34_Rturn_min = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c34_doneDoubleBufferReInit = true;
  c34_u = sf_mex_dup(c34_st);
  *c34_Rturn_min = c34_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c34_u, 0)), "Rturn_min");
  chartInstance->c34_is_active_c34_six_plus_six_AcmsteeringV09_main =
    c34_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c34_u, 1)),
    "is_active_c34_six_plus_six_AcmsteeringV09_main");
  sf_mex_destroy(&c34_u);
  c34_update_debugger_state_c34_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c34_st);
}

static void finalize_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real32_T *c34_steer_dem;
  real32_T *c34_Rturn_min;
  real32_T *c34_G;
  real32_T *c34_L;
  real32_T *c34_umax;
  real32_T *c34_B;
  real32_T *c34_Tpeak_L;
  real32_T *c34_Tpeak_R;
  real32_T *c34_eff_tran;
  real32_T *c34_Radius;
  real32_T *c34_f;
  c34_f = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c34_Radius = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c34_eff_tran = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c34_Tpeak_R = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c34_Tpeak_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c34_B = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c34_umax = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c34_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c34_G = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c34_Rturn_min = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c34_steer_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 33U, chartInstance->c34_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_steer_dem, 0U);
  chartInstance->c34_sfEvent = CALL_EVENT;
  c34_chartstep_c34_six_plus_six_AcmsteeringV09_main(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_mainMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_Rturn_min, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_G, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_L, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_umax, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_B, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_Tpeak_L, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_Tpeak_R, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_eff_tran, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_Radius, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c34_f, 10U);
}

static void c34_chartstep_c34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real32_T c34_hoistedGlobal;
  real32_T c34_b_hoistedGlobal;
  real32_T c34_c_hoistedGlobal;
  real32_T c34_d_hoistedGlobal;
  real32_T c34_e_hoistedGlobal;
  real32_T c34_f_hoistedGlobal;
  real32_T c34_g_hoistedGlobal;
  real32_T c34_h_hoistedGlobal;
  real32_T c34_i_hoistedGlobal;
  real32_T c34_j_hoistedGlobal;
  real32_T c34_steer_dem;
  real32_T c34_G;
  real32_T c34_L;
  real32_T c34_umax;
  real32_T c34_B;
  real32_T c34_Tpeak_L;
  real32_T c34_Tpeak_R;
  real32_T c34_eff_tran;
  real32_T c34_Radius;
  real32_T c34_f;
  uint32_T c34_debug_family_var_map[13];
  real_T c34_nargin = 10.0;
  real_T c34_nargout = 1.0;
  real32_T c34_Rturn_min;
  real32_T c34_b;
  real32_T c34_y;
  real32_T c34_A;
  real32_T c34_b_B;
  real32_T c34_x;
  real32_T c34_b_y;
  real32_T c34_b_x;
  real32_T c34_c_y;
  real32_T c34_c_x;
  real32_T c34_d_y;
  real32_T c34_e_y;
  real32_T c34_b_A;
  real32_T c34_d_x;
  real32_T c34_e_x;
  real32_T c34_f_x;
  real32_T c34_f_y;
  real32_T c34_c_A;
  real32_T c34_c_B;
  real32_T c34_g_x;
  real32_T c34_g_y;
  real32_T c34_h_x;
  real32_T c34_h_y;
  real32_T c34_i_x;
  real32_T c34_i_y;
  real32_T c34_j_y;
  real32_T c34_d_A;
  real32_T c34_j_x;
  real32_T c34_k_x;
  real32_T c34_l_x;
  real32_T c34_k_y;
  real32_T c34_b_b;
  real32_T c34_l_y;
  real32_T c34_e_A;
  real32_T c34_d_B;
  real32_T c34_m_x;
  real32_T c34_m_y;
  real32_T c34_n_x;
  real32_T c34_n_y;
  real32_T c34_o_x;
  real32_T c34_o_y;
  real32_T c34_p_y;
  real32_T c34_f_A;
  real32_T c34_p_x;
  real32_T c34_q_x;
  real32_T c34_r_x;
  real32_T c34_q_y;
  real32_T c34_g_A;
  real32_T c34_e_B;
  real32_T c34_s_x;
  real32_T c34_r_y;
  real32_T c34_t_x;
  real32_T c34_s_y;
  real32_T c34_u_x;
  real32_T c34_t_y;
  real32_T c34_u_y;
  real32_T c34_h_A;
  real32_T c34_v_x;
  real32_T c34_w_x;
  real32_T c34_x_x;
  real32_T c34_v_y;
  real32_T *c34_b_f;
  real32_T *c34_b_Radius;
  real32_T *c34_b_eff_tran;
  real32_T *c34_b_Tpeak_R;
  real32_T *c34_b_Tpeak_L;
  real32_T *c34_f_B;
  real32_T *c34_b_umax;
  real32_T *c34_b_L;
  real32_T *c34_b_G;
  real32_T *c34_b_steer_dem;
  real32_T *c34_b_Rturn_min;
  c34_b_f = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c34_b_Radius = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c34_b_eff_tran = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c34_b_Tpeak_R = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c34_b_Tpeak_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c34_f_B = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c34_b_umax = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c34_b_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c34_b_G = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c34_b_Rturn_min = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c34_b_steer_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 33U, chartInstance->c34_sfEvent);
  c34_hoistedGlobal = *c34_b_steer_dem;
  c34_b_hoistedGlobal = *c34_b_G;
  c34_c_hoistedGlobal = *c34_b_L;
  c34_d_hoistedGlobal = *c34_b_umax;
  c34_e_hoistedGlobal = *c34_f_B;
  c34_f_hoistedGlobal = *c34_b_Tpeak_L;
  c34_g_hoistedGlobal = *c34_b_Tpeak_R;
  c34_h_hoistedGlobal = *c34_b_eff_tran;
  c34_i_hoistedGlobal = *c34_b_Radius;
  c34_j_hoistedGlobal = *c34_b_f;
  c34_steer_dem = c34_hoistedGlobal;
  c34_G = c34_b_hoistedGlobal;
  c34_L = c34_c_hoistedGlobal;
  c34_umax = c34_d_hoistedGlobal;
  c34_B = c34_e_hoistedGlobal;
  c34_Tpeak_L = c34_f_hoistedGlobal;
  c34_Tpeak_R = c34_g_hoistedGlobal;
  c34_eff_tran = c34_h_hoistedGlobal;
  c34_Radius = c34_i_hoistedGlobal;
  c34_f = c34_j_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 13U, 13U, c34_debug_family_names,
    c34_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_nargin, 0U, c34_b_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_nargout, 1U, c34_b_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_steer_dem, 2U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_G, 3U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_L, 4U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_umax, 5U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_B, 6U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_Tpeak_L, 7U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_Tpeak_R, 8U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_eff_tran, 9U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_Radius, 10U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c34_f, 11U, c34_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_Rturn_min, 12U, c34_sf_marshallOut,
    c34_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c34_steer_dem > 0.0F)) {
    _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 4);
    c34_b = c34_B;
    c34_y = 4.0F * c34_b;
    c34_A = c34_Tpeak_R * c34_eff_tran;
    c34_b_B = c34_Radius;
    c34_x = c34_A;
    c34_b_y = c34_b_B;
    c34_b_x = c34_x;
    c34_c_y = c34_b_y;
    c34_c_x = c34_b_x;
    c34_d_y = c34_c_y;
    c34_e_y = c34_c_x / c34_d_y;
    c34_b_A = c34_f * c34_G;
    c34_d_x = c34_b_A;
    c34_e_x = c34_d_x;
    c34_f_x = c34_e_x;
    c34_f_y = c34_f_x / 2.0F;
    c34_c_A = c34_G * c34_L * c34_umax;
    c34_c_B = c34_y * (c34_e_y - c34_f_y);
    c34_g_x = c34_c_A;
    c34_g_y = c34_c_B;
    c34_h_x = c34_g_x;
    c34_h_y = c34_g_y;
    c34_i_x = c34_h_x;
    c34_i_y = c34_h_y;
    c34_j_y = c34_i_x / c34_i_y;
    c34_d_A = c34_j_y - 0.925F;
    c34_j_x = c34_d_A;
    c34_k_x = c34_j_x;
    c34_l_x = c34_k_x;
    c34_k_y = c34_l_x / 0.15F;
    c34_Rturn_min = c34_k_y * c34_B;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 6);
    c34_b_b = c34_B;
    c34_l_y = 4.0F * c34_b_b;
    c34_e_A = c34_Tpeak_L * c34_eff_tran;
    c34_d_B = c34_Radius;
    c34_m_x = c34_e_A;
    c34_m_y = c34_d_B;
    c34_n_x = c34_m_x;
    c34_n_y = c34_m_y;
    c34_o_x = c34_n_x;
    c34_o_y = c34_n_y;
    c34_p_y = c34_o_x / c34_o_y;
    c34_f_A = c34_f * c34_G;
    c34_p_x = c34_f_A;
    c34_q_x = c34_p_x;
    c34_r_x = c34_q_x;
    c34_q_y = c34_r_x / 2.0F;
    c34_g_A = c34_G * c34_L * c34_umax;
    c34_e_B = c34_l_y * (c34_p_y - c34_q_y);
    c34_s_x = c34_g_A;
    c34_r_y = c34_e_B;
    c34_t_x = c34_s_x;
    c34_s_y = c34_r_y;
    c34_u_x = c34_t_x;
    c34_t_y = c34_s_y;
    c34_u_y = c34_u_x / c34_t_y;
    c34_h_A = c34_u_y - 0.925F;
    c34_v_x = c34_h_A;
    c34_w_x = c34_v_x;
    c34_x_x = c34_w_x;
    c34_v_y = c34_x_x / 0.15F;
    c34_Rturn_min = c34_v_y * c34_B;
  }

  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, -6);
  _SFD_SYMBOL_SCOPE_POP();
  *c34_b_Rturn_min = c34_Rturn_min;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 33U, chartInstance->c34_sfEvent);
}

static void initSimStructsc34_six_plus_six_AcmsteeringV09_main
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c34_machineNumber, uint32_T
  c34_chartNumber, uint32_T c34_instanceNumber)
{
  (void)c34_machineNumber;
  (void)c34_chartNumber;
  (void)c34_instanceNumber;
}

static const mxArray *c34_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData = NULL;
  real32_T c34_u;
  const mxArray *c34_y = NULL;
  SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_u = *(real32_T *)c34_inData;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", &c34_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static real32_T c34_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_Rturn_min, const char_T *c34_identifier)
{
  real32_T c34_y;
  emlrtMsgIdentifier c34_thisId;
  c34_thisId.fIdentifier = c34_identifier;
  c34_thisId.fParent = NULL;
  c34_y = c34_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_Rturn_min),
    &c34_thisId);
  sf_mex_destroy(&c34_Rturn_min);
  return c34_y;
}

static real32_T c34_b_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId)
{
  real32_T c34_y;
  real32_T c34_f0;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), &c34_f0, 1, 1, 0U, 0, 0U, 0);
  c34_y = c34_f0;
  sf_mex_destroy(&c34_u);
  return c34_y;
}

static void c34_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData)
{
  const mxArray *c34_Rturn_min;
  const char_T *c34_identifier;
  emlrtMsgIdentifier c34_thisId;
  real32_T c34_y;
  SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c34_Rturn_min = sf_mex_dup(c34_mxArrayInData);
  c34_identifier = c34_varName;
  c34_thisId.fIdentifier = c34_identifier;
  c34_thisId.fParent = NULL;
  c34_y = c34_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_Rturn_min),
    &c34_thisId);
  sf_mex_destroy(&c34_Rturn_min);
  *(real32_T *)c34_outData = c34_y;
  sf_mex_destroy(&c34_mxArrayInData);
}

static const mxArray *c34_b_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData = NULL;
  real_T c34_u;
  const mxArray *c34_y = NULL;
  SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_u = *(real_T *)c34_inData;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", &c34_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static real_T c34_c_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId)
{
  real_T c34_y;
  real_T c34_d0;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), &c34_d0, 1, 0, 0U, 0, 0U, 0);
  c34_y = c34_d0;
  sf_mex_destroy(&c34_u);
  return c34_y;
}

static void c34_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData)
{
  const mxArray *c34_nargout;
  const char_T *c34_identifier;
  emlrtMsgIdentifier c34_thisId;
  real_T c34_y;
  SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c34_nargout = sf_mex_dup(c34_mxArrayInData);
  c34_identifier = c34_varName;
  c34_thisId.fIdentifier = c34_identifier;
  c34_thisId.fParent = NULL;
  c34_y = c34_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_nargout),
    &c34_thisId);
  sf_mex_destroy(&c34_nargout);
  *(real_T *)c34_outData = c34_y;
  sf_mex_destroy(&c34_mxArrayInData);
}

const mxArray
  *sf_c34_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void)
{
  const mxArray *c34_nameCaptureInfo = NULL;
  c34_nameCaptureInfo = NULL;
  sf_mex_assign(&c34_nameCaptureInfo, sf_mex_createstruct("structure", 2, 11, 1),
                false);
  c34_info_helper(&c34_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c34_nameCaptureInfo);
  return c34_nameCaptureInfo;
}

static void c34_info_helper(const mxArray **c34_info)
{
  const mxArray *c34_rhs0 = NULL;
  const mxArray *c34_lhs0 = NULL;
  const mxArray *c34_rhs1 = NULL;
  const mxArray *c34_lhs1 = NULL;
  const mxArray *c34_rhs2 = NULL;
  const mxArray *c34_lhs2 = NULL;
  const mxArray *c34_rhs3 = NULL;
  const mxArray *c34_lhs3 = NULL;
  const mxArray *c34_rhs4 = NULL;
  const mxArray *c34_lhs4 = NULL;
  const mxArray *c34_rhs5 = NULL;
  const mxArray *c34_lhs5 = NULL;
  const mxArray *c34_rhs6 = NULL;
  const mxArray *c34_lhs6 = NULL;
  const mxArray *c34_rhs7 = NULL;
  const mxArray *c34_lhs7 = NULL;
  const mxArray *c34_rhs8 = NULL;
  const mxArray *c34_lhs8 = NULL;
  const mxArray *c34_rhs9 = NULL;
  const mxArray *c34_lhs9 = NULL;
  const mxArray *c34_rhs10 = NULL;
  const mxArray *c34_lhs10 = NULL;
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("eml_mtimes_helper"), "name",
                  "name", 0);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                  "resolved", "resolved", 0);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1383880894U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c34_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                  "context", "context", 1);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 1);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c34_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                  "context", "context", 2);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 2);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 2);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c34_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(""), "context", "context", 3);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("mrdivide"), "name", "name",
                  3);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 3);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1388463696U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1370017086U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c34_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 4);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 4);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c34_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 5);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("rdivide"), "name", "name", 5);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 5);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c34_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 6);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 6);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c34_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 7);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 7);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 7);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1286825996U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c34_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 8);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("eml_div"), "name", "name", 8);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 8);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c34_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 9);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("coder.internal.div"), "name",
                  "name", 9);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 9);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c34_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs9), "lhs", "lhs",
                  9);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 10);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 10);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c34_info, c34_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 10);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c34_info, c34_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c34_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c34_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c34_info, sf_mex_duplicatearraysafe(&c34_lhs10), "lhs", "lhs",
                  10);
  sf_mex_destroy(&c34_rhs0);
  sf_mex_destroy(&c34_lhs0);
  sf_mex_destroy(&c34_rhs1);
  sf_mex_destroy(&c34_lhs1);
  sf_mex_destroy(&c34_rhs2);
  sf_mex_destroy(&c34_lhs2);
  sf_mex_destroy(&c34_rhs3);
  sf_mex_destroy(&c34_lhs3);
  sf_mex_destroy(&c34_rhs4);
  sf_mex_destroy(&c34_lhs4);
  sf_mex_destroy(&c34_rhs5);
  sf_mex_destroy(&c34_lhs5);
  sf_mex_destroy(&c34_rhs6);
  sf_mex_destroy(&c34_lhs6);
  sf_mex_destroy(&c34_rhs7);
  sf_mex_destroy(&c34_lhs7);
  sf_mex_destroy(&c34_rhs8);
  sf_mex_destroy(&c34_lhs8);
  sf_mex_destroy(&c34_rhs9);
  sf_mex_destroy(&c34_lhs9);
  sf_mex_destroy(&c34_rhs10);
  sf_mex_destroy(&c34_lhs10);
}

static const mxArray *c34_emlrt_marshallOut(const char * c34_u)
{
  const mxArray *c34_y = NULL;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", c34_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c34_u)), false);
  return c34_y;
}

static const mxArray *c34_b_emlrt_marshallOut(const uint32_T c34_u)
{
  const mxArray *c34_y = NULL;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", &c34_u, 7, 0U, 0U, 0U, 0), false);
  return c34_y;
}

static const mxArray *c34_c_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData = NULL;
  int32_T c34_u;
  const mxArray *c34_y = NULL;
  SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_u = *(int32_T *)c34_inData;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", &c34_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static int32_T c34_d_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId)
{
  int32_T c34_y;
  int32_T c34_i0;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), &c34_i0, 1, 6, 0U, 0, 0U, 0);
  c34_y = c34_i0;
  sf_mex_destroy(&c34_u);
  return c34_y;
}

static void c34_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData)
{
  const mxArray *c34_b_sfEvent;
  const char_T *c34_identifier;
  emlrtMsgIdentifier c34_thisId;
  int32_T c34_y;
  SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c34_b_sfEvent = sf_mex_dup(c34_mxArrayInData);
  c34_identifier = c34_varName;
  c34_thisId.fIdentifier = c34_identifier;
  c34_thisId.fParent = NULL;
  c34_y = c34_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_b_sfEvent),
    &c34_thisId);
  sf_mex_destroy(&c34_b_sfEvent);
  *(int32_T *)c34_outData = c34_y;
  sf_mex_destroy(&c34_mxArrayInData);
}

static uint8_T c34_e_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_b_is_active_c34_six_plus_six_AcmsteeringV09_main, const char_T
   *c34_identifier)
{
  uint8_T c34_y;
  emlrtMsgIdentifier c34_thisId;
  c34_thisId.fIdentifier = c34_identifier;
  c34_thisId.fParent = NULL;
  c34_y = c34_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c34_b_is_active_c34_six_plus_six_AcmsteeringV09_main), &c34_thisId);
  sf_mex_destroy(&c34_b_is_active_c34_six_plus_six_AcmsteeringV09_main);
  return c34_y;
}

static uint8_T c34_f_emlrt_marshallIn
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId)
{
  uint8_T c34_y;
  uint8_T c34_u0;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), &c34_u0, 1, 3, 0U, 0, 0U, 0);
  c34_y = c34_u0;
  sf_mex_destroy(&c34_u);
  return c34_y;
}

static void init_dsm_address_info
  (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
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

void sf_c34_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(15749423U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2863458096U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1048561780U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1349924897U);
}

mxArray *sf_c34_six_plus_six_AcmsteeringV09_main_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("JocHUtFWizgR7MGu76aA1F");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,10,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));
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

mxArray *sf_c34_six_plus_six_AcmsteeringV09_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c34_six_plus_six_AcmsteeringV09_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c34_six_plus_six_AcmsteeringV09_main
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"Rturn_min\",},{M[8],M[0],T\"is_active_c34_six_plus_six_AcmsteeringV09_main\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c34_six_plus_six_AcmsteeringV09_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_mainMachineNumber_,
           34,
           1,
           1,
           0,
           11,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"steer_dem");
          _SFD_SET_DATA_PROPS(1,2,0,1,"Rturn_min");
          _SFD_SET_DATA_PROPS(2,1,1,0,"G");
          _SFD_SET_DATA_PROPS(3,1,1,0,"L");
          _SFD_SET_DATA_PROPS(4,1,1,0,"umax");
          _SFD_SET_DATA_PROPS(5,1,1,0,"B");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Tpeak_L");
          _SFD_SET_DATA_PROPS(7,1,1,0,"Tpeak_R");
          _SFD_SET_DATA_PROPS(8,1,1,0,"eff_tran");
          _SFD_SET_DATA_PROPS(9,1,1,0,"Radius");
          _SFD_SET_DATA_PROPS(10,1,1,0,"f");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,288);
        _SFD_CV_INIT_EML_IF(0,1,0,91,105,191,284);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)c34_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real32_T *c34_steer_dem;
          real32_T *c34_Rturn_min;
          real32_T *c34_G;
          real32_T *c34_L;
          real32_T *c34_umax;
          real32_T *c34_B;
          real32_T *c34_Tpeak_L;
          real32_T *c34_Tpeak_R;
          real32_T *c34_eff_tran;
          real32_T *c34_Radius;
          real32_T *c34_f;
          c34_f = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c34_Radius = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c34_eff_tran = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c34_Tpeak_R = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c34_Tpeak_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c34_B = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c34_umax = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c34_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c34_G = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c34_Rturn_min = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c34_steer_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c34_steer_dem);
          _SFD_SET_DATA_VALUE_PTR(1U, c34_Rturn_min);
          _SFD_SET_DATA_VALUE_PTR(2U, c34_G);
          _SFD_SET_DATA_VALUE_PTR(3U, c34_L);
          _SFD_SET_DATA_VALUE_PTR(4U, c34_umax);
          _SFD_SET_DATA_VALUE_PTR(5U, c34_B);
          _SFD_SET_DATA_VALUE_PTR(6U, c34_Tpeak_L);
          _SFD_SET_DATA_VALUE_PTR(7U, c34_Tpeak_R);
          _SFD_SET_DATA_VALUE_PTR(8U, c34_eff_tran);
          _SFD_SET_DATA_VALUE_PTR(9U, c34_Radius);
          _SFD_SET_DATA_VALUE_PTR(10U, c34_f);
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
  return "GuIiNt8IS8XCeYirsQzGbC";
}

static void sf_opaque_initialize_c34_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
  initialize_c34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c34_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  enable_c34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c34_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  disable_c34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c34_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  sf_gateway_c34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c34_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c34_six_plus_six_AcmsteeringV09_main();/* state var info */
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

extern void sf_internal_set_sim_state_c34_six_plus_six_AcmsteeringV09_main
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
    sf_get_sim_state_info_c34_six_plus_six_AcmsteeringV09_main();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c34_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  return sf_internal_get_sim_state_c34_six_plus_six_AcmsteeringV09_main(S);
}

static void sf_opaque_set_sim_state_c34_six_plus_six_AcmsteeringV09_main
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c34_six_plus_six_AcmsteeringV09_main(S, st);
}

static void sf_opaque_terminate_c34_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_optimization_info();
    }

    finalize_c34_six_plus_six_AcmsteeringV09_main
      ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc34_six_plus_six_AcmsteeringV09_main
    ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c34_six_plus_six_AcmsteeringV09_main(SimStruct *
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
    initialize_params_c34_six_plus_six_AcmsteeringV09_main
      ((SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c34_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      34);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,34,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,34,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,34);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,34,10);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,34,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 10; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,34);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2622713193U));
  ssSetChecksum1(S,(2811401003U));
  ssSetChecksum2(S,(1977009896U));
  ssSetChecksum3(S,(97399932U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c34_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c34_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    utMalloc(sizeof(SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc34_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c34_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c34_six_plus_six_AcmsteeringV09_main;
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

void c34_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c34_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c34_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c34_six_plus_six_AcmsteeringV09_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c34_six_plus_six_AcmsteeringV09_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
