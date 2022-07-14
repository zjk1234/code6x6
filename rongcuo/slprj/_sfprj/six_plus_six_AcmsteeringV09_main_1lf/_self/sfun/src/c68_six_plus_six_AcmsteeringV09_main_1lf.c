/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun.h"
#include "c68_six_plus_six_AcmsteeringV09_main_1lf.h"
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
static const char * c68_debug_family_names[17] = { "nargin", "nargout",
  "brake_emerg", "park", "acc_dem", "steer_dem", "brake_dem", "center",
  "MCU0_SpeedFdk", "MCU0_1SpeedFdk", "MCU0_2SpeedFdk", "MCU0_3SpeedFdk",
  "MCU0_4SpeedFdk", "MCU0_5SpeedFdk", "speed_thr_park", "mode_dem_out_pre",
  "mode_dem_out" };

/* Function Declarations */
static void initialize_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initialize_params_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void enable_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void disable_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c68_update_debugger_state_c68_six_plus_six_AcmsteeringV09_main_1
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void set_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_st);
static void finalize_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void sf_gateway_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initSimStructsc68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c68_machineNumber, uint32_T
  c68_chartNumber, uint32_T c68_instanceNumber);
static const mxArray *c68_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData);
static int8_T c68_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_mode_dem_out, const char_T *c68_identifier);
static int8_T c68_b_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId);
static void c68_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c68_mxArrayInData, const char_T *c68_varName, void *c68_outData);
static const mxArray *c68_b_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData);
static const mxArray *c68_c_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData);
static const mxArray *c68_d_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData);
static real_T c68_c_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId);
static void c68_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c68_mxArrayInData, const char_T *c68_varName, void *c68_outData);
static const mxArray *c68_e_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData);
static int32_T c68_d_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId);
static void c68_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c68_mxArrayInData, const char_T *c68_varName, void *c68_outData);
static uint8_T c68_e_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_b_is_active_c68_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c68_identifier);
static uint8_T c68_f_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId);
static void init_dsm_address_info
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  chartInstance->c68_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c68_is_active_c68_six_plus_six_AcmsteeringV09_main_1lf = 0U;
}

static void initialize_params_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c68_update_debugger_state_c68_six_plus_six_AcmsteeringV09_main_1
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  const mxArray *c68_st;
  const mxArray *c68_y = NULL;
  int8_T c68_hoistedGlobal;
  int8_T c68_u;
  const mxArray *c68_b_y = NULL;
  uint8_T c68_b_hoistedGlobal;
  uint8_T c68_b_u;
  const mxArray *c68_c_y = NULL;
  int8_T *c68_mode_dem_out;
  c68_mode_dem_out = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c68_st = NULL;
  c68_st = NULL;
  c68_y = NULL;
  sf_mex_assign(&c68_y, sf_mex_createcellmatrix(2, 1), false);
  c68_hoistedGlobal = *c68_mode_dem_out;
  c68_u = c68_hoistedGlobal;
  c68_b_y = NULL;
  sf_mex_assign(&c68_b_y, sf_mex_create("y", &c68_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c68_y, 0, c68_b_y);
  c68_b_hoistedGlobal =
    chartInstance->c68_is_active_c68_six_plus_six_AcmsteeringV09_main_1lf;
  c68_b_u = c68_b_hoistedGlobal;
  c68_c_y = NULL;
  sf_mex_assign(&c68_c_y, sf_mex_create("y", &c68_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c68_y, 1, c68_c_y);
  sf_mex_assign(&c68_st, c68_y, false);
  return c68_st;
}

static void set_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_st)
{
  const mxArray *c68_u;
  int8_T *c68_mode_dem_out;
  c68_mode_dem_out = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c68_doneDoubleBufferReInit = true;
  c68_u = sf_mex_dup(c68_st);
  *c68_mode_dem_out = c68_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c68_u, 0)), "mode_dem_out");
  chartInstance->c68_is_active_c68_six_plus_six_AcmsteeringV09_main_1lf =
    c68_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c68_u, 1)),
    "is_active_c68_six_plus_six_AcmsteeringV09_main_1lf");
  sf_mex_destroy(&c68_u);
  c68_update_debugger_state_c68_six_plus_six_AcmsteeringV09_main_1(chartInstance);
  sf_mex_destroy(&c68_st);
}

static void finalize_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  boolean_T c68_hoistedGlobal;
  boolean_T c68_b_hoistedGlobal;
  real32_T c68_c_hoistedGlobal;
  real32_T c68_d_hoistedGlobal;
  real32_T c68_e_hoistedGlobal;
  boolean_T c68_f_hoistedGlobal;
  real32_T c68_g_hoistedGlobal;
  real32_T c68_h_hoistedGlobal;
  real32_T c68_i_hoistedGlobal;
  real32_T c68_j_hoistedGlobal;
  real32_T c68_k_hoistedGlobal;
  real32_T c68_l_hoistedGlobal;
  real32_T c68_m_hoistedGlobal;
  int8_T c68_n_hoistedGlobal;
  boolean_T c68_brake_emerg;
  boolean_T c68_park;
  real32_T c68_acc_dem;
  real32_T c68_steer_dem;
  real32_T c68_brake_dem;
  boolean_T c68_center;
  real32_T c68_MCU0_SpeedFdk;
  real32_T c68_MCU0_1SpeedFdk;
  real32_T c68_MCU0_2SpeedFdk;
  real32_T c68_MCU0_3SpeedFdk;
  real32_T c68_MCU0_4SpeedFdk;
  real32_T c68_MCU0_5SpeedFdk;
  real32_T c68_speed_thr_park;
  int8_T c68_mode_dem_out_pre;
  uint32_T c68_debug_family_var_map[17];
  real_T c68_nargin = 14.0;
  real_T c68_nargout = 1.0;
  int8_T c68_mode_dem_out;
  boolean_T *c68_b_brake_emerg;
  boolean_T *c68_b_park;
  int8_T *c68_b_mode_dem_out;
  real32_T *c68_b_acc_dem;
  real32_T *c68_b_steer_dem;
  real32_T *c68_b_brake_dem;
  boolean_T *c68_b_center;
  real32_T *c68_b_MCU0_SpeedFdk;
  real32_T *c68_b_MCU0_1SpeedFdk;
  real32_T *c68_b_MCU0_2SpeedFdk;
  real32_T *c68_b_MCU0_3SpeedFdk;
  real32_T *c68_b_MCU0_4SpeedFdk;
  real32_T *c68_b_MCU0_5SpeedFdk;
  real32_T *c68_b_speed_thr_park;
  int8_T *c68_b_mode_dem_out_pre;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;
  boolean_T guard10 = false;
  boolean_T guard11 = false;
  boolean_T guard12 = false;
  boolean_T guard13 = false;
  boolean_T guard14 = false;
  boolean_T guard15 = false;
  boolean_T guard16 = false;
  boolean_T guard17 = false;
  boolean_T guard18 = false;
  boolean_T guard19 = false;
  boolean_T guard20 = false;
  boolean_T guard21 = false;
  boolean_T guard22 = false;
  boolean_T guard23 = false;
  boolean_T guard24 = false;
  boolean_T guard25 = false;
  boolean_T guard26 = false;
  boolean_T guard27 = false;
  boolean_T guard28 = false;
  boolean_T guard29 = false;
  boolean_T guard30 = false;
  c68_b_mode_dem_out_pre = (int8_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c68_b_speed_thr_park = (real32_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c68_b_MCU0_5SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c68_b_MCU0_4SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c68_b_MCU0_3SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c68_b_MCU0_2SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c68_b_MCU0_1SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c68_b_MCU0_SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c68_b_center = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c68_b_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c68_b_steer_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c68_b_acc_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c68_b_mode_dem_out = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c68_b_park = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c68_b_brake_emerg = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 67U, chartInstance->c68_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_brake_emerg, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_park, 1U);
  chartInstance->c68_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 67U, chartInstance->c68_sfEvent);
  c68_hoistedGlobal = *c68_b_brake_emerg;
  c68_b_hoistedGlobal = *c68_b_park;
  c68_c_hoistedGlobal = *c68_b_acc_dem;
  c68_d_hoistedGlobal = *c68_b_steer_dem;
  c68_e_hoistedGlobal = *c68_b_brake_dem;
  c68_f_hoistedGlobal = *c68_b_center;
  c68_g_hoistedGlobal = *c68_b_MCU0_SpeedFdk;
  c68_h_hoistedGlobal = *c68_b_MCU0_1SpeedFdk;
  c68_i_hoistedGlobal = *c68_b_MCU0_2SpeedFdk;
  c68_j_hoistedGlobal = *c68_b_MCU0_3SpeedFdk;
  c68_k_hoistedGlobal = *c68_b_MCU0_4SpeedFdk;
  c68_l_hoistedGlobal = *c68_b_MCU0_5SpeedFdk;
  c68_m_hoistedGlobal = *c68_b_speed_thr_park;
  c68_n_hoistedGlobal = *c68_b_mode_dem_out_pre;
  c68_brake_emerg = c68_hoistedGlobal;
  c68_park = c68_b_hoistedGlobal;
  c68_acc_dem = c68_c_hoistedGlobal;
  c68_steer_dem = c68_d_hoistedGlobal;
  c68_brake_dem = c68_e_hoistedGlobal;
  c68_center = c68_f_hoistedGlobal;
  c68_MCU0_SpeedFdk = c68_g_hoistedGlobal;
  c68_MCU0_1SpeedFdk = c68_h_hoistedGlobal;
  c68_MCU0_2SpeedFdk = c68_i_hoistedGlobal;
  c68_MCU0_3SpeedFdk = c68_j_hoistedGlobal;
  c68_MCU0_4SpeedFdk = c68_k_hoistedGlobal;
  c68_MCU0_5SpeedFdk = c68_l_hoistedGlobal;
  c68_speed_thr_park = c68_m_hoistedGlobal;
  c68_mode_dem_out_pre = c68_n_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 17U, 17U, c68_debug_family_names,
    c68_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c68_nargin, 0U, c68_d_sf_marshallOut,
    c68_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c68_nargout, 1U, c68_d_sf_marshallOut,
    c68_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_brake_emerg, 2U, c68_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_park, 3U, c68_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_acc_dem, 4U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_steer_dem, 5U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_brake_dem, 6U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_center, 7U, c68_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_MCU0_SpeedFdk, 8U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_MCU0_1SpeedFdk, 9U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_MCU0_2SpeedFdk, 10U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_MCU0_3SpeedFdk, 11U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_MCU0_4SpeedFdk, 12U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_MCU0_5SpeedFdk, 13U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_speed_thr_park, 14U, c68_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c68_mode_dem_out_pre, 15U, c68_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c68_mode_dem_out, 16U,
    c68_sf_marshallOut, c68_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 3);
  c68_mode_dem_out = c68_mode_dem_out_pre;
  _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 5);
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  if (CV_EML_COND(0, 1, 0, (real_T)c68_park == 1.0)) {
    if (CV_EML_COND(0, 1, 1, c68_MCU0_SpeedFdk <= c68_speed_thr_park)) {
      if (CV_EML_COND(0, 1, 2, c68_MCU0_1SpeedFdk <= c68_speed_thr_park)) {
        if (CV_EML_COND(0, 1, 3, c68_MCU0_2SpeedFdk <= c68_speed_thr_park)) {
          if (CV_EML_COND(0, 1, 4, c68_MCU0_3SpeedFdk <= c68_speed_thr_park)) {
            if (CV_EML_COND(0, 1, 5, c68_MCU0_4SpeedFdk <= c68_speed_thr_park))
            {
              if (CV_EML_COND(0, 1, 6, c68_MCU0_5SpeedFdk <= c68_speed_thr_park))
              {
                if (CV_EML_COND(0, 1, 7, (real_T)c68_brake_emerg == 0.0)) {
                  CV_EML_MCDC(0, 1, 0, true);
                  CV_EML_IF(0, 1, 0, true);
                  _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 6);
                  c68_mode_dem_out = 0;
                } else {
                  guard1 = true;
                }
              } else {
                guard2 = true;
              }
            } else {
              guard3 = true;
            }
          } else {
            guard4 = true;
          }
        } else {
          guard5 = true;
        }
      } else {
        guard6 = true;
      }
    } else {
      guard7 = true;
    }
  } else {
    guard7 = true;
  }

  if (guard7 == true) {
    guard6 = true;
  }

  if (guard6 == true) {
    guard5 = true;
  }

  if (guard5 == true) {
    guard4 = true;
  }

  if (guard4 == true) {
    guard3 = true;
  }

  if (guard3 == true) {
    guard2 = true;
  }

  if (guard2 == true) {
    guard1 = true;
  }

  if (guard1 == true) {
    CV_EML_MCDC(0, 1, 0, false);
    CV_EML_IF(0, 1, 0, false);
    _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 7);
    guard8 = false;
    guard9 = false;
    guard10 = false;
    guard11 = false;
    guard12 = false;
    guard13 = false;
    guard14 = false;
    guard15 = false;
    guard16 = false;
    if (CV_EML_COND(0, 1, 8, c68_acc_dem > 0.0F)) {
      if (CV_EML_COND(0, 1, 9, c68_MCU0_SpeedFdk >= 0.0F)) {
        if (CV_EML_COND(0, 1, 10, c68_MCU0_1SpeedFdk >= 0.0F)) {
          if (CV_EML_COND(0, 1, 11, c68_MCU0_2SpeedFdk >= 0.0F)) {
            if (CV_EML_COND(0, 1, 12, c68_MCU0_3SpeedFdk >= 0.0F)) {
              if (CV_EML_COND(0, 1, 13, c68_MCU0_4SpeedFdk >= 0.0F)) {
                if (CV_EML_COND(0, 1, 14, c68_MCU0_5SpeedFdk >= 0.0F)) {
                  if (CV_EML_COND(0, 1, 15, (real_T)c68_brake_emerg == 0.0)) {
                    if (CV_EML_COND(0, 1, 16, (real_T)c68_park == 0.0)) {
                      if (CV_EML_COND(0, 1, 17, (real_T)c68_center == 0.0)) {
                        CV_EML_MCDC(0, 1, 1, true);
                        CV_EML_IF(0, 1, 1, true);
                        _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 8);
                        c68_mode_dem_out = 1;
                      } else {
                        guard8 = true;
                      }
                    } else {
                      guard9 = true;
                    }
                  } else {
                    guard10 = true;
                  }
                } else {
                  guard11 = true;
                }
              } else {
                guard12 = true;
              }
            } else {
              guard13 = true;
            }
          } else {
            guard14 = true;
          }
        } else {
          guard15 = true;
        }
      } else {
        guard16 = true;
      }
    } else {
      guard16 = true;
    }

    if (guard16 == true) {
      guard15 = true;
    }

    if (guard15 == true) {
      guard14 = true;
    }

    if (guard14 == true) {
      guard13 = true;
    }

    if (guard13 == true) {
      guard12 = true;
    }

    if (guard12 == true) {
      guard11 = true;
    }

    if (guard11 == true) {
      guard10 = true;
    }

    if (guard10 == true) {
      guard9 = true;
    }

    if (guard9 == true) {
      guard8 = true;
    }

    if (guard8 == true) {
      CV_EML_MCDC(0, 1, 1, false);
      CV_EML_IF(0, 1, 1, false);
      _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 9);
      guard17 = false;
      guard18 = false;
      guard19 = false;
      if (CV_EML_COND(0, 1, 18, c68_acc_dem == 0.0F)) {
        if (CV_EML_COND(0, 1, 19, (real_T)c68_brake_emerg == 0.0)) {
          if (CV_EML_COND(0, 1, 20, (real_T)c68_park == 0.0)) {
            if (CV_EML_COND(0, 1, 21, (real_T)c68_center == 0.0)) {
              CV_EML_MCDC(0, 1, 2, true);
              CV_EML_IF(0, 1, 2, true);
              _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 10);
              c68_mode_dem_out = 2;
            } else {
              guard17 = true;
            }
          } else {
            guard18 = true;
          }
        } else {
          guard19 = true;
        }
      } else {
        guard19 = true;
      }

      if (guard19 == true) {
        guard18 = true;
      }

      if (guard18 == true) {
        guard17 = true;
      }

      if (guard17 == true) {
        CV_EML_MCDC(0, 1, 2, false);
        CV_EML_IF(0, 1, 2, false);
        _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 11);
        guard20 = false;
        guard21 = false;
        guard22 = false;
        guard23 = false;
        guard24 = false;
        guard25 = false;
        guard26 = false;
        guard27 = false;
        guard28 = false;
        if (CV_EML_COND(0, 1, 22, c68_acc_dem < 0.0F)) {
          if (CV_EML_COND(0, 1, 23, c68_MCU0_SpeedFdk >= 0.0F)) {
            if (CV_EML_COND(0, 1, 24, c68_MCU0_1SpeedFdk >= 0.0F)) {
              if (CV_EML_COND(0, 1, 25, c68_MCU0_2SpeedFdk >= 0.0F)) {
                if (CV_EML_COND(0, 1, 26, c68_MCU0_3SpeedFdk >= 0.0F)) {
                  if (CV_EML_COND(0, 1, 27, c68_MCU0_4SpeedFdk >= 0.0F)) {
                    if (CV_EML_COND(0, 1, 28, c68_MCU0_5SpeedFdk >= 0.0F)) {
                      if (CV_EML_COND(0, 1, 29, (real_T)c68_brake_emerg == 0.0))
                      {
                        if (CV_EML_COND(0, 1, 30, (real_T)c68_park == 0.0)) {
                          if (CV_EML_COND(0, 1, 31, (real_T)c68_center == 0.0))
                          {
                            CV_EML_MCDC(0, 1, 3, true);
                            CV_EML_IF(0, 1, 3, true);
                            _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 12);
                            c68_mode_dem_out = 3;
                          } else {
                            guard20 = true;
                          }
                        } else {
                          guard21 = true;
                        }
                      } else {
                        guard22 = true;
                      }
                    } else {
                      guard23 = true;
                    }
                  } else {
                    guard24 = true;
                  }
                } else {
                  guard25 = true;
                }
              } else {
                guard26 = true;
              }
            } else {
              guard27 = true;
            }
          } else {
            guard28 = true;
          }
        } else {
          guard28 = true;
        }

        if (guard28 == true) {
          guard27 = true;
        }

        if (guard27 == true) {
          guard26 = true;
        }

        if (guard26 == true) {
          guard25 = true;
        }

        if (guard25 == true) {
          guard24 = true;
        }

        if (guard24 == true) {
          guard23 = true;
        }

        if (guard23 == true) {
          guard22 = true;
        }

        if (guard22 == true) {
          guard21 = true;
        }

        if (guard21 == true) {
          guard20 = true;
        }

        if (guard20 == true) {
          CV_EML_MCDC(0, 1, 3, false);
          CV_EML_IF(0, 1, 3, false);
          _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 13);
          guard29 = false;
          guard30 = false;
          if (CV_EML_COND(0, 1, 32, (real_T)c68_center == 1.0)) {
            if (CV_EML_COND(0, 1, 33, (real_T)c68_brake_emerg == 0.0)) {
              if (CV_EML_COND(0, 1, 34, (real_T)c68_park == 0.0)) {
                CV_EML_MCDC(0, 1, 4, true);
                CV_EML_IF(0, 1, 4, true);
                _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 14);
                c68_mode_dem_out = 1;
              } else {
                guard29 = true;
              }
            } else {
              guard30 = true;
            }
          } else {
            guard30 = true;
          }

          if (guard30 == true) {
            guard29 = true;
          }

          if (guard29 == true) {
            CV_EML_MCDC(0, 1, 4, false);
            CV_EML_IF(0, 1, 4, false);
            _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 15);
            if (CV_EML_IF(0, 1, 5, (real_T)c68_brake_emerg == 1.0)) {
              _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, 16);
              c68_mode_dem_out = 5;
            }
          }
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c68_sfEvent, -16);
  _SFD_SYMBOL_SCOPE_POP();
  *c68_b_mode_dem_out = c68_mode_dem_out;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 67U, chartInstance->c68_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_mode_dem_out, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_acc_dem, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_steer_dem, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_brake_dem, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_center, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_MCU0_SpeedFdk, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_MCU0_1SpeedFdk, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_MCU0_2SpeedFdk, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_MCU0_3SpeedFdk, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_MCU0_4SpeedFdk, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_MCU0_5SpeedFdk, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_speed_thr_park, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c68_b_mode_dem_out_pre, 14U);
}

static void initSimStructsc68_six_plus_six_AcmsteeringV09_main_1lf
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c68_machineNumber, uint32_T
  c68_chartNumber, uint32_T c68_instanceNumber)
{
  (void)c68_machineNumber;
  (void)c68_chartNumber;
  (void)c68_instanceNumber;
}

static const mxArray *c68_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData)
{
  const mxArray *c68_mxArrayOutData = NULL;
  int8_T c68_u;
  const mxArray *c68_y = NULL;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_mxArrayOutData = NULL;
  c68_u = *(int8_T *)c68_inData;
  c68_y = NULL;
  sf_mex_assign(&c68_y, sf_mex_create("y", &c68_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c68_mxArrayOutData, c68_y, false);
  return c68_mxArrayOutData;
}

static int8_T c68_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_mode_dem_out, const char_T *c68_identifier)
{
  int8_T c68_y;
  emlrtMsgIdentifier c68_thisId;
  c68_thisId.fIdentifier = c68_identifier;
  c68_thisId.fParent = NULL;
  c68_y = c68_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c68_mode_dem_out),
    &c68_thisId);
  sf_mex_destroy(&c68_mode_dem_out);
  return c68_y;
}

static int8_T c68_b_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId)
{
  int8_T c68_y;
  int8_T c68_i0;
  (void)chartInstance;
  sf_mex_import(c68_parentId, sf_mex_dup(c68_u), &c68_i0, 1, 2, 0U, 0, 0U, 0);
  c68_y = c68_i0;
  sf_mex_destroy(&c68_u);
  return c68_y;
}

static void c68_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c68_mxArrayInData, const char_T *c68_varName, void *c68_outData)
{
  const mxArray *c68_mode_dem_out;
  const char_T *c68_identifier;
  emlrtMsgIdentifier c68_thisId;
  int8_T c68_y;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_mode_dem_out = sf_mex_dup(c68_mxArrayInData);
  c68_identifier = c68_varName;
  c68_thisId.fIdentifier = c68_identifier;
  c68_thisId.fParent = NULL;
  c68_y = c68_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c68_mode_dem_out),
    &c68_thisId);
  sf_mex_destroy(&c68_mode_dem_out);
  *(int8_T *)c68_outData = c68_y;
  sf_mex_destroy(&c68_mxArrayInData);
}

static const mxArray *c68_b_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData)
{
  const mxArray *c68_mxArrayOutData = NULL;
  real32_T c68_u;
  const mxArray *c68_y = NULL;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_mxArrayOutData = NULL;
  c68_u = *(real32_T *)c68_inData;
  c68_y = NULL;
  sf_mex_assign(&c68_y, sf_mex_create("y", &c68_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c68_mxArrayOutData, c68_y, false);
  return c68_mxArrayOutData;
}

static const mxArray *c68_c_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData)
{
  const mxArray *c68_mxArrayOutData = NULL;
  boolean_T c68_u;
  const mxArray *c68_y = NULL;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_mxArrayOutData = NULL;
  c68_u = *(boolean_T *)c68_inData;
  c68_y = NULL;
  sf_mex_assign(&c68_y, sf_mex_create("y", &c68_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c68_mxArrayOutData, c68_y, false);
  return c68_mxArrayOutData;
}

static const mxArray *c68_d_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData)
{
  const mxArray *c68_mxArrayOutData = NULL;
  real_T c68_u;
  const mxArray *c68_y = NULL;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_mxArrayOutData = NULL;
  c68_u = *(real_T *)c68_inData;
  c68_y = NULL;
  sf_mex_assign(&c68_y, sf_mex_create("y", &c68_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c68_mxArrayOutData, c68_y, false);
  return c68_mxArrayOutData;
}

static real_T c68_c_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId)
{
  real_T c68_y;
  real_T c68_d0;
  (void)chartInstance;
  sf_mex_import(c68_parentId, sf_mex_dup(c68_u), &c68_d0, 1, 0, 0U, 0, 0U, 0);
  c68_y = c68_d0;
  sf_mex_destroy(&c68_u);
  return c68_y;
}

static void c68_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c68_mxArrayInData, const char_T *c68_varName, void *c68_outData)
{
  const mxArray *c68_nargout;
  const char_T *c68_identifier;
  emlrtMsgIdentifier c68_thisId;
  real_T c68_y;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_nargout = sf_mex_dup(c68_mxArrayInData);
  c68_identifier = c68_varName;
  c68_thisId.fIdentifier = c68_identifier;
  c68_thisId.fParent = NULL;
  c68_y = c68_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c68_nargout),
    &c68_thisId);
  sf_mex_destroy(&c68_nargout);
  *(real_T *)c68_outData = c68_y;
  sf_mex_destroy(&c68_mxArrayInData);
}

const mxArray
  *sf_c68_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c68_nameCaptureInfo = NULL;
  c68_nameCaptureInfo = NULL;
  sf_mex_assign(&c68_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c68_nameCaptureInfo;
}

static const mxArray *c68_e_sf_marshallOut(void *chartInstanceVoid, void
  *c68_inData)
{
  const mxArray *c68_mxArrayOutData = NULL;
  int32_T c68_u;
  const mxArray *c68_y = NULL;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_mxArrayOutData = NULL;
  c68_u = *(int32_T *)c68_inData;
  c68_y = NULL;
  sf_mex_assign(&c68_y, sf_mex_create("y", &c68_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c68_mxArrayOutData, c68_y, false);
  return c68_mxArrayOutData;
}

static int32_T c68_d_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId)
{
  int32_T c68_y;
  int32_T c68_i1;
  (void)chartInstance;
  sf_mex_import(c68_parentId, sf_mex_dup(c68_u), &c68_i1, 1, 6, 0U, 0, 0U, 0);
  c68_y = c68_i1;
  sf_mex_destroy(&c68_u);
  return c68_y;
}

static void c68_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c68_mxArrayInData, const char_T *c68_varName, void *c68_outData)
{
  const mxArray *c68_b_sfEvent;
  const char_T *c68_identifier;
  emlrtMsgIdentifier c68_thisId;
  int32_T c68_y;
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c68_b_sfEvent = sf_mex_dup(c68_mxArrayInData);
  c68_identifier = c68_varName;
  c68_thisId.fIdentifier = c68_identifier;
  c68_thisId.fParent = NULL;
  c68_y = c68_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c68_b_sfEvent),
    &c68_thisId);
  sf_mex_destroy(&c68_b_sfEvent);
  *(int32_T *)c68_outData = c68_y;
  sf_mex_destroy(&c68_mxArrayInData);
}

static uint8_T c68_e_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_b_is_active_c68_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c68_identifier)
{
  uint8_T c68_y;
  emlrtMsgIdentifier c68_thisId;
  c68_thisId.fIdentifier = c68_identifier;
  c68_thisId.fParent = NULL;
  c68_y = c68_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c68_b_is_active_c68_six_plus_six_AcmsteeringV09_main_1lf), &c68_thisId);
  sf_mex_destroy(&c68_b_is_active_c68_six_plus_six_AcmsteeringV09_main_1lf);
  return c68_y;
}

static uint8_T c68_f_emlrt_marshallIn
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c68_u, const emlrtMsgIdentifier *c68_parentId)
{
  uint8_T c68_y;
  uint8_T c68_u0;
  (void)chartInstance;
  sf_mex_import(c68_parentId, sf_mex_dup(c68_u), &c68_u0, 1, 3, 0U, 0, 0U, 0);
  c68_y = c68_u0;
  sf_mex_destroy(&c68_u);
  return c68_y;
}

static void init_dsm_address_info
  (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
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

void sf_c68_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(9753065U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2922253920U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2642150581U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2644840276U);
}

mxArray *sf_c68_six_plus_six_AcmsteeringV09_main_1lf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("WVU4ZeDk0zFaAdaGcdfi9D");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,14,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));
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

mxArray *sf_c68_six_plus_six_AcmsteeringV09_main_1lf_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c68_six_plus_six_AcmsteeringV09_main_1lf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c68_six_plus_six_AcmsteeringV09_main_1lf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"mode_dem_out\",},{M[8],M[0],T\"is_active_c68_six_plus_six_AcmsteeringV09_main_1lf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c68_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           68,
           1,
           1,
           0,
           15,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"brake_emerg");
          _SFD_SET_DATA_PROPS(1,1,1,0,"park");
          _SFD_SET_DATA_PROPS(2,2,0,1,"mode_dem_out");
          _SFD_SET_DATA_PROPS(3,1,1,0,"acc_dem");
          _SFD_SET_DATA_PROPS(4,1,1,0,"steer_dem");
          _SFD_SET_DATA_PROPS(5,1,1,0,"brake_dem");
          _SFD_SET_DATA_PROPS(6,1,1,0,"center");
          _SFD_SET_DATA_PROPS(7,1,1,0,"MCU0_SpeedFdk");
          _SFD_SET_DATA_PROPS(8,1,1,0,"MCU0_1SpeedFdk");
          _SFD_SET_DATA_PROPS(9,1,1,0,"MCU0_2SpeedFdk");
          _SFD_SET_DATA_PROPS(10,1,1,0,"MCU0_3SpeedFdk");
          _SFD_SET_DATA_PROPS(11,1,1,0,"MCU0_4SpeedFdk");
          _SFD_SET_DATA_PROPS(12,1,1,0,"MCU0_5SpeedFdk");
          _SFD_SET_DATA_PROPS(13,1,1,0,"speed_thr_park");
          _SFD_SET_DATA_PROPS(14,1,1,0,"mode_dem_out_pre");
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
        _SFD_CV_INIT_EML(0,1,1,6,0,0,0,0,0,35,5);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",1,-1,1206);
        _SFD_CV_INIT_EML_IF(0,1,0,251,485,512,699);
        _SFD_CV_INIT_EML_IF(0,1,1,512,699,726,1199);
        _SFD_CV_INIT_EML_IF(0,1,2,726,787,814,1199);
        _SFD_CV_INIT_EML_IF(0,1,3,814,1001,1028,1199);
        _SFD_CV_INIT_EML_IF(0,1,4,1028,1075,1110,1199);
        _SFD_CV_INIT_EML_IF(0,1,5,1110,1131,-1,1131);

        {
          static int condStart[] = { 254, 266, 299, 333, 367, 402, 437, 471 };

          static int condEnd[] = { 261, 295, 329, 363, 397, 432, 467, 485 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3, 6, -3,
            7, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,254,485,8,0,&(condStart[0]),&(condEnd[0]),
                                15,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 519, 532, 552, 573, 594, 616, 638, 659, 678,
            690 };

          static int condEnd[] = { 528, 548, 569, 590, 611, 633, 655, 673, 685,
            699 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3, 6, -3,
            7, -3, 8, -3, 9, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,1,519,699,10,8,&(condStart[0]),&(condEnd[0]),
                                19,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 733, 747, 766, 778 };

          static int condEnd[] = { 743, 761, 773, 787 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,2,733,787,4,18,&(condStart[0]),&(condEnd[0]),
                                7,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 821, 834, 854, 875, 896, 918, 940, 961, 980,
            992 };

          static int condEnd[] = { 830, 850, 871, 892, 913, 935, 957, 975, 987,
            1001 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3, 6, -3,
            7, -3, 8, -3, 9, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,3,821,1001,10,22,&(condStart[0]),&(condEnd[0]),
                                19,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 1035, 1049, 1068 };

          static int condEnd[] = { 1044, 1063, 1075 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,4,1035,1075,3,32,&(condStart[0]),&(condEnd[0]),
                                5,&(pfixExpr[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_sf_marshallOut,(MexInFcnForType)c68_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c68_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c68_brake_emerg;
          boolean_T *c68_park;
          int8_T *c68_mode_dem_out;
          real32_T *c68_acc_dem;
          real32_T *c68_steer_dem;
          real32_T *c68_brake_dem;
          boolean_T *c68_center;
          real32_T *c68_MCU0_SpeedFdk;
          real32_T *c68_MCU0_1SpeedFdk;
          real32_T *c68_MCU0_2SpeedFdk;
          real32_T *c68_MCU0_3SpeedFdk;
          real32_T *c68_MCU0_4SpeedFdk;
          real32_T *c68_MCU0_5SpeedFdk;
          real32_T *c68_speed_thr_park;
          int8_T *c68_mode_dem_out_pre;
          c68_mode_dem_out_pre = (int8_T *)ssGetInputPortSignal(chartInstance->S,
            13);
          c68_speed_thr_park = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            12);
          c68_MCU0_5SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            11);
          c68_MCU0_4SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            10);
          c68_MCU0_3SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            9);
          c68_MCU0_2SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            8);
          c68_MCU0_1SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            7);
          c68_MCU0_SpeedFdk = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            6);
          c68_center = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c68_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c68_steer_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c68_acc_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c68_mode_dem_out = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c68_park = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c68_brake_emerg = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            0);
          _SFD_SET_DATA_VALUE_PTR(0U, c68_brake_emerg);
          _SFD_SET_DATA_VALUE_PTR(1U, c68_park);
          _SFD_SET_DATA_VALUE_PTR(2U, c68_mode_dem_out);
          _SFD_SET_DATA_VALUE_PTR(3U, c68_acc_dem);
          _SFD_SET_DATA_VALUE_PTR(4U, c68_steer_dem);
          _SFD_SET_DATA_VALUE_PTR(5U, c68_brake_dem);
          _SFD_SET_DATA_VALUE_PTR(6U, c68_center);
          _SFD_SET_DATA_VALUE_PTR(7U, c68_MCU0_SpeedFdk);
          _SFD_SET_DATA_VALUE_PTR(8U, c68_MCU0_1SpeedFdk);
          _SFD_SET_DATA_VALUE_PTR(9U, c68_MCU0_2SpeedFdk);
          _SFD_SET_DATA_VALUE_PTR(10U, c68_MCU0_3SpeedFdk);
          _SFD_SET_DATA_VALUE_PTR(11U, c68_MCU0_4SpeedFdk);
          _SFD_SET_DATA_VALUE_PTR(12U, c68_MCU0_5SpeedFdk);
          _SFD_SET_DATA_VALUE_PTR(13U, c68_speed_thr_park);
          _SFD_SET_DATA_VALUE_PTR(14U, c68_mode_dem_out_pre);
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
  return "QD9PGdgg3odGIJHnxIVHSD";
}

static void sf_opaque_initialize_c68_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
  initialize_c68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c68_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  enable_c68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c68_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  disable_c68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c68_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  sf_gateway_c68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c68_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
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

extern void sf_internal_set_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
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
    sf_get_sim_state_info_c68_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf(SimStruct* S)
{
  return sf_internal_get_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf(S);
}

static void sf_opaque_set_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf(S, st);
}

static void sf_opaque_terminate_c68_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    }

    finalize_c68_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
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
  initSimStructsc68_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c68_six_plus_six_AcmsteeringV09_main_1lf
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
    initialize_params_c68_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c68_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *
  S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      68);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,68,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,68,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,68);
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
      ssSetInputPortOptimOpts(S, 10, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 12, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 13, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,68,14);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,68,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 14; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,68);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2033327184U));
  ssSetChecksum1(S,(486659974U));
  ssSetChecksum2(S,(4261346005U));
  ssSetChecksum3(S,(979785569U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c68_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c68_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    utMalloc(sizeof(SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc68_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c68_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c68_six_plus_six_AcmsteeringV09_main_1lf;
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

void c68_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c68_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c68_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c68_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c68_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
