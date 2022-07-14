/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_1lf_sfun.h"
#include "c84_six_plus_six_AcmsteeringV09_main_1lf.h"
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
static const char * c84_debug_family_names[33] = { "trqcha", "nargin", "nargout",
  "trq_dem_lf", "trq_dem_lm", "trq_dem_lr", "trq_dem_rf", "trq_dem_rm",
  "trq_dem_rr", "bra_pre_l", "bra_pre_r", "brake_dem", "flag_lf", "flag_lm",
  "flag_lr", "flag_rf", "flag_rm", "flag_rr", "trq_pid_lf", "trq_pid_lm",
  "trq_pid_lr", "trq_pid_rf", "trq_pid_rm", "trq_pid_rr", "trq_out_lf",
  "trq_out_lm", "trq_out_lr", "trq_out_rf", "trq_out_rm", "trq_out_rr",
  "brapre_out_l", "brapre_out_r", "mode" };

/* Function Declarations */
static void initialize_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initialize_params_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void enable_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void disable_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c84_update_debugger_state_c84_six_plus_six_AcmsteeringV09_main_1
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void set_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_st);
static void finalize_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void sf_gateway_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void c84_chartstep_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void initSimStructsc84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c84_machineNumber, uint32_T
  c84_chartNumber, uint32_T c84_instanceNumber);
static const mxArray *c84_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData);
static int8_T c84_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_mode, const char_T *c84_identifier);
static int8_T c84_b_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId);
static void c84_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData);
static const mxArray *c84_b_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData);
static real32_T c84_c_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_brapre_out_r, const char_T *c84_identifier);
static real32_T c84_d_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId);
static void c84_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData);
static const mxArray *c84_c_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData);
static real_T c84_e_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId);
static void c84_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData);
static void c84_info_helper(const mxArray **c84_info);
static const mxArray *c84_emlrt_marshallOut(const char * c84_u);
static const mxArray *c84_b_emlrt_marshallOut(const uint32_T c84_u);
static const mxArray *c84_d_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData);
static int32_T c84_f_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId);
static void c84_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData);
static uint8_T c84_g_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_b_is_active_c84_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c84_identifier);
static uint8_T c84_h_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId);
static void init_dsm_address_info
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  chartInstance->c84_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c84_is_active_c84_six_plus_six_AcmsteeringV09_main_1lf = 0U;
}

static void initialize_params_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c84_update_debugger_state_c84_six_plus_six_AcmsteeringV09_main_1
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  const mxArray *c84_st;
  const mxArray *c84_y = NULL;
  real32_T c84_hoistedGlobal;
  real32_T c84_u;
  const mxArray *c84_b_y = NULL;
  real32_T c84_b_hoistedGlobal;
  real32_T c84_b_u;
  const mxArray *c84_c_y = NULL;
  int8_T c84_c_hoistedGlobal;
  int8_T c84_c_u;
  const mxArray *c84_d_y = NULL;
  real32_T c84_d_hoistedGlobal;
  real32_T c84_d_u;
  const mxArray *c84_e_y = NULL;
  real32_T c84_e_hoistedGlobal;
  real32_T c84_e_u;
  const mxArray *c84_f_y = NULL;
  real32_T c84_f_hoistedGlobal;
  real32_T c84_f_u;
  const mxArray *c84_g_y = NULL;
  real32_T c84_g_hoistedGlobal;
  real32_T c84_g_u;
  const mxArray *c84_h_y = NULL;
  real32_T c84_h_hoistedGlobal;
  real32_T c84_h_u;
  const mxArray *c84_i_y = NULL;
  real32_T c84_i_hoistedGlobal;
  real32_T c84_i_u;
  const mxArray *c84_j_y = NULL;
  uint8_T c84_j_hoistedGlobal;
  uint8_T c84_j_u;
  const mxArray *c84_k_y = NULL;
  real32_T *c84_brapre_out_l;
  real32_T *c84_brapre_out_r;
  int8_T *c84_mode;
  real32_T *c84_trq_out_lf;
  real32_T *c84_trq_out_lm;
  real32_T *c84_trq_out_lr;
  real32_T *c84_trq_out_rf;
  real32_T *c84_trq_out_rm;
  real32_T *c84_trq_out_rr;
  c84_mode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c84_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c84_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c84_trq_out_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c84_trq_out_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c84_trq_out_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c84_trq_out_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c84_trq_out_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c84_trq_out_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c84_st = NULL;
  c84_st = NULL;
  c84_y = NULL;
  sf_mex_assign(&c84_y, sf_mex_createcellmatrix(10, 1), false);
  c84_hoistedGlobal = *c84_brapre_out_l;
  c84_u = c84_hoistedGlobal;
  c84_b_y = NULL;
  sf_mex_assign(&c84_b_y, sf_mex_create("y", &c84_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 0, c84_b_y);
  c84_b_hoistedGlobal = *c84_brapre_out_r;
  c84_b_u = c84_b_hoistedGlobal;
  c84_c_y = NULL;
  sf_mex_assign(&c84_c_y, sf_mex_create("y", &c84_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 1, c84_c_y);
  c84_c_hoistedGlobal = *c84_mode;
  c84_c_u = c84_c_hoistedGlobal;
  c84_d_y = NULL;
  sf_mex_assign(&c84_d_y, sf_mex_create("y", &c84_c_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 2, c84_d_y);
  c84_d_hoistedGlobal = *c84_trq_out_lf;
  c84_d_u = c84_d_hoistedGlobal;
  c84_e_y = NULL;
  sf_mex_assign(&c84_e_y, sf_mex_create("y", &c84_d_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 3, c84_e_y);
  c84_e_hoistedGlobal = *c84_trq_out_lm;
  c84_e_u = c84_e_hoistedGlobal;
  c84_f_y = NULL;
  sf_mex_assign(&c84_f_y, sf_mex_create("y", &c84_e_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 4, c84_f_y);
  c84_f_hoistedGlobal = *c84_trq_out_lr;
  c84_f_u = c84_f_hoistedGlobal;
  c84_g_y = NULL;
  sf_mex_assign(&c84_g_y, sf_mex_create("y", &c84_f_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 5, c84_g_y);
  c84_g_hoistedGlobal = *c84_trq_out_rf;
  c84_g_u = c84_g_hoistedGlobal;
  c84_h_y = NULL;
  sf_mex_assign(&c84_h_y, sf_mex_create("y", &c84_g_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 6, c84_h_y);
  c84_h_hoistedGlobal = *c84_trq_out_rm;
  c84_h_u = c84_h_hoistedGlobal;
  c84_i_y = NULL;
  sf_mex_assign(&c84_i_y, sf_mex_create("y", &c84_h_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 7, c84_i_y);
  c84_i_hoistedGlobal = *c84_trq_out_rr;
  c84_i_u = c84_i_hoistedGlobal;
  c84_j_y = NULL;
  sf_mex_assign(&c84_j_y, sf_mex_create("y", &c84_i_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 8, c84_j_y);
  c84_j_hoistedGlobal =
    chartInstance->c84_is_active_c84_six_plus_six_AcmsteeringV09_main_1lf;
  c84_j_u = c84_j_hoistedGlobal;
  c84_k_y = NULL;
  sf_mex_assign(&c84_k_y, sf_mex_create("y", &c84_j_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c84_y, 9, c84_k_y);
  sf_mex_assign(&c84_st, c84_y, false);
  return c84_st;
}

static void set_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_st)
{
  const mxArray *c84_u;
  real32_T *c84_brapre_out_l;
  real32_T *c84_brapre_out_r;
  int8_T *c84_mode;
  real32_T *c84_trq_out_lf;
  real32_T *c84_trq_out_lm;
  real32_T *c84_trq_out_lr;
  real32_T *c84_trq_out_rf;
  real32_T *c84_trq_out_rm;
  real32_T *c84_trq_out_rr;
  c84_mode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c84_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c84_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c84_trq_out_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c84_trq_out_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c84_trq_out_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c84_trq_out_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c84_trq_out_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c84_trq_out_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c84_doneDoubleBufferReInit = true;
  c84_u = sf_mex_dup(c84_st);
  *c84_brapre_out_l = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 0)), "brapre_out_l");
  *c84_brapre_out_r = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 1)), "brapre_out_r");
  *c84_mode = c84_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c84_u, 2)), "mode");
  *c84_trq_out_lf = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 3)), "trq_out_lf");
  *c84_trq_out_lm = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 4)), "trq_out_lm");
  *c84_trq_out_lr = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 5)), "trq_out_lr");
  *c84_trq_out_rf = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 6)), "trq_out_rf");
  *c84_trq_out_rm = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 7)), "trq_out_rm");
  *c84_trq_out_rr = c84_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c84_u, 8)), "trq_out_rr");
  chartInstance->c84_is_active_c84_six_plus_six_AcmsteeringV09_main_1lf =
    c84_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c84_u, 9)),
    "is_active_c84_six_plus_six_AcmsteeringV09_main_1lf");
  sf_mex_destroy(&c84_u);
  c84_update_debugger_state_c84_six_plus_six_AcmsteeringV09_main_1(chartInstance);
  sf_mex_destroy(&c84_st);
}

static void finalize_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real32_T *c84_trq_dem_lf;
  real32_T *c84_trq_dem_lm;
  real32_T *c84_trq_dem_lr;
  real32_T *c84_trq_dem_rf;
  real32_T *c84_trq_dem_rm;
  real32_T *c84_trq_dem_rr;
  real32_T *c84_bra_pre_l;
  real32_T *c84_bra_pre_r;
  real32_T *c84_brake_dem;
  real32_T *c84_flag_lf;
  real32_T *c84_flag_lm;
  real32_T *c84_flag_lr;
  real32_T *c84_trq_out_lf;
  real32_T *c84_trq_out_lm;
  real32_T *c84_flag_rf;
  real32_T *c84_flag_rm;
  real32_T *c84_flag_rr;
  real32_T *c84_trq_out_lr;
  real32_T *c84_trq_out_rf;
  real32_T *c84_trq_out_rm;
  real32_T *c84_trq_out_rr;
  real32_T *c84_trq_pid_lf;
  real32_T *c84_trq_pid_lm;
  real32_T *c84_trq_pid_lr;
  real32_T *c84_trq_pid_rf;
  real32_T *c84_trq_pid_rm;
  real32_T *c84_trq_pid_rr;
  real32_T *c84_brapre_out_l;
  real32_T *c84_brapre_out_r;
  int8_T *c84_mode;
  c84_mode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c84_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c84_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c84_trq_pid_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 20);
  c84_trq_pid_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c84_trq_pid_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c84_trq_pid_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c84_trq_pid_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c84_trq_pid_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c84_trq_out_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c84_trq_out_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c84_trq_out_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c84_trq_out_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c84_flag_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c84_flag_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c84_flag_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c84_trq_out_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c84_trq_out_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c84_flag_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c84_flag_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c84_flag_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c84_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c84_bra_pre_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c84_bra_pre_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c84_trq_dem_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c84_trq_dem_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c84_trq_dem_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c84_trq_dem_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c84_trq_dem_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c84_trq_dem_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 83U, chartInstance->c84_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_dem_lf, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_dem_lm, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_dem_lr, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_dem_rf, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_dem_rm, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_dem_rr, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_bra_pre_l, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_bra_pre_r, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_brake_dem, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_flag_lf, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_flag_lm, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_flag_lr, 11U);
  chartInstance->c84_sfEvent = CALL_EVENT;
  c84_chartstep_c84_six_plus_six_AcmsteeringV09_main_1lf(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_out_lf, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_out_lm, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_flag_rf, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_flag_rm, 15U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_flag_rr, 16U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_out_lr, 17U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_out_rf, 18U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_out_rm, 19U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_out_rr, 20U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_pid_lf, 21U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_pid_lm, 22U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_pid_lr, 23U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_pid_rf, 24U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_pid_rm, 25U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_trq_pid_rr, 26U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_brapre_out_l, 27U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_brapre_out_r, 28U);
  _SFD_DATA_RANGE_CHECK((real_T)*c84_mode, 29U);
}

static void c84_chartstep_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  real32_T c84_hoistedGlobal;
  real32_T c84_b_hoistedGlobal;
  real32_T c84_c_hoistedGlobal;
  real32_T c84_d_hoistedGlobal;
  real32_T c84_e_hoistedGlobal;
  real32_T c84_f_hoistedGlobal;
  real32_T c84_g_hoistedGlobal;
  real32_T c84_h_hoistedGlobal;
  real32_T c84_i_hoistedGlobal;
  real32_T c84_j_hoistedGlobal;
  real32_T c84_k_hoistedGlobal;
  real32_T c84_l_hoistedGlobal;
  real32_T c84_m_hoistedGlobal;
  real32_T c84_n_hoistedGlobal;
  real32_T c84_o_hoistedGlobal;
  real32_T c84_p_hoistedGlobal;
  real32_T c84_q_hoistedGlobal;
  real32_T c84_r_hoistedGlobal;
  real32_T c84_s_hoistedGlobal;
  real32_T c84_t_hoistedGlobal;
  real32_T c84_u_hoistedGlobal;
  real32_T c84_trq_dem_lf;
  real32_T c84_trq_dem_lm;
  real32_T c84_trq_dem_lr;
  real32_T c84_trq_dem_rf;
  real32_T c84_trq_dem_rm;
  real32_T c84_trq_dem_rr;
  real32_T c84_bra_pre_l;
  real32_T c84_bra_pre_r;
  real32_T c84_brake_dem;
  real32_T c84_flag_lf;
  real32_T c84_flag_lm;
  real32_T c84_flag_lr;
  real32_T c84_flag_rf;
  real32_T c84_flag_rm;
  real32_T c84_flag_rr;
  real32_T c84_trq_pid_lf;
  real32_T c84_trq_pid_lm;
  real32_T c84_trq_pid_lr;
  real32_T c84_trq_pid_rf;
  real32_T c84_trq_pid_rm;
  real32_T c84_trq_pid_rr;
  uint32_T c84_debug_family_var_map[33];
  real32_T c84_trqcha;
  real_T c84_nargin = 21.0;
  real_T c84_nargout = 9.0;
  real32_T c84_trq_out_lf;
  real32_T c84_trq_out_lm;
  real32_T c84_trq_out_lr;
  real32_T c84_trq_out_rf;
  real32_T c84_trq_out_rm;
  real32_T c84_trq_out_rr;
  real32_T c84_brapre_out_l;
  real32_T c84_brapre_out_r;
  int8_T c84_mode;
  real32_T c84_A;
  real32_T c84_x;
  real32_T c84_b_x;
  real32_T c84_c_x;
  real32_T c84_y;
  real32_T c84_b_A;
  real32_T c84_d_x;
  real32_T c84_e_x;
  real32_T c84_f_x;
  real32_T c84_b_y;
  real32_T c84_c_A;
  real32_T c84_g_x;
  real32_T c84_h_x;
  real32_T c84_i_x;
  real32_T c84_c_y;
  real32_T c84_d_A;
  real32_T c84_j_x;
  real32_T c84_k_x;
  real32_T c84_l_x;
  real32_T c84_d_y;
  real32_T c84_e_A;
  real32_T c84_m_x;
  real32_T c84_n_x;
  real32_T c84_o_x;
  real32_T c84_e_y;
  real32_T c84_f_A;
  real32_T c84_p_x;
  real32_T c84_q_x;
  real32_T c84_r_x;
  real32_T c84_f_y;
  real32_T c84_g_A;
  real32_T c84_s_x;
  real32_T c84_t_x;
  real32_T c84_u_x;
  real32_T c84_g_y;
  real32_T c84_h_A;
  real32_T c84_v_x;
  real32_T c84_w_x;
  real32_T c84_x_x;
  real32_T c84_h_y;
  real32_T c84_i_A;
  real32_T c84_y_x;
  real32_T c84_ab_x;
  real32_T c84_bb_x;
  real32_T c84_i_y;
  real32_T c84_j_A;
  real32_T c84_cb_x;
  real32_T c84_db_x;
  real32_T c84_eb_x;
  real32_T c84_j_y;
  real32_T c84_k_A;
  real32_T c84_fb_x;
  real32_T c84_gb_x;
  real32_T c84_hb_x;
  real32_T c84_k_y;
  real32_T c84_l_A;
  real32_T c84_ib_x;
  real32_T c84_jb_x;
  real32_T c84_kb_x;
  real32_T c84_l_y;
  real32_T c84_m_A;
  real32_T c84_lb_x;
  real32_T c84_mb_x;
  real32_T c84_nb_x;
  real32_T c84_m_y;
  real32_T c84_n_A;
  real32_T c84_ob_x;
  real32_T c84_pb_x;
  real32_T c84_qb_x;
  real32_T c84_n_y;
  real32_T c84_o_A;
  real32_T c84_rb_x;
  real32_T c84_sb_x;
  real32_T c84_tb_x;
  real32_T c84_o_y;
  real32_T c84_p_A;
  real32_T c84_ub_x;
  real32_T c84_vb_x;
  real32_T c84_wb_x;
  real32_T c84_p_y;
  real32_T c84_q_A;
  real32_T c84_xb_x;
  real32_T c84_yb_x;
  real32_T c84_ac_x;
  real32_T c84_q_y;
  real32_T c84_r_A;
  real32_T c84_bc_x;
  real32_T c84_cc_x;
  real32_T c84_dc_x;
  real32_T c84_r_y;
  real32_T c84_s_A;
  real32_T c84_ec_x;
  real32_T c84_fc_x;
  real32_T c84_gc_x;
  real32_T c84_s_y;
  real32_T c84_t_A;
  real32_T c84_hc_x;
  real32_T c84_ic_x;
  real32_T c84_jc_x;
  real32_T c84_t_y;
  real32_T c84_u_A;
  real32_T c84_kc_x;
  real32_T c84_lc_x;
  real32_T c84_mc_x;
  real32_T c84_u_y;
  real32_T c84_v_A;
  real32_T c84_nc_x;
  real32_T c84_oc_x;
  real32_T c84_pc_x;
  real32_T c84_v_y;
  real32_T c84_w_A;
  real32_T c84_qc_x;
  real32_T c84_rc_x;
  real32_T c84_sc_x;
  real32_T c84_w_y;
  real32_T c84_x_A;
  real32_T c84_tc_x;
  real32_T c84_uc_x;
  real32_T c84_vc_x;
  real32_T c84_x_y;
  real32_T c84_y_A;
  real32_T c84_wc_x;
  real32_T c84_xc_x;
  real32_T c84_yc_x;
  real32_T c84_y_y;
  real32_T c84_ab_A;
  real32_T c84_ad_x;
  real32_T c84_bd_x;
  real32_T c84_cd_x;
  real32_T c84_ab_y;
  real32_T c84_bb_A;
  real32_T c84_dd_x;
  real32_T c84_ed_x;
  real32_T c84_fd_x;
  real32_T c84_bb_y;
  real32_T c84_cb_A;
  real32_T c84_gd_x;
  real32_T c84_hd_x;
  real32_T c84_id_x;
  real32_T c84_cb_y;
  real32_T c84_db_A;
  real32_T c84_jd_x;
  real32_T c84_kd_x;
  real32_T c84_ld_x;
  real32_T c84_db_y;
  real32_T c84_eb_A;
  real32_T c84_md_x;
  real32_T c84_nd_x;
  real32_T c84_od_x;
  real32_T c84_eb_y;
  real32_T c84_fb_A;
  real32_T c84_pd_x;
  real32_T c84_qd_x;
  real32_T c84_rd_x;
  real32_T c84_fb_y;
  real32_T c84_gb_A;
  real32_T c84_sd_x;
  real32_T c84_td_x;
  real32_T c84_ud_x;
  real32_T c84_gb_y;
  real32_T c84_hb_A;
  real32_T c84_vd_x;
  real32_T c84_wd_x;
  real32_T c84_xd_x;
  real32_T c84_hb_y;
  real32_T c84_ib_A;
  real32_T c84_yd_x;
  real32_T c84_ae_x;
  real32_T c84_be_x;
  real32_T c84_ib_y;
  real32_T c84_jb_A;
  real32_T c84_ce_x;
  real32_T c84_de_x;
  real32_T c84_ee_x;
  real32_T c84_jb_y;
  real32_T c84_kb_A;
  real32_T c84_fe_x;
  real32_T c84_ge_x;
  real32_T c84_he_x;
  real32_T c84_kb_y;
  real32_T c84_lb_A;
  real32_T c84_ie_x;
  real32_T c84_je_x;
  real32_T c84_ke_x;
  real32_T c84_lb_y;
  real32_T c84_mb_A;
  real32_T c84_le_x;
  real32_T c84_me_x;
  real32_T c84_ne_x;
  real32_T c84_mb_y;
  real32_T c84_nb_A;
  real32_T c84_oe_x;
  real32_T c84_pe_x;
  real32_T c84_qe_x;
  real32_T c84_nb_y;
  real32_T c84_ob_A;
  real32_T c84_re_x;
  real32_T c84_se_x;
  real32_T c84_te_x;
  real32_T c84_ob_y;
  real32_T c84_pb_A;
  real32_T c84_ue_x;
  real32_T c84_ve_x;
  real32_T c84_we_x;
  real32_T c84_pb_y;
  real32_T c84_qb_A;
  real32_T c84_xe_x;
  real32_T c84_ye_x;
  real32_T c84_af_x;
  real32_T c84_qb_y;
  real32_T c84_rb_A;
  real32_T c84_bf_x;
  real32_T c84_cf_x;
  real32_T c84_df_x;
  real32_T c84_rb_y;
  real32_T c84_sb_A;
  real32_T c84_ef_x;
  real32_T c84_ff_x;
  real32_T c84_gf_x;
  real32_T c84_sb_y;
  real32_T c84_tb_A;
  real32_T c84_hf_x;
  real32_T c84_if_x;
  real32_T c84_jf_x;
  real32_T c84_tb_y;
  real32_T c84_ub_A;
  real32_T c84_kf_x;
  real32_T c84_lf_x;
  real32_T c84_mf_x;
  real32_T c84_ub_y;
  real32_T c84_vb_A;
  real32_T c84_nf_x;
  real32_T c84_of_x;
  real32_T c84_pf_x;
  real32_T c84_vb_y;
  real32_T c84_wb_A;
  real32_T c84_qf_x;
  real32_T c84_rf_x;
  real32_T c84_sf_x;
  real32_T c84_wb_y;
  real32_T c84_xb_A;
  real32_T c84_tf_x;
  real32_T c84_uf_x;
  real32_T c84_vf_x;
  real32_T c84_xb_y;
  real32_T c84_yb_A;
  real32_T c84_wf_x;
  real32_T c84_xf_x;
  real32_T c84_yf_x;
  real32_T c84_yb_y;
  real32_T c84_ac_A;
  real32_T c84_ag_x;
  real32_T c84_bg_x;
  real32_T c84_cg_x;
  real32_T c84_ac_y;
  real32_T c84_bc_A;
  real32_T c84_dg_x;
  real32_T c84_eg_x;
  real32_T c84_fg_x;
  real32_T c84_bc_y;
  real32_T c84_cc_A;
  real32_T c84_gg_x;
  real32_T c84_hg_x;
  real32_T c84_ig_x;
  real32_T c84_cc_y;
  real32_T c84_dc_A;
  real32_T c84_jg_x;
  real32_T c84_kg_x;
  real32_T c84_lg_x;
  real32_T c84_dc_y;
  real32_T c84_ec_A;
  real32_T c84_mg_x;
  real32_T c84_ng_x;
  real32_T c84_og_x;
  real32_T c84_ec_y;
  real32_T c84_fc_A;
  real32_T c84_pg_x;
  real32_T c84_qg_x;
  real32_T c84_rg_x;
  real32_T c84_fc_y;
  real32_T c84_gc_A;
  real32_T c84_sg_x;
  real32_T c84_tg_x;
  real32_T c84_ug_x;
  real32_T c84_gc_y;
  real32_T c84_hc_A;
  real32_T c84_vg_x;
  real32_T c84_wg_x;
  real32_T c84_xg_x;
  real32_T c84_hc_y;
  real32_T c84_ic_A;
  real32_T c84_yg_x;
  real32_T c84_ah_x;
  real32_T c84_bh_x;
  real32_T c84_ic_y;
  real32_T c84_jc_A;
  real32_T c84_ch_x;
  real32_T c84_dh_x;
  real32_T c84_eh_x;
  real32_T c84_jc_y;
  real32_T c84_kc_A;
  real32_T c84_fh_x;
  real32_T c84_gh_x;
  real32_T c84_hh_x;
  real32_T c84_kc_y;
  real32_T c84_lc_A;
  real32_T c84_ih_x;
  real32_T c84_jh_x;
  real32_T c84_kh_x;
  real32_T c84_lc_y;
  real32_T c84_mc_A;
  real32_T c84_lh_x;
  real32_T c84_mh_x;
  real32_T c84_nh_x;
  real32_T c84_mc_y;
  real32_T c84_nc_A;
  real32_T c84_oh_x;
  real32_T c84_ph_x;
  real32_T c84_qh_x;
  real32_T c84_nc_y;
  real32_T c84_oc_A;
  real32_T c84_rh_x;
  real32_T c84_sh_x;
  real32_T c84_th_x;
  real32_T c84_oc_y;
  real32_T c84_pc_A;
  real32_T c84_uh_x;
  real32_T c84_vh_x;
  real32_T c84_wh_x;
  real32_T c84_pc_y;
  real32_T c84_qc_A;
  real32_T c84_xh_x;
  real32_T c84_yh_x;
  real32_T c84_ai_x;
  real32_T c84_qc_y;
  real32_T c84_rc_A;
  real32_T c84_bi_x;
  real32_T c84_ci_x;
  real32_T c84_di_x;
  real32_T c84_rc_y;
  real32_T c84_sc_A;
  real32_T c84_ei_x;
  real32_T c84_fi_x;
  real32_T c84_gi_x;
  real32_T c84_sc_y;
  real32_T c84_tc_A;
  real32_T c84_hi_x;
  real32_T c84_ii_x;
  real32_T c84_ji_x;
  real32_T c84_tc_y;
  real32_T c84_uc_A;
  real32_T c84_ki_x;
  real32_T c84_li_x;
  real32_T c84_mi_x;
  real32_T c84_uc_y;
  real32_T c84_vc_A;
  real32_T c84_ni_x;
  real32_T c84_oi_x;
  real32_T c84_pi_x;
  real32_T c84_vc_y;
  real32_T c84_wc_A;
  real32_T c84_qi_x;
  real32_T c84_ri_x;
  real32_T c84_si_x;
  real32_T c84_wc_y;
  real32_T c84_xc_A;
  real32_T c84_ti_x;
  real32_T c84_ui_x;
  real32_T c84_vi_x;
  real32_T c84_xc_y;
  real32_T c84_yc_A;
  real32_T c84_wi_x;
  real32_T c84_xi_x;
  real32_T c84_yi_x;
  real32_T c84_yc_y;
  real32_T c84_ad_A;
  real32_T c84_aj_x;
  real32_T c84_bj_x;
  real32_T c84_cj_x;
  real32_T c84_ad_y;
  real32_T c84_bd_A;
  real32_T c84_dj_x;
  real32_T c84_ej_x;
  real32_T c84_fj_x;
  real32_T c84_bd_y;
  real32_T c84_cd_A;
  real32_T c84_gj_x;
  real32_T c84_hj_x;
  real32_T c84_ij_x;
  real32_T c84_cd_y;
  real32_T c84_dd_A;
  real32_T c84_jj_x;
  real32_T c84_kj_x;
  real32_T c84_lj_x;
  real32_T c84_dd_y;
  real32_T c84_ed_A;
  real32_T c84_mj_x;
  real32_T c84_nj_x;
  real32_T c84_oj_x;
  real32_T c84_ed_y;
  real32_T c84_fd_A;
  real32_T c84_pj_x;
  real32_T c84_qj_x;
  real32_T c84_rj_x;
  real32_T c84_fd_y;
  real32_T c84_gd_A;
  real32_T c84_sj_x;
  real32_T c84_tj_x;
  real32_T c84_uj_x;
  real32_T c84_gd_y;
  real32_T c84_hd_A;
  real32_T c84_vj_x;
  real32_T c84_wj_x;
  real32_T c84_xj_x;
  real32_T c84_hd_y;
  real32_T c84_id_A;
  real32_T c84_yj_x;
  real32_T c84_ak_x;
  real32_T c84_bk_x;
  real32_T c84_id_y;
  real32_T c84_jd_A;
  real32_T c84_ck_x;
  real32_T c84_dk_x;
  real32_T c84_ek_x;
  real32_T c84_jd_y;
  real32_T c84_kd_A;
  real32_T c84_fk_x;
  real32_T c84_gk_x;
  real32_T c84_hk_x;
  real32_T c84_kd_y;
  real32_T c84_ld_A;
  real32_T c84_ik_x;
  real32_T c84_jk_x;
  real32_T c84_kk_x;
  real32_T c84_ld_y;
  real32_T c84_md_A;
  real32_T c84_lk_x;
  real32_T c84_mk_x;
  real32_T c84_nk_x;
  real32_T c84_md_y;
  real32_T c84_nd_A;
  real32_T c84_ok_x;
  real32_T c84_pk_x;
  real32_T c84_qk_x;
  real32_T c84_nd_y;
  real32_T c84_od_A;
  real32_T c84_rk_x;
  real32_T c84_sk_x;
  real32_T c84_tk_x;
  real32_T c84_od_y;
  real32_T c84_pd_A;
  real32_T c84_uk_x;
  real32_T c84_vk_x;
  real32_T c84_wk_x;
  real32_T c84_pd_y;
  real32_T c84_qd_A;
  real32_T c84_xk_x;
  real32_T c84_yk_x;
  real32_T c84_al_x;
  real32_T c84_qd_y;
  real32_T c84_rd_A;
  real32_T c84_bl_x;
  real32_T c84_cl_x;
  real32_T c84_dl_x;
  real32_T c84_rd_y;
  real32_T c84_sd_A;
  real32_T c84_el_x;
  real32_T c84_fl_x;
  real32_T c84_gl_x;
  real32_T c84_sd_y;
  real32_T c84_td_A;
  real32_T c84_hl_x;
  real32_T c84_il_x;
  real32_T c84_jl_x;
  real32_T c84_td_y;
  real32_T c84_ud_A;
  real32_T c84_kl_x;
  real32_T c84_ll_x;
  real32_T c84_ml_x;
  real32_T c84_ud_y;
  real32_T c84_vd_A;
  real32_T c84_nl_x;
  real32_T c84_ol_x;
  real32_T c84_pl_x;
  real32_T c84_vd_y;
  real32_T c84_wd_A;
  real32_T c84_ql_x;
  real32_T c84_rl_x;
  real32_T c84_sl_x;
  real32_T c84_wd_y;
  real32_T c84_xd_A;
  real32_T c84_tl_x;
  real32_T c84_ul_x;
  real32_T c84_vl_x;
  real32_T c84_xd_y;
  real32_T c84_yd_A;
  real32_T c84_wl_x;
  real32_T c84_xl_x;
  real32_T c84_yl_x;
  real32_T c84_yd_y;
  real32_T c84_ae_A;
  real32_T c84_am_x;
  real32_T c84_bm_x;
  real32_T c84_cm_x;
  real32_T c84_ae_y;
  real32_T c84_be_A;
  real32_T c84_dm_x;
  real32_T c84_em_x;
  real32_T c84_fm_x;
  real32_T c84_be_y;
  real32_T c84_ce_A;
  real32_T c84_gm_x;
  real32_T c84_hm_x;
  real32_T c84_im_x;
  real32_T c84_ce_y;
  real32_T c84_de_A;
  real32_T c84_jm_x;
  real32_T c84_km_x;
  real32_T c84_lm_x;
  real32_T c84_de_y;
  real32_T c84_ee_A;
  real32_T c84_mm_x;
  real32_T c84_nm_x;
  real32_T c84_om_x;
  real32_T c84_ee_y;
  real32_T c84_fe_A;
  real32_T c84_pm_x;
  real32_T c84_qm_x;
  real32_T c84_rm_x;
  real32_T c84_fe_y;
  real32_T c84_ge_A;
  real32_T c84_sm_x;
  real32_T c84_tm_x;
  real32_T c84_um_x;
  real32_T c84_ge_y;
  real32_T c84_he_A;
  real32_T c84_vm_x;
  real32_T c84_wm_x;
  real32_T c84_xm_x;
  real32_T c84_he_y;
  int8_T *c84_b_mode;
  real32_T *c84_b_brapre_out_r;
  real32_T *c84_b_brapre_out_l;
  real32_T *c84_b_trq_out_rr;
  real32_T *c84_b_trq_out_rm;
  real32_T *c84_b_trq_out_rf;
  real32_T *c84_b_trq_out_lr;
  real32_T *c84_b_trq_out_lm;
  real32_T *c84_b_trq_out_lf;
  real32_T *c84_b_trq_pid_rr;
  real32_T *c84_b_trq_pid_rm;
  real32_T *c84_b_trq_pid_rf;
  real32_T *c84_b_trq_pid_lr;
  real32_T *c84_b_trq_pid_lm;
  real32_T *c84_b_trq_pid_lf;
  real32_T *c84_b_flag_rr;
  real32_T *c84_b_flag_rm;
  real32_T *c84_b_flag_rf;
  real32_T *c84_b_flag_lr;
  real32_T *c84_b_flag_lm;
  real32_T *c84_b_flag_lf;
  real32_T *c84_b_brake_dem;
  real32_T *c84_b_bra_pre_r;
  real32_T *c84_b_bra_pre_l;
  real32_T *c84_b_trq_dem_rr;
  real32_T *c84_b_trq_dem_rm;
  real32_T *c84_b_trq_dem_rf;
  real32_T *c84_b_trq_dem_lr;
  real32_T *c84_b_trq_dem_lm;
  real32_T *c84_b_trq_dem_lf;
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
  boolean_T guard31 = false;
  boolean_T guard32 = false;
  boolean_T guard33 = false;
  boolean_T guard34 = false;
  boolean_T guard35 = false;
  boolean_T guard36 = false;
  boolean_T guard37 = false;
  boolean_T guard38 = false;
  boolean_T guard39 = false;
  boolean_T guard40 = false;
  boolean_T guard41 = false;
  boolean_T guard42 = false;
  boolean_T guard43 = false;
  boolean_T guard44 = false;
  boolean_T guard45 = false;
  boolean_T guard46 = false;
  boolean_T guard47 = false;
  boolean_T guard48 = false;
  boolean_T guard49 = false;
  boolean_T guard50 = false;
  boolean_T guard51 = false;
  boolean_T guard52 = false;
  boolean_T guard53 = false;
  boolean_T guard54 = false;
  boolean_T guard55 = false;
  boolean_T guard56 = false;
  boolean_T guard57 = false;
  boolean_T guard58 = false;
  boolean_T guard59 = false;
  boolean_T guard60 = false;
  boolean_T guard61 = false;
  boolean_T guard62 = false;
  boolean_T guard63 = false;
  boolean_T guard64 = false;
  boolean_T guard65 = false;
  boolean_T guard66 = false;
  boolean_T guard67 = false;
  boolean_T guard68 = false;
  boolean_T guard69 = false;
  boolean_T guard70 = false;
  boolean_T guard71 = false;
  boolean_T guard72 = false;
  boolean_T guard73 = false;
  boolean_T guard74 = false;
  boolean_T guard75 = false;
  boolean_T guard76 = false;
  boolean_T guard77 = false;
  boolean_T guard78 = false;
  boolean_T guard79 = false;
  boolean_T guard80 = false;
  boolean_T guard81 = false;
  boolean_T guard82 = false;
  boolean_T guard83 = false;
  boolean_T guard84 = false;
  boolean_T guard85 = false;
  boolean_T guard86 = false;
  boolean_T guard87 = false;
  boolean_T guard88 = false;
  boolean_T guard89 = false;
  boolean_T guard90 = false;
  boolean_T guard91 = false;
  boolean_T guard92 = false;
  boolean_T guard93 = false;
  boolean_T guard94 = false;
  boolean_T guard95 = false;
  boolean_T guard96 = false;
  boolean_T guard97 = false;
  boolean_T guard98 = false;
  boolean_T guard99 = false;
  boolean_T guard100 = false;
  boolean_T guard101 = false;
  boolean_T guard102 = false;
  boolean_T guard103 = false;
  boolean_T guard104 = false;
  boolean_T guard105 = false;
  boolean_T guard106 = false;
  boolean_T guard107 = false;
  boolean_T guard108 = false;
  boolean_T guard109 = false;
  boolean_T guard110 = false;
  boolean_T guard111 = false;
  boolean_T guard112 = false;
  boolean_T guard113 = false;
  boolean_T guard114 = false;
  boolean_T guard115 = false;
  boolean_T guard116 = false;
  boolean_T guard117 = false;
  boolean_T guard118 = false;
  boolean_T guard119 = false;
  boolean_T guard120 = false;
  boolean_T guard121 = false;
  boolean_T guard122 = false;
  boolean_T guard123 = false;
  boolean_T guard124 = false;
  boolean_T guard125 = false;
  boolean_T guard126 = false;
  boolean_T guard127 = false;
  boolean_T guard128 = false;
  boolean_T guard129 = false;
  boolean_T guard130 = false;
  boolean_T guard131 = false;
  boolean_T guard132 = false;
  boolean_T guard133 = false;
  boolean_T guard134 = false;
  boolean_T guard135 = false;
  boolean_T guard136 = false;
  boolean_T guard137 = false;
  boolean_T guard138 = false;
  boolean_T guard139 = false;
  boolean_T guard140 = false;
  boolean_T guard141 = false;
  boolean_T guard142 = false;
  boolean_T guard143 = false;
  boolean_T guard144 = false;
  boolean_T guard145 = false;
  boolean_T guard146 = false;
  boolean_T guard147 = false;
  boolean_T guard148 = false;
  boolean_T guard149 = false;
  boolean_T guard150 = false;
  boolean_T guard151 = false;
  boolean_T guard152 = false;
  boolean_T guard153 = false;
  boolean_T guard154 = false;
  boolean_T guard155 = false;
  boolean_T guard156 = false;
  boolean_T guard157 = false;
  boolean_T guard158 = false;
  boolean_T guard159 = false;
  boolean_T guard160 = false;
  boolean_T guard161 = false;
  boolean_T guard162 = false;
  boolean_T guard163 = false;
  boolean_T guard164 = false;
  boolean_T guard165 = false;
  boolean_T guard166 = false;
  boolean_T guard167 = false;
  boolean_T guard168 = false;
  boolean_T guard169 = false;
  boolean_T guard170 = false;
  boolean_T guard171 = false;
  boolean_T guard172 = false;
  boolean_T guard173 = false;
  boolean_T guard174 = false;
  boolean_T guard175 = false;
  boolean_T guard176 = false;
  boolean_T guard177 = false;
  boolean_T guard178 = false;
  boolean_T guard179 = false;
  boolean_T guard180 = false;
  boolean_T guard181 = false;
  boolean_T guard182 = false;
  boolean_T guard183 = false;
  boolean_T guard184 = false;
  boolean_T guard185 = false;
  boolean_T guard186 = false;
  boolean_T guard187 = false;
  boolean_T guard188 = false;
  boolean_T guard189 = false;
  boolean_T guard190 = false;
  boolean_T guard191 = false;
  boolean_T guard192 = false;
  boolean_T guard193 = false;
  boolean_T guard194 = false;
  boolean_T guard195 = false;
  boolean_T guard196 = false;
  boolean_T guard197 = false;
  boolean_T guard198 = false;
  boolean_T guard199 = false;
  boolean_T guard200 = false;
  boolean_T guard201 = false;
  boolean_T guard202 = false;
  boolean_T guard203 = false;
  boolean_T guard204 = false;
  boolean_T guard205 = false;
  boolean_T guard206 = false;
  boolean_T guard207 = false;
  boolean_T guard208 = false;
  boolean_T guard209 = false;
  boolean_T guard210 = false;
  boolean_T guard211 = false;
  boolean_T guard212 = false;
  boolean_T guard213 = false;
  boolean_T guard214 = false;
  boolean_T guard215 = false;
  boolean_T guard216 = false;
  boolean_T guard217 = false;
  boolean_T guard218 = false;
  boolean_T guard219 = false;
  boolean_T guard220 = false;
  boolean_T guard221 = false;
  boolean_T guard222 = false;
  boolean_T guard223 = false;
  boolean_T guard224 = false;
  boolean_T guard225 = false;
  boolean_T guard226 = false;
  boolean_T guard227 = false;
  boolean_T guard228 = false;
  boolean_T guard229 = false;
  boolean_T guard230 = false;
  boolean_T guard231 = false;
  boolean_T guard232 = false;
  boolean_T guard233 = false;
  boolean_T guard234 = false;
  boolean_T guard235 = false;
  boolean_T guard236 = false;
  boolean_T guard237 = false;
  boolean_T guard238 = false;
  boolean_T guard239 = false;
  boolean_T guard240 = false;
  boolean_T guard241 = false;
  boolean_T guard242 = false;
  boolean_T guard243 = false;
  boolean_T guard244 = false;
  boolean_T guard245 = false;
  boolean_T guard246 = false;
  boolean_T guard247 = false;
  boolean_T guard248 = false;
  boolean_T guard249 = false;
  boolean_T guard250 = false;
  boolean_T guard251 = false;
  boolean_T guard252 = false;
  boolean_T guard253 = false;
  boolean_T guard254 = false;
  boolean_T guard255 = false;
  boolean_T guard256 = false;
  boolean_T guard257 = false;
  boolean_T guard258 = false;
  boolean_T guard259 = false;
  boolean_T guard260 = false;
  boolean_T guard261 = false;
  boolean_T guard262 = false;
  boolean_T guard263 = false;
  boolean_T guard264 = false;
  boolean_T guard265 = false;
  boolean_T guard266 = false;
  boolean_T guard267 = false;
  boolean_T guard268 = false;
  boolean_T guard269 = false;
  boolean_T guard270 = false;
  boolean_T guard271 = false;
  boolean_T guard272 = false;
  boolean_T guard273 = false;
  boolean_T guard274 = false;
  boolean_T guard275 = false;
  boolean_T guard276 = false;
  boolean_T guard277 = false;
  boolean_T guard278 = false;
  boolean_T guard279 = false;
  boolean_T guard280 = false;
  boolean_T guard281 = false;
  boolean_T guard282 = false;
  boolean_T guard283 = false;
  boolean_T guard284 = false;
  boolean_T guard285 = false;
  boolean_T guard286 = false;
  boolean_T guard287 = false;
  boolean_T guard288 = false;
  boolean_T guard289 = false;
  boolean_T guard290 = false;
  boolean_T guard291 = false;
  boolean_T guard292 = false;
  boolean_T guard293 = false;
  boolean_T guard294 = false;
  boolean_T guard295 = false;
  boolean_T guard296 = false;
  boolean_T guard297 = false;
  boolean_T guard298 = false;
  boolean_T guard299 = false;
  boolean_T guard300 = false;
  boolean_T guard301 = false;
  boolean_T guard302 = false;
  boolean_T guard303 = false;
  boolean_T guard304 = false;
  boolean_T guard305 = false;
  boolean_T guard306 = false;
  boolean_T guard307 = false;
  boolean_T guard308 = false;
  boolean_T guard309 = false;
  boolean_T guard310 = false;
  boolean_T guard311 = false;
  boolean_T guard312 = false;
  boolean_T guard313 = false;
  boolean_T guard314 = false;
  boolean_T guard315 = false;
  c84_b_mode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c84_b_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c84_b_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c84_b_trq_pid_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 20);
  c84_b_trq_pid_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c84_b_trq_pid_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c84_b_trq_pid_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c84_b_trq_pid_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c84_b_trq_pid_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c84_b_trq_out_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c84_b_trq_out_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c84_b_trq_out_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c84_b_trq_out_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c84_b_flag_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c84_b_flag_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c84_b_flag_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c84_b_trq_out_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c84_b_trq_out_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c84_b_flag_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c84_b_flag_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c84_b_flag_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c84_b_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c84_b_bra_pre_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c84_b_bra_pre_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c84_b_trq_dem_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c84_b_trq_dem_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c84_b_trq_dem_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c84_b_trq_dem_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c84_b_trq_dem_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c84_b_trq_dem_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 83U, chartInstance->c84_sfEvent);
  c84_hoistedGlobal = *c84_b_trq_dem_lf;
  c84_b_hoistedGlobal = *c84_b_trq_dem_lm;
  c84_c_hoistedGlobal = *c84_b_trq_dem_lr;
  c84_d_hoistedGlobal = *c84_b_trq_dem_rf;
  c84_e_hoistedGlobal = *c84_b_trq_dem_rm;
  c84_f_hoistedGlobal = *c84_b_trq_dem_rr;
  c84_g_hoistedGlobal = *c84_b_bra_pre_l;
  c84_h_hoistedGlobal = *c84_b_bra_pre_r;
  c84_i_hoistedGlobal = *c84_b_brake_dem;
  c84_j_hoistedGlobal = *c84_b_flag_lf;
  c84_k_hoistedGlobal = *c84_b_flag_lm;
  c84_l_hoistedGlobal = *c84_b_flag_lr;
  c84_m_hoistedGlobal = *c84_b_flag_rf;
  c84_n_hoistedGlobal = *c84_b_flag_rm;
  c84_o_hoistedGlobal = *c84_b_flag_rr;
  c84_p_hoistedGlobal = *c84_b_trq_pid_lf;
  c84_q_hoistedGlobal = *c84_b_trq_pid_lm;
  c84_r_hoistedGlobal = *c84_b_trq_pid_lr;
  c84_s_hoistedGlobal = *c84_b_trq_pid_rf;
  c84_t_hoistedGlobal = *c84_b_trq_pid_rm;
  c84_u_hoistedGlobal = *c84_b_trq_pid_rr;
  c84_trq_dem_lf = c84_hoistedGlobal;
  c84_trq_dem_lm = c84_b_hoistedGlobal;
  c84_trq_dem_lr = c84_c_hoistedGlobal;
  c84_trq_dem_rf = c84_d_hoistedGlobal;
  c84_trq_dem_rm = c84_e_hoistedGlobal;
  c84_trq_dem_rr = c84_f_hoistedGlobal;
  c84_bra_pre_l = c84_g_hoistedGlobal;
  c84_bra_pre_r = c84_h_hoistedGlobal;
  c84_brake_dem = c84_i_hoistedGlobal;
  c84_flag_lf = c84_j_hoistedGlobal;
  c84_flag_lm = c84_k_hoistedGlobal;
  c84_flag_lr = c84_l_hoistedGlobal;
  c84_flag_rf = c84_m_hoistedGlobal;
  c84_flag_rm = c84_n_hoistedGlobal;
  c84_flag_rr = c84_o_hoistedGlobal;
  c84_trq_pid_lf = c84_p_hoistedGlobal;
  c84_trq_pid_lm = c84_q_hoistedGlobal;
  c84_trq_pid_lr = c84_r_hoistedGlobal;
  c84_trq_pid_rf = c84_s_hoistedGlobal;
  c84_trq_pid_rm = c84_t_hoistedGlobal;
  c84_trq_pid_rr = c84_u_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 33U, 33U, c84_debug_family_names,
    c84_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_trqcha, 0U, c84_b_sf_marshallOut,
    c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_nargin, 1U, c84_c_sf_marshallOut,
    c84_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_nargout, 2U, c84_c_sf_marshallOut,
    c84_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_dem_lf, 3U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_dem_lm, 4U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_dem_lr, 5U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_dem_rf, 6U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_dem_rm, 7U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_dem_rr, 8U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_bra_pre_l, 9U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_bra_pre_r, 10U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_brake_dem, 11U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_flag_lf, 12U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_flag_lm, 13U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_flag_lr, 14U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_flag_rf, 15U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_flag_rm, 16U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_flag_rr, 17U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_pid_lf, 18U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_pid_lm, 19U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_pid_lr, 20U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_pid_rf, 21U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_pid_rm, 22U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c84_trq_pid_rr, 23U, c84_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_trq_out_lf, 24U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_trq_out_lm, 25U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_trq_out_lr, 26U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_trq_out_rf, 27U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_trq_out_rm, 28U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_trq_out_rr, 29U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_brapre_out_l, 30U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_brapre_out_r, 31U,
    c84_b_sf_marshallOut, c84_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c84_mode, 32U, c84_sf_marshallOut,
    c84_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 3);
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  if (CV_EML_COND(0, 1, 0, c84_flag_lf == 0.0F)) {
    if (CV_EML_COND(0, 1, 1, c84_flag_lm == 0.0F)) {
      if (CV_EML_COND(0, 1, 2, c84_flag_lr == 0.0F)) {
        if (CV_EML_COND(0, 1, 3, c84_flag_rf == 0.0F)) {
          if (CV_EML_COND(0, 1, 4, c84_flag_rm == 0.0F)) {
            if (CV_EML_COND(0, 1, 5, c84_flag_rr == 0.0F)) {
              CV_EML_MCDC(0, 1, 0, true);
              CV_EML_IF(0, 1, 0, true);
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 4);
              c84_trq_out_lf = c84_trq_dem_lf;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 5);
              c84_trq_out_lm = c84_trq_dem_lm;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 6);
              c84_trq_out_lr = c84_trq_dem_lr;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 7);
              c84_trq_out_rf = c84_trq_dem_rf;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 8);
              c84_trq_out_rm = c84_trq_dem_rm;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 9);
              c84_trq_out_rr = c84_trq_dem_rr;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 10);
              c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 11);
              c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 12);
              c84_mode = 1;
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
    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 22);
    guard6 = false;
    guard7 = false;
    guard8 = false;
    guard9 = false;
    guard10 = false;
    if (CV_EML_COND(0, 1, 6, c84_flag_lf == 1.0F)) {
      if (CV_EML_COND(0, 1, 7, c84_flag_lm == 0.0F)) {
        if (CV_EML_COND(0, 1, 8, c84_flag_lr == 0.0F)) {
          if (CV_EML_COND(0, 1, 9, c84_flag_rf == 0.0F)) {
            if (CV_EML_COND(0, 1, 10, c84_flag_rm == 0.0F)) {
              if (CV_EML_COND(0, 1, 11, c84_flag_rr == 0.0F)) {
                CV_EML_MCDC(0, 1, 1, true);
                CV_EML_IF(0, 1, 1, true);
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 23);
                c84_trq_out_lf = c84_trq_pid_lf;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 24);
                c84_A = c84_trq_dem_lf - c84_trq_out_lf;
                c84_x = c84_A;
                c84_b_x = c84_x;
                c84_c_x = c84_b_x;
                c84_y = c84_c_x / 2.0F;
                c84_trq_out_lm = c84_trq_dem_lm + c84_y;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 25);
                c84_b_A = c84_trq_dem_lf - c84_trq_out_lf;
                c84_d_x = c84_b_A;
                c84_e_x = c84_d_x;
                c84_f_x = c84_e_x;
                c84_b_y = c84_f_x / 2.0F;
                c84_trq_out_lr = c84_trq_dem_lr + c84_b_y;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 26);
                c84_trq_out_rf = c84_trq_dem_rf;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 27);
                c84_trq_out_rm = c84_trq_dem_rm;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 28);
                c84_trq_out_rr = c84_trq_dem_rr;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 29);
                c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 30);
                c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 31);
                c84_mode = 2;
              } else {
                guard6 = true;
              }
            } else {
              guard7 = true;
            }
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
      guard10 = true;
    }

    if (guard10 == true) {
      guard9 = true;
    }

    if (guard9 == true) {
      guard8 = true;
    }

    if (guard8 == true) {
      guard7 = true;
    }

    if (guard7 == true) {
      guard6 = true;
    }

    if (guard6 == true) {
      CV_EML_MCDC(0, 1, 1, false);
      CV_EML_IF(0, 1, 1, false);
      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 32);
      guard11 = false;
      guard12 = false;
      guard13 = false;
      guard14 = false;
      guard15 = false;
      if (CV_EML_COND(0, 1, 12, c84_flag_lf == 0.0F)) {
        if (CV_EML_COND(0, 1, 13, c84_flag_lm == 1.0F)) {
          if (CV_EML_COND(0, 1, 14, c84_flag_lr == 0.0F)) {
            if (CV_EML_COND(0, 1, 15, c84_flag_rf == 0.0F)) {
              if (CV_EML_COND(0, 1, 16, c84_flag_rm == 0.0F)) {
                if (CV_EML_COND(0, 1, 17, c84_flag_rr == 0.0F)) {
                  CV_EML_MCDC(0, 1, 2, true);
                  CV_EML_IF(0, 1, 2, true);
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 33);
                  c84_trq_out_lm = c84_trq_pid_lm;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 34);
                  c84_c_A = c84_trq_dem_lm - c84_trq_out_lm;
                  c84_g_x = c84_c_A;
                  c84_h_x = c84_g_x;
                  c84_i_x = c84_h_x;
                  c84_c_y = c84_i_x / 2.0F;
                  c84_trq_out_lf = c84_trq_dem_lf + c84_c_y;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 35);
                  c84_d_A = c84_trq_dem_lm - c84_trq_out_lm;
                  c84_j_x = c84_d_A;
                  c84_k_x = c84_j_x;
                  c84_l_x = c84_k_x;
                  c84_d_y = c84_l_x / 2.0F;
                  c84_trq_out_lr = c84_trq_dem_lr + c84_d_y;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 36);
                  c84_trq_out_rf = c84_trq_dem_rf;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 37);
                  c84_trq_out_rm = c84_trq_dem_rm;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 38);
                  c84_trq_out_rr = c84_trq_dem_rr;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 39);
                  c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 40);
                  c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 41);
                  c84_mode = 3;
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
        CV_EML_MCDC(0, 1, 2, false);
        CV_EML_IF(0, 1, 2, false);
        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 42);
        guard16 = false;
        guard17 = false;
        guard18 = false;
        guard19 = false;
        guard20 = false;
        if (CV_EML_COND(0, 1, 18, c84_flag_lf == 0.0F)) {
          if (CV_EML_COND(0, 1, 19, c84_flag_lm == 0.0F)) {
            if (CV_EML_COND(0, 1, 20, c84_flag_lr == 1.0F)) {
              if (CV_EML_COND(0, 1, 21, c84_flag_rf == 0.0F)) {
                if (CV_EML_COND(0, 1, 22, c84_flag_rm == 0.0F)) {
                  if (CV_EML_COND(0, 1, 23, c84_flag_rr == 0.0F)) {
                    CV_EML_MCDC(0, 1, 3, true);
                    CV_EML_IF(0, 1, 3, true);
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 43);
                    c84_trq_out_lr = c84_trq_pid_lr;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 44);
                    c84_e_A = c84_trq_dem_lr - c84_trq_out_lr;
                    c84_m_x = c84_e_A;
                    c84_n_x = c84_m_x;
                    c84_o_x = c84_n_x;
                    c84_e_y = c84_o_x / 2.0F;
                    c84_trq_out_lf = c84_trq_dem_lf + c84_e_y;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 45);
                    c84_f_A = c84_trq_dem_lr - c84_trq_out_lr;
                    c84_p_x = c84_f_A;
                    c84_q_x = c84_p_x;
                    c84_r_x = c84_q_x;
                    c84_f_y = c84_r_x / 2.0F;
                    c84_trq_out_lm = c84_trq_dem_lm + c84_f_y;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 46);
                    c84_trq_out_rf = c84_trq_dem_rf;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 47);
                    c84_trq_out_rm = c84_trq_dem_rm;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 48);
                    c84_trq_out_rr = c84_trq_dem_rr;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 49);
                    c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 50);
                    c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 51);
                    c84_mode = 4;
                  } else {
                    guard16 = true;
                  }
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
            guard20 = true;
          }
        } else {
          guard20 = true;
        }

        if (guard20 == true) {
          guard19 = true;
        }

        if (guard19 == true) {
          guard18 = true;
        }

        if (guard18 == true) {
          guard17 = true;
        }

        if (guard17 == true) {
          guard16 = true;
        }

        if (guard16 == true) {
          CV_EML_MCDC(0, 1, 3, false);
          CV_EML_IF(0, 1, 3, false);
          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 53);
          guard21 = false;
          guard22 = false;
          guard23 = false;
          guard24 = false;
          guard25 = false;
          if (CV_EML_COND(0, 1, 24, c84_flag_lf == 0.0F)) {
            if (CV_EML_COND(0, 1, 25, c84_flag_lm == 0.0F)) {
              if (CV_EML_COND(0, 1, 26, c84_flag_lr == 0.0F)) {
                if (CV_EML_COND(0, 1, 27, c84_flag_rf == 1.0F)) {
                  if (CV_EML_COND(0, 1, 28, c84_flag_rm == 0.0F)) {
                    if (CV_EML_COND(0, 1, 29, c84_flag_rr == 0.0F)) {
                      CV_EML_MCDC(0, 1, 4, true);
                      CV_EML_IF(0, 1, 4, true);
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 54);
                      c84_trq_out_rf = c84_trq_pid_rf;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 55);
                      c84_g_A = c84_trq_dem_rf - c84_trq_out_rf;
                      c84_s_x = c84_g_A;
                      c84_t_x = c84_s_x;
                      c84_u_x = c84_t_x;
                      c84_g_y = c84_u_x / 2.0F;
                      c84_trq_out_rm = c84_trq_dem_rm + c84_g_y;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 56);
                      c84_h_A = c84_trq_dem_rf - c84_trq_out_rf;
                      c84_v_x = c84_h_A;
                      c84_w_x = c84_v_x;
                      c84_x_x = c84_w_x;
                      c84_h_y = c84_x_x / 2.0F;
                      c84_trq_out_rr = c84_trq_dem_rr + c84_h_y;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 57);
                      c84_trq_out_lf = c84_trq_dem_lf;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 58);
                      c84_trq_out_lm = c84_trq_dem_lm;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 59);
                      c84_trq_out_lr = c84_trq_dem_lr;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 60);
                      c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 61);
                      c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 62);
                      c84_mode = 5;
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
            CV_EML_MCDC(0, 1, 4, false);
            CV_EML_IF(0, 1, 4, false);
            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 63);
            guard26 = false;
            guard27 = false;
            guard28 = false;
            guard29 = false;
            guard30 = false;
            if (CV_EML_COND(0, 1, 30, c84_flag_lf == 0.0F)) {
              if (CV_EML_COND(0, 1, 31, c84_flag_lm == 0.0F)) {
                if (CV_EML_COND(0, 1, 32, c84_flag_lr == 0.0F)) {
                  if (CV_EML_COND(0, 1, 33, c84_flag_rf == 0.0F)) {
                    if (CV_EML_COND(0, 1, 34, c84_flag_rm == 1.0F)) {
                      if (CV_EML_COND(0, 1, 35, c84_flag_rr == 0.0F)) {
                        CV_EML_MCDC(0, 1, 5, true);
                        CV_EML_IF(0, 1, 5, true);
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 64);
                        c84_trq_out_rm = c84_trq_pid_rm;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 65);
                        c84_i_A = c84_trq_dem_rm - c84_trq_out_rm;
                        c84_y_x = c84_i_A;
                        c84_ab_x = c84_y_x;
                        c84_bb_x = c84_ab_x;
                        c84_i_y = c84_bb_x / 2.0F;
                        c84_trq_out_rf = c84_trq_dem_rf + c84_i_y;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 66);
                        c84_j_A = c84_trq_dem_rm - c84_trq_out_rm;
                        c84_cb_x = c84_j_A;
                        c84_db_x = c84_cb_x;
                        c84_eb_x = c84_db_x;
                        c84_j_y = c84_eb_x / 2.0F;
                        c84_trq_out_rr = c84_trq_dem_rr + c84_j_y;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 67);
                        c84_trq_out_lf = c84_trq_dem_lf;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 68);
                        c84_trq_out_lm = c84_trq_dem_lm;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 69);
                        c84_trq_out_lr = c84_trq_dem_lr;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 70);
                        c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 71);
                        c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 72);
                        c84_mode = 6;
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
              guard28 = true;
            }

            if (guard28 == true) {
              guard27 = true;
            }

            if (guard27 == true) {
              guard26 = true;
            }

            if (guard26 == true) {
              CV_EML_MCDC(0, 1, 5, false);
              CV_EML_IF(0, 1, 5, false);
              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 73);
              guard31 = false;
              guard32 = false;
              guard33 = false;
              guard34 = false;
              guard35 = false;
              if (CV_EML_COND(0, 1, 36, c84_flag_lf == 0.0F)) {
                if (CV_EML_COND(0, 1, 37, c84_flag_lm == 0.0F)) {
                  if (CV_EML_COND(0, 1, 38, c84_flag_lr == 0.0F)) {
                    if (CV_EML_COND(0, 1, 39, c84_flag_rf == 0.0F)) {
                      if (CV_EML_COND(0, 1, 40, c84_flag_rm == 0.0F)) {
                        if (CV_EML_COND(0, 1, 41, c84_flag_rr == 1.0F)) {
                          CV_EML_MCDC(0, 1, 6, true);
                          CV_EML_IF(0, 1, 6, true);
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 74);
                          c84_trq_out_rr = c84_trq_pid_rr;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 75);
                          c84_k_A = c84_trq_dem_rr - c84_trq_out_rr;
                          c84_fb_x = c84_k_A;
                          c84_gb_x = c84_fb_x;
                          c84_hb_x = c84_gb_x;
                          c84_k_y = c84_hb_x / 2.0F;
                          c84_trq_out_rf = c84_trq_dem_rf + c84_k_y;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 76);
                          c84_l_A = c84_trq_dem_rr - c84_trq_out_rr;
                          c84_ib_x = c84_l_A;
                          c84_jb_x = c84_ib_x;
                          c84_kb_x = c84_jb_x;
                          c84_l_y = c84_kb_x / 2.0F;
                          c84_trq_out_rm = c84_trq_dem_rm + c84_l_y;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 77);
                          c84_trq_out_lf = c84_trq_dem_lf;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 78);
                          c84_trq_out_lm = c84_trq_dem_lm;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 79);
                          c84_trq_out_lr = c84_trq_dem_lr;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 80);
                          c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 81);
                          c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 82);
                          c84_mode = 7;
                        } else {
                          guard31 = true;
                        }
                      } else {
                        guard32 = true;
                      }
                    } else {
                      guard33 = true;
                    }
                  } else {
                    guard34 = true;
                  }
                } else {
                  guard35 = true;
                }
              } else {
                guard35 = true;
              }

              if (guard35 == true) {
                guard34 = true;
              }

              if (guard34 == true) {
                guard33 = true;
              }

              if (guard33 == true) {
                guard32 = true;
              }

              if (guard32 == true) {
                guard31 = true;
              }

              if (guard31 == true) {
                CV_EML_MCDC(0, 1, 6, false);
                CV_EML_IF(0, 1, 6, false);
                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 93);
                guard36 = false;
                guard37 = false;
                guard38 = false;
                guard39 = false;
                guard40 = false;
                if (CV_EML_COND(0, 1, 42, c84_flag_lf == 1.0F)) {
                  if (CV_EML_COND(0, 1, 43, c84_flag_lm == 1.0F)) {
                    if (CV_EML_COND(0, 1, 44, c84_flag_lr == 0.0F)) {
                      if (CV_EML_COND(0, 1, 45, c84_flag_rf == 0.0F)) {
                        if (CV_EML_COND(0, 1, 46, c84_flag_rm == 0.0F)) {
                          if (CV_EML_COND(0, 1, 47, c84_flag_rr == 0.0F)) {
                            CV_EML_MCDC(0, 1, 7, true);
                            CV_EML_IF(0, 1, 7, true);
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 94);
                            c84_trq_out_lf = c84_trq_pid_lf;
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 95);
                            c84_trq_out_lm = c84_trq_pid_lm;
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 96);
                            c84_trq_out_lr = (c84_trq_dem_lr + (c84_trq_dem_lf -
                              c84_trq_out_lf)) + (c84_trq_dem_lm -
                                                  c84_trq_out_lm);
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 97);
                            c84_trq_out_rf = c84_trq_dem_rf;
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 98);
                            c84_trq_out_rm = c84_trq_dem_rm;
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 99);
                            c84_trq_out_rr = c84_trq_dem_rr;
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 100);
                            c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 101);
                            c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 102);
                            c84_mode = 8;
                          } else {
                            guard36 = true;
                          }
                        } else {
                          guard37 = true;
                        }
                      } else {
                        guard38 = true;
                      }
                    } else {
                      guard39 = true;
                    }
                  } else {
                    guard40 = true;
                  }
                } else {
                  guard40 = true;
                }

                if (guard40 == true) {
                  guard39 = true;
                }

                if (guard39 == true) {
                  guard38 = true;
                }

                if (guard38 == true) {
                  guard37 = true;
                }

                if (guard37 == true) {
                  guard36 = true;
                }

                if (guard36 == true) {
                  CV_EML_MCDC(0, 1, 7, false);
                  CV_EML_IF(0, 1, 7, false);
                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 103);
                  guard41 = false;
                  guard42 = false;
                  guard43 = false;
                  guard44 = false;
                  guard45 = false;
                  if (CV_EML_COND(0, 1, 48, c84_flag_lf == 1.0F)) {
                    if (CV_EML_COND(0, 1, 49, c84_flag_lm == 0.0F)) {
                      if (CV_EML_COND(0, 1, 50, c84_flag_lr == 1.0F)) {
                        if (CV_EML_COND(0, 1, 51, c84_flag_rf == 0.0F)) {
                          if (CV_EML_COND(0, 1, 52, c84_flag_rm == 0.0F)) {
                            if (CV_EML_COND(0, 1, 53, c84_flag_rr == 0.0F)) {
                              CV_EML_MCDC(0, 1, 8, true);
                              CV_EML_IF(0, 1, 8, true);
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 104);
                              c84_trq_out_lf = c84_trq_pid_lf;
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 105);
                              c84_trq_out_lr = c84_trq_pid_lr;
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 106);
                              c84_trq_out_lm = (c84_trq_dem_lm + (c84_trq_dem_lf
                                - c84_trq_out_lf)) + (c84_trq_dem_lr -
                                c84_trq_out_lr);
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 107);
                              c84_trq_out_rf = c84_trq_dem_rf;
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 108);
                              c84_trq_out_rm = c84_trq_dem_rm;
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 109);
                              c84_trq_out_rr = c84_trq_dem_rr;
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 110);
                              c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 111);
                              c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 112);
                              c84_mode = 9;
                            } else {
                              guard41 = true;
                            }
                          } else {
                            guard42 = true;
                          }
                        } else {
                          guard43 = true;
                        }
                      } else {
                        guard44 = true;
                      }
                    } else {
                      guard45 = true;
                    }
                  } else {
                    guard45 = true;
                  }

                  if (guard45 == true) {
                    guard44 = true;
                  }

                  if (guard44 == true) {
                    guard43 = true;
                  }

                  if (guard43 == true) {
                    guard42 = true;
                  }

                  if (guard42 == true) {
                    guard41 = true;
                  }

                  if (guard41 == true) {
                    CV_EML_MCDC(0, 1, 8, false);
                    CV_EML_IF(0, 1, 8, false);
                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 113);
                    guard46 = false;
                    guard47 = false;
                    guard48 = false;
                    guard49 = false;
                    guard50 = false;
                    if (CV_EML_COND(0, 1, 54, c84_flag_lf == 0.0F)) {
                      if (CV_EML_COND(0, 1, 55, c84_flag_lm == 1.0F)) {
                        if (CV_EML_COND(0, 1, 56, c84_flag_lr == 1.0F)) {
                          if (CV_EML_COND(0, 1, 57, c84_flag_rf == 0.0F)) {
                            if (CV_EML_COND(0, 1, 58, c84_flag_rm == 0.0F)) {
                              if (CV_EML_COND(0, 1, 59, c84_flag_rr == 0.0F)) {
                                CV_EML_MCDC(0, 1, 9, true);
                                CV_EML_IF(0, 1, 9, true);
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              114);
                                c84_trq_out_lm = c84_trq_pid_lm;
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              115);
                                c84_trq_out_lr = c84_trq_pid_lr;
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              116);
                                c84_trq_out_lf = (c84_trq_dem_lf +
                                                  (c84_trq_dem_lm -
                                                   c84_trq_out_lm)) +
                                  (c84_trq_dem_lr - c84_trq_out_lr);
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              117);
                                c84_trq_out_rf = c84_trq_dem_rf;
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              118);
                                c84_trq_out_rm = c84_trq_dem_rm;
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              119);
                                c84_trq_out_rr = c84_trq_dem_rr;
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              120);
                                c84_brapre_out_l = c84_bra_pre_l + c84_brake_dem;
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              121);
                                c84_brapre_out_r = c84_bra_pre_r + c84_brake_dem;
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              122);
                                c84_mode = 10;
                              } else {
                                guard46 = true;
                              }
                            } else {
                              guard47 = true;
                            }
                          } else {
                            guard48 = true;
                          }
                        } else {
                          guard49 = true;
                        }
                      } else {
                        guard50 = true;
                      }
                    } else {
                      guard50 = true;
                    }

                    if (guard50 == true) {
                      guard49 = true;
                    }

                    if (guard49 == true) {
                      guard48 = true;
                    }

                    if (guard48 == true) {
                      guard47 = true;
                    }

                    if (guard47 == true) {
                      guard46 = true;
                    }

                    if (guard46 == true) {
                      CV_EML_MCDC(0, 1, 9, false);
                      CV_EML_IF(0, 1, 9, false);
                      _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 124);
                      guard51 = false;
                      guard52 = false;
                      guard53 = false;
                      guard54 = false;
                      guard55 = false;
                      if (CV_EML_COND(0, 1, 60, c84_flag_lf == 0.0F)) {
                        if (CV_EML_COND(0, 1, 61, c84_flag_lm == 0.0F)) {
                          if (CV_EML_COND(0, 1, 62, c84_flag_lr == 0.0F)) {
                            if (CV_EML_COND(0, 1, 63, c84_flag_rf == 1.0F)) {
                              if (CV_EML_COND(0, 1, 64, c84_flag_rm == 1.0F)) {
                                if (CV_EML_COND(0, 1, 65, c84_flag_rr == 0.0F))
                                {
                                  CV_EML_MCDC(0, 1, 10, true);
                                  CV_EML_IF(0, 1, 10, true);
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                125);
                                  c84_trq_out_rf = c84_trq_pid_rf;
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                126);
                                  c84_trq_out_rm = c84_trq_pid_rm;
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                MAX_int8_T);
                                  c84_trq_out_rr = (c84_trq_dem_rr +
                                                    (c84_trq_dem_rf -
                                                     c84_trq_out_rf)) +
                                    (c84_trq_dem_rm - c84_trq_out_rm);
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                128U);
                                  c84_trq_out_lf = c84_trq_dem_lf;
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                129U);
                                  c84_trq_out_lm = c84_trq_dem_lm;
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                130U);
                                  c84_trq_out_lr = c84_trq_dem_lr;
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                131U);
                                  c84_brapre_out_l = c84_bra_pre_l +
                                    c84_brake_dem;
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                132U);
                                  c84_brapre_out_r = c84_bra_pre_r +
                                    c84_brake_dem;
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                133U);
                                  c84_mode = 11;
                                } else {
                                  guard51 = true;
                                }
                              } else {
                                guard52 = true;
                              }
                            } else {
                              guard53 = true;
                            }
                          } else {
                            guard54 = true;
                          }
                        } else {
                          guard55 = true;
                        }
                      } else {
                        guard55 = true;
                      }

                      if (guard55 == true) {
                        guard54 = true;
                      }

                      if (guard54 == true) {
                        guard53 = true;
                      }

                      if (guard53 == true) {
                        guard52 = true;
                      }

                      if (guard52 == true) {
                        guard51 = true;
                      }

                      if (guard51 == true) {
                        CV_EML_MCDC(0, 1, 10, false);
                        CV_EML_IF(0, 1, 10, false);
                        _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 134U);
                        guard56 = false;
                        guard57 = false;
                        guard58 = false;
                        guard59 = false;
                        guard60 = false;
                        if (CV_EML_COND(0, 1, 66, c84_flag_lf == 0.0F)) {
                          if (CV_EML_COND(0, 1, 67, c84_flag_lm == 0.0F)) {
                            if (CV_EML_COND(0, 1, 68, c84_flag_lr == 0.0F)) {
                              if (CV_EML_COND(0, 1, 69, c84_flag_rf == 1.0F)) {
                                if (CV_EML_COND(0, 1, 70, c84_flag_rm == 0.0F))
                                {
                                  if (CV_EML_COND(0, 1, 71, c84_flag_rr == 1.0F))
                                  {
                                    CV_EML_MCDC(0, 1, 11, true);
                                    CV_EML_IF(0, 1, 11, true);
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  135U);
                                    c84_trq_out_rf = c84_trq_pid_rf;
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  136U);
                                    c84_trq_out_rr = c84_trq_pid_rr;
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  137U);
                                    c84_trq_out_rm = (c84_trq_dem_rm +
                                                      (c84_trq_dem_rf -
                                                       c84_trq_out_rf)) +
                                      (c84_trq_dem_rr - c84_trq_out_rr);
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  138U);
                                    c84_trq_out_lf = c84_trq_dem_lf;
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  139U);
                                    c84_trq_out_lm = c84_trq_dem_lm;
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  140U);
                                    c84_trq_out_lr = c84_trq_dem_lr;
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  141U);
                                    c84_brapre_out_l = c84_bra_pre_l +
                                      c84_brake_dem;
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  142U);
                                    c84_brapre_out_r = c84_bra_pre_r +
                                      c84_brake_dem;
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  143U);
                                    c84_mode = 12;
                                  } else {
                                    guard56 = true;
                                  }
                                } else {
                                  guard57 = true;
                                }
                              } else {
                                guard58 = true;
                              }
                            } else {
                              guard59 = true;
                            }
                          } else {
                            guard60 = true;
                          }
                        } else {
                          guard60 = true;
                        }

                        if (guard60 == true) {
                          guard59 = true;
                        }

                        if (guard59 == true) {
                          guard58 = true;
                        }

                        if (guard58 == true) {
                          guard57 = true;
                        }

                        if (guard57 == true) {
                          guard56 = true;
                        }

                        if (guard56 == true) {
                          CV_EML_MCDC(0, 1, 11, false);
                          CV_EML_IF(0, 1, 11, false);
                          _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 144U);
                          guard61 = false;
                          guard62 = false;
                          guard63 = false;
                          guard64 = false;
                          guard65 = false;
                          if (CV_EML_COND(0, 1, 72, c84_flag_lf == 0.0F)) {
                            if (CV_EML_COND(0, 1, 73, c84_flag_lm == 0.0F)) {
                              if (CV_EML_COND(0, 1, 74, c84_flag_lr == 0.0F)) {
                                if (CV_EML_COND(0, 1, 75, c84_flag_rf == 0.0F))
                                {
                                  if (CV_EML_COND(0, 1, 76, c84_flag_rm == 1.0F))
                                  {
                                    if (CV_EML_COND(0, 1, 77, c84_flag_rr ==
                                                    1.0F)) {
                                      CV_EML_MCDC(0, 1, 12, true);
                                      CV_EML_IF(0, 1, 12, true);
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    145U);
                                      c84_trq_out_rm = c84_trq_pid_rm;
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    146U);
                                      c84_trq_out_rr = c84_trq_pid_rr;
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    147U);
                                      c84_trq_out_rf = (c84_trq_dem_rf +
                                                        (c84_trq_dem_rm -
                                                         c84_trq_out_rm)) +
                                        (c84_trq_dem_rr - c84_trq_out_rr);
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    148U);
                                      c84_trq_out_lf = c84_trq_dem_lf;
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    149U);
                                      c84_trq_out_lm = c84_trq_dem_lm;
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    150U);
                                      c84_trq_out_lr = c84_trq_dem_lr;
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    151U);
                                      c84_brapre_out_l = c84_bra_pre_l +
                                        c84_brake_dem;
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    152U);
                                      c84_brapre_out_r = c84_bra_pre_r +
                                        c84_brake_dem;
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    153U);
                                      c84_mode = 13;
                                    } else {
                                      guard61 = true;
                                    }
                                  } else {
                                    guard62 = true;
                                  }
                                } else {
                                  guard63 = true;
                                }
                              } else {
                                guard64 = true;
                              }
                            } else {
                              guard65 = true;
                            }
                          } else {
                            guard65 = true;
                          }

                          if (guard65 == true) {
                            guard64 = true;
                          }

                          if (guard64 == true) {
                            guard63 = true;
                          }

                          if (guard63 == true) {
                            guard62 = true;
                          }

                          if (guard62 == true) {
                            guard61 = true;
                          }

                          if (guard61 == true) {
                            CV_EML_MCDC(0, 1, 12, false);
                            CV_EML_IF(0, 1, 12, false);
                            _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 155U);
                            guard66 = false;
                            guard67 = false;
                            guard68 = false;
                            guard69 = false;
                            guard70 = false;
                            if (CV_EML_COND(0, 1, 78, c84_flag_lf == 1.0F)) {
                              if (CV_EML_COND(0, 1, 79, c84_flag_lm == 0.0F)) {
                                if (CV_EML_COND(0, 1, 80, c84_flag_lr == 0.0F))
                                {
                                  if (CV_EML_COND(0, 1, 81, c84_flag_rf == 1.0F))
                                  {
                                    if (CV_EML_COND(0, 1, 82, c84_flag_rm ==
                                                    0.0F)) {
                                      if (CV_EML_COND(0, 1, 83, c84_flag_rr ==
                                                      0.0F)) {
                                        CV_EML_MCDC(0, 1, 13, true);
                                        CV_EML_IF(0, 1, 13, true);
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      156U);
                                        c84_trq_out_lf = c84_trq_pid_lf;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      157U);
                                        c84_m_A = c84_trq_dem_lf -
                                          c84_trq_out_lf;
                                        c84_lb_x = c84_m_A;
                                        c84_mb_x = c84_lb_x;
                                        c84_nb_x = c84_mb_x;
                                        c84_m_y = c84_nb_x / 2.0F;
                                        c84_trq_out_lm = c84_trq_dem_lm +
                                          c84_m_y;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      158U);
                                        c84_n_A = c84_trq_dem_lf -
                                          c84_trq_out_lf;
                                        c84_ob_x = c84_n_A;
                                        c84_pb_x = c84_ob_x;
                                        c84_qb_x = c84_pb_x;
                                        c84_n_y = c84_qb_x / 2.0F;
                                        c84_trq_out_lr = c84_trq_dem_lr +
                                          c84_n_y;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      159U);
                                        c84_trq_out_rf = c84_trq_pid_rf;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      160U);
                                        c84_o_A = c84_trq_dem_rf -
                                          c84_trq_out_rf;
                                        c84_rb_x = c84_o_A;
                                        c84_sb_x = c84_rb_x;
                                        c84_tb_x = c84_sb_x;
                                        c84_o_y = c84_tb_x / 2.0F;
                                        c84_trq_out_rm = c84_trq_dem_rm +
                                          c84_o_y;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      161U);
                                        c84_p_A = c84_trq_dem_rf -
                                          c84_trq_out_rf;
                                        c84_ub_x = c84_p_A;
                                        c84_vb_x = c84_ub_x;
                                        c84_wb_x = c84_vb_x;
                                        c84_p_y = c84_wb_x / 2.0F;
                                        c84_trq_out_rr = c84_trq_dem_rr +
                                          c84_p_y;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      162U);
                                        c84_brapre_out_l = c84_bra_pre_l +
                                          c84_brake_dem;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      163U);
                                        c84_brapre_out_r = c84_bra_pre_r +
                                          c84_brake_dem;
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      164U);
                                        c84_mode = 14;
                                      } else {
                                        guard66 = true;
                                      }
                                    } else {
                                      guard67 = true;
                                    }
                                  } else {
                                    guard68 = true;
                                  }
                                } else {
                                  guard69 = true;
                                }
                              } else {
                                guard70 = true;
                              }
                            } else {
                              guard70 = true;
                            }

                            if (guard70 == true) {
                              guard69 = true;
                            }

                            if (guard69 == true) {
                              guard68 = true;
                            }

                            if (guard68 == true) {
                              guard67 = true;
                            }

                            if (guard67 == true) {
                              guard66 = true;
                            }

                            if (guard66 == true) {
                              CV_EML_MCDC(0, 1, 13, false);
                              CV_EML_IF(0, 1, 13, false);
                              _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 165U);
                              guard71 = false;
                              guard72 = false;
                              guard73 = false;
                              guard74 = false;
                              guard75 = false;
                              if (CV_EML_COND(0, 1, 84, c84_flag_lf == 1.0F)) {
                                if (CV_EML_COND(0, 1, 85, c84_flag_lm == 0.0F))
                                {
                                  if (CV_EML_COND(0, 1, 86, c84_flag_lr == 0.0F))
                                  {
                                    if (CV_EML_COND(0, 1, 87, c84_flag_rf ==
                                                    0.0F)) {
                                      if (CV_EML_COND(0, 1, 88, c84_flag_rm ==
                                                      1.0F)) {
                                        if (CV_EML_COND(0, 1, 89, c84_flag_rr ==
                                                        0.0F)) {
                                          CV_EML_MCDC(0, 1, 14, true);
                                          CV_EML_IF(0, 1, 14, true);
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        166U);
                                          c84_trq_out_lf = c84_trq_pid_lf;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        167U);
                                          c84_q_A = c84_trq_dem_lf -
                                            c84_trq_out_lf;
                                          c84_xb_x = c84_q_A;
                                          c84_yb_x = c84_xb_x;
                                          c84_ac_x = c84_yb_x;
                                          c84_q_y = c84_ac_x / 2.0F;
                                          c84_trq_out_lm = c84_trq_dem_lm +
                                            c84_q_y;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        168U);
                                          c84_r_A = c84_trq_dem_lf -
                                            c84_trq_out_lf;
                                          c84_bc_x = c84_r_A;
                                          c84_cc_x = c84_bc_x;
                                          c84_dc_x = c84_cc_x;
                                          c84_r_y = c84_dc_x / 2.0F;
                                          c84_trq_out_lr = c84_trq_dem_lr +
                                            c84_r_y;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        169U);
                                          c84_trq_out_rm = c84_trq_pid_rm;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        170U);
                                          c84_s_A = c84_trq_dem_rm -
                                            c84_trq_out_rm;
                                          c84_ec_x = c84_s_A;
                                          c84_fc_x = c84_ec_x;
                                          c84_gc_x = c84_fc_x;
                                          c84_s_y = c84_gc_x / 2.0F;
                                          c84_trq_out_rf = c84_trq_dem_rf +
                                            c84_s_y;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        171U);
                                          c84_t_A = c84_trq_dem_rm -
                                            c84_trq_out_rm;
                                          c84_hc_x = c84_t_A;
                                          c84_ic_x = c84_hc_x;
                                          c84_jc_x = c84_ic_x;
                                          c84_t_y = c84_jc_x / 2.0F;
                                          c84_trq_out_rr = c84_trq_dem_rr +
                                            c84_t_y;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        172U);
                                          c84_brapre_out_l = c84_bra_pre_l +
                                            c84_brake_dem;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        173U);
                                          c84_brapre_out_r = c84_bra_pre_r +
                                            c84_brake_dem;
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        174U);
                                          c84_mode = 15;
                                        } else {
                                          guard71 = true;
                                        }
                                      } else {
                                        guard72 = true;
                                      }
                                    } else {
                                      guard73 = true;
                                    }
                                  } else {
                                    guard74 = true;
                                  }
                                } else {
                                  guard75 = true;
                                }
                              } else {
                                guard75 = true;
                              }

                              if (guard75 == true) {
                                guard74 = true;
                              }

                              if (guard74 == true) {
                                guard73 = true;
                              }

                              if (guard73 == true) {
                                guard72 = true;
                              }

                              if (guard72 == true) {
                                guard71 = true;
                              }

                              if (guard71 == true) {
                                CV_EML_MCDC(0, 1, 14, false);
                                CV_EML_IF(0, 1, 14, false);
                                _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                              175U);
                                guard76 = false;
                                guard77 = false;
                                guard78 = false;
                                guard79 = false;
                                guard80 = false;
                                if (CV_EML_COND(0, 1, 90, c84_flag_lf == 1.0F))
                                {
                                  if (CV_EML_COND(0, 1, 91, c84_flag_lm == 0.0F))
                                  {
                                    if (CV_EML_COND(0, 1, 92, c84_flag_lr ==
                                                    0.0F)) {
                                      if (CV_EML_COND(0, 1, 93, c84_flag_rf ==
                                                      0.0F)) {
                                        if (CV_EML_COND(0, 1, 94, c84_flag_rm ==
                                                        0.0F)) {
                                          if (CV_EML_COND(0, 1, 95, c84_flag_rr ==
                                                          1.0F)) {
                                            CV_EML_MCDC(0, 1, 15, true);
                                            CV_EML_IF(0, 1, 15, true);
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          176U);
                                            c84_trq_out_lf = c84_trq_pid_lf;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          177U);
                                            c84_u_A = c84_trq_dem_lf -
                                              c84_trq_out_lf;
                                            c84_kc_x = c84_u_A;
                                            c84_lc_x = c84_kc_x;
                                            c84_mc_x = c84_lc_x;
                                            c84_u_y = c84_mc_x / 2.0F;
                                            c84_trq_out_lm = c84_trq_dem_lm +
                                              c84_u_y;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          178U);
                                            c84_v_A = c84_trq_dem_lf -
                                              c84_trq_out_lf;
                                            c84_nc_x = c84_v_A;
                                            c84_oc_x = c84_nc_x;
                                            c84_pc_x = c84_oc_x;
                                            c84_v_y = c84_pc_x / 2.0F;
                                            c84_trq_out_lr = c84_trq_dem_lr +
                                              c84_v_y;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          179U);
                                            c84_trq_out_rr = c84_trq_pid_rr;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          180U);
                                            c84_w_A = c84_trq_dem_rr -
                                              c84_trq_out_rr;
                                            c84_qc_x = c84_w_A;
                                            c84_rc_x = c84_qc_x;
                                            c84_sc_x = c84_rc_x;
                                            c84_w_y = c84_sc_x / 2.0F;
                                            c84_trq_out_rf = c84_trq_dem_rf +
                                              c84_w_y;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          181U);
                                            c84_x_A = c84_trq_dem_rr -
                                              c84_trq_out_rr;
                                            c84_tc_x = c84_x_A;
                                            c84_uc_x = c84_tc_x;
                                            c84_vc_x = c84_uc_x;
                                            c84_x_y = c84_vc_x / 2.0F;
                                            c84_trq_out_rm = c84_trq_dem_rm +
                                              c84_x_y;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          182U);
                                            c84_brapre_out_l = c84_bra_pre_l +
                                              c84_brake_dem;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          183U);
                                            c84_brapre_out_r = c84_bra_pre_r +
                                              c84_brake_dem;
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          184U);
                                            c84_mode = 16;
                                          } else {
                                            guard76 = true;
                                          }
                                        } else {
                                          guard77 = true;
                                        }
                                      } else {
                                        guard78 = true;
                                      }
                                    } else {
                                      guard79 = true;
                                    }
                                  } else {
                                    guard80 = true;
                                  }
                                } else {
                                  guard80 = true;
                                }

                                if (guard80 == true) {
                                  guard79 = true;
                                }

                                if (guard79 == true) {
                                  guard78 = true;
                                }

                                if (guard78 == true) {
                                  guard77 = true;
                                }

                                if (guard77 == true) {
                                  guard76 = true;
                                }

                                if (guard76 == true) {
                                  CV_EML_MCDC(0, 1, 15, false);
                                  CV_EML_IF(0, 1, 15, false);
                                  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                186U);
                                  guard81 = false;
                                  guard82 = false;
                                  guard83 = false;
                                  guard84 = false;
                                  guard85 = false;
                                  if (CV_EML_COND(0, 1, 96, c84_flag_lf == 0.0F))
                                  {
                                    if (CV_EML_COND(0, 1, 97, c84_flag_lm ==
                                                    1.0F)) {
                                      if (CV_EML_COND(0, 1, 98, c84_flag_lr ==
                                                      0.0F)) {
                                        if (CV_EML_COND(0, 1, 99, c84_flag_rf ==
                                                        1.0F)) {
                                          if (CV_EML_COND(0, 1, 100, c84_flag_rm
                                                          == 0.0F)) {
                                            if (CV_EML_COND(0, 1, 101,
                                                            c84_flag_rr == 0.0F))
                                            {
                                              CV_EML_MCDC(0, 1, 16, true);
                                              CV_EML_IF(0, 1, 16, true);
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            187U);
                                              c84_trq_out_lm = c84_trq_pid_lm;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            188U);
                                              c84_y_A = c84_trq_dem_lm -
                                                c84_trq_out_lm;
                                              c84_wc_x = c84_y_A;
                                              c84_xc_x = c84_wc_x;
                                              c84_yc_x = c84_xc_x;
                                              c84_y_y = c84_yc_x / 2.0F;
                                              c84_trq_out_lf = c84_trq_dem_lf +
                                                c84_y_y;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            189U);
                                              c84_ab_A = c84_trq_dem_lm -
                                                c84_trq_out_lm;
                                              c84_ad_x = c84_ab_A;
                                              c84_bd_x = c84_ad_x;
                                              c84_cd_x = c84_bd_x;
                                              c84_ab_y = c84_cd_x / 2.0F;
                                              c84_trq_out_lr = c84_trq_dem_lr +
                                                c84_ab_y;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            190U);
                                              c84_trq_out_rf = c84_trq_pid_rf;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            191U);
                                              c84_bb_A = c84_trq_dem_rf -
                                                c84_trq_out_rf;
                                              c84_dd_x = c84_bb_A;
                                              c84_ed_x = c84_dd_x;
                                              c84_fd_x = c84_ed_x;
                                              c84_bb_y = c84_fd_x / 2.0F;
                                              c84_trq_out_rm = c84_trq_dem_rm +
                                                c84_bb_y;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            192U);
                                              c84_cb_A = c84_trq_dem_rf -
                                                c84_trq_out_rf;
                                              c84_gd_x = c84_cb_A;
                                              c84_hd_x = c84_gd_x;
                                              c84_id_x = c84_hd_x;
                                              c84_cb_y = c84_id_x / 2.0F;
                                              c84_trq_out_rr = c84_trq_dem_rr +
                                                c84_cb_y;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            193U);
                                              c84_brapre_out_l = c84_bra_pre_l +
                                                c84_brake_dem;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            194U);
                                              c84_brapre_out_r = c84_bra_pre_r +
                                                c84_brake_dem;
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            195U);
                                              c84_mode = 17;
                                            } else {
                                              guard81 = true;
                                            }
                                          } else {
                                            guard82 = true;
                                          }
                                        } else {
                                          guard83 = true;
                                        }
                                      } else {
                                        guard84 = true;
                                      }
                                    } else {
                                      guard85 = true;
                                    }
                                  } else {
                                    guard85 = true;
                                  }

                                  if (guard85 == true) {
                                    guard84 = true;
                                  }

                                  if (guard84 == true) {
                                    guard83 = true;
                                  }

                                  if (guard83 == true) {
                                    guard82 = true;
                                  }

                                  if (guard82 == true) {
                                    guard81 = true;
                                  }

                                  if (guard81 == true) {
                                    CV_EML_MCDC(0, 1, 16, false);
                                    CV_EML_IF(0, 1, 16, false);
                                    _SFD_EML_CALL(0U, chartInstance->c84_sfEvent,
                                                  196U);
                                    guard86 = false;
                                    guard87 = false;
                                    guard88 = false;
                                    guard89 = false;
                                    guard90 = false;
                                    if (CV_EML_COND(0, 1, 102, c84_flag_lf ==
                                                    0.0F)) {
                                      if (CV_EML_COND(0, 1, 103, c84_flag_lm ==
                                                      1.0F)) {
                                        if (CV_EML_COND(0, 1, 104, c84_flag_lr ==
                                                        0.0F)) {
                                          if (CV_EML_COND(0, 1, 105, c84_flag_rf
                                                          == 0.0F)) {
                                            if (CV_EML_COND(0, 1, 106,
                                                            c84_flag_rm == 1.0F))
                                            {
                                              if (CV_EML_COND(0, 1, 107,
                                                   c84_flag_rr == 0.0F)) {
                                                CV_EML_MCDC(0, 1, 17, true);
                                                CV_EML_IF(0, 1, 17, true);
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  197U);
                                                c84_trq_out_lm = c84_trq_pid_lm;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  198U);
                                                c84_db_A = c84_trq_dem_lm -
                                                  c84_trq_out_lm;
                                                c84_jd_x = c84_db_A;
                                                c84_kd_x = c84_jd_x;
                                                c84_ld_x = c84_kd_x;
                                                c84_db_y = c84_ld_x / 2.0F;
                                                c84_trq_out_lf = c84_trq_dem_lf
                                                  + c84_db_y;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  199U);
                                                c84_eb_A = c84_trq_dem_lm -
                                                  c84_trq_out_lm;
                                                c84_md_x = c84_eb_A;
                                                c84_nd_x = c84_md_x;
                                                c84_od_x = c84_nd_x;
                                                c84_eb_y = c84_od_x / 2.0F;
                                                c84_trq_out_lr = c84_trq_dem_lr
                                                  + c84_eb_y;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  200U);
                                                c84_trq_out_rm = c84_trq_pid_rm;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  201U);
                                                c84_fb_A = c84_trq_dem_rm -
                                                  c84_trq_out_rm;
                                                c84_pd_x = c84_fb_A;
                                                c84_qd_x = c84_pd_x;
                                                c84_rd_x = c84_qd_x;
                                                c84_fb_y = c84_rd_x / 2.0F;
                                                c84_trq_out_rf = c84_trq_dem_rf
                                                  + c84_fb_y;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  202U);
                                                c84_gb_A = c84_trq_dem_rm -
                                                  c84_trq_out_rm;
                                                c84_sd_x = c84_gb_A;
                                                c84_td_x = c84_sd_x;
                                                c84_ud_x = c84_td_x;
                                                c84_gb_y = c84_ud_x / 2.0F;
                                                c84_trq_out_rr = c84_trq_dem_rr
                                                  + c84_gb_y;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  203U);
                                                c84_brapre_out_l = c84_bra_pre_l
                                                  + c84_brake_dem;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  204U);
                                                c84_brapre_out_r = c84_bra_pre_r
                                                  + c84_brake_dem;
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  205U);
                                                c84_mode = 18;
                                              } else {
                                                guard86 = true;
                                              }
                                            } else {
                                              guard87 = true;
                                            }
                                          } else {
                                            guard88 = true;
                                          }
                                        } else {
                                          guard89 = true;
                                        }
                                      } else {
                                        guard90 = true;
                                      }
                                    } else {
                                      guard90 = true;
                                    }

                                    if (guard90 == true) {
                                      guard89 = true;
                                    }

                                    if (guard89 == true) {
                                      guard88 = true;
                                    }

                                    if (guard88 == true) {
                                      guard87 = true;
                                    }

                                    if (guard87 == true) {
                                      guard86 = true;
                                    }

                                    if (guard86 == true) {
                                      CV_EML_MCDC(0, 1, 17, false);
                                      CV_EML_IF(0, 1, 17, false);
                                      _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    206U);
                                      guard91 = false;
                                      guard92 = false;
                                      guard93 = false;
                                      guard94 = false;
                                      guard95 = false;
                                      if (CV_EML_COND(0, 1, 108, c84_flag_lf ==
                                                      0.0F)) {
                                        if (CV_EML_COND(0, 1, 109, c84_flag_lm ==
                                                        1.0F)) {
                                          if (CV_EML_COND(0, 1, 110, c84_flag_lr
                                                          == 0.0F)) {
                                            if (CV_EML_COND(0, 1, 111,
                                                            c84_flag_rf == 0.0F))
                                            {
                                              if (CV_EML_COND(0, 1, 112,
                                                   c84_flag_rm == 0.0F)) {
                                                if (CV_EML_COND(0, 1, 113,
                                                     c84_flag_rr == 1.0F)) {
                                                  CV_EML_MCDC(0, 1, 18, true);
                                                  CV_EML_IF(0, 1, 18, true);
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    207U);
                                                  c84_trq_out_lm =
                                                    c84_trq_pid_lm;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    208U);
                                                  c84_hb_A = c84_trq_dem_lm -
                                                    c84_trq_out_lm;
                                                  c84_vd_x = c84_hb_A;
                                                  c84_wd_x = c84_vd_x;
                                                  c84_xd_x = c84_wd_x;
                                                  c84_hb_y = c84_xd_x / 2.0F;
                                                  c84_trq_out_lf =
                                                    c84_trq_dem_lf + c84_hb_y;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    209U);
                                                  c84_ib_A = c84_trq_dem_lm -
                                                    c84_trq_out_lm;
                                                  c84_yd_x = c84_ib_A;
                                                  c84_ae_x = c84_yd_x;
                                                  c84_be_x = c84_ae_x;
                                                  c84_ib_y = c84_be_x / 2.0F;
                                                  c84_trq_out_lr =
                                                    c84_trq_dem_lr + c84_ib_y;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    210U);
                                                  c84_trq_out_rr =
                                                    c84_trq_pid_rr;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    211U);
                                                  c84_jb_A = c84_trq_dem_rr -
                                                    c84_trq_out_rr;
                                                  c84_ce_x = c84_jb_A;
                                                  c84_de_x = c84_ce_x;
                                                  c84_ee_x = c84_de_x;
                                                  c84_jb_y = c84_ee_x / 2.0F;
                                                  c84_trq_out_rf =
                                                    c84_trq_dem_rf + c84_jb_y;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    212U);
                                                  c84_kb_A = c84_trq_dem_rr -
                                                    c84_trq_out_rr;
                                                  c84_fe_x = c84_kb_A;
                                                  c84_ge_x = c84_fe_x;
                                                  c84_he_x = c84_ge_x;
                                                  c84_kb_y = c84_he_x / 2.0F;
                                                  c84_trq_out_rm =
                                                    c84_trq_dem_rm + c84_kb_y;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    213U);
                                                  c84_brapre_out_l =
                                                    c84_bra_pre_l +
                                                    c84_brake_dem;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    214U);
                                                  c84_brapre_out_r =
                                                    c84_bra_pre_r +
                                                    c84_brake_dem;
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    215U);
                                                  c84_mode = 19;
                                                } else {
                                                  guard91 = true;
                                                }
                                              } else {
                                                guard92 = true;
                                              }
                                            } else {
                                              guard93 = true;
                                            }
                                          } else {
                                            guard94 = true;
                                          }
                                        } else {
                                          guard95 = true;
                                        }
                                      } else {
                                        guard95 = true;
                                      }

                                      if (guard95 == true) {
                                        guard94 = true;
                                      }

                                      if (guard94 == true) {
                                        guard93 = true;
                                      }

                                      if (guard93 == true) {
                                        guard92 = true;
                                      }

                                      if (guard92 == true) {
                                        guard91 = true;
                                      }

                                      if (guard91 == true) {
                                        CV_EML_MCDC(0, 1, 18, false);
                                        CV_EML_IF(0, 1, 18, false);
                                        _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      216U);
                                        guard96 = false;
                                        guard97 = false;
                                        guard98 = false;
                                        guard99 = false;
                                        guard100 = false;
                                        if (CV_EML_COND(0, 1, 114, c84_flag_lf ==
                                                        0.0F)) {
                                          if (CV_EML_COND(0, 1, 115, c84_flag_lm
                                                          == 0.0F)) {
                                            if (CV_EML_COND(0, 1, 116,
                                                            c84_flag_lr == 1.0F))
                                            {
                                              if (CV_EML_COND(0, 1, 117,
                                                   c84_flag_rf == 1.0F)) {
                                                if (CV_EML_COND(0, 1, 118,
                                                     c84_flag_rm == 0.0F)) {
                                                  if (CV_EML_COND(0, 1, 119,
                                                       c84_flag_rr == 0.0F)) {
                                                    CV_EML_MCDC(0, 1, 19, true);
                                                    CV_EML_IF(0, 1, 19, true);
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      217U);
                                                    c84_trq_out_lr =
                                                      c84_trq_pid_lr;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      218U);
                                                    c84_lb_A = c84_trq_dem_lr -
                                                      c84_trq_out_lr;
                                                    c84_ie_x = c84_lb_A;
                                                    c84_je_x = c84_ie_x;
                                                    c84_ke_x = c84_je_x;
                                                    c84_lb_y = c84_ke_x / 2.0F;
                                                    c84_trq_out_lf =
                                                      c84_trq_dem_lf + c84_lb_y;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      219U);
                                                    c84_mb_A = c84_trq_dem_lr -
                                                      c84_trq_out_lr;
                                                    c84_le_x = c84_mb_A;
                                                    c84_me_x = c84_le_x;
                                                    c84_ne_x = c84_me_x;
                                                    c84_mb_y = c84_ne_x / 2.0F;
                                                    c84_trq_out_lm =
                                                      c84_trq_dem_lm + c84_mb_y;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      220U);
                                                    c84_trq_out_rf =
                                                      c84_trq_pid_rf;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      221U);
                                                    c84_nb_A = c84_trq_dem_rf -
                                                      c84_trq_out_rf;
                                                    c84_oe_x = c84_nb_A;
                                                    c84_pe_x = c84_oe_x;
                                                    c84_qe_x = c84_pe_x;
                                                    c84_nb_y = c84_qe_x / 2.0F;
                                                    c84_trq_out_rm =
                                                      c84_trq_dem_rm + c84_nb_y;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      222U);
                                                    c84_ob_A = c84_trq_dem_rf -
                                                      c84_trq_out_rf;
                                                    c84_re_x = c84_ob_A;
                                                    c84_se_x = c84_re_x;
                                                    c84_te_x = c84_se_x;
                                                    c84_ob_y = c84_te_x / 2.0F;
                                                    c84_trq_out_rr =
                                                      c84_trq_dem_rr + c84_ob_y;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      223U);
                                                    c84_brapre_out_l =
                                                      c84_bra_pre_l +
                                                      c84_brake_dem;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      224U);
                                                    c84_brapre_out_r =
                                                      c84_bra_pre_r +
                                                      c84_brake_dem;
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      225U);
                                                    c84_mode = 20;
                                                  } else {
                                                    guard96 = true;
                                                  }
                                                } else {
                                                  guard97 = true;
                                                }
                                              } else {
                                                guard98 = true;
                                              }
                                            } else {
                                              guard99 = true;
                                            }
                                          } else {
                                            guard100 = true;
                                          }
                                        } else {
                                          guard100 = true;
                                        }

                                        if (guard100 == true) {
                                          guard99 = true;
                                        }

                                        if (guard99 == true) {
                                          guard98 = true;
                                        }

                                        if (guard98 == true) {
                                          guard97 = true;
                                        }

                                        if (guard97 == true) {
                                          guard96 = true;
                                        }

                                        if (guard96 == true) {
                                          CV_EML_MCDC(0, 1, 19, false);
                                          CV_EML_IF(0, 1, 19, false);
                                          _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        226U);
                                          guard101 = false;
                                          guard102 = false;
                                          guard103 = false;
                                          guard104 = false;
                                          guard105 = false;
                                          if (CV_EML_COND(0, 1, 120, c84_flag_lf
                                                          == 0.0F)) {
                                            if (CV_EML_COND(0, 1, 121,
                                                            c84_flag_lm == 0.0F))
                                            {
                                              if (CV_EML_COND(0, 1, 122,
                                                   c84_flag_lr == 1.0F)) {
                                                if (CV_EML_COND(0, 1, 123,
                                                     c84_flag_rf == 0.0F)) {
                                                  if (CV_EML_COND(0, 1, 124,
                                                       c84_flag_rm == 1.0F)) {
                                                    if (CV_EML_COND(0, 1, 125,
                                                         c84_flag_rr == 0.0F)) {
                                                      CV_EML_MCDC(0, 1, 20, true);
                                                      CV_EML_IF(0, 1, 20, true);
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        227U);
                                                      c84_trq_out_lr =
                                                        c84_trq_pid_lr;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        228U);
                                                      c84_pb_A = c84_trq_dem_lr
                                                        - c84_trq_out_lr;
                                                      c84_ue_x = c84_pb_A;
                                                      c84_ve_x = c84_ue_x;
                                                      c84_we_x = c84_ve_x;
                                                      c84_pb_y = c84_we_x / 2.0F;
                                                      c84_trq_out_lf =
                                                        c84_trq_dem_lf +
                                                        c84_pb_y;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        229U);
                                                      c84_qb_A = c84_trq_dem_lr
                                                        - c84_trq_out_lr;
                                                      c84_xe_x = c84_qb_A;
                                                      c84_ye_x = c84_xe_x;
                                                      c84_af_x = c84_ye_x;
                                                      c84_qb_y = c84_af_x / 2.0F;
                                                      c84_trq_out_lm =
                                                        c84_trq_dem_lm +
                                                        c84_qb_y;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        230U);
                                                      c84_trq_out_rm =
                                                        c84_trq_pid_rm;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        231U);
                                                      c84_rb_A = c84_trq_dem_rm
                                                        - c84_trq_out_rm;
                                                      c84_bf_x = c84_rb_A;
                                                      c84_cf_x = c84_bf_x;
                                                      c84_df_x = c84_cf_x;
                                                      c84_rb_y = c84_df_x / 2.0F;
                                                      c84_trq_out_rf =
                                                        c84_trq_dem_rf +
                                                        c84_rb_y;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        232U);
                                                      c84_sb_A = c84_trq_dem_rm
                                                        - c84_trq_out_rm;
                                                      c84_ef_x = c84_sb_A;
                                                      c84_ff_x = c84_ef_x;
                                                      c84_gf_x = c84_ff_x;
                                                      c84_sb_y = c84_gf_x / 2.0F;
                                                      c84_trq_out_rr =
                                                        c84_trq_dem_rr +
                                                        c84_sb_y;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        233U);
                                                      c84_brapre_out_l =
                                                        c84_bra_pre_l +
                                                        c84_brake_dem;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        234U);
                                                      c84_brapre_out_r =
                                                        c84_bra_pre_r +
                                                        c84_brake_dem;
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        235U);
                                                      c84_mode = 21;
                                                    } else {
                                                      guard101 = true;
                                                    }
                                                  } else {
                                                    guard102 = true;
                                                  }
                                                } else {
                                                  guard103 = true;
                                                }
                                              } else {
                                                guard104 = true;
                                              }
                                            } else {
                                              guard105 = true;
                                            }
                                          } else {
                                            guard105 = true;
                                          }

                                          if (guard105 == true) {
                                            guard104 = true;
                                          }

                                          if (guard104 == true) {
                                            guard103 = true;
                                          }

                                          if (guard103 == true) {
                                            guard102 = true;
                                          }

                                          if (guard102 == true) {
                                            guard101 = true;
                                          }

                                          if (guard101 == true) {
                                            CV_EML_MCDC(0, 1, 20, false);
                                            CV_EML_IF(0, 1, 20, false);
                                            _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          236U);
                                            guard106 = false;
                                            guard107 = false;
                                            guard108 = false;
                                            guard109 = false;
                                            guard110 = false;
                                            if (CV_EML_COND(0, 1, 126,
                                                            c84_flag_lf == 0.0F))
                                            {
                                              if (CV_EML_COND(0, 1, MAX_int8_T,
                                                   c84_flag_lm == 0.0F)) {
                                                if (CV_EML_COND(0, 1, 128U,
                                                     c84_flag_lr == 1.0F)) {
                                                  if (CV_EML_COND(0, 1, 129U,
                                                       c84_flag_rf == 0.0F)) {
                                                    if (CV_EML_COND(0, 1, 130U,
                                                         c84_flag_rm == 0.0F)) {
                                                      if (CV_EML_COND(0, 1, 131U,
                                                           c84_flag_rr == 1.0F))
                                                      {
                                                        CV_EML_MCDC(0, 1, 21,
                                                                    true);
                                                        CV_EML_IF(0, 1, 21, true);
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          237U);
                                                        c84_trq_out_lr =
                                                          c84_trq_pid_lr;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          238U);
                                                        c84_tb_A =
                                                          c84_trq_dem_lr -
                                                          c84_trq_out_lr;
                                                        c84_hf_x = c84_tb_A;
                                                        c84_if_x = c84_hf_x;
                                                        c84_jf_x = c84_if_x;
                                                        c84_tb_y = c84_jf_x /
                                                          2.0F;
                                                        c84_trq_out_lf =
                                                          c84_trq_dem_lf +
                                                          c84_tb_y;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          239U);
                                                        c84_ub_A =
                                                          c84_trq_dem_lr -
                                                          c84_trq_out_lr;
                                                        c84_kf_x = c84_ub_A;
                                                        c84_lf_x = c84_kf_x;
                                                        c84_mf_x = c84_lf_x;
                                                        c84_ub_y = c84_mf_x /
                                                          2.0F;
                                                        c84_trq_out_lm =
                                                          c84_trq_dem_lm +
                                                          c84_ub_y;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          240U);
                                                        c84_trq_out_rr =
                                                          c84_trq_pid_rr;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          241U);
                                                        c84_vb_A =
                                                          c84_trq_dem_rr -
                                                          c84_trq_out_rr;
                                                        c84_nf_x = c84_vb_A;
                                                        c84_of_x = c84_nf_x;
                                                        c84_pf_x = c84_of_x;
                                                        c84_vb_y = c84_pf_x /
                                                          2.0F;
                                                        c84_trq_out_rf =
                                                          c84_trq_dem_rf +
                                                          c84_vb_y;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          242U);
                                                        c84_wb_A =
                                                          c84_trq_dem_rr -
                                                          c84_trq_out_rr;
                                                        c84_qf_x = c84_wb_A;
                                                        c84_rf_x = c84_qf_x;
                                                        c84_sf_x = c84_rf_x;
                                                        c84_wb_y = c84_sf_x /
                                                          2.0F;
                                                        c84_trq_out_rm =
                                                          c84_trq_dem_rm +
                                                          c84_wb_y;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          243U);
                                                        c84_brapre_out_l =
                                                          c84_bra_pre_l +
                                                          c84_brake_dem;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          244U);
                                                        c84_brapre_out_r =
                                                          c84_bra_pre_r +
                                                          c84_brake_dem;
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          245U);
                                                        c84_mode = 22;
                                                      } else {
                                                        guard106 = true;
                                                      }
                                                    } else {
                                                      guard107 = true;
                                                    }
                                                  } else {
                                                    guard108 = true;
                                                  }
                                                } else {
                                                  guard109 = true;
                                                }
                                              } else {
                                                guard110 = true;
                                              }
                                            } else {
                                              guard110 = true;
                                            }

                                            if (guard110 == true) {
                                              guard109 = true;
                                            }

                                            if (guard109 == true) {
                                              guard108 = true;
                                            }

                                            if (guard108 == true) {
                                              guard107 = true;
                                            }

                                            if (guard107 == true) {
                                              guard106 = true;
                                            }

                                            if (guard106 == true) {
                                              CV_EML_MCDC(0, 1, 21, false);
                                              CV_EML_IF(0, 1, 21, false);
                                              _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            268);
                                              guard111 = false;
                                              guard112 = false;
                                              guard113 = false;
                                              guard114 = false;
                                              guard115 = false;
                                              if (CV_EML_COND(0, 1, 132U,
                                                   c84_flag_lf == 1.0F)) {
                                                if (CV_EML_COND(0, 1, 133U,
                                                     c84_flag_lm == 1.0F)) {
                                                  if (CV_EML_COND(0, 1, 134U,
                                                       c84_flag_lr == 1.0F)) {
                                                    if (CV_EML_COND(0, 1, 135U,
                                                         c84_flag_rf == 0.0F)) {
                                                      if (CV_EML_COND(0, 1, 136U,
                                                           c84_flag_rm == 0.0F))
                                                      {
                                                        if (CV_EML_COND(0, 1,
                                                             137U, c84_flag_rr ==
                                                             0.0F)) {
                                                          CV_EML_MCDC(0, 1, 22,
                                                                      true);
                                                          CV_EML_IF(0, 1, 22,
                                                                    true);
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            269);
                                                          c84_trq_out_lf =
                                                            c84_trq_pid_lf;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            270);
                                                          c84_trq_out_lm =
                                                            c84_trq_pid_lm;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            271);
                                                          c84_trq_out_lr =
                                                            c84_trq_pid_lr;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            272);
                                                          c84_xb_A =
                                                            ((c84_trq_dem_lf -
                                                              c84_trq_out_lf) +
                                                            (c84_trq_dem_lm -
                                                              c84_trq_out_lm)) +
                                                            (c84_trq_dem_lr -
                                                             c84_trq_out_lr);
                                                          c84_tf_x = c84_xb_A;
                                                          c84_uf_x = c84_tf_x;
                                                          c84_vf_x = c84_uf_x;
                                                          c84_xb_y = c84_vf_x /
                                                            3.0F;
                                                          c84_trq_out_rf =
                                                            c84_trq_dem_rf -
                                                            c84_xb_y;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            273);
                                                          c84_yb_A =
                                                            ((c84_trq_dem_lf -
                                                              c84_trq_out_lf) +
                                                            (c84_trq_dem_lm -
                                                              c84_trq_out_lm)) +
                                                            (c84_trq_dem_lr -
                                                             c84_trq_out_lr);
                                                          c84_wf_x = c84_yb_A;
                                                          c84_xf_x = c84_wf_x;
                                                          c84_yf_x = c84_xf_x;
                                                          c84_yb_y = c84_yf_x /
                                                            3.0F;
                                                          c84_trq_out_rm =
                                                            c84_trq_dem_rm -
                                                            c84_yb_y;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            274);
                                                          c84_ac_A =
                                                            ((c84_trq_dem_lf -
                                                              c84_trq_out_lf) +
                                                            (c84_trq_dem_lm -
                                                              c84_trq_out_lm)) +
                                                            (c84_trq_dem_lr -
                                                             c84_trq_out_lr);
                                                          c84_ag_x = c84_ac_A;
                                                          c84_bg_x = c84_ag_x;
                                                          c84_cg_x = c84_bg_x;
                                                          c84_ac_y = c84_cg_x /
                                                            3.0F;
                                                          c84_trq_out_rr =
                                                            c84_trq_dem_rr -
                                                            c84_ac_y;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            275);
                                                          c84_brapre_out_l =
                                                            c84_bra_pre_l +
                                                            c84_brake_dem;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            276);
                                                          c84_brapre_out_r =
                                                            c84_bra_pre_r +
                                                            c84_brake_dem;
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            277);
                                                          c84_mode = 23;
                                                        } else {
                                                          guard111 = true;
                                                        }
                                                      } else {
                                                        guard112 = true;
                                                      }
                                                    } else {
                                                      guard113 = true;
                                                    }
                                                  } else {
                                                    guard114 = true;
                                                  }
                                                } else {
                                                  guard115 = true;
                                                }
                                              } else {
                                                guard115 = true;
                                              }

                                              if (guard115 == true) {
                                                guard114 = true;
                                              }

                                              if (guard114 == true) {
                                                guard113 = true;
                                              }

                                              if (guard113 == true) {
                                                guard112 = true;
                                              }

                                              if (guard112 == true) {
                                                guard111 = true;
                                              }

                                              if (guard111 == true) {
                                                CV_EML_MCDC(0, 1, 22, false);
                                                CV_EML_IF(0, 1, 22, false);
                                                _SFD_EML_CALL(0U,
                                                  chartInstance->c84_sfEvent,
                                                  278);
                                                guard116 = false;
                                                guard117 = false;
                                                guard118 = false;
                                                guard119 = false;
                                                guard120 = false;
                                                if (CV_EML_COND(0, 1, 138U,
                                                     c84_flag_lf == 0.0F)) {
                                                  if (CV_EML_COND(0, 1, 139U,
                                                       c84_flag_lm == 0.0F)) {
                                                    if (CV_EML_COND(0, 1, 140U,
                                                         c84_flag_lr == 0.0F)) {
                                                      if (CV_EML_COND(0, 1, 141U,
                                                           c84_flag_rf == 1.0F))
                                                      {
                                                        if (CV_EML_COND(0, 1,
                                                             142U, c84_flag_rm ==
                                                             1.0F)) {
                                                          if (CV_EML_COND(0, 1,
                                                               143U, c84_flag_rr
                                                               == 1.0F)) {
                                                            CV_EML_MCDC(0, 1, 23,
                                                                      true);
                                                            CV_EML_IF(0, 1, 23,
                                                                      true);
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              279);
                                                            c84_trq_out_rf =
                                                              c84_trq_pid_rf;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              280);
                                                            c84_trq_out_rm =
                                                              c84_trq_pid_rm;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              281);
                                                            c84_trq_out_rr =
                                                              c84_trq_pid_rr;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              282);
                                                            c84_bc_A =
                                                              ((c84_trq_dem_rf -
                                                                c84_trq_out_rf)
                                                               + (c84_trq_dem_rm
                                                                - c84_trq_out_rm))
                                                              + (c84_trq_dem_rr
                                                                 - c84_trq_out_rr);
                                                            c84_dg_x = c84_bc_A;
                                                            c84_eg_x = c84_dg_x;
                                                            c84_fg_x = c84_eg_x;
                                                            c84_bc_y = c84_fg_x /
                                                              3.0F;
                                                            c84_trq_out_lf =
                                                              c84_trq_dem_lf -
                                                              c84_bc_y;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              283);
                                                            c84_cc_A =
                                                              ((c84_trq_dem_rf -
                                                                c84_trq_out_rf)
                                                               + (c84_trq_dem_rm
                                                                - c84_trq_out_rm))
                                                              + (c84_trq_dem_rr
                                                                 - c84_trq_out_rr);
                                                            c84_gg_x = c84_cc_A;
                                                            c84_hg_x = c84_gg_x;
                                                            c84_ig_x = c84_hg_x;
                                                            c84_cc_y = c84_ig_x /
                                                              3.0F;
                                                            c84_trq_out_lm =
                                                              c84_trq_dem_lm -
                                                              c84_cc_y;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              284);
                                                            c84_dc_A =
                                                              ((c84_trq_dem_rf -
                                                                c84_trq_out_rf)
                                                               + (c84_trq_dem_rm
                                                                - c84_trq_out_rm))
                                                              + (c84_trq_dem_rr
                                                                 - c84_trq_out_rr);
                                                            c84_jg_x = c84_dc_A;
                                                            c84_kg_x = c84_jg_x;
                                                            c84_lg_x = c84_kg_x;
                                                            c84_dc_y = c84_lg_x /
                                                              3.0F;
                                                            c84_trq_out_lr =
                                                              c84_trq_dem_lr -
                                                              c84_dc_y;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              285);
                                                            c84_brapre_out_l =
                                                              c84_bra_pre_l +
                                                              c84_brake_dem;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              286);
                                                            c84_brapre_out_r =
                                                              c84_bra_pre_r +
                                                              c84_brake_dem;
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              287);
                                                            c84_mode = 24;
                                                          } else {
                                                            guard116 = true;
                                                          }
                                                        } else {
                                                          guard117 = true;
                                                        }
                                                      } else {
                                                        guard118 = true;
                                                      }
                                                    } else {
                                                      guard119 = true;
                                                    }
                                                  } else {
                                                    guard120 = true;
                                                  }
                                                } else {
                                                  guard120 = true;
                                                }

                                                if (guard120 == true) {
                                                  guard119 = true;
                                                }

                                                if (guard119 == true) {
                                                  guard118 = true;
                                                }

                                                if (guard118 == true) {
                                                  guard117 = true;
                                                }

                                                if (guard117 == true) {
                                                  guard116 = true;
                                                }

                                                if (guard116 == true) {
                                                  CV_EML_MCDC(0, 1, 23, false);
                                                  CV_EML_IF(0, 1, 23, false);
                                                  _SFD_EML_CALL(0U,
                                                    chartInstance->c84_sfEvent,
                                                    289);
                                                  guard121 = false;
                                                  guard122 = false;
                                                  guard123 = false;
                                                  guard124 = false;
                                                  guard125 = false;
                                                  if (CV_EML_COND(0, 1, 144U,
                                                       c84_flag_lf == 1.0F)) {
                                                    if (CV_EML_COND(0, 1, 145U,
                                                         c84_flag_lm == 1.0F)) {
                                                      if (CV_EML_COND(0, 1, 146U,
                                                           c84_flag_lr == 0.0F))
                                                      {
                                                        if (CV_EML_COND(0, 1,
                                                             147U, c84_flag_rf ==
                                                             1.0F)) {
                                                          if (CV_EML_COND(0, 1,
                                                               148U, c84_flag_rm
                                                               == 0.0F)) {
                                                            if (CV_EML_COND(0, 1,
                                                                 149U,
                                                                 c84_flag_rr ==
                                                                 0.0F)) {
                                                              CV_EML_MCDC(0, 1,
                                                                      24, true);
                                                              CV_EML_IF(0, 1, 24,
                                                                      true);
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                290);
                                                              c84_trq_out_lf =
                                                                c84_trq_pid_lf;
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                291);
                                                              c84_trq_out_lm =
                                                                c84_trq_pid_lm;
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                292);
                                                              c84_trq_out_lr =
                                                                (c84_trq_dem_lr
                                                                 + (c84_trq_dem_lf
                                                                  - c84_trq_out_lf))
                                                                + (c84_trq_dem_lm
                                                                   - c84_trq_out_lm);
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                293);
                                                              c84_trq_out_rf =
                                                                c84_trq_pid_rf;
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                294);
                                                              c84_ec_A =
                                                                c84_trq_dem_rf -
                                                                c84_trq_out_rf;
                                                              c84_mg_x =
                                                                c84_ec_A;
                                                              c84_ng_x =
                                                                c84_mg_x;
                                                              c84_og_x =
                                                                c84_ng_x;
                                                              c84_ec_y =
                                                                c84_og_x / 2.0F;
                                                              c84_trq_out_rm =
                                                                c84_trq_dem_rm +
                                                                c84_ec_y;
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                295);
                                                              c84_fc_A =
                                                                c84_trq_dem_rf -
                                                                c84_trq_out_rf;
                                                              c84_pg_x =
                                                                c84_fc_A;
                                                              c84_qg_x =
                                                                c84_pg_x;
                                                              c84_rg_x =
                                                                c84_qg_x;
                                                              c84_fc_y =
                                                                c84_rg_x / 2.0F;
                                                              c84_trq_out_rr =
                                                                c84_trq_dem_rr +
                                                                c84_fc_y;
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                296);
                                                              c84_brapre_out_l =
                                                                c84_bra_pre_l +
                                                                c84_brake_dem;
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                297);
                                                              c84_brapre_out_r =
                                                                c84_bra_pre_r +
                                                                c84_brake_dem;
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                298);
                                                              c84_mode = 25;
                                                            } else {
                                                              guard121 = true;
                                                            }
                                                          } else {
                                                            guard122 = true;
                                                          }
                                                        } else {
                                                          guard123 = true;
                                                        }
                                                      } else {
                                                        guard124 = true;
                                                      }
                                                    } else {
                                                      guard125 = true;
                                                    }
                                                  } else {
                                                    guard125 = true;
                                                  }

                                                  if (guard125 == true) {
                                                    guard124 = true;
                                                  }

                                                  if (guard124 == true) {
                                                    guard123 = true;
                                                  }

                                                  if (guard123 == true) {
                                                    guard122 = true;
                                                  }

                                                  if (guard122 == true) {
                                                    guard121 = true;
                                                  }

                                                  if (guard121 == true) {
                                                    CV_EML_MCDC(0, 1, 24, false);
                                                    CV_EML_IF(0, 1, 24, false);
                                                    _SFD_EML_CALL(0U,
                                                      chartInstance->c84_sfEvent,
                                                      299);
                                                    guard126 = false;
                                                    guard127 = false;
                                                    guard128 = false;
                                                    guard129 = false;
                                                    guard130 = false;
                                                    if (CV_EML_COND(0, 1, 150U,
                                                         c84_flag_lf == 1.0F)) {
                                                      if (CV_EML_COND(0, 1, 151U,
                                                           c84_flag_lm == 1.0F))
                                                      {
                                                        if (CV_EML_COND(0, 1,
                                                             152U, c84_flag_lr ==
                                                             0.0F)) {
                                                          if (CV_EML_COND(0, 1,
                                                               153U, c84_flag_rf
                                                               == 0.0F)) {
                                                            if (CV_EML_COND(0, 1,
                                                                 154U,
                                                                 c84_flag_rm ==
                                                                 1.0F)) {
                                                              if (CV_EML_COND(0,
                                                                   1, 155U,
                                                                   c84_flag_rr ==
                                                                   0.0F)) {
                                                                CV_EML_MCDC(0, 1,
                                                                      25, true);
                                                                CV_EML_IF(0, 1,
                                                                      25, true);
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  300);
                                                                c84_trq_out_lf =
                                                                  c84_trq_pid_lf;
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  301);
                                                                c84_trq_out_lm =
                                                                  c84_trq_pid_lm;
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  302);
                                                                c84_trq_out_lr =
                                                                  (c84_trq_dem_lr
                                                                   + (c84_trq_dem_lf
                                                                    - c84_trq_out_lf))
                                                                  + (c84_trq_dem_lm
                                                                     - c84_trq_out_lm);
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  303);
                                                                c84_trq_out_rm =
                                                                  c84_trq_pid_rm;
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  304);
                                                                c84_gc_A =
                                                                  c84_trq_dem_rm
                                                                  - c84_trq_out_rm;
                                                                c84_sg_x =
                                                                  c84_gc_A;
                                                                c84_tg_x =
                                                                  c84_sg_x;
                                                                c84_ug_x =
                                                                  c84_tg_x;
                                                                c84_gc_y =
                                                                  c84_ug_x /
                                                                  2.0F;
                                                                c84_trq_out_rf =
                                                                  c84_trq_dem_rf
                                                                  + c84_gc_y;
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  305);
                                                                c84_hc_A =
                                                                  c84_trq_dem_rm
                                                                  - c84_trq_out_rm;
                                                                c84_vg_x =
                                                                  c84_hc_A;
                                                                c84_wg_x =
                                                                  c84_vg_x;
                                                                c84_xg_x =
                                                                  c84_wg_x;
                                                                c84_hc_y =
                                                                  c84_xg_x /
                                                                  2.0F;
                                                                c84_trq_out_rr =
                                                                  c84_trq_dem_rr
                                                                  + c84_hc_y;
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  306);
                                                                c84_brapre_out_l
                                                                  =
                                                                  c84_bra_pre_l
                                                                  + c84_brake_dem;
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  307);
                                                                c84_brapre_out_r
                                                                  =
                                                                  c84_bra_pre_r
                                                                  + c84_brake_dem;
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  308);
                                                                c84_mode = 26;
                                                              } else {
                                                                guard126 = true;
                                                              }
                                                            } else {
                                                              guard127 = true;
                                                            }
                                                          } else {
                                                            guard128 = true;
                                                          }
                                                        } else {
                                                          guard129 = true;
                                                        }
                                                      } else {
                                                        guard130 = true;
                                                      }
                                                    } else {
                                                      guard130 = true;
                                                    }

                                                    if (guard130 == true) {
                                                      guard129 = true;
                                                    }

                                                    if (guard129 == true) {
                                                      guard128 = true;
                                                    }

                                                    if (guard128 == true) {
                                                      guard127 = true;
                                                    }

                                                    if (guard127 == true) {
                                                      guard126 = true;
                                                    }

                                                    if (guard126 == true) {
                                                      CV_EML_MCDC(0, 1, 25,
                                                                  false);
                                                      CV_EML_IF(0, 1, 25, false);
                                                      _SFD_EML_CALL(0U,
                                                        chartInstance->c84_sfEvent,
                                                        309);
                                                      guard131 = false;
                                                      guard132 = false;
                                                      guard133 = false;
                                                      guard134 = false;
                                                      guard135 = false;
                                                      if (CV_EML_COND(0, 1, 156U,
                                                           c84_flag_lf == 1.0F))
                                                      {
                                                        if (CV_EML_COND(0, 1,
                                                             157U, c84_flag_lm ==
                                                             1.0F)) {
                                                          if (CV_EML_COND(0, 1,
                                                               158U, c84_flag_lr
                                                               == 0.0F)) {
                                                            if (CV_EML_COND(0, 1,
                                                                 159U,
                                                                 c84_flag_rf ==
                                                                 0.0F)) {
                                                              if (CV_EML_COND(0,
                                                                   1, 160U,
                                                                   c84_flag_rm ==
                                                                   0.0F)) {
                                                                if (CV_EML_COND
                                                                    (0, 1, 161U,
                                                                     c84_flag_rr
                                                                     == 1.0F)) {
                                                                  CV_EML_MCDC(0,
                                                                      1, 26,
                                                                      true);
                                                                  CV_EML_IF(0, 1,
                                                                      26, true);
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     310);
                                                                  c84_trq_out_lf
                                                                    =
                                                                    c84_trq_pid_lf;
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     311);
                                                                  c84_trq_out_lm
                                                                    =
                                                                    c84_trq_pid_lm;
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     312);
                                                                  c84_trq_out_lr
                                                                    =
                                                                    (c84_trq_dem_lr
                                                                     + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                    + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm);
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     313);
                                                                  c84_trq_out_rr
                                                                    =
                                                                    c84_trq_pid_rr;
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     314);
                                                                  c84_ic_A =
                                                                    c84_trq_dem_rr
                                                                    - c84_trq_out_rr;
                                                                  c84_yg_x =
                                                                    c84_ic_A;
                                                                  c84_ah_x =
                                                                    c84_yg_x;
                                                                  c84_bh_x =
                                                                    c84_ah_x;
                                                                  c84_ic_y =
                                                                    c84_bh_x /
                                                                    2.0F;
                                                                  c84_trq_out_rf
                                                                    =
                                                                    c84_trq_dem_rf
                                                                    + c84_ic_y;
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     315);
                                                                  c84_jc_A =
                                                                    c84_trq_dem_rr
                                                                    - c84_trq_out_rr;
                                                                  c84_ch_x =
                                                                    c84_jc_A;
                                                                  c84_dh_x =
                                                                    c84_ch_x;
                                                                  c84_eh_x =
                                                                    c84_dh_x;
                                                                  c84_jc_y =
                                                                    c84_eh_x /
                                                                    2.0F;
                                                                  c84_trq_out_rm
                                                                    =
                                                                    c84_trq_dem_rm
                                                                    + c84_jc_y;
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     316);
                                                                  c84_brapre_out_l
                                                                    =
                                                                    c84_bra_pre_l
                                                                    + c84_brake_dem;
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     317);
                                                                  c84_brapre_out_r
                                                                    =
                                                                    c84_bra_pre_r
                                                                    + c84_brake_dem;
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     318);
                                                                  c84_mode = 27;
                                                                } else {
                                                                  guard131 =
                                                                    true;
                                                                }
                                                              } else {
                                                                guard132 = true;
                                                              }
                                                            } else {
                                                              guard133 = true;
                                                            }
                                                          } else {
                                                            guard134 = true;
                                                          }
                                                        } else {
                                                          guard135 = true;
                                                        }
                                                      } else {
                                                        guard135 = true;
                                                      }

                                                      if (guard135 == true) {
                                                        guard134 = true;
                                                      }

                                                      if (guard134 == true) {
                                                        guard133 = true;
                                                      }

                                                      if (guard133 == true) {
                                                        guard132 = true;
                                                      }

                                                      if (guard132 == true) {
                                                        guard131 = true;
                                                      }

                                                      if (guard131 == true) {
                                                        CV_EML_MCDC(0, 1, 26,
                                                                    false);
                                                        CV_EML_IF(0, 1, 26,
                                                                  false);
                                                        _SFD_EML_CALL(0U,
                                                          chartInstance->c84_sfEvent,
                                                          320);
                                                        guard136 = false;
                                                        guard137 = false;
                                                        guard138 = false;
                                                        guard139 = false;
                                                        guard140 = false;
                                                        if (CV_EML_COND(0, 1,
                                                             162U, c84_flag_lf ==
                                                             1.0F)) {
                                                          if (CV_EML_COND(0, 1,
                                                               163U, c84_flag_lm
                                                               == 0.0F)) {
                                                            if (CV_EML_COND(0, 1,
                                                                 164U,
                                                                 c84_flag_lr ==
                                                                 1.0F)) {
                                                              if (CV_EML_COND(0,
                                                                   1, 165U,
                                                                   c84_flag_rf ==
                                                                   1.0F)) {
                                                                if (CV_EML_COND
                                                                    (0, 1, 166U,
                                                                     c84_flag_rm
                                                                     == 0.0F)) {
                                                                  if (CV_EML_COND
                                                                      (0, 1,
                                                                      167U,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                  {
                                                                    CV_EML_MCDC
                                                                      (0, 1, 27,
                                                                      true);
                                                                    CV_EML_IF(0,
                                                                      1, 27,
                                                                      true);
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      321);
                                                                    c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      322);
                                                                    c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      323);
                                                                    c84_trq_out_lm
                                                                      =
                                                                      (c84_trq_dem_lm
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      324);
                                                                    c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      325);
                                                                    c84_kc_A =
                                                                      c84_trq_dem_rf
                                                                      - c84_trq_out_rf;
                                                                    c84_fh_x =
                                                                      c84_kc_A;
                                                                    c84_gh_x =
                                                                      c84_fh_x;
                                                                    c84_hh_x =
                                                                      c84_gh_x;
                                                                    c84_kc_y =
                                                                      c84_hh_x /
                                                                      2.0F;
                                                                    c84_trq_out_rm
                                                                      =
                                                                      c84_trq_dem_rm
                                                                      + c84_kc_y;
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      326);
                                                                    c84_lc_A =
                                                                      c84_trq_dem_rf
                                                                      - c84_trq_out_rf;
                                                                    c84_ih_x =
                                                                      c84_lc_A;
                                                                    c84_jh_x =
                                                                      c84_ih_x;
                                                                    c84_kh_x =
                                                                      c84_jh_x;
                                                                    c84_lc_y =
                                                                      c84_kh_x /
                                                                      2.0F;
                                                                    c84_trq_out_rr
                                                                      =
                                                                      c84_trq_dem_rr
                                                                      + c84_lc_y;
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      327);
                                                                    c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      328);
                                                                    c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      329);
                                                                    c84_mode =
                                                                      28;
                                                                  } else {
                                                                    guard136 =
                                                                      true;
                                                                  }
                                                                } else {
                                                                  guard137 =
                                                                    true;
                                                                }
                                                              } else {
                                                                guard138 = true;
                                                              }
                                                            } else {
                                                              guard139 = true;
                                                            }
                                                          } else {
                                                            guard140 = true;
                                                          }
                                                        } else {
                                                          guard140 = true;
                                                        }

                                                        if (guard140 == true) {
                                                          guard139 = true;
                                                        }

                                                        if (guard139 == true) {
                                                          guard138 = true;
                                                        }

                                                        if (guard138 == true) {
                                                          guard137 = true;
                                                        }

                                                        if (guard137 == true) {
                                                          guard136 = true;
                                                        }

                                                        if (guard136 == true) {
                                                          CV_EML_MCDC(0, 1, 27,
                                                                      false);
                                                          CV_EML_IF(0, 1, 27,
                                                                    false);
                                                          _SFD_EML_CALL(0U,
                                                            chartInstance->c84_sfEvent,
                                                            330);
                                                          guard141 = false;
                                                          guard142 = false;
                                                          guard143 = false;
                                                          guard144 = false;
                                                          guard145 = false;
                                                          if (CV_EML_COND(0, 1,
                                                               168U, c84_flag_lf
                                                               == 1.0F)) {
                                                            if (CV_EML_COND(0, 1,
                                                                 169U,
                                                                 c84_flag_lm ==
                                                                 0.0F)) {
                                                              if (CV_EML_COND(0,
                                                                   1, 170U,
                                                                   c84_flag_lr ==
                                                                   1.0F)) {
                                                                if (CV_EML_COND
                                                                    (0, 1, 171U,
                                                                     c84_flag_rf
                                                                     == 0.0F)) {
                                                                  if (CV_EML_COND
                                                                      (0, 1,
                                                                      172U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                  {
                                                                    if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      173U,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                    {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 28,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 28,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      331);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      332);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      333);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      (c84_trq_dem_lm
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      334);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      335);
                                                                      c84_mc_A =
                                                                      c84_trq_dem_rm
                                                                      - c84_trq_out_rm;
                                                                      c84_lh_x =
                                                                      c84_mc_A;
                                                                      c84_mh_x =
                                                                      c84_lh_x;
                                                                      c84_nh_x =
                                                                      c84_mh_x;
                                                                      c84_mc_y =
                                                                      c84_nh_x /
                                                                      2.0F;
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_dem_rf
                                                                      + c84_mc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      336);
                                                                      c84_nc_A =
                                                                      c84_trq_dem_rm
                                                                      - c84_trq_out_rm;
                                                                      c84_oh_x =
                                                                      c84_nc_A;
                                                                      c84_ph_x =
                                                                      c84_oh_x;
                                                                      c84_qh_x =
                                                                      c84_ph_x;
                                                                      c84_nc_y =
                                                                      c84_qh_x /
                                                                      2.0F;
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_dem_rr
                                                                      + c84_nc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      337);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      338);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      339);
                                                                      c84_mode =
                                                                      29;
                                                                    } else {
                                                                      guard141 =
                                                                      true;
                                                                    }
                                                                  } else {
                                                                    guard142 =
                                                                      true;
                                                                  }
                                                                } else {
                                                                  guard143 =
                                                                    true;
                                                                }
                                                              } else {
                                                                guard144 = true;
                                                              }
                                                            } else {
                                                              guard145 = true;
                                                            }
                                                          } else {
                                                            guard145 = true;
                                                          }

                                                          if (guard145 == true)
                                                          {
                                                            guard144 = true;
                                                          }

                                                          if (guard144 == true)
                                                          {
                                                            guard143 = true;
                                                          }

                                                          if (guard143 == true)
                                                          {
                                                            guard142 = true;
                                                          }

                                                          if (guard142 == true)
                                                          {
                                                            guard141 = true;
                                                          }

                                                          if (guard141 == true)
                                                          {
                                                            CV_EML_MCDC(0, 1, 28,
                                                                      false);
                                                            CV_EML_IF(0, 1, 28,
                                                                      false);
                                                            _SFD_EML_CALL(0U,
                                                              chartInstance->c84_sfEvent,
                                                              340);
                                                            guard146 = false;
                                                            guard147 = false;
                                                            guard148 = false;
                                                            guard149 = false;
                                                            guard150 = false;
                                                            if (CV_EML_COND(0, 1,
                                                                 174U,
                                                                 c84_flag_lf ==
                                                                 1.0F)) {
                                                              if (CV_EML_COND(0,
                                                                   1, 175U,
                                                                   c84_flag_lm ==
                                                                   0.0F)) {
                                                                if (CV_EML_COND
                                                                    (0, 1, 176U,
                                                                     c84_flag_lr
                                                                     == 1.0F)) {
                                                                  if (CV_EML_COND
                                                                      (0, 1,
                                                                      177U,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                  {
                                                                    if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      178U,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                    {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      179U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 29,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 29,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      341);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      342);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      343);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      (c84_trq_dem_lm
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      344);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      345);
                                                                      c84_oc_A =
                                                                      c84_trq_dem_rr
                                                                      - c84_trq_out_rr;
                                                                      c84_rh_x =
                                                                      c84_oc_A;
                                                                      c84_sh_x =
                                                                      c84_rh_x;
                                                                      c84_th_x =
                                                                      c84_sh_x;
                                                                      c84_oc_y =
                                                                      c84_th_x /
                                                                      2.0F;
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_dem_rf
                                                                      + c84_oc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      346);
                                                                      c84_pc_A =
                                                                      c84_trq_dem_rr
                                                                      - c84_trq_out_rr;
                                                                      c84_uh_x =
                                                                      c84_pc_A;
                                                                      c84_vh_x =
                                                                      c84_uh_x;
                                                                      c84_wh_x =
                                                                      c84_vh_x;
                                                                      c84_pc_y =
                                                                      c84_wh_x /
                                                                      2.0F;
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_dem_rm
                                                                      + c84_pc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      347);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      348);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      349);
                                                                      c84_mode =
                                                                      30;
                                                                      } else {
                                                                      guard146 =
                                                                      true;
                                                                      }
                                                                    } else {
                                                                      guard147 =
                                                                      true;
                                                                    }
                                                                  } else {
                                                                    guard148 =
                                                                      true;
                                                                  }
                                                                } else {
                                                                  guard149 =
                                                                    true;
                                                                }
                                                              } else {
                                                                guard150 = true;
                                                              }
                                                            } else {
                                                              guard150 = true;
                                                            }

                                                            if (guard150 == true)
                                                            {
                                                              guard149 = true;
                                                            }

                                                            if (guard149 == true)
                                                            {
                                                              guard148 = true;
                                                            }

                                                            if (guard148 == true)
                                                            {
                                                              guard147 = true;
                                                            }

                                                            if (guard147 == true)
                                                            {
                                                              guard146 = true;
                                                            }

                                                            if (guard146 == true)
                                                            {
                                                              CV_EML_MCDC(0, 1,
                                                                      29, false);
                                                              CV_EML_IF(0, 1, 29,
                                                                      false);
                                                              _SFD_EML_CALL(0U,
                                                                chartInstance->c84_sfEvent,
                                                                351);
                                                              guard151 = false;
                                                              guard152 = false;
                                                              guard153 = false;
                                                              guard154 = false;
                                                              guard155 = false;
                                                              if (CV_EML_COND(0,
                                                                   1, 180U,
                                                                   c84_flag_lf ==
                                                                   0.0F)) {
                                                                if (CV_EML_COND
                                                                    (0, 1, 181U,
                                                                     c84_flag_lm
                                                                     == 1.0F)) {
                                                                  if (CV_EML_COND
                                                                      (0, 1,
                                                                      182U,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                  {
                                                                    if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      183U,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                    {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      184U,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      185U,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 30,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 30,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      352);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      353);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      354);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      (c84_trq_dem_lf
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      355);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      356);
                                                                      c84_qc_A =
                                                                      c84_trq_dem_rf
                                                                      - c84_trq_out_rf;
                                                                      c84_xh_x =
                                                                      c84_qc_A;
                                                                      c84_yh_x =
                                                                      c84_xh_x;
                                                                      c84_ai_x =
                                                                      c84_yh_x;
                                                                      c84_qc_y =
                                                                      c84_ai_x /
                                                                      2.0F;
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_dem_rm
                                                                      + c84_qc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      357);
                                                                      c84_rc_A =
                                                                      c84_trq_dem_rf
                                                                      - c84_trq_out_rf;
                                                                      c84_bi_x =
                                                                      c84_rc_A;
                                                                      c84_ci_x =
                                                                      c84_bi_x;
                                                                      c84_di_x =
                                                                      c84_ci_x;
                                                                      c84_rc_y =
                                                                      c84_di_x /
                                                                      2.0F;
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_dem_rr
                                                                      + c84_rc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      358);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      359);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      360);
                                                                      c84_mode =
                                                                      31;
                                                                      } else {
                                                                      guard151 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard152 =
                                                                      true;
                                                                      }
                                                                    } else {
                                                                      guard153 =
                                                                      true;
                                                                    }
                                                                  } else {
                                                                    guard154 =
                                                                      true;
                                                                  }
                                                                } else {
                                                                  guard155 =
                                                                    true;
                                                                }
                                                              } else {
                                                                guard155 = true;
                                                              }

                                                              if (guard155 ==
                                                                  true) {
                                                                guard154 = true;
                                                              }

                                                              if (guard154 ==
                                                                  true) {
                                                                guard153 = true;
                                                              }

                                                              if (guard153 ==
                                                                  true) {
                                                                guard152 = true;
                                                              }

                                                              if (guard152 ==
                                                                  true) {
                                                                guard151 = true;
                                                              }

                                                              if (guard151 ==
                                                                  true) {
                                                                CV_EML_MCDC(0, 1,
                                                                      30, false);
                                                                CV_EML_IF(0, 1,
                                                                      30, false);
                                                                _SFD_EML_CALL(0U,
                                                                  chartInstance->
                                                                  c84_sfEvent,
                                                                  361);
                                                                guard156 = false;
                                                                guard157 = false;
                                                                guard158 = false;
                                                                guard159 = false;
                                                                guard160 = false;
                                                                if (CV_EML_COND
                                                                    (0, 1, 186U,
                                                                     c84_flag_lf
                                                                     == 0.0F)) {
                                                                  if (CV_EML_COND
                                                                      (0, 1,
                                                                      187U,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                  {
                                                                    if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      188U,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                    {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      189U,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      190U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      191U,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 31,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 31,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      362);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      363);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      364);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      (c84_trq_dem_lf
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      365);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      366);
                                                                      c84_sc_A =
                                                                      c84_trq_dem_rm
                                                                      - c84_trq_out_rm;
                                                                      c84_ei_x =
                                                                      c84_sc_A;
                                                                      c84_fi_x =
                                                                      c84_ei_x;
                                                                      c84_gi_x =
                                                                      c84_fi_x;
                                                                      c84_sc_y =
                                                                      c84_gi_x /
                                                                      2.0F;
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_dem_rf
                                                                      + c84_sc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      367);
                                                                      c84_tc_A =
                                                                      c84_trq_dem_rm
                                                                      - c84_trq_out_rm;
                                                                      c84_hi_x =
                                                                      c84_tc_A;
                                                                      c84_ii_x =
                                                                      c84_hi_x;
                                                                      c84_ji_x =
                                                                      c84_ii_x;
                                                                      c84_tc_y =
                                                                      c84_ji_x /
                                                                      2.0F;
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_dem_rr
                                                                      + c84_tc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      368);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      369);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      370);
                                                                      c84_mode =
                                                                      32;
                                                                      } else {
                                                                      guard156 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard157 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard158 =
                                                                      true;
                                                                      }
                                                                    } else {
                                                                      guard159 =
                                                                      true;
                                                                    }
                                                                  } else {
                                                                    guard160 =
                                                                      true;
                                                                  }
                                                                } else {
                                                                  guard160 =
                                                                    true;
                                                                }

                                                                if (guard160 ==
                                                                    true) {
                                                                  guard159 =
                                                                    true;
                                                                }

                                                                if (guard159 ==
                                                                    true) {
                                                                  guard158 =
                                                                    true;
                                                                }

                                                                if (guard158 ==
                                                                    true) {
                                                                  guard157 =
                                                                    true;
                                                                }

                                                                if (guard157 ==
                                                                    true) {
                                                                  guard156 =
                                                                    true;
                                                                }

                                                                if (guard156 ==
                                                                    true) {
                                                                  CV_EML_MCDC(0,
                                                                      1, 31,
                                                                      false);
                                                                  CV_EML_IF(0, 1,
                                                                      31, false);
                                                                  _SFD_EML_CALL
                                                                    (0U,
                                                                     chartInstance
                                                                     ->c84_sfEvent,
                                                                     371);
                                                                  guard161 =
                                                                    false;
                                                                  guard162 =
                                                                    false;
                                                                  guard163 =
                                                                    false;
                                                                  guard164 =
                                                                    false;
                                                                  guard165 =
                                                                    false;
                                                                  if (CV_EML_COND
                                                                      (0, 1,
                                                                      192U,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                  {
                                                                    if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      193U,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                    {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      194U,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      195U,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      196U,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      197U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 32,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 32,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      372);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      373);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      374);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      (c84_trq_dem_lf
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      375);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      376);
                                                                      c84_uc_A =
                                                                      c84_trq_dem_rr
                                                                      - c84_trq_out_rr;
                                                                      c84_ki_x =
                                                                      c84_uc_A;
                                                                      c84_li_x =
                                                                      c84_ki_x;
                                                                      c84_mi_x =
                                                                      c84_li_x;
                                                                      c84_uc_y =
                                                                      c84_mi_x /
                                                                      2.0F;
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_dem_rf
                                                                      + c84_uc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      377);
                                                                      c84_vc_A =
                                                                      c84_trq_dem_rr
                                                                      - c84_trq_out_rr;
                                                                      c84_ni_x =
                                                                      c84_vc_A;
                                                                      c84_oi_x =
                                                                      c84_ni_x;
                                                                      c84_pi_x =
                                                                      c84_oi_x;
                                                                      c84_vc_y =
                                                                      c84_pi_x /
                                                                      2.0F;
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_dem_rm
                                                                      + c84_vc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      378);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      379);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      380);
                                                                      c84_mode =
                                                                      33;
                                                                      } else {
                                                                      guard161 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard162 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard163 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard164 =
                                                                      true;
                                                                      }
                                                                    } else {
                                                                      guard165 =
                                                                      true;
                                                                    }
                                                                  } else {
                                                                    guard165 =
                                                                      true;
                                                                  }

                                                                  if (guard165 ==
                                                                      true) {
                                                                    guard164 =
                                                                      true;
                                                                  }

                                                                  if (guard164 ==
                                                                      true) {
                                                                    guard163 =
                                                                      true;
                                                                  }

                                                                  if (guard163 ==
                                                                      true) {
                                                                    guard162 =
                                                                      true;
                                                                  }

                                                                  if (guard162 ==
                                                                      true) {
                                                                    guard161 =
                                                                      true;
                                                                  }

                                                                  if (guard161 ==
                                                                      true) {
                                                                    CV_EML_MCDC
                                                                      (0, 1, 32,
                                                                      false);
                                                                    CV_EML_IF(0,
                                                                      1, 32,
                                                                      false);
                                                                    _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      382);
                                                                    guard166 =
                                                                      false;
                                                                    guard167 =
                                                                      false;
                                                                    guard168 =
                                                                      false;
                                                                    guard169 =
                                                                      false;
                                                                    guard170 =
                                                                      false;
                                                                    if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      198U,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                    {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      199U,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      200U,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      201U,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      202U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      203U,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 33,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 33,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      383);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      384);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      385);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      (c84_trq_dem_rr
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      386);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      387);
                                                                      c84_wc_A =
                                                                      c84_trq_dem_lf
                                                                      - c84_trq_out_lf;
                                                                      c84_qi_x =
                                                                      c84_wc_A;
                                                                      c84_ri_x =
                                                                      c84_qi_x;
                                                                      c84_si_x =
                                                                      c84_ri_x;
                                                                      c84_wc_y =
                                                                      c84_si_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      + c84_wc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      388);
                                                                      c84_xc_A =
                                                                      c84_trq_dem_lf
                                                                      - c84_trq_out_lf;
                                                                      c84_ti_x =
                                                                      c84_xc_A;
                                                                      c84_ui_x =
                                                                      c84_ti_x;
                                                                      c84_vi_x =
                                                                      c84_ui_x;
                                                                      c84_xc_y =
                                                                      c84_vi_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      + c84_xc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      389);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      390);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      391);
                                                                      c84_mode =
                                                                      34;
                                                                      } else {
                                                                      guard166 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard167 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard168 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard169 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard170 =
                                                                      true;
                                                                      }
                                                                    } else {
                                                                      guard170 =
                                                                      true;
                                                                    }

                                                                    if (guard170
                                                                      == true) {
                                                                      guard169 =
                                                                      true;
                                                                    }

                                                                    if (guard169
                                                                      == true) {
                                                                      guard168 =
                                                                      true;
                                                                    }

                                                                    if (guard168
                                                                      == true) {
                                                                      guard167 =
                                                                      true;
                                                                    }

                                                                    if (guard167
                                                                      == true) {
                                                                      guard166 =
                                                                      true;
                                                                    }

                                                                    if (guard166
                                                                      == true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 33,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 33,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      392);
                                                                      guard171 =
                                                                      false;
                                                                      guard172 =
                                                                      false;
                                                                      guard173 =
                                                                      false;
                                                                      guard174 =
                                                                      false;
                                                                      guard175 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      204U,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      205U,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      206U,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      207U,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      208U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      209U,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 34,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 34,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      393);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      394);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      395);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      (c84_trq_dem_rr
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      396);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      397);
                                                                      c84_yc_A =
                                                                      c84_trq_dem_lm
                                                                      - c84_trq_out_lm;
                                                                      c84_wi_x =
                                                                      c84_yc_A;
                                                                      c84_xi_x =
                                                                      c84_wi_x;
                                                                      c84_yi_x =
                                                                      c84_xi_x;
                                                                      c84_yc_y =
                                                                      c84_yi_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      + c84_yc_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      398);
                                                                      c84_ad_A =
                                                                      c84_trq_dem_lm
                                                                      - c84_trq_out_lm;
                                                                      c84_aj_x =
                                                                      c84_ad_A;
                                                                      c84_bj_x =
                                                                      c84_aj_x;
                                                                      c84_cj_x =
                                                                      c84_bj_x;
                                                                      c84_ad_y =
                                                                      c84_cj_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      + c84_ad_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      399);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      400);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      401);
                                                                      c84_mode =
                                                                      35;
                                                                      } else {
                                                                      guard171 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard172 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard173 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard174 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard175 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard175 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard175 ==
                                                                      true) {
                                                                      guard174 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard174 ==
                                                                      true) {
                                                                      guard173 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard173 ==
                                                                      true) {
                                                                      guard172 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard172 ==
                                                                      true) {
                                                                      guard171 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard171 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 34,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 34,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      402);
                                                                      guard176 =
                                                                      false;
                                                                      guard177 =
                                                                      false;
                                                                      guard178 =
                                                                      false;
                                                                      guard179 =
                                                                      false;
                                                                      guard180 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      210U,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      211U,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      212U,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      213U,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      214U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      215U,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 35,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 35,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      403);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      404);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      405);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      (c84_trq_dem_rr
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      406);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      407);
                                                                      c84_bd_A =
                                                                      c84_trq_dem_lr
                                                                      - c84_trq_out_lr;
                                                                      c84_dj_x =
                                                                      c84_bd_A;
                                                                      c84_ej_x =
                                                                      c84_dj_x;
                                                                      c84_fj_x =
                                                                      c84_ej_x;
                                                                      c84_bd_y =
                                                                      c84_fj_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      + c84_bd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      408);
                                                                      c84_cd_A =
                                                                      c84_trq_dem_lr
                                                                      - c84_trq_out_lr;
                                                                      c84_gj_x =
                                                                      c84_cd_A;
                                                                      c84_hj_x =
                                                                      c84_gj_x;
                                                                      c84_ij_x =
                                                                      c84_hj_x;
                                                                      c84_cd_y =
                                                                      c84_ij_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      + c84_cd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      409);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      410);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      411);
                                                                      c84_mode =
                                                                      36;
                                                                      } else {
                                                                      guard176 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard177 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard178 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard179 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard180 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard180 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard180 ==
                                                                      true) {
                                                                      guard179 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard179 ==
                                                                      true) {
                                                                      guard178 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard178 ==
                                                                      true) {
                                                                      guard177 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard177 ==
                                                                      true) {
                                                                      guard176 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard176 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 35,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 35,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      413);
                                                                      guard181 =
                                                                      false;
                                                                      guard182 =
                                                                      false;
                                                                      guard183 =
                                                                      false;
                                                                      guard184 =
                                                                      false;
                                                                      guard185 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      216U,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      217U,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      218U,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      219U,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      220U,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      221U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 36,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 36,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      414);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      415);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      416);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      (c84_trq_dem_rm
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      417);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      418);
                                                                      c84_dd_A =
                                                                      c84_trq_dem_lf
                                                                      - c84_trq_out_lf;
                                                                      c84_jj_x =
                                                                      c84_dd_A;
                                                                      c84_kj_x =
                                                                      c84_jj_x;
                                                                      c84_lj_x =
                                                                      c84_kj_x;
                                                                      c84_dd_y =
                                                                      c84_lj_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      + c84_dd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      419);
                                                                      c84_ed_A =
                                                                      c84_trq_dem_lf
                                                                      - c84_trq_out_lf;
                                                                      c84_mj_x =
                                                                      c84_ed_A;
                                                                      c84_nj_x =
                                                                      c84_mj_x;
                                                                      c84_oj_x =
                                                                      c84_nj_x;
                                                                      c84_ed_y =
                                                                      c84_oj_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      + c84_ed_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      420);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      421);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      422);
                                                                      c84_mode =
                                                                      37;
                                                                      } else {
                                                                      guard181 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard182 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard183 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard184 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard185 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard185 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard185 ==
                                                                      true) {
                                                                      guard184 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard184 ==
                                                                      true) {
                                                                      guard183 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard183 ==
                                                                      true) {
                                                                      guard182 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard182 ==
                                                                      true) {
                                                                      guard181 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard181 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 36,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 36,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      423);
                                                                      guard186 =
                                                                      false;
                                                                      guard187 =
                                                                      false;
                                                                      guard188 =
                                                                      false;
                                                                      guard189 =
                                                                      false;
                                                                      guard190 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      222U,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      223U,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      224U,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      225U,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      226U,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      227U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 37,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 37,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      424);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      425);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      426);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      (c84_trq_dem_rm
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      427);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      428);
                                                                      c84_fd_A =
                                                                      c84_trq_dem_lm
                                                                      - c84_trq_out_lm;
                                                                      c84_pj_x =
                                                                      c84_fd_A;
                                                                      c84_qj_x =
                                                                      c84_pj_x;
                                                                      c84_rj_x =
                                                                      c84_qj_x;
                                                                      c84_fd_y =
                                                                      c84_rj_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      + c84_fd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      429);
                                                                      c84_gd_A =
                                                                      c84_trq_dem_lm
                                                                      - c84_trq_out_lm;
                                                                      c84_sj_x =
                                                                      c84_gd_A;
                                                                      c84_tj_x =
                                                                      c84_sj_x;
                                                                      c84_uj_x =
                                                                      c84_tj_x;
                                                                      c84_gd_y =
                                                                      c84_uj_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      + c84_gd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      430);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      431);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      432);
                                                                      c84_mode =
                                                                      38;
                                                                      } else {
                                                                      guard186 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard187 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard188 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard189 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard190 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard190 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard190 ==
                                                                      true) {
                                                                      guard189 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard189 ==
                                                                      true) {
                                                                      guard188 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard188 ==
                                                                      true) {
                                                                      guard187 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard187 ==
                                                                      true) {
                                                                      guard186 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard186 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 37,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 37,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      433);
                                                                      guard191 =
                                                                      false;
                                                                      guard192 =
                                                                      false;
                                                                      guard193 =
                                                                      false;
                                                                      guard194 =
                                                                      false;
                                                                      guard195 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      228U,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      229U,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      230U,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      231U,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      232U,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      233U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 38,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 38,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      434);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      435);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      436);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      (c84_trq_dem_rm
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      437);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      438);
                                                                      c84_hd_A =
                                                                      c84_trq_dem_lr
                                                                      - c84_trq_out_lr;
                                                                      c84_vj_x =
                                                                      c84_hd_A;
                                                                      c84_wj_x =
                                                                      c84_vj_x;
                                                                      c84_xj_x =
                                                                      c84_wj_x;
                                                                      c84_hd_y =
                                                                      c84_xj_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      + c84_hd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      439);
                                                                      c84_id_A =
                                                                      c84_trq_dem_lr
                                                                      - c84_trq_out_lr;
                                                                      c84_yj_x =
                                                                      c84_id_A;
                                                                      c84_ak_x =
                                                                      c84_yj_x;
                                                                      c84_bk_x =
                                                                      c84_ak_x;
                                                                      c84_id_y =
                                                                      c84_bk_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      + c84_id_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      440);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      441);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      442);
                                                                      c84_mode =
                                                                      39;
                                                                      } else {
                                                                      guard191 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard192 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard193 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard194 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard195 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard195 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard195 ==
                                                                      true) {
                                                                      guard194 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard194 ==
                                                                      true) {
                                                                      guard193 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard193 ==
                                                                      true) {
                                                                      guard192 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard192 ==
                                                                      true) {
                                                                      guard191 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard191 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 38,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 38,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      444);
                                                                      guard196 =
                                                                      false;
                                                                      guard197 =
                                                                      false;
                                                                      guard198 =
                                                                      false;
                                                                      guard199 =
                                                                      false;
                                                                      guard200 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      234U,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      235U,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      236U,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      237U,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      238U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      239U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 39,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 39,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      445);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      446);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      447);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      (c84_trq_dem_rf
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      448);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      449);
                                                                      c84_jd_A =
                                                                      c84_trq_dem_lf
                                                                      - c84_trq_out_lf;
                                                                      c84_ck_x =
                                                                      c84_jd_A;
                                                                      c84_dk_x =
                                                                      c84_ck_x;
                                                                      c84_ek_x =
                                                                      c84_dk_x;
                                                                      c84_jd_y =
                                                                      c84_ek_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      + c84_jd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      450);
                                                                      c84_kd_A =
                                                                      c84_trq_dem_lf
                                                                      - c84_trq_out_lf;
                                                                      c84_fk_x =
                                                                      c84_kd_A;
                                                                      c84_gk_x =
                                                                      c84_fk_x;
                                                                      c84_hk_x =
                                                                      c84_gk_x;
                                                                      c84_kd_y =
                                                                      c84_hk_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      + c84_kd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      451);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      452);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      453);
                                                                      c84_mode =
                                                                      40;
                                                                      } else {
                                                                      guard196 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard197 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard198 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard199 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard200 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard200 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard200 ==
                                                                      true) {
                                                                      guard199 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard199 ==
                                                                      true) {
                                                                      guard198 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard198 ==
                                                                      true) {
                                                                      guard197 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard197 ==
                                                                      true) {
                                                                      guard196 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard196 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 39,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 39,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      454);
                                                                      guard201 =
                                                                      false;
                                                                      guard202 =
                                                                      false;
                                                                      guard203 =
                                                                      false;
                                                                      guard204 =
                                                                      false;
                                                                      guard205 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      240U,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      241U,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      242U,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      243U,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      244U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      245U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 40,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 40,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      455);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      456);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      457);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      (c84_trq_dem_rf
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      458);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      459);
                                                                      c84_ld_A =
                                                                      c84_trq_dem_lm
                                                                      - c84_trq_out_lm;
                                                                      c84_ik_x =
                                                                      c84_ld_A;
                                                                      c84_jk_x =
                                                                      c84_ik_x;
                                                                      c84_kk_x =
                                                                      c84_jk_x;
                                                                      c84_ld_y =
                                                                      c84_kk_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      + c84_ld_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      460);
                                                                      c84_md_A =
                                                                      c84_trq_dem_lm
                                                                      - c84_trq_out_lm;
                                                                      c84_lk_x =
                                                                      c84_md_A;
                                                                      c84_mk_x =
                                                                      c84_lk_x;
                                                                      c84_nk_x =
                                                                      c84_mk_x;
                                                                      c84_md_y =
                                                                      c84_nk_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      + c84_md_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      461);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      462);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      463);
                                                                      c84_mode =
                                                                      41;
                                                                      } else {
                                                                      guard201 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard202 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard203 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard204 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard205 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard205 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard205 ==
                                                                      true) {
                                                                      guard204 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard204 ==
                                                                      true) {
                                                                      guard203 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard203 ==
                                                                      true) {
                                                                      guard202 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard202 ==
                                                                      true) {
                                                                      guard201 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard201 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 40,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 40,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      464);
                                                                      guard206 =
                                                                      false;
                                                                      guard207 =
                                                                      false;
                                                                      guard208 =
                                                                      false;
                                                                      guard209 =
                                                                      false;
                                                                      guard210 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      246U,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      247U,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      248U,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      249U,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      250U,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      251U,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 41,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 41,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      465);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      466);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      467);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      (c84_trq_dem_rf
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      468);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      469);
                                                                      c84_nd_A =
                                                                      c84_trq_dem_lr
                                                                      - c84_trq_out_lr;
                                                                      c84_ok_x =
                                                                      c84_nd_A;
                                                                      c84_pk_x =
                                                                      c84_ok_x;
                                                                      c84_qk_x =
                                                                      c84_pk_x;
                                                                      c84_nd_y =
                                                                      c84_qk_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      + c84_nd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      470);
                                                                      c84_od_A =
                                                                      c84_trq_dem_lr
                                                                      - c84_trq_out_lr;
                                                                      c84_rk_x =
                                                                      c84_od_A;
                                                                      c84_sk_x =
                                                                      c84_rk_x;
                                                                      c84_tk_x =
                                                                      c84_sk_x;
                                                                      c84_od_y =
                                                                      c84_tk_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      + c84_od_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      471);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      472);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      473);
                                                                      c84_mode =
                                                                      42;
                                                                      } else {
                                                                      guard206 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard207 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard208 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard209 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard210 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard210 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard210 ==
                                                                      true) {
                                                                      guard209 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard209 ==
                                                                      true) {
                                                                      guard208 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard208 ==
                                                                      true) {
                                                                      guard207 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard207 ==
                                                                      true) {
                                                                      guard206 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard206 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 41,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 41,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      495);
                                                                      guard211 =
                                                                      false;
                                                                      guard212 =
                                                                      false;
                                                                      guard213 =
                                                                      false;
                                                                      guard214 =
                                                                      false;
                                                                      guard215 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      252U,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      253U,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      254U,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1,
                                                                      MAX_uint8_T,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 256,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 257,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 42,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 42,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      496);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      497);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      498);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      499);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      500);
                                                                      c84_pd_A =
                                                                      (((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rf
                                                                      - c84_trq_out_rf);
                                                                      c84_uk_x =
                                                                      c84_pd_A;
                                                                      c84_vk_x =
                                                                      c84_uk_x;
                                                                      c84_wk_x =
                                                                      c84_vk_x;
                                                                      c84_pd_y =
                                                                      c84_wk_x /
                                                                      2.0F;
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_dem_rm
                                                                      - c84_pd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      501);
                                                                      c84_qd_A =
                                                                      (((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rf
                                                                      - c84_trq_out_rf);
                                                                      c84_xk_x =
                                                                      c84_qd_A;
                                                                      c84_yk_x =
                                                                      c84_xk_x;
                                                                      c84_al_x =
                                                                      c84_yk_x;
                                                                      c84_qd_y =
                                                                      c84_al_x /
                                                                      2.0F;
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_dem_rr
                                                                      - c84_qd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      502);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      503);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      504);
                                                                      c84_mode =
                                                                      43;
                                                                      } else {
                                                                      guard211 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard212 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard213 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard214 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard215 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard215 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard215 ==
                                                                      true) {
                                                                      guard214 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard214 ==
                                                                      true) {
                                                                      guard213 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard213 ==
                                                                      true) {
                                                                      guard212 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard212 ==
                                                                      true) {
                                                                      guard211 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard211 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 42,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 42,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      505);
                                                                      guard216 =
                                                                      false;
                                                                      guard217 =
                                                                      false;
                                                                      guard218 =
                                                                      false;
                                                                      guard219 =
                                                                      false;
                                                                      guard220 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 258,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 259,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 260,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 261,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 262,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 263,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 43,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 43,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      506);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      507);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      508);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      509);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      510);
                                                                      c84_rd_A =
                                                                      (((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      c84_bl_x =
                                                                      c84_rd_A;
                                                                      c84_cl_x =
                                                                      c84_bl_x;
                                                                      c84_dl_x =
                                                                      c84_cl_x;
                                                                      c84_rd_y =
                                                                      c84_dl_x /
                                                                      2.0F;
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_dem_rf
                                                                      - c84_rd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      511);
                                                                      c84_sd_A =
                                                                      (((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      c84_el_x =
                                                                      c84_sd_A;
                                                                      c84_fl_x =
                                                                      c84_el_x;
                                                                      c84_gl_x =
                                                                      c84_fl_x;
                                                                      c84_sd_y =
                                                                      c84_gl_x /
                                                                      2.0F;
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_dem_rr
                                                                      - c84_sd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      512);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      513);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      514);
                                                                      c84_mode =
                                                                      44;
                                                                      } else {
                                                                      guard216 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard217 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard218 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard219 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard220 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard220 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard220 ==
                                                                      true) {
                                                                      guard219 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard219 ==
                                                                      true) {
                                                                      guard218 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard218 ==
                                                                      true) {
                                                                      guard217 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard217 ==
                                                                      true) {
                                                                      guard216 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard216 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 43,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 43,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      515);
                                                                      guard221 =
                                                                      false;
                                                                      guard222 =
                                                                      false;
                                                                      guard223 =
                                                                      false;
                                                                      guard224 =
                                                                      false;
                                                                      guard225 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 264,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 265,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 266,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 267,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 268,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 269,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 44,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 44,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      516);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      517);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      518);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      519);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      520);
                                                                      c84_td_A =
                                                                      (((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      c84_hl_x =
                                                                      c84_td_A;
                                                                      c84_il_x =
                                                                      c84_hl_x;
                                                                      c84_jl_x =
                                                                      c84_il_x;
                                                                      c84_td_y =
                                                                      c84_jl_x /
                                                                      2.0F;
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_dem_rf
                                                                      - c84_td_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      521);
                                                                      c84_ud_A =
                                                                      (((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      c84_kl_x =
                                                                      c84_ud_A;
                                                                      c84_ll_x =
                                                                      c84_kl_x;
                                                                      c84_ml_x =
                                                                      c84_ll_x;
                                                                      c84_ud_y =
                                                                      c84_ml_x /
                                                                      2.0F;
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_dem_rm
                                                                      - c84_ud_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      522);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      523);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      524);
                                                                      c84_mode =
                                                                      45;
                                                                      } else {
                                                                      guard221 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard222 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard223 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard224 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard225 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard225 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard225 ==
                                                                      true) {
                                                                      guard224 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard224 ==
                                                                      true) {
                                                                      guard223 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard223 ==
                                                                      true) {
                                                                      guard222 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard222 ==
                                                                      true) {
                                                                      guard221 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard221 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 44,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 44,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      526);
                                                                      guard226 =
                                                                      false;
                                                                      guard227 =
                                                                      false;
                                                                      guard228 =
                                                                      false;
                                                                      guard229 =
                                                                      false;
                                                                      guard230 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 270,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 271,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 272,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 273,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 274,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 275,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 45,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 45,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      527);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      528);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      529);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      530);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      531);
                                                                      c84_vd_A =
                                                                      (((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lf
                                                                      - c84_trq_out_lf);
                                                                      c84_nl_x =
                                                                      c84_vd_A;
                                                                      c84_ol_x =
                                                                      c84_nl_x;
                                                                      c84_pl_x =
                                                                      c84_ol_x;
                                                                      c84_vd_y =
                                                                      c84_pl_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      - c84_vd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      532);
                                                                      c84_wd_A =
                                                                      (((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lf
                                                                      - c84_trq_out_lf);
                                                                      c84_ql_x =
                                                                      c84_wd_A;
                                                                      c84_rl_x =
                                                                      c84_ql_x;
                                                                      c84_sl_x =
                                                                      c84_rl_x;
                                                                      c84_wd_y =
                                                                      c84_sl_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      - c84_wd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      533);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      534);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      535);
                                                                      c84_mode =
                                                                      46;
                                                                      } else {
                                                                      guard226 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard227 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard228 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard229 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard230 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard230 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard230 ==
                                                                      true) {
                                                                      guard229 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard229 ==
                                                                      true) {
                                                                      guard228 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard228 ==
                                                                      true) {
                                                                      guard227 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard227 ==
                                                                      true) {
                                                                      guard226 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard226 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 45,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 45,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      536);
                                                                      guard231 =
                                                                      false;
                                                                      guard232 =
                                                                      false;
                                                                      guard233 =
                                                                      false;
                                                                      guard234 =
                                                                      false;
                                                                      guard235 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 276,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 277,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 278,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 279,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 280,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 281,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 46,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 46,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      537);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      538);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      539);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      540);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      541);
                                                                      c84_xd_A =
                                                                      (((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lm
                                                                      - c84_trq_out_lm);
                                                                      c84_tl_x =
                                                                      c84_xd_A;
                                                                      c84_ul_x =
                                                                      c84_tl_x;
                                                                      c84_vl_x =
                                                                      c84_ul_x;
                                                                      c84_xd_y =
                                                                      c84_vl_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      - c84_xd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      542);
                                                                      c84_yd_A =
                                                                      (((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lm
                                                                      - c84_trq_out_lm);
                                                                      c84_wl_x =
                                                                      c84_yd_A;
                                                                      c84_xl_x =
                                                                      c84_wl_x;
                                                                      c84_yl_x =
                                                                      c84_xl_x;
                                                                      c84_yd_y =
                                                                      c84_yl_x /
                                                                      2.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      - c84_yd_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      543);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      544);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      545);
                                                                      c84_mode =
                                                                      47;
                                                                      } else {
                                                                      guard231 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard232 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard233 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard234 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard235 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard235 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard235 ==
                                                                      true) {
                                                                      guard234 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard234 ==
                                                                      true) {
                                                                      guard233 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard233 ==
                                                                      true) {
                                                                      guard232 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard232 ==
                                                                      true) {
                                                                      guard231 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard231 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 46,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 46,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      546);
                                                                      guard236 =
                                                                      false;
                                                                      guard237 =
                                                                      false;
                                                                      guard238 =
                                                                      false;
                                                                      guard239 =
                                                                      false;
                                                                      guard240 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 282,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 283,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 284,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 285,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 286,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 287,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 47,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 47,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      547);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      548);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      549);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      550);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      551);
                                                                      c84_ae_A =
                                                                      (((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      c84_am_x =
                                                                      c84_ae_A;
                                                                      c84_bm_x =
                                                                      c84_am_x;
                                                                      c84_cm_x =
                                                                      c84_bm_x;
                                                                      c84_ae_y =
                                                                      c84_cm_x /
                                                                      2.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      - c84_ae_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      552);
                                                                      c84_be_A =
                                                                      (((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      c84_dm_x =
                                                                      c84_be_A;
                                                                      c84_em_x =
                                                                      c84_dm_x;
                                                                      c84_fm_x =
                                                                      c84_em_x;
                                                                      c84_be_y =
                                                                      c84_fm_x /
                                                                      2.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      - c84_be_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      553);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      554);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      555);
                                                                      c84_mode =
                                                                      48;
                                                                      } else {
                                                                      guard236 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard237 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard238 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard239 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard240 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard240 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard240 ==
                                                                      true) {
                                                                      guard239 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard239 ==
                                                                      true) {
                                                                      guard238 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard238 ==
                                                                      true) {
                                                                      guard237 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard237 ==
                                                                      true) {
                                                                      guard236 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard236 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 47,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 47,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      557);
                                                                      guard241 =
                                                                      false;
                                                                      guard242 =
                                                                      false;
                                                                      guard243 =
                                                                      false;
                                                                      guard244 =
                                                                      false;
                                                                      guard245 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 288,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 289,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 290,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 291,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 292,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 293,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 48,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 48,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      558);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      559);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      560);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      (c84_trq_dem_lr
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      561);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      562);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      563);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      (c84_trq_dem_rr
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      564);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      565);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      566);
                                                                      c84_mode =
                                                                      49;
                                                                      } else {
                                                                      guard241 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard242 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard243 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard244 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard245 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard245 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard245 ==
                                                                      true) {
                                                                      guard244 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard244 ==
                                                                      true) {
                                                                      guard243 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard243 ==
                                                                      true) {
                                                                      guard242 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard242 ==
                                                                      true) {
                                                                      guard241 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard241 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 48,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 48,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      567);
                                                                      guard246 =
                                                                      false;
                                                                      guard247 =
                                                                      false;
                                                                      guard248 =
                                                                      false;
                                                                      guard249 =
                                                                      false;
                                                                      guard250 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 294,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 295,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 296,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 297,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 298,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 299,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 49,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 49,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      568);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      569);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      570);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      (c84_trq_dem_lr
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      571);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      572);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      573);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      (c84_trq_dem_rm
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      574);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      575);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      576);
                                                                      c84_mode =
                                                                      50;
                                                                      } else {
                                                                      guard246 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard247 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard248 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard249 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard250 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard250 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard250 ==
                                                                      true) {
                                                                      guard249 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard249 ==
                                                                      true) {
                                                                      guard248 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard248 ==
                                                                      true) {
                                                                      guard247 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard247 ==
                                                                      true) {
                                                                      guard246 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard246 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 49,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 49,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      577);
                                                                      guard251 =
                                                                      false;
                                                                      guard252 =
                                                                      false;
                                                                      guard253 =
                                                                      false;
                                                                      guard254 =
                                                                      false;
                                                                      guard255 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 300,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 301,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 302,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 303,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 304,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 305,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 50,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 50,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      578);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      579);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      580);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      (c84_trq_dem_lr
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      581);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      582);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      583);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      (c84_trq_dem_rf
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      584);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      585);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      586);
                                                                      c84_mode =
                                                                      51;
                                                                      } else {
                                                                      guard251 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard252 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard253 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard254 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard255 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard255 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard255 ==
                                                                      true) {
                                                                      guard254 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard254 ==
                                                                      true) {
                                                                      guard253 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard253 ==
                                                                      true) {
                                                                      guard252 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard252 ==
                                                                      true) {
                                                                      guard251 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard251 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 50,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 50,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      588);
                                                                      guard256 =
                                                                      false;
                                                                      guard257 =
                                                                      false;
                                                                      guard258 =
                                                                      false;
                                                                      guard259 =
                                                                      false;
                                                                      guard260 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 306,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 307,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 308,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 309,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 310,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 311,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 51,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 51,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      589);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      590);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      591);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      (c84_trq_dem_lm
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      592);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      593);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      594);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      (c84_trq_dem_rr
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      595);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      596);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      597);
                                                                      c84_mode =
                                                                      52;
                                                                      } else {
                                                                      guard256 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard257 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard258 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard259 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard260 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard260 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard260 ==
                                                                      true) {
                                                                      guard259 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard259 ==
                                                                      true) {
                                                                      guard258 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard258 ==
                                                                      true) {
                                                                      guard257 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard257 ==
                                                                      true) {
                                                                      guard256 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard256 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 51,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 51,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      598);
                                                                      guard261 =
                                                                      false;
                                                                      guard262 =
                                                                      false;
                                                                      guard263 =
                                                                      false;
                                                                      guard264 =
                                                                      false;
                                                                      guard265 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 312,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 313,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 314,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 315,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 316,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 317,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 52,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 52,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      599);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      600);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      601);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      (c84_trq_dem_lm
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      602);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      603);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      604);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      (c84_trq_dem_rm
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      605);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      606);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      607);
                                                                      c84_mode =
                                                                      53;
                                                                      } else {
                                                                      guard261 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard262 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard263 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard264 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard265 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard265 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard265 ==
                                                                      true) {
                                                                      guard264 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard264 ==
                                                                      true) {
                                                                      guard263 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard263 ==
                                                                      true) {
                                                                      guard262 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard262 ==
                                                                      true) {
                                                                      guard261 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard261 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 52,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 52,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      608);
                                                                      guard266 =
                                                                      false;
                                                                      guard267 =
                                                                      false;
                                                                      guard268 =
                                                                      false;
                                                                      guard269 =
                                                                      false;
                                                                      guard270 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 318,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 319,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 320,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 321,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 322,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 323,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 53,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 53,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      609);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      610);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      611);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      (c84_trq_dem_lm
                                                                      + (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      612);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      613);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      614);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      (c84_trq_dem_rf
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      615);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      616);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      617);
                                                                      c84_mode =
                                                                      54;
                                                                      } else {
                                                                      guard266 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard267 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard268 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard269 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard270 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard270 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard270 ==
                                                                      true) {
                                                                      guard269 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard269 ==
                                                                      true) {
                                                                      guard268 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard268 ==
                                                                      true) {
                                                                      guard267 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard267 ==
                                                                      true) {
                                                                      guard266 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard266 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 53,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 53,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      619);
                                                                      guard271 =
                                                                      false;
                                                                      guard272 =
                                                                      false;
                                                                      guard273 =
                                                                      false;
                                                                      guard274 =
                                                                      false;
                                                                      guard275 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 324,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 325,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 326,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 327,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 328,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 329,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 54,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 54,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      620);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      621);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      622);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      (c84_trq_dem_lf
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      623);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      624);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      625);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      (c84_trq_dem_rr
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      626);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      627);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      628);
                                                                      c84_mode =
                                                                      55;
                                                                      } else {
                                                                      guard271 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard272 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard273 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard274 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard275 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard275 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard275 ==
                                                                      true) {
                                                                      guard274 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard274 ==
                                                                      true) {
                                                                      guard273 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard273 ==
                                                                      true) {
                                                                      guard272 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard272 ==
                                                                      true) {
                                                                      guard271 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard271 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 54,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 54,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      629);
                                                                      guard276 =
                                                                      false;
                                                                      guard277 =
                                                                      false;
                                                                      guard278 =
                                                                      false;
                                                                      guard279 =
                                                                      false;
                                                                      guard280 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 330,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 331,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 332,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 333,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 334,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 335,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 55,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 55,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      630);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      631);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      632);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      (c84_trq_dem_lf
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      633);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      634);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      635);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      (c84_trq_dem_rm
                                                                      + (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      636);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      637);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      638);
                                                                      c84_mode =
                                                                      56;
                                                                      } else {
                                                                      guard276 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard277 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard278 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard279 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard280 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard280 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard280 ==
                                                                      true) {
                                                                      guard279 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard279 ==
                                                                      true) {
                                                                      guard278 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard278 ==
                                                                      true) {
                                                                      guard277 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard277 ==
                                                                      true) {
                                                                      guard276 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard276 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 55,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 55,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      639);
                                                                      guard281 =
                                                                      false;
                                                                      guard282 =
                                                                      false;
                                                                      guard283 =
                                                                      false;
                                                                      guard284 =
                                                                      false;
                                                                      guard285 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 336,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 337,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 338,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 339,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 340,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 341,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 56,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 56,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      640);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      641);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      642);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      (c84_trq_dem_lf
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      643);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      644);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      645);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      (c84_trq_dem_rf
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      646);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      647);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      648);
                                                                      c84_mode =
                                                                      57;
                                                                      } else {
                                                                      guard281 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard282 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard283 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard284 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard285 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard285 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard285 ==
                                                                      true) {
                                                                      guard284 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard284 ==
                                                                      true) {
                                                                      guard283 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard283 ==
                                                                      true) {
                                                                      guard282 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard282 ==
                                                                      true) {
                                                                      guard281 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard281 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 56,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 56,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      666);
                                                                      guard286 =
                                                                      false;
                                                                      guard287 =
                                                                      false;
                                                                      guard288 =
                                                                      false;
                                                                      guard289 =
                                                                      false;
                                                                      guard290 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 342,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 343,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 344,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 345,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 346,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 347,
                                                                      c84_flag_rr
                                                                      == 0.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 57,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 57,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      667);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      668);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      669);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      670);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      671);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      672);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_dem_rr
                                                                      - (((((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      - (c84_trq_dem_rm
                                                                      - c84_trq_out_rm));
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      673);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      674);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      675);
                                                                      c84_mode =
                                                                      58;
                                                                      } else {
                                                                      guard286 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard287 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard288 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard289 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard290 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard290 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard290 ==
                                                                      true) {
                                                                      guard289 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard289 ==
                                                                      true) {
                                                                      guard288 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard288 ==
                                                                      true) {
                                                                      guard287 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard287 ==
                                                                      true) {
                                                                      guard286 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard286 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 57,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 57,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      676);
                                                                      guard291 =
                                                                      false;
                                                                      guard292 =
                                                                      false;
                                                                      guard293 =
                                                                      false;
                                                                      guard294 =
                                                                      false;
                                                                      guard295 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 348,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 349,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 350,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 351,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 352,
                                                                      c84_flag_rm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 353,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 58,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 58,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      677);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      678);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      679);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      680);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      681);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      682);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_dem_rm
                                                                      - (((((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      - (c84_trq_dem_rr
                                                                      - c84_trq_out_rr));
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      683);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      684);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      685);
                                                                      c84_mode =
                                                                      59;
                                                                      } else {
                                                                      guard291 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard292 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard293 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard294 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard295 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard295 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard295 ==
                                                                      true) {
                                                                      guard294 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard294 ==
                                                                      true) {
                                                                      guard293 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard293 ==
                                                                      true) {
                                                                      guard292 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard292 ==
                                                                      true) {
                                                                      guard291 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard291 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 58,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 58,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      686);
                                                                      guard296 =
                                                                      false;
                                                                      guard297 =
                                                                      false;
                                                                      guard298 =
                                                                      false;
                                                                      guard299 =
                                                                      false;
                                                                      guard300 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 354,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 355,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 356,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 357,
                                                                      c84_flag_rf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 358,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 359,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 59,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 59,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      687);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      688);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      689);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      690);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      691);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      692);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_dem_rf
                                                                      - (((((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      - (c84_trq_dem_rr
                                                                      - c84_trq_out_rr));
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      693);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      694);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      695);
                                                                      c84_mode =
                                                                      60;
                                                                      } else {
                                                                      guard296 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard297 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard298 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard299 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard300 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard300 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard300 ==
                                                                      true) {
                                                                      guard299 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard299 ==
                                                                      true) {
                                                                      guard298 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard298 ==
                                                                      true) {
                                                                      guard297 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard297 ==
                                                                      true) {
                                                                      guard296 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard296 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 59,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 59,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      696);
                                                                      guard301 =
                                                                      false;
                                                                      guard302 =
                                                                      false;
                                                                      guard303 =
                                                                      false;
                                                                      guard304 =
                                                                      false;
                                                                      guard305 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 360,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 361,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 362,
                                                                      c84_flag_lr
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 363,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 364,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 365,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 60,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 60,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      697);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      698);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      699);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      700);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      701);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      702);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_dem_lr
                                                                      - (((((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      - (c84_trq_dem_lm
                                                                      - c84_trq_out_lm));
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      703);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      704);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      705);
                                                                      c84_mode =
                                                                      61;
                                                                      } else {
                                                                      guard301 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard302 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard303 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard304 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard305 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard305 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard305 ==
                                                                      true) {
                                                                      guard304 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard304 ==
                                                                      true) {
                                                                      guard303 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard303 ==
                                                                      true) {
                                                                      guard302 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard302 ==
                                                                      true) {
                                                                      guard301 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard301 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 60,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 60,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      706);
                                                                      guard306 =
                                                                      false;
                                                                      guard307 =
                                                                      false;
                                                                      guard308 =
                                                                      false;
                                                                      guard309 =
                                                                      false;
                                                                      guard310 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 366,
                                                                      c84_flag_lf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 367,
                                                                      c84_flag_lm
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 368,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 369,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 370,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 371,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 61,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 61,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      707);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      708);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      709);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      710);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      711);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      712);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_dem_lm
                                                                      - (((((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lf
                                                                      - c84_trq_out_lf))
                                                                      - (c84_trq_dem_lr
                                                                      - c84_trq_out_lr));
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      713);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      714);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      715);
                                                                      c84_mode =
                                                                      62;
                                                                      } else {
                                                                      guard306 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard307 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard308 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard309 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard310 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard310 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard310 ==
                                                                      true) {
                                                                      guard309 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard309 ==
                                                                      true) {
                                                                      guard308 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard308 ==
                                                                      true) {
                                                                      guard307 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard307 ==
                                                                      true) {
                                                                      guard306 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard306 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 61,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 61,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      716);
                                                                      guard311 =
                                                                      false;
                                                                      guard312 =
                                                                      false;
                                                                      guard313 =
                                                                      false;
                                                                      guard314 =
                                                                      false;
                                                                      guard315 =
                                                                      false;
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 372,
                                                                      c84_flag_lf
                                                                      == 0.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 373,
                                                                      c84_flag_lm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 374,
                                                                      c84_flag_lr
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 375,
                                                                      c84_flag_rf
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 376,
                                                                      c84_flag_rm
                                                                      == 1.0F))
                                                                      {
                                                                      if
                                                                      (CV_EML_COND
                                                                      (0, 1, 377,
                                                                      c84_flag_rr
                                                                      == 1.0F))
                                                                      {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 62,
                                                                      true);
                                                                      CV_EML_IF
                                                                      (0, 1, 62,
                                                                      true);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      717);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      718);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      719);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      720);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      721);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      722);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_dem_lf
                                                                      - (((((c84_trq_dem_rf
                                                                      - c84_trq_out_rf)
                                                                      + (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      + (c84_trq_dem_rr
                                                                      - c84_trq_out_rr))
                                                                      - (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      - (c84_trq_dem_lr
                                                                      - c84_trq_out_lr));
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      723);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      724);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      725);
                                                                      c84_mode =
                                                                      63;
                                                                      } else {
                                                                      guard311 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard312 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard313 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard314 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard315 =
                                                                      true;
                                                                      }
                                                                      } else {
                                                                      guard315 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard315 ==
                                                                      true) {
                                                                      guard314 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard314 ==
                                                                      true) {
                                                                      guard313 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard313 ==
                                                                      true) {
                                                                      guard312 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard312 ==
                                                                      true) {
                                                                      guard311 =
                                                                      true;
                                                                      }

                                                                      if
                                                                      (guard311 ==
                                                                      true) {
                                                                      CV_EML_MCDC
                                                                      (0, 1, 62,
                                                                      false);
                                                                      CV_EML_IF
                                                                      (0, 1, 62,
                                                                      false);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      741);
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      742);
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      743);
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      744);
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      745);
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      746);
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      747);
                                                                      c84_trqcha
                                                                      =
                                                                      (((((c84_trq_dem_lf
                                                                      - c84_trq_out_lf)
                                                                      + (c84_trq_dem_lm
                                                                      - c84_trq_out_lm))
                                                                      + (c84_trq_dem_lr
                                                                      - c84_trq_out_lr))
                                                                      - (c84_trq_dem_rf
                                                                      - c84_trq_out_rf))
                                                                      - (c84_trq_dem_rm
                                                                      - c84_trq_out_rm))
                                                                      - (c84_trq_dem_rr
                                                                      - c84_trq_out_rr);
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      748);
                                                                      if
                                                                      (CV_EML_IF
                                                                      (0, 1, 63,
                                                                      c84_trqcha
                                                                      >= 0.0F))
                                                                      {
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      749);
                                                                      c84_ce_A =
                                                                      c84_trqcha;
                                                                      c84_gm_x =
                                                                      c84_ce_A;
                                                                      c84_hm_x =
                                                                      c84_gm_x;
                                                                      c84_im_x =
                                                                      c84_hm_x;
                                                                      c84_ce_y =
                                                                      c84_im_x /
                                                                      3.0F;
                                                                      c84_trq_out_rf
                                                                      =
                                                                      c84_trq_pid_rf
                                                                      - c84_ce_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      750);
                                                                      c84_de_A =
                                                                      c84_trqcha;
                                                                      c84_jm_x =
                                                                      c84_de_A;
                                                                      c84_km_x =
                                                                      c84_jm_x;
                                                                      c84_lm_x =
                                                                      c84_km_x;
                                                                      c84_de_y =
                                                                      c84_lm_x /
                                                                      3.0F;
                                                                      c84_trq_out_rm
                                                                      =
                                                                      c84_trq_pid_rm
                                                                      - c84_de_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      751);
                                                                      c84_ee_A =
                                                                      c84_trqcha;
                                                                      c84_mm_x =
                                                                      c84_ee_A;
                                                                      c84_nm_x =
                                                                      c84_mm_x;
                                                                      c84_om_x =
                                                                      c84_nm_x;
                                                                      c84_ee_y =
                                                                      c84_om_x /
                                                                      3.0F;
                                                                      c84_trq_out_rr
                                                                      =
                                                                      c84_trq_pid_rr
                                                                      - c84_ee_y;
                                                                      } else {
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      753);
                                                                      c84_fe_A =
                                                                      c84_trqcha;
                                                                      c84_pm_x =
                                                                      c84_fe_A;
                                                                      c84_qm_x =
                                                                      c84_pm_x;
                                                                      c84_rm_x =
                                                                      c84_qm_x;
                                                                      c84_fe_y =
                                                                      c84_rm_x /
                                                                      3.0F;
                                                                      c84_trq_out_lf
                                                                      =
                                                                      c84_trq_pid_lf
                                                                      + c84_fe_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      754);
                                                                      c84_ge_A =
                                                                      c84_trqcha;
                                                                      c84_sm_x =
                                                                      c84_ge_A;
                                                                      c84_tm_x =
                                                                      c84_sm_x;
                                                                      c84_um_x =
                                                                      c84_tm_x;
                                                                      c84_ge_y =
                                                                      c84_um_x /
                                                                      3.0F;
                                                                      c84_trq_out_lm
                                                                      =
                                                                      c84_trq_pid_lm
                                                                      + c84_ge_y;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      755);
                                                                      c84_he_A =
                                                                      c84_trqcha;
                                                                      c84_vm_x =
                                                                      c84_he_A;
                                                                      c84_wm_x =
                                                                      c84_vm_x;
                                                                      c84_xm_x =
                                                                      c84_wm_x;
                                                                      c84_he_y =
                                                                      c84_xm_x /
                                                                      3.0F;
                                                                      c84_trq_out_lr
                                                                      =
                                                                      c84_trq_pid_lr
                                                                      + c84_he_y;
                                                                      }

                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      757);
                                                                      c84_brapre_out_l
                                                                      =
                                                                      c84_bra_pre_l
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      758);
                                                                      c84_brapre_out_r
                                                                      =
                                                                      c84_bra_pre_r
                                                                      + c84_brake_dem;
                                                                      _SFD_EML_CALL
                                                                      (0U,
                                                                      chartInstance
                                                                      ->c84_sfEvent,
                                                                      759);
                                                                      c84_mode =
                                                                      64;
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 764);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 765);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 766);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 767);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 768);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 769);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 770);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, 771);
  _SFD_EML_CALL(0U, chartInstance->c84_sfEvent, -771);
  _SFD_SYMBOL_SCOPE_POP();
  *c84_b_trq_out_lf = c84_trq_out_lf;
  *c84_b_trq_out_lm = c84_trq_out_lm;
  *c84_b_trq_out_lr = c84_trq_out_lr;
  *c84_b_trq_out_rf = c84_trq_out_rf;
  *c84_b_trq_out_rm = c84_trq_out_rm;
  *c84_b_trq_out_rr = c84_trq_out_rr;
  *c84_b_brapre_out_l = c84_brapre_out_l;
  *c84_b_brapre_out_r = c84_brapre_out_r;
  *c84_b_mode = c84_mode;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 83U, chartInstance->c84_sfEvent);
}

static void initSimStructsc84_six_plus_six_AcmsteeringV09_main_1lf
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c84_machineNumber, uint32_T
  c84_chartNumber, uint32_T c84_instanceNumber)
{
  (void)c84_machineNumber;
  (void)c84_chartNumber;
  (void)c84_instanceNumber;
}

static const mxArray *c84_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData)
{
  const mxArray *c84_mxArrayOutData = NULL;
  int8_T c84_u;
  const mxArray *c84_y = NULL;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_mxArrayOutData = NULL;
  c84_u = *(int8_T *)c84_inData;
  c84_y = NULL;
  sf_mex_assign(&c84_y, sf_mex_create("y", &c84_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c84_mxArrayOutData, c84_y, false);
  return c84_mxArrayOutData;
}

static int8_T c84_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_mode, const char_T *c84_identifier)
{
  int8_T c84_y;
  emlrtMsgIdentifier c84_thisId;
  c84_thisId.fIdentifier = c84_identifier;
  c84_thisId.fParent = NULL;
  c84_y = c84_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c84_mode),
    &c84_thisId);
  sf_mex_destroy(&c84_mode);
  return c84_y;
}

static int8_T c84_b_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId)
{
  int8_T c84_y;
  int8_T c84_i0;
  (void)chartInstance;
  sf_mex_import(c84_parentId, sf_mex_dup(c84_u), &c84_i0, 1, 2, 0U, 0, 0U, 0);
  c84_y = c84_i0;
  sf_mex_destroy(&c84_u);
  return c84_y;
}

static void c84_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData)
{
  const mxArray *c84_mode;
  const char_T *c84_identifier;
  emlrtMsgIdentifier c84_thisId;
  int8_T c84_y;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_mode = sf_mex_dup(c84_mxArrayInData);
  c84_identifier = c84_varName;
  c84_thisId.fIdentifier = c84_identifier;
  c84_thisId.fParent = NULL;
  c84_y = c84_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c84_mode),
    &c84_thisId);
  sf_mex_destroy(&c84_mode);
  *(int8_T *)c84_outData = c84_y;
  sf_mex_destroy(&c84_mxArrayInData);
}

static const mxArray *c84_b_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData)
{
  const mxArray *c84_mxArrayOutData = NULL;
  real32_T c84_u;
  const mxArray *c84_y = NULL;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_mxArrayOutData = NULL;
  c84_u = *(real32_T *)c84_inData;
  c84_y = NULL;
  sf_mex_assign(&c84_y, sf_mex_create("y", &c84_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c84_mxArrayOutData, c84_y, false);
  return c84_mxArrayOutData;
}

static real32_T c84_c_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_brapre_out_r, const char_T *c84_identifier)
{
  real32_T c84_y;
  emlrtMsgIdentifier c84_thisId;
  c84_thisId.fIdentifier = c84_identifier;
  c84_thisId.fParent = NULL;
  c84_y = c84_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c84_brapre_out_r),
    &c84_thisId);
  sf_mex_destroy(&c84_brapre_out_r);
  return c84_y;
}

static real32_T c84_d_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId)
{
  real32_T c84_y;
  real32_T c84_f0;
  (void)chartInstance;
  sf_mex_import(c84_parentId, sf_mex_dup(c84_u), &c84_f0, 1, 1, 0U, 0, 0U, 0);
  c84_y = c84_f0;
  sf_mex_destroy(&c84_u);
  return c84_y;
}

static void c84_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData)
{
  const mxArray *c84_brapre_out_r;
  const char_T *c84_identifier;
  emlrtMsgIdentifier c84_thisId;
  real32_T c84_y;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_brapre_out_r = sf_mex_dup(c84_mxArrayInData);
  c84_identifier = c84_varName;
  c84_thisId.fIdentifier = c84_identifier;
  c84_thisId.fParent = NULL;
  c84_y = c84_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c84_brapre_out_r),
    &c84_thisId);
  sf_mex_destroy(&c84_brapre_out_r);
  *(real32_T *)c84_outData = c84_y;
  sf_mex_destroy(&c84_mxArrayInData);
}

static const mxArray *c84_c_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData)
{
  const mxArray *c84_mxArrayOutData = NULL;
  real_T c84_u;
  const mxArray *c84_y = NULL;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_mxArrayOutData = NULL;
  c84_u = *(real_T *)c84_inData;
  c84_y = NULL;
  sf_mex_assign(&c84_y, sf_mex_create("y", &c84_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c84_mxArrayOutData, c84_y, false);
  return c84_mxArrayOutData;
}

static real_T c84_e_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId)
{
  real_T c84_y;
  real_T c84_d0;
  (void)chartInstance;
  sf_mex_import(c84_parentId, sf_mex_dup(c84_u), &c84_d0, 1, 0, 0U, 0, 0U, 0);
  c84_y = c84_d0;
  sf_mex_destroy(&c84_u);
  return c84_y;
}

static void c84_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData)
{
  const mxArray *c84_nargout;
  const char_T *c84_identifier;
  emlrtMsgIdentifier c84_thisId;
  real_T c84_y;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_nargout = sf_mex_dup(c84_mxArrayInData);
  c84_identifier = c84_varName;
  c84_thisId.fIdentifier = c84_identifier;
  c84_thisId.fParent = NULL;
  c84_y = c84_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c84_nargout),
    &c84_thisId);
  sf_mex_destroy(&c84_nargout);
  *(real_T *)c84_outData = c84_y;
  sf_mex_destroy(&c84_mxArrayInData);
}

const mxArray
  *sf_c84_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c84_nameCaptureInfo = NULL;
  c84_nameCaptureInfo = NULL;
  sf_mex_assign(&c84_nameCaptureInfo, sf_mex_createstruct("structure", 2, 8, 1),
                false);
  c84_info_helper(&c84_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c84_nameCaptureInfo);
  return c84_nameCaptureInfo;
}

static void c84_info_helper(const mxArray **c84_info)
{
  const mxArray *c84_rhs0 = NULL;
  const mxArray *c84_lhs0 = NULL;
  const mxArray *c84_rhs1 = NULL;
  const mxArray *c84_lhs1 = NULL;
  const mxArray *c84_rhs2 = NULL;
  const mxArray *c84_lhs2 = NULL;
  const mxArray *c84_rhs3 = NULL;
  const mxArray *c84_lhs3 = NULL;
  const mxArray *c84_rhs4 = NULL;
  const mxArray *c84_lhs4 = NULL;
  const mxArray *c84_rhs5 = NULL;
  const mxArray *c84_lhs5 = NULL;
  const mxArray *c84_rhs6 = NULL;
  const mxArray *c84_lhs6 = NULL;
  const mxArray *c84_rhs7 = NULL;
  const mxArray *c84_lhs7 = NULL;
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("mrdivide"), "name", "name",
                  0);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1388463696U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1370017086U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c84_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 1);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 1);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c84_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 2);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("rdivide"), "name", "name", 2);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c84_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 3);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c84_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 4);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c84_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 5);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 5);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1286825996U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c84_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("eml_div"), "name", "name", 6);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c84_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 7);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("coder.internal.div"), "name",
                  "name", 7);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c84_info, c84_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 7);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c84_info, c84_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c84_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c84_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c84_info, sf_mex_duplicatearraysafe(&c84_lhs7), "lhs", "lhs",
                  7);
  sf_mex_destroy(&c84_rhs0);
  sf_mex_destroy(&c84_lhs0);
  sf_mex_destroy(&c84_rhs1);
  sf_mex_destroy(&c84_lhs1);
  sf_mex_destroy(&c84_rhs2);
  sf_mex_destroy(&c84_lhs2);
  sf_mex_destroy(&c84_rhs3);
  sf_mex_destroy(&c84_lhs3);
  sf_mex_destroy(&c84_rhs4);
  sf_mex_destroy(&c84_lhs4);
  sf_mex_destroy(&c84_rhs5);
  sf_mex_destroy(&c84_lhs5);
  sf_mex_destroy(&c84_rhs6);
  sf_mex_destroy(&c84_lhs6);
  sf_mex_destroy(&c84_rhs7);
  sf_mex_destroy(&c84_lhs7);
}

static const mxArray *c84_emlrt_marshallOut(const char * c84_u)
{
  const mxArray *c84_y = NULL;
  c84_y = NULL;
  sf_mex_assign(&c84_y, sf_mex_create("y", c84_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c84_u)), false);
  return c84_y;
}

static const mxArray *c84_b_emlrt_marshallOut(const uint32_T c84_u)
{
  const mxArray *c84_y = NULL;
  c84_y = NULL;
  sf_mex_assign(&c84_y, sf_mex_create("y", &c84_u, 7, 0U, 0U, 0U, 0), false);
  return c84_y;
}

static const mxArray *c84_d_sf_marshallOut(void *chartInstanceVoid, void
  *c84_inData)
{
  const mxArray *c84_mxArrayOutData = NULL;
  int32_T c84_u;
  const mxArray *c84_y = NULL;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_mxArrayOutData = NULL;
  c84_u = *(int32_T *)c84_inData;
  c84_y = NULL;
  sf_mex_assign(&c84_y, sf_mex_create("y", &c84_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c84_mxArrayOutData, c84_y, false);
  return c84_mxArrayOutData;
}

static int32_T c84_f_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId)
{
  int32_T c84_y;
  int32_T c84_i1;
  (void)chartInstance;
  sf_mex_import(c84_parentId, sf_mex_dup(c84_u), &c84_i1, 1, 6, 0U, 0, 0U, 0);
  c84_y = c84_i1;
  sf_mex_destroy(&c84_u);
  return c84_y;
}

static void c84_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c84_mxArrayInData, const char_T *c84_varName, void *c84_outData)
{
  const mxArray *c84_b_sfEvent;
  const char_T *c84_identifier;
  emlrtMsgIdentifier c84_thisId;
  int32_T c84_y;
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    chartInstanceVoid;
  c84_b_sfEvent = sf_mex_dup(c84_mxArrayInData);
  c84_identifier = c84_varName;
  c84_thisId.fIdentifier = c84_identifier;
  c84_thisId.fParent = NULL;
  c84_y = c84_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c84_b_sfEvent),
    &c84_thisId);
  sf_mex_destroy(&c84_b_sfEvent);
  *(int32_T *)c84_outData = c84_y;
  sf_mex_destroy(&c84_mxArrayInData);
}

static uint8_T c84_g_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_b_is_active_c84_six_plus_six_AcmsteeringV09_main_1lf,
   const char_T *c84_identifier)
{
  uint8_T c84_y;
  emlrtMsgIdentifier c84_thisId;
  c84_thisId.fIdentifier = c84_identifier;
  c84_thisId.fParent = NULL;
  c84_y = c84_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c84_b_is_active_c84_six_plus_six_AcmsteeringV09_main_1lf), &c84_thisId);
  sf_mex_destroy(&c84_b_is_active_c84_six_plus_six_AcmsteeringV09_main_1lf);
  return c84_y;
}

static uint8_T c84_h_emlrt_marshallIn
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance,
   const mxArray *c84_u, const emlrtMsgIdentifier *c84_parentId)
{
  uint8_T c84_y;
  uint8_T c84_u0;
  (void)chartInstance;
  sf_mex_import(c84_parentId, sf_mex_dup(c84_u), &c84_u0, 1, 3, 0U, 0, 0U, 0);
  c84_y = c84_u0;
  sf_mex_destroy(&c84_u);
  return c84_y;
}

static void init_dsm_address_info
  (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance)
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

void sf_c84_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1707449955U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1909888091U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2794147029U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3737928375U);
}

mxArray *sf_c84_six_plus_six_AcmsteeringV09_main_1lf_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("RVE7dYLaHR9yefiMMkw5WC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,21,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,17,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,17,"type",mxType);
    }

    mxSetField(mxData,17,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,18,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,18,"type",mxType);
    }

    mxSetField(mxData,18,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,19,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,19,"type",mxType);
    }

    mxSetField(mxData,19,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,20,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,20,"type",mxType);
    }

    mxSetField(mxData,20,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,9,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c84_six_plus_six_AcmsteeringV09_main_1lf_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c84_six_plus_six_AcmsteeringV09_main_1lf_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c84_six_plus_six_AcmsteeringV09_main_1lf(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[33],T\"brapre_out_l\",},{M[1],M[34],T\"brapre_out_r\",},{M[1],M[35],T\"mode\",},{M[1],M[5],T\"trq_out_lf\",},{M[1],M[42],T\"trq_out_lm\",},{M[1],M[15],T\"trq_out_lr\",},{M[1],M[16],T\"trq_out_rf\",},{M[1],M[43],T\"trq_out_rm\",},{M[1],M[17],T\"trq_out_rr\",},{M[8],M[0],T\"is_active_c84_six_plus_six_AcmsteeringV09_main_1lf\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c84_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_1lfMachineNumber_,
           84,
           1,
           1,
           0,
           30,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"trq_dem_lf");
          _SFD_SET_DATA_PROPS(1,1,1,0,"trq_dem_lm");
          _SFD_SET_DATA_PROPS(2,1,1,0,"trq_dem_lr");
          _SFD_SET_DATA_PROPS(3,1,1,0,"trq_dem_rf");
          _SFD_SET_DATA_PROPS(4,1,1,0,"trq_dem_rm");
          _SFD_SET_DATA_PROPS(5,1,1,0,"trq_dem_rr");
          _SFD_SET_DATA_PROPS(6,1,1,0,"bra_pre_l");
          _SFD_SET_DATA_PROPS(7,1,1,0,"bra_pre_r");
          _SFD_SET_DATA_PROPS(8,1,1,0,"brake_dem");
          _SFD_SET_DATA_PROPS(9,1,1,0,"flag_lf");
          _SFD_SET_DATA_PROPS(10,1,1,0,"flag_lm");
          _SFD_SET_DATA_PROPS(11,1,1,0,"flag_lr");
          _SFD_SET_DATA_PROPS(12,2,0,1,"trq_out_lf");
          _SFD_SET_DATA_PROPS(13,2,0,1,"trq_out_lm");
          _SFD_SET_DATA_PROPS(14,1,1,0,"flag_rf");
          _SFD_SET_DATA_PROPS(15,1,1,0,"flag_rm");
          _SFD_SET_DATA_PROPS(16,1,1,0,"flag_rr");
          _SFD_SET_DATA_PROPS(17,2,0,1,"trq_out_lr");
          _SFD_SET_DATA_PROPS(18,2,0,1,"trq_out_rf");
          _SFD_SET_DATA_PROPS(19,2,0,1,"trq_out_rm");
          _SFD_SET_DATA_PROPS(20,2,0,1,"trq_out_rr");
          _SFD_SET_DATA_PROPS(21,1,1,0,"trq_pid_lf");
          _SFD_SET_DATA_PROPS(22,1,1,0,"trq_pid_lm");
          _SFD_SET_DATA_PROPS(23,1,1,0,"trq_pid_lr");
          _SFD_SET_DATA_PROPS(24,1,1,0,"trq_pid_rf");
          _SFD_SET_DATA_PROPS(25,1,1,0,"trq_pid_rm");
          _SFD_SET_DATA_PROPS(26,1,1,0,"trq_pid_rr");
          _SFD_SET_DATA_PROPS(27,2,0,1,"brapre_out_l");
          _SFD_SET_DATA_PROPS(28,2,0,1,"brapre_out_r");
          _SFD_SET_DATA_PROPS(29,2,0,1,"mode");
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
        _SFD_CV_INIT_EML(0,1,1,64,0,0,0,0,0,378,63);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,36319);
        _SFD_CV_INIT_EML_IF(0,1,0,405,488,922,36056);
        _SFD_CV_INIT_EML_IF(0,1,1,922,1009,1454,36056);
        _SFD_CV_INIT_EML_IF(0,1,2,1454,1541,1926,36056);
        _SFD_CV_INIT_EML_IF(0,1,3,1926,2013,2403,36056);
        _SFD_CV_INIT_EML_IF(0,1,4,2403,2490,2875,36056);
        _SFD_CV_INIT_EML_IF(0,1,5,2875,2962,3347,36056);
        _SFD_CV_INIT_EML_IF(0,1,6,3347,3434,3869,36056);
        _SFD_CV_INIT_EML_IF(0,1,7,3869,3956,4411,36056);
        _SFD_CV_INIT_EML_IF(0,1,8,4411,4498,4885,36056);
        _SFD_CV_INIT_EML_IF(0,1,9,4885,4972,5365,36056);
        _SFD_CV_INIT_EML_IF(0,1,10,5365,5452,5868,36056);
        _SFD_CV_INIT_EML_IF(0,1,11,5868,5955,6343,36056);
        _SFD_CV_INIT_EML_IF(0,1,12,6343,6430,6823,36056);
        _SFD_CV_INIT_EML_IF(0,1,13,6823,6910,7375,36056);
        _SFD_CV_INIT_EML_IF(0,1,14,7375,7462,7906,36056);
        _SFD_CV_INIT_EML_IF(0,1,15,7906,7993,8442,36056);
        _SFD_CV_INIT_EML_IF(0,1,16,8442,8529,8994,36056);
        _SFD_CV_INIT_EML_IF(0,1,17,8994,9081,9525,36056);
        _SFD_CV_INIT_EML_IF(0,1,18,9525,9612,10056,36056);
        _SFD_CV_INIT_EML_IF(0,1,19,10056,10143,10608,36056);
        _SFD_CV_INIT_EML_IF(0,1,20,10608,10695,11139,36056);
        _SFD_CV_INIT_EML_IF(0,1,21,11139,11226,11780,36056);
        _SFD_CV_INIT_EML_IF(0,1,22,11780,11867,12508,36056);
        _SFD_CV_INIT_EML_IF(0,1,23,12508,12595,13199,36056);
        _SFD_CV_INIT_EML_IF(0,1,24,13199,13286,13731,36056);
        _SFD_CV_INIT_EML_IF(0,1,25,13731,13818,14263,36056);
        _SFD_CV_INIT_EML_IF(0,1,26,14263,14350,14800,36056);
        _SFD_CV_INIT_EML_IF(0,1,27,14800,14887,15332,36056);
        _SFD_CV_INIT_EML_IF(0,1,28,15332,15419,15864,36056);
        _SFD_CV_INIT_EML_IF(0,1,29,15864,15951,16401,36056);
        _SFD_CV_INIT_EML_IF(0,1,30,16401,16488,16933,36056);
        _SFD_CV_INIT_EML_IF(0,1,31,16933,17020,17465,36056);
        _SFD_CV_INIT_EML_IF(0,1,32,17465,17552,18002,36056);
        _SFD_CV_INIT_EML_IF(0,1,33,18002,18089,18534,36056);
        _SFD_CV_INIT_EML_IF(0,1,34,18534,18621,19066,36056);
        _SFD_CV_INIT_EML_IF(0,1,35,19066,19153,19603,36056);
        _SFD_CV_INIT_EML_IF(0,1,36,19603,19690,20135,36056);
        _SFD_CV_INIT_EML_IF(0,1,37,20135,20222,20667,36056);
        _SFD_CV_INIT_EML_IF(0,1,38,20667,20754,21204,36056);
        _SFD_CV_INIT_EML_IF(0,1,39,21204,21291,21736,36056);
        _SFD_CV_INIT_EML_IF(0,1,40,21736,21823,22268,36056);
        _SFD_CV_INIT_EML_IF(0,1,41,22268,22355,22905,36056);
        _SFD_CV_INIT_EML_IF(0,1,42,22905,22992,23602,36056);
        _SFD_CV_INIT_EML_IF(0,1,43,23602,23689,24239,36056);
        _SFD_CV_INIT_EML_IF(0,1,44,24239,24326,24881,36056);
        _SFD_CV_INIT_EML_IF(0,1,45,24881,24968,25518,36056);
        _SFD_CV_INIT_EML_IF(0,1,46,25518,25605,26155,36056);
        _SFD_CV_INIT_EML_IF(0,1,47,26155,26242,26797,36056);
        _SFD_CV_INIT_EML_IF(0,1,48,26797,26884,27330,36056);
        _SFD_CV_INIT_EML_IF(0,1,49,27330,27417,27863,36056);
        _SFD_CV_INIT_EML_IF(0,1,50,27863,27950,28401,36056);
        _SFD_CV_INIT_EML_IF(0,1,51,28401,28488,28934,36056);
        _SFD_CV_INIT_EML_IF(0,1,52,28934,29021,29467,36056);
        _SFD_CV_INIT_EML_IF(0,1,53,29467,29554,30005,36056);
        _SFD_CV_INIT_EML_IF(0,1,54,30005,30092,30538,36056);
        _SFD_CV_INIT_EML_IF(0,1,55,30538,30625,31071,36056);
        _SFD_CV_INIT_EML_IF(0,1,56,31071,31158,31689,36056);
        _SFD_CV_INIT_EML_IF(0,1,57,31689,31776,32294,36056);
        _SFD_CV_INIT_EML_IF(0,1,58,32294,32381,32839,36056);
        _SFD_CV_INIT_EML_IF(0,1,59,32839,32926,33384,36056);
        _SFD_CV_INIT_EML_IF(0,1,60,33384,33471,33989,36056);
        _SFD_CV_INIT_EML_IF(0,1,61,33989,34076,34534,36056);
        _SFD_CV_INIT_EML_IF(0,1,62,34534,34621,35144,36056);
        _SFD_CV_INIT_EML_IF(0,1,63,35672,35684,35809,35941);

        {
          static int condStart[] = { 408, 422, 436, 450, 464, 478 };

          static int condEnd[] = { 418, 432, 446, 460, 474, 488 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,408,488,6,0,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 929, 943, 957, 971, 985, 999 };

          static int condEnd[] = { 939, 953, 967, 981, 995, 1009 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,1,929,1009,6,6,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 1461, 1475, 1489, 1503, 1517, 1531 };

          static int condEnd[] = { 1471, 1485, 1499, 1513, 1527, 1541 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,2,1461,1541,6,12,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 1933, 1947, 1961, 1975, 1989, 2003 };

          static int condEnd[] = { 1943, 1957, 1971, 1985, 1999, 2013 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,3,1933,2013,6,18,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 2410, 2424, 2438, 2452, 2466, 2480 };

          static int condEnd[] = { 2420, 2434, 2448, 2462, 2476, 2490 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,4,2410,2490,6,24,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 2882, 2896, 2910, 2924, 2938, 2952 };

          static int condEnd[] = { 2892, 2906, 2920, 2934, 2948, 2962 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,5,2882,2962,6,30,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3354, 3368, 3382, 3396, 3410, 3424 };

          static int condEnd[] = { 3364, 3378, 3392, 3406, 3420, 3434 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,6,3354,3434,6,36,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3876, 3890, 3904, 3918, 3932, 3946 };

          static int condEnd[] = { 3886, 3900, 3914, 3928, 3942, 3956 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,7,3876,3956,6,42,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4418, 4432, 4446, 4460, 4474, 4488 };

          static int condEnd[] = { 4428, 4442, 4456, 4470, 4484, 4498 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,8,4418,4498,6,48,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4892, 4906, 4920, 4934, 4948, 4962 };

          static int condEnd[] = { 4902, 4916, 4930, 4944, 4958, 4972 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,9,4892,4972,6,54,&(condStart[0]),&(condEnd[0]),
                                11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 5372, 5386, 5400, 5414, 5428, 5442 };

          static int condEnd[] = { 5382, 5396, 5410, 5424, 5438, 5452 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,10,5372,5452,6,60,&(condStart[0]),&(condEnd
            [0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 5875, 5889, 5903, 5917, 5931, 5945 };

          static int condEnd[] = { 5885, 5899, 5913, 5927, 5941, 5955 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,11,5875,5955,6,66,&(condStart[0]),&(condEnd
            [0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 6350, 6364, 6378, 6392, 6406, 6420 };

          static int condEnd[] = { 6360, 6374, 6388, 6402, 6416, 6430 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,12,6350,6430,6,72,&(condStart[0]),&(condEnd
            [0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 6830, 6844, 6858, 6872, 6886, 6900 };

          static int condEnd[] = { 6840, 6854, 6868, 6882, 6896, 6910 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,13,6830,6910,6,78,&(condStart[0]),&(condEnd
            [0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 7382, 7396, 7410, 7424, 7438, 7452 };

          static int condEnd[] = { 7392, 7406, 7420, 7434, 7448, 7462 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,14,7382,7462,6,84,&(condStart[0]),&(condEnd
            [0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 7913, 7927, 7941, 7955, 7969, 7983 };

          static int condEnd[] = { 7923, 7937, 7951, 7965, 7979, 7993 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,15,7913,7993,6,90,&(condStart[0]),&(condEnd
            [0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 8449, 8463, 8477, 8491, 8505, 8519 };

          static int condEnd[] = { 8459, 8473, 8487, 8501, 8515, 8529 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,16,8449,8529,6,96,&(condStart[0]),&(condEnd
            [0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 9001, 9015, 9029, 9043, 9057, 9071 };

          static int condEnd[] = { 9011, 9025, 9039, 9053, 9067, 9081 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,17,9001,9081,6,102,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 9532, 9546, 9560, 9574, 9588, 9602 };

          static int condEnd[] = { 9542, 9556, 9570, 9584, 9598, 9612 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,18,9532,9612,6,108,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 10063, 10077, 10091, 10105, 10119, 10133 };

          static int condEnd[] = { 10073, 10087, 10101, 10115, 10129, 10143 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,19,10063,10143,6,114,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 10615, 10629, 10643, 10657, 10671, 10685 };

          static int condEnd[] = { 10625, 10639, 10653, 10667, 10681, 10695 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,20,10615,10695,6,120,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 11146, 11160, 11174, 11188, 11202, 11216 };

          static int condEnd[] = { 11156, 11170, 11184, 11198, 11212, 11226 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,21,11146,11226,6,126,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 11787, 11801, 11815, 11829, 11843, 11857 };

          static int condEnd[] = { 11797, 11811, 11825, 11839, 11853, 11867 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,22,11787,11867,6,132,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 12515, 12529, 12543, 12557, 12571, 12585 };

          static int condEnd[] = { 12525, 12539, 12553, 12567, 12581, 12595 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,23,12515,12595,6,138,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 13206, 13220, 13234, 13248, 13262, 13276 };

          static int condEnd[] = { 13216, 13230, 13244, 13258, 13272, 13286 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,24,13206,13286,6,144,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 13738, 13752, 13766, 13780, 13794, 13808 };

          static int condEnd[] = { 13748, 13762, 13776, 13790, 13804, 13818 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,25,13738,13818,6,150,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 14270, 14284, 14298, 14312, 14326, 14340 };

          static int condEnd[] = { 14280, 14294, 14308, 14322, 14336, 14350 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,26,14270,14350,6,156,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 14807, 14821, 14835, 14849, 14863, 14877 };

          static int condEnd[] = { 14817, 14831, 14845, 14859, 14873, 14887 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,27,14807,14887,6,162,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 15339, 15353, 15367, 15381, 15395, 15409 };

          static int condEnd[] = { 15349, 15363, 15377, 15391, 15405, 15419 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,28,15339,15419,6,168,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 15871, 15885, 15899, 15913, 15927, 15941 };

          static int condEnd[] = { 15881, 15895, 15909, 15923, 15937, 15951 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,29,15871,15951,6,174,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 16408, 16422, 16436, 16450, 16464, 16478 };

          static int condEnd[] = { 16418, 16432, 16446, 16460, 16474, 16488 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,30,16408,16488,6,180,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 16940, 16954, 16968, 16982, 16996, 17010 };

          static int condEnd[] = { 16950, 16964, 16978, 16992, 17006, 17020 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,31,16940,17020,6,186,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 17472, 17486, 17500, 17514, 17528, 17542 };

          static int condEnd[] = { 17482, 17496, 17510, 17524, 17538, 17552 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,32,17472,17552,6,192,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 18009, 18023, 18037, 18051, 18065, 18079 };

          static int condEnd[] = { 18019, 18033, 18047, 18061, 18075, 18089 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,33,18009,18089,6,198,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 18541, 18555, 18569, 18583, 18597, 18611 };

          static int condEnd[] = { 18551, 18565, 18579, 18593, 18607, 18621 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,34,18541,18621,6,204,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 19073, 19087, 19101, 19115, 19129, 19143 };

          static int condEnd[] = { 19083, 19097, 19111, 19125, 19139, 19153 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,35,19073,19153,6,210,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 19610, 19624, 19638, 19652, 19666, 19680 };

          static int condEnd[] = { 19620, 19634, 19648, 19662, 19676, 19690 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,36,19610,19690,6,216,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 20142, 20156, 20170, 20184, 20198, 20212 };

          static int condEnd[] = { 20152, 20166, 20180, 20194, 20208, 20222 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,37,20142,20222,6,222,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 20674, 20688, 20702, 20716, 20730, 20744 };

          static int condEnd[] = { 20684, 20698, 20712, 20726, 20740, 20754 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,38,20674,20754,6,228,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 21211, 21225, 21239, 21253, 21267, 21281 };

          static int condEnd[] = { 21221, 21235, 21249, 21263, 21277, 21291 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,39,21211,21291,6,234,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 21743, 21757, 21771, 21785, 21799, 21813 };

          static int condEnd[] = { 21753, 21767, 21781, 21795, 21809, 21823 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,40,21743,21823,6,240,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 22275, 22289, 22303, 22317, 22331, 22345 };

          static int condEnd[] = { 22285, 22299, 22313, 22327, 22341, 22355 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,41,22275,22355,6,246,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 22912, 22926, 22940, 22954, 22968, 22982 };

          static int condEnd[] = { 22922, 22936, 22950, 22964, 22978, 22992 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,42,22912,22992,6,252,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 23609, 23623, 23637, 23651, 23665, 23679 };

          static int condEnd[] = { 23619, 23633, 23647, 23661, 23675, 23689 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,43,23609,23689,6,258,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 24246, 24260, 24274, 24288, 24302, 24316 };

          static int condEnd[] = { 24256, 24270, 24284, 24298, 24312, 24326 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,44,24246,24326,6,264,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 24888, 24902, 24916, 24930, 24944, 24958 };

          static int condEnd[] = { 24898, 24912, 24926, 24940, 24954, 24968 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,45,24888,24968,6,270,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 25525, 25539, 25553, 25567, 25581, 25595 };

          static int condEnd[] = { 25535, 25549, 25563, 25577, 25591, 25605 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,46,25525,25605,6,276,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 26162, 26176, 26190, 26204, 26218, 26232 };

          static int condEnd[] = { 26172, 26186, 26200, 26214, 26228, 26242 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,47,26162,26242,6,282,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 26804, 26818, 26832, 26846, 26860, 26874 };

          static int condEnd[] = { 26814, 26828, 26842, 26856, 26870, 26884 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,48,26804,26884,6,288,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 27337, 27351, 27365, 27379, 27393, 27407 };

          static int condEnd[] = { 27347, 27361, 27375, 27389, 27403, 27417 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,49,27337,27417,6,294,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 27870, 27884, 27898, 27912, 27926, 27940 };

          static int condEnd[] = { 27880, 27894, 27908, 27922, 27936, 27950 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,50,27870,27950,6,300,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 28408, 28422, 28436, 28450, 28464, 28478 };

          static int condEnd[] = { 28418, 28432, 28446, 28460, 28474, 28488 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,51,28408,28488,6,306,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 28941, 28955, 28969, 28983, 28997, 29011 };

          static int condEnd[] = { 28951, 28965, 28979, 28993, 29007, 29021 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,52,28941,29021,6,312,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 29474, 29488, 29502, 29516, 29530, 29544 };

          static int condEnd[] = { 29484, 29498, 29512, 29526, 29540, 29554 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,53,29474,29554,6,318,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 30012, 30026, 30040, 30054, 30068, 30082 };

          static int condEnd[] = { 30022, 30036, 30050, 30064, 30078, 30092 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,54,30012,30092,6,324,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 30545, 30559, 30573, 30587, 30601, 30615 };

          static int condEnd[] = { 30555, 30569, 30583, 30597, 30611, 30625 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,55,30545,30625,6,330,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 31078, 31092, 31106, 31120, 31134, 31148 };

          static int condEnd[] = { 31088, 31102, 31116, 31130, 31144, 31158 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,56,31078,31158,6,336,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 31696, 31710, 31724, 31738, 31752, 31766 };

          static int condEnd[] = { 31706, 31720, 31734, 31748, 31762, 31776 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,57,31696,31776,6,342,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 32301, 32315, 32329, 32343, 32357, 32371 };

          static int condEnd[] = { 32311, 32325, 32339, 32353, 32367, 32381 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,58,32301,32381,6,348,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 32846, 32860, 32874, 32888, 32902, 32916 };

          static int condEnd[] = { 32856, 32870, 32884, 32898, 32912, 32926 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,59,32846,32926,6,354,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 33391, 33405, 33419, 33433, 33447, 33461 };

          static int condEnd[] = { 33401, 33415, 33429, 33443, 33457, 33471 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,60,33391,33471,6,360,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 33996, 34010, 34024, 34038, 34052, 34066 };

          static int condEnd[] = { 34006, 34020, 34034, 34048, 34062, 34076 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,61,33996,34076,6,366,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 34541, 34555, 34569, 34583, 34597, 34611 };

          static int condEnd[] = { 34551, 34565, 34579, 34593, 34607, 34621 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3, 5, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,62,34541,34621,6,372,&(condStart[0]),
                                &(condEnd[0]),11,&(pfixExpr[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_b_sf_marshallOut,(MexInFcnForType)
          c84_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c84_sf_marshallOut,(MexInFcnForType)c84_sf_marshallIn);

        {
          real32_T *c84_trq_dem_lf;
          real32_T *c84_trq_dem_lm;
          real32_T *c84_trq_dem_lr;
          real32_T *c84_trq_dem_rf;
          real32_T *c84_trq_dem_rm;
          real32_T *c84_trq_dem_rr;
          real32_T *c84_bra_pre_l;
          real32_T *c84_bra_pre_r;
          real32_T *c84_brake_dem;
          real32_T *c84_flag_lf;
          real32_T *c84_flag_lm;
          real32_T *c84_flag_lr;
          real32_T *c84_trq_out_lf;
          real32_T *c84_trq_out_lm;
          real32_T *c84_flag_rf;
          real32_T *c84_flag_rm;
          real32_T *c84_flag_rr;
          real32_T *c84_trq_out_lr;
          real32_T *c84_trq_out_rf;
          real32_T *c84_trq_out_rm;
          real32_T *c84_trq_out_rr;
          real32_T *c84_trq_pid_lf;
          real32_T *c84_trq_pid_lm;
          real32_T *c84_trq_pid_lr;
          real32_T *c84_trq_pid_rf;
          real32_T *c84_trq_pid_rm;
          real32_T *c84_trq_pid_rr;
          real32_T *c84_brapre_out_l;
          real32_T *c84_brapre_out_r;
          int8_T *c84_mode;
          c84_mode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
          c84_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            8);
          c84_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            7);
          c84_trq_pid_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 20);
          c84_trq_pid_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 19);
          c84_trq_pid_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 18);
          c84_trq_pid_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
          c84_trq_pid_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
          c84_trq_pid_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
          c84_trq_out_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c84_trq_out_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c84_trq_out_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c84_trq_out_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c84_flag_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
          c84_flag_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 13);
          c84_flag_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 12);
          c84_trq_out_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c84_trq_out_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c84_flag_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 11);
          c84_flag_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 10);
          c84_flag_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c84_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c84_bra_pre_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c84_bra_pre_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c84_trq_dem_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c84_trq_dem_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c84_trq_dem_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c84_trq_dem_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c84_trq_dem_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c84_trq_dem_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c84_trq_dem_lf);
          _SFD_SET_DATA_VALUE_PTR(1U, c84_trq_dem_lm);
          _SFD_SET_DATA_VALUE_PTR(2U, c84_trq_dem_lr);
          _SFD_SET_DATA_VALUE_PTR(3U, c84_trq_dem_rf);
          _SFD_SET_DATA_VALUE_PTR(4U, c84_trq_dem_rm);
          _SFD_SET_DATA_VALUE_PTR(5U, c84_trq_dem_rr);
          _SFD_SET_DATA_VALUE_PTR(6U, c84_bra_pre_l);
          _SFD_SET_DATA_VALUE_PTR(7U, c84_bra_pre_r);
          _SFD_SET_DATA_VALUE_PTR(8U, c84_brake_dem);
          _SFD_SET_DATA_VALUE_PTR(9U, c84_flag_lf);
          _SFD_SET_DATA_VALUE_PTR(10U, c84_flag_lm);
          _SFD_SET_DATA_VALUE_PTR(11U, c84_flag_lr);
          _SFD_SET_DATA_VALUE_PTR(12U, c84_trq_out_lf);
          _SFD_SET_DATA_VALUE_PTR(13U, c84_trq_out_lm);
          _SFD_SET_DATA_VALUE_PTR(14U, c84_flag_rf);
          _SFD_SET_DATA_VALUE_PTR(15U, c84_flag_rm);
          _SFD_SET_DATA_VALUE_PTR(16U, c84_flag_rr);
          _SFD_SET_DATA_VALUE_PTR(17U, c84_trq_out_lr);
          _SFD_SET_DATA_VALUE_PTR(18U, c84_trq_out_rf);
          _SFD_SET_DATA_VALUE_PTR(19U, c84_trq_out_rm);
          _SFD_SET_DATA_VALUE_PTR(20U, c84_trq_out_rr);
          _SFD_SET_DATA_VALUE_PTR(21U, c84_trq_pid_lf);
          _SFD_SET_DATA_VALUE_PTR(22U, c84_trq_pid_lm);
          _SFD_SET_DATA_VALUE_PTR(23U, c84_trq_pid_lr);
          _SFD_SET_DATA_VALUE_PTR(24U, c84_trq_pid_rf);
          _SFD_SET_DATA_VALUE_PTR(25U, c84_trq_pid_rm);
          _SFD_SET_DATA_VALUE_PTR(26U, c84_trq_pid_rr);
          _SFD_SET_DATA_VALUE_PTR(27U, c84_brapre_out_l);
          _SFD_SET_DATA_VALUE_PTR(28U, c84_brapre_out_r);
          _SFD_SET_DATA_VALUE_PTR(29U, c84_mode);
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
  return "mkcHvi3WKzBy40TYkDXjoD";
}

static void sf_opaque_initialize_c84_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
  initialize_c84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c84_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  enable_c84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c84_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  disable_c84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c84_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  sf_gateway_c84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c84_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
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

extern void sf_internal_set_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
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
    sf_get_sim_state_info_c84_six_plus_six_AcmsteeringV09_main_1lf();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf(SimStruct* S)
{
  return sf_internal_get_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf(S);
}

static void sf_opaque_set_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf(S, st);
}

static void sf_opaque_terminate_c84_six_plus_six_AcmsteeringV09_main_1lf(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    }

    finalize_c84_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
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
  initSimStructsc84_six_plus_six_AcmsteeringV09_main_1lf
    ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c84_six_plus_six_AcmsteeringV09_main_1lf
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
    initialize_params_c84_six_plus_six_AcmsteeringV09_main_1lf
      ((SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c84_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *
  S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_1lf_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      84);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,84,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,84,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,84);
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
      ssSetInputPortOptimOpts(S, 14, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 15, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 16, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 17, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 18, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 19, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 20, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,84,21);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,84,9);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=9; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 21; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,84);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2660928461U));
  ssSetChecksum1(S,(375916113U));
  ssSetChecksum2(S,(4282422081U));
  ssSetChecksum3(S,(1040881115U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c84_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c84_six_plus_six_AcmsteeringV09_main_1lf(SimStruct *S)
{
  SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct *)
    utMalloc(sizeof(SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc84_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c84_six_plus_six_AcmsteeringV09_main_1lf;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c84_six_plus_six_AcmsteeringV09_main_1lf;
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

void c84_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c84_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c84_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c84_six_plus_six_AcmsteeringV09_main_1lf(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c84_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
