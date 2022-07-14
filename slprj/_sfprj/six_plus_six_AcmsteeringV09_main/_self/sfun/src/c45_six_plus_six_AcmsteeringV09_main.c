/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_sfun.h"
#include "c45_six_plus_six_AcmsteeringV09_main.h"
#include "mwmathutil.h"
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
static const char * c45_debug_family_names[56] = { "bratrq_mot_lf1",
  "bratrq_mot_lf2", "bratrq_mot_lm1", "bratrq_mot_lm2", "bratrq_mot_lr1",
  "bratrq_mot_lr2", "bratrq_mot_rf1", "bratrq_mot_rf2", "bratrq_mot_rm1",
  "bratrq_mot_rm2", "bratrq_mot_rr1", "bratrq_mot_rr2", "nargin", "nargout",
  "bratrq_dem_lf", "bratrq_dem_lm", "bratrq_dem_lr", "bratrq_dem_rf",
  "bratrq_dem_rm", "bratrq_dem_rr", "pwr_chg_bat", "pwr_chg_bat1",
  "pwr_chg_bat2", "trqlimL_dig_lf", "trqlimL_dig_lm", "trqlimL_dig_lr",
  "trqlimL_dig_rf", "trqlimL_dig_rm", "trqlimL_dig_rr", "speed_act_lf",
  "speed_act_lm", "speed_act_lr", "speed_act_rf", "speed_act_rm", "speed_act_rr",
  "trqlim_map_lf", "trqlim_map_lm", "trqlim_map_lr", "trqlim_map_rf",
  "trqlim_map_rm", "trqlim_map_rr", "tras_ratio", "guzhang_lf", "guzhang_lm",
  "guzhang_lr", "guzhang_rf", "guzhang_rm", "guzhang_rr", "bratrq_mot_lf",
  "bratrq_mot_lm", "bratrq_mot_lr", "bratrq_mot_rf", "bratrq_mot_rm",
  "bratrq_mot_rr", "brapre_out_l", "brapre_out_r" };

/* Function Declarations */
static void initialize_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initialize_params_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void enable_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void disable_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c45_update_debugger_state_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void set_sim_state_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_st);
static void finalize_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void sf_gateway_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c45_chartstep_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initSimStructsc45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c45_machineNumber, uint32_T
  c45_chartNumber, uint32_T c45_instanceNumber);
static const mxArray *c45_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData);
static real32_T c45_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_brapre_out_r, const char_T *c45_identifier);
static real32_T c45_b_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId);
static void c45_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c45_mxArrayInData, const char_T *c45_varName, void *c45_outData);
static const mxArray *c45_b_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData);
static const mxArray *c45_c_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData);
static real_T c45_c_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId);
static void c45_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c45_mxArrayInData, const char_T *c45_varName, void *c45_outData);
static void c45_info_helper(const mxArray **c45_info);
static const mxArray *c45_emlrt_marshallOut(const char * c45_u);
static const mxArray *c45_b_emlrt_marshallOut(const uint32_T c45_u);
static void c45_eml_scalar_eg
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c45_b_eml_scalar_eg
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *c45_d_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData);
static int32_T c45_d_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId);
static void c45_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c45_mxArrayInData, const char_T *c45_varName, void *c45_outData);
static uint8_T c45_e_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_b_is_active_c45_six_plus_six_AcmsteeringV09_main, const char_T
   *c45_identifier);
static uint8_T c45_f_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId);
static void init_dsm_address_info
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  chartInstance->c45_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c45_is_active_c45_six_plus_six_AcmsteeringV09_main = 0U;
}

static void initialize_params_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c45_update_debugger_state_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  const mxArray *c45_st;
  const mxArray *c45_y = NULL;
  real32_T c45_hoistedGlobal;
  real32_T c45_u;
  const mxArray *c45_b_y = NULL;
  real32_T c45_b_hoistedGlobal;
  real32_T c45_b_u;
  const mxArray *c45_c_y = NULL;
  real32_T c45_c_hoistedGlobal;
  real32_T c45_c_u;
  const mxArray *c45_d_y = NULL;
  real32_T c45_d_hoistedGlobal;
  real32_T c45_d_u;
  const mxArray *c45_e_y = NULL;
  real32_T c45_e_hoistedGlobal;
  real32_T c45_e_u;
  const mxArray *c45_f_y = NULL;
  real32_T c45_f_hoistedGlobal;
  real32_T c45_f_u;
  const mxArray *c45_g_y = NULL;
  real32_T c45_g_hoistedGlobal;
  real32_T c45_g_u;
  const mxArray *c45_h_y = NULL;
  real32_T c45_h_hoistedGlobal;
  real32_T c45_h_u;
  const mxArray *c45_i_y = NULL;
  uint8_T c45_i_hoistedGlobal;
  uint8_T c45_i_u;
  const mxArray *c45_j_y = NULL;
  real32_T *c45_brapre_out_l;
  real32_T *c45_brapre_out_r;
  real32_T *c45_bratrq_mot_lf;
  real32_T *c45_bratrq_mot_lm;
  real32_T *c45_bratrq_mot_lr;
  real32_T *c45_bratrq_mot_rf;
  real32_T *c45_bratrq_mot_rm;
  real32_T *c45_bratrq_mot_rr;
  c45_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c45_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c45_bratrq_mot_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c45_bratrq_mot_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c45_bratrq_mot_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c45_bratrq_mot_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c45_bratrq_mot_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c45_bratrq_mot_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c45_st = NULL;
  c45_st = NULL;
  c45_y = NULL;
  sf_mex_assign(&c45_y, sf_mex_createcellmatrix(9, 1), false);
  c45_hoistedGlobal = *c45_brapre_out_l;
  c45_u = c45_hoistedGlobal;
  c45_b_y = NULL;
  sf_mex_assign(&c45_b_y, sf_mex_create("y", &c45_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 0, c45_b_y);
  c45_b_hoistedGlobal = *c45_brapre_out_r;
  c45_b_u = c45_b_hoistedGlobal;
  c45_c_y = NULL;
  sf_mex_assign(&c45_c_y, sf_mex_create("y", &c45_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 1, c45_c_y);
  c45_c_hoistedGlobal = *c45_bratrq_mot_lf;
  c45_c_u = c45_c_hoistedGlobal;
  c45_d_y = NULL;
  sf_mex_assign(&c45_d_y, sf_mex_create("y", &c45_c_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 2, c45_d_y);
  c45_d_hoistedGlobal = *c45_bratrq_mot_lm;
  c45_d_u = c45_d_hoistedGlobal;
  c45_e_y = NULL;
  sf_mex_assign(&c45_e_y, sf_mex_create("y", &c45_d_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 3, c45_e_y);
  c45_e_hoistedGlobal = *c45_bratrq_mot_lr;
  c45_e_u = c45_e_hoistedGlobal;
  c45_f_y = NULL;
  sf_mex_assign(&c45_f_y, sf_mex_create("y", &c45_e_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 4, c45_f_y);
  c45_f_hoistedGlobal = *c45_bratrq_mot_rf;
  c45_f_u = c45_f_hoistedGlobal;
  c45_g_y = NULL;
  sf_mex_assign(&c45_g_y, sf_mex_create("y", &c45_f_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 5, c45_g_y);
  c45_g_hoistedGlobal = *c45_bratrq_mot_rm;
  c45_g_u = c45_g_hoistedGlobal;
  c45_h_y = NULL;
  sf_mex_assign(&c45_h_y, sf_mex_create("y", &c45_g_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 6, c45_h_y);
  c45_h_hoistedGlobal = *c45_bratrq_mot_rr;
  c45_h_u = c45_h_hoistedGlobal;
  c45_i_y = NULL;
  sf_mex_assign(&c45_i_y, sf_mex_create("y", &c45_h_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 7, c45_i_y);
  c45_i_hoistedGlobal =
    chartInstance->c45_is_active_c45_six_plus_six_AcmsteeringV09_main;
  c45_i_u = c45_i_hoistedGlobal;
  c45_j_y = NULL;
  sf_mex_assign(&c45_j_y, sf_mex_create("y", &c45_i_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c45_y, 8, c45_j_y);
  sf_mex_assign(&c45_st, c45_y, false);
  return c45_st;
}

static void set_sim_state_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_st)
{
  const mxArray *c45_u;
  real32_T *c45_brapre_out_l;
  real32_T *c45_brapre_out_r;
  real32_T *c45_bratrq_mot_lf;
  real32_T *c45_bratrq_mot_lm;
  real32_T *c45_bratrq_mot_lr;
  real32_T *c45_bratrq_mot_rf;
  real32_T *c45_bratrq_mot_rm;
  real32_T *c45_bratrq_mot_rr;
  c45_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c45_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c45_bratrq_mot_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c45_bratrq_mot_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c45_bratrq_mot_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c45_bratrq_mot_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c45_bratrq_mot_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c45_bratrq_mot_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c45_doneDoubleBufferReInit = true;
  c45_u = sf_mex_dup(c45_st);
  *c45_brapre_out_l = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 0)), "brapre_out_l");
  *c45_brapre_out_r = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 1)), "brapre_out_r");
  *c45_bratrq_mot_lf = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 2)), "bratrq_mot_lf");
  *c45_bratrq_mot_lm = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 3)), "bratrq_mot_lm");
  *c45_bratrq_mot_lr = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 4)), "bratrq_mot_lr");
  *c45_bratrq_mot_rf = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 5)), "bratrq_mot_rf");
  *c45_bratrq_mot_rm = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 6)), "bratrq_mot_rm");
  *c45_bratrq_mot_rr = c45_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c45_u, 7)), "bratrq_mot_rr");
  chartInstance->c45_is_active_c45_six_plus_six_AcmsteeringV09_main =
    c45_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c45_u, 8)),
    "is_active_c45_six_plus_six_AcmsteeringV09_main");
  sf_mex_destroy(&c45_u);
  c45_update_debugger_state_c45_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c45_st);
}

static void finalize_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real_T *c45_bratrq_dem_lf;
  real_T *c45_bratrq_dem_lm;
  real_T *c45_bratrq_dem_lr;
  real_T *c45_bratrq_dem_rf;
  real_T *c45_bratrq_dem_rm;
  real_T *c45_bratrq_dem_rr;
  real32_T *c45_pwr_chg_bat;
  real32_T *c45_bratrq_mot_lf;
  real32_T *c45_bratrq_mot_lm;
  real32_T *c45_pwr_chg_bat1;
  real32_T *c45_pwr_chg_bat2;
  real32_T *c45_trqlimL_dig_lf;
  real32_T *c45_bratrq_mot_lr;
  real32_T *c45_bratrq_mot_rf;
  real32_T *c45_bratrq_mot_rm;
  real32_T *c45_bratrq_mot_rr;
  real32_T *c45_trqlimL_dig_lm;
  real32_T *c45_trqlimL_dig_lr;
  real32_T *c45_trqlimL_dig_rf;
  real32_T *c45_trqlimL_dig_rm;
  real32_T *c45_trqlimL_dig_rr;
  real32_T *c45_speed_act_lf;
  real32_T *c45_speed_act_lm;
  real32_T *c45_speed_act_lr;
  real32_T *c45_speed_act_rf;
  real32_T *c45_speed_act_rm;
  real32_T *c45_speed_act_rr;
  real32_T *c45_trqlim_map_lf;
  real32_T *c45_brapre_out_l;
  real32_T *c45_brapre_out_r;
  real32_T *c45_trqlim_map_lm;
  real32_T *c45_trqlim_map_lr;
  real32_T *c45_trqlim_map_rf;
  real32_T *c45_trqlim_map_rm;
  real32_T *c45_trqlim_map_rr;
  real32_T *c45_tras_ratio;
  boolean_T *c45_guzhang_lf;
  boolean_T *c45_guzhang_lm;
  boolean_T *c45_guzhang_lr;
  boolean_T *c45_guzhang_rf;
  boolean_T *c45_guzhang_rm;
  boolean_T *c45_guzhang_rr;
  c45_guzhang_rr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 33);
  c45_guzhang_rm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 32);
  c45_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 31);
  c45_guzhang_lr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 30);
  c45_guzhang_lm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 29);
  c45_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 28);
  c45_tras_ratio = (real32_T *)ssGetInputPortSignal(chartInstance->S, 27);
  c45_trqlim_map_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 26);
  c45_trqlim_map_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 25);
  c45_trqlim_map_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 24);
  c45_trqlim_map_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 23);
  c45_trqlim_map_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c45_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c45_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c45_trqlim_map_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 21);
  c45_speed_act_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 20);
  c45_speed_act_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c45_speed_act_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c45_speed_act_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c45_speed_act_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c45_speed_act_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c45_trqlimL_dig_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c45_trqlimL_dig_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c45_trqlimL_dig_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c45_trqlimL_dig_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c45_trqlimL_dig_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c45_bratrq_mot_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c45_bratrq_mot_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c45_bratrq_mot_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c45_bratrq_mot_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c45_trqlimL_dig_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c45_pwr_chg_bat2 = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c45_pwr_chg_bat1 = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c45_bratrq_mot_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c45_bratrq_mot_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c45_pwr_chg_bat = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c45_bratrq_dem_rr = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c45_bratrq_dem_rm = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c45_bratrq_dem_rf = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c45_bratrq_dem_lr = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c45_bratrq_dem_lm = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c45_bratrq_dem_lf = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 44U, chartInstance->c45_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c45_bratrq_dem_lf, 0U);
  _SFD_DATA_RANGE_CHECK(*c45_bratrq_dem_lm, 1U);
  _SFD_DATA_RANGE_CHECK(*c45_bratrq_dem_lr, 2U);
  _SFD_DATA_RANGE_CHECK(*c45_bratrq_dem_rf, 3U);
  _SFD_DATA_RANGE_CHECK(*c45_bratrq_dem_rm, 4U);
  _SFD_DATA_RANGE_CHECK(*c45_bratrq_dem_rr, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_pwr_chg_bat, 6U);
  chartInstance->c45_sfEvent = CALL_EVENT;
  c45_chartstep_c45_six_plus_six_AcmsteeringV09_main(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_mainMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_bratrq_mot_lf, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_bratrq_mot_lm, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_pwr_chg_bat1, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_pwr_chg_bat2, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlimL_dig_lf, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_bratrq_mot_lr, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_bratrq_mot_rf, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_bratrq_mot_rm, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_bratrq_mot_rr, 15U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlimL_dig_lm, 16U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlimL_dig_lr, 17U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlimL_dig_rf, 18U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlimL_dig_rm, 19U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlimL_dig_rr, 20U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_speed_act_lf, 21U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_speed_act_lm, 22U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_speed_act_lr, 23U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_speed_act_rf, 24U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_speed_act_rm, 25U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_speed_act_rr, 26U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlim_map_lf, 27U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_brapre_out_l, 28U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_brapre_out_r, 29U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlim_map_lm, 30U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlim_map_lr, 31U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlim_map_rf, 32U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlim_map_rm, 33U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_trqlim_map_rr, 34U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_tras_ratio, 35U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_guzhang_lf, 36U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_guzhang_lm, 37U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_guzhang_lr, 38U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_guzhang_rf, 39U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_guzhang_rm, 40U);
  _SFD_DATA_RANGE_CHECK((real_T)*c45_guzhang_rr, 41U);
}

static void c45_chartstep_c45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real_T c45_hoistedGlobal;
  real_T c45_b_hoistedGlobal;
  real_T c45_c_hoistedGlobal;
  real_T c45_d_hoistedGlobal;
  real_T c45_e_hoistedGlobal;
  real_T c45_f_hoistedGlobal;
  real32_T c45_g_hoistedGlobal;
  real32_T c45_h_hoistedGlobal;
  real32_T c45_i_hoistedGlobal;
  real32_T c45_j_hoistedGlobal;
  real32_T c45_k_hoistedGlobal;
  real32_T c45_l_hoistedGlobal;
  real32_T c45_m_hoistedGlobal;
  real32_T c45_n_hoistedGlobal;
  real32_T c45_o_hoistedGlobal;
  real32_T c45_p_hoistedGlobal;
  real32_T c45_q_hoistedGlobal;
  real32_T c45_r_hoistedGlobal;
  real32_T c45_s_hoistedGlobal;
  real32_T c45_t_hoistedGlobal;
  real32_T c45_u_hoistedGlobal;
  real32_T c45_v_hoistedGlobal;
  real32_T c45_w_hoistedGlobal;
  real32_T c45_x_hoistedGlobal;
  real32_T c45_y_hoistedGlobal;
  real32_T c45_ab_hoistedGlobal;
  real32_T c45_bb_hoistedGlobal;
  real32_T c45_cb_hoistedGlobal;
  boolean_T c45_db_hoistedGlobal;
  boolean_T c45_eb_hoistedGlobal;
  boolean_T c45_fb_hoistedGlobal;
  boolean_T c45_gb_hoistedGlobal;
  boolean_T c45_hb_hoistedGlobal;
  boolean_T c45_ib_hoistedGlobal;
  real_T c45_bratrq_dem_lf;
  real_T c45_bratrq_dem_lm;
  real_T c45_bratrq_dem_lr;
  real_T c45_bratrq_dem_rf;
  real_T c45_bratrq_dem_rm;
  real_T c45_bratrq_dem_rr;
  real32_T c45_pwr_chg_bat;
  real32_T c45_pwr_chg_bat1;
  real32_T c45_pwr_chg_bat2;
  real32_T c45_trqlimL_dig_lf;
  real32_T c45_trqlimL_dig_lm;
  real32_T c45_trqlimL_dig_lr;
  real32_T c45_trqlimL_dig_rf;
  real32_T c45_trqlimL_dig_rm;
  real32_T c45_trqlimL_dig_rr;
  real32_T c45_speed_act_lf;
  real32_T c45_speed_act_lm;
  real32_T c45_speed_act_lr;
  real32_T c45_speed_act_rf;
  real32_T c45_speed_act_rm;
  real32_T c45_speed_act_rr;
  real32_T c45_trqlim_map_lf;
  real32_T c45_trqlim_map_lm;
  real32_T c45_trqlim_map_lr;
  real32_T c45_trqlim_map_rf;
  real32_T c45_trqlim_map_rm;
  real32_T c45_trqlim_map_rr;
  real32_T c45_tras_ratio;
  boolean_T c45_guzhang_lf;
  boolean_T c45_guzhang_lm;
  boolean_T c45_guzhang_lr;
  boolean_T c45_guzhang_rf;
  boolean_T c45_guzhang_rm;
  boolean_T c45_guzhang_rr;
  uint32_T c45_debug_family_var_map[56];
  real32_T c45_bratrq_mot_lf1;
  real32_T c45_bratrq_mot_lf2;
  real32_T c45_bratrq_mot_lm1;
  real32_T c45_bratrq_mot_lm2;
  real32_T c45_bratrq_mot_lr1;
  real32_T c45_bratrq_mot_lr2;
  real32_T c45_bratrq_mot_rf1;
  real32_T c45_bratrq_mot_rf2;
  real32_T c45_bratrq_mot_rm1;
  real32_T c45_bratrq_mot_rm2;
  real32_T c45_bratrq_mot_rr1;
  real32_T c45_bratrq_mot_rr2;
  real_T c45_nargin = 34.0;
  real_T c45_nargout = 8.0;
  real32_T c45_bratrq_mot_lf;
  real32_T c45_bratrq_mot_lm;
  real32_T c45_bratrq_mot_lr;
  real32_T c45_bratrq_mot_rf;
  real32_T c45_bratrq_mot_rm;
  real32_T c45_bratrq_mot_rr;
  real32_T c45_brapre_out_l;
  real32_T c45_brapre_out_r;
  real_T c45_A;
  real32_T c45_B;
  real_T c45_x;
  real32_T c45_y;
  real_T c45_b_x;
  real32_T c45_b_y;
  real_T c45_c_x;
  real32_T c45_c_y;
  real32_T c45_b_A;
  real32_T c45_d_x;
  real32_T c45_e_x;
  real32_T c45_f_x;
  real32_T c45_d_y;
  real32_T c45_b;
  real32_T c45_e_y;
  real32_T c45_c_A;
  real32_T c45_b_B;
  real32_T c45_g_x;
  real32_T c45_f_y;
  real32_T c45_h_x;
  real32_T c45_g_y;
  real32_T c45_i_x;
  real32_T c45_h_y;
  real32_T c45_varargin_1;
  real32_T c45_varargin_2;
  real32_T c45_b_varargin_2;
  real32_T c45_varargin_3;
  real32_T c45_j_x;
  real32_T c45_i_y;
  real32_T c45_k_x;
  real32_T c45_j_y;
  real32_T c45_xk;
  real32_T c45_yk;
  real32_T c45_l_x;
  real32_T c45_k_y;
  real32_T c45_minval;
  real32_T c45_b_varargin_1;
  real32_T c45_c_varargin_2;
  real32_T c45_d_varargin_2;
  real32_T c45_b_varargin_3;
  real32_T c45_m_x;
  real32_T c45_l_y;
  real32_T c45_n_x;
  real32_T c45_m_y;
  real32_T c45_b_xk;
  real32_T c45_b_yk;
  real32_T c45_o_x;
  real32_T c45_n_y;
  real_T c45_d_A;
  real32_T c45_c_B;
  real_T c45_p_x;
  real32_T c45_o_y;
  real_T c45_q_x;
  real32_T c45_p_y;
  real_T c45_r_x;
  real32_T c45_q_y;
  real32_T c45_e_A;
  real32_T c45_s_x;
  real32_T c45_t_x;
  real32_T c45_u_x;
  real32_T c45_r_y;
  real32_T c45_b_b;
  real32_T c45_s_y;
  real32_T c45_f_A;
  real32_T c45_d_B;
  real32_T c45_v_x;
  real32_T c45_t_y;
  real32_T c45_w_x;
  real32_T c45_u_y;
  real32_T c45_x_x;
  real32_T c45_v_y;
  real32_T c45_c_varargin_1;
  real32_T c45_e_varargin_2;
  real32_T c45_f_varargin_2;
  real32_T c45_c_varargin_3;
  real32_T c45_y_x;
  real32_T c45_w_y;
  real32_T c45_ab_x;
  real32_T c45_x_y;
  real32_T c45_c_xk;
  real32_T c45_c_yk;
  real32_T c45_bb_x;
  real32_T c45_y_y;
  real32_T c45_b_minval;
  real32_T c45_d_varargin_1;
  real32_T c45_g_varargin_2;
  real32_T c45_h_varargin_2;
  real32_T c45_d_varargin_3;
  real32_T c45_cb_x;
  real32_T c45_ab_y;
  real32_T c45_db_x;
  real32_T c45_bb_y;
  real32_T c45_d_xk;
  real32_T c45_d_yk;
  real32_T c45_eb_x;
  real32_T c45_cb_y;
  real_T c45_g_A;
  real32_T c45_e_B;
  real_T c45_fb_x;
  real32_T c45_db_y;
  real_T c45_gb_x;
  real32_T c45_eb_y;
  real_T c45_hb_x;
  real32_T c45_fb_y;
  real32_T c45_h_A;
  real32_T c45_ib_x;
  real32_T c45_jb_x;
  real32_T c45_kb_x;
  real32_T c45_gb_y;
  real32_T c45_c_b;
  real32_T c45_hb_y;
  real32_T c45_i_A;
  real32_T c45_f_B;
  real32_T c45_lb_x;
  real32_T c45_ib_y;
  real32_T c45_mb_x;
  real32_T c45_jb_y;
  real32_T c45_nb_x;
  real32_T c45_kb_y;
  real32_T c45_e_varargin_1;
  real32_T c45_i_varargin_2;
  real32_T c45_j_varargin_2;
  real32_T c45_e_varargin_3;
  real32_T c45_ob_x;
  real32_T c45_lb_y;
  real32_T c45_pb_x;
  real32_T c45_mb_y;
  real32_T c45_e_xk;
  real32_T c45_e_yk;
  real32_T c45_qb_x;
  real32_T c45_nb_y;
  real32_T c45_c_minval;
  real32_T c45_f_varargin_1;
  real32_T c45_k_varargin_2;
  real32_T c45_l_varargin_2;
  real32_T c45_f_varargin_3;
  real32_T c45_rb_x;
  real32_T c45_ob_y;
  real32_T c45_sb_x;
  real32_T c45_pb_y;
  real32_T c45_f_xk;
  real32_T c45_f_yk;
  real32_T c45_tb_x;
  real32_T c45_qb_y;
  real_T c45_j_A;
  real32_T c45_g_B;
  real_T c45_ub_x;
  real32_T c45_rb_y;
  real_T c45_vb_x;
  real32_T c45_sb_y;
  real_T c45_wb_x;
  real32_T c45_tb_y;
  real32_T c45_k_A;
  real32_T c45_xb_x;
  real32_T c45_yb_x;
  real32_T c45_ac_x;
  real32_T c45_ub_y;
  real32_T c45_d_b;
  real32_T c45_vb_y;
  real32_T c45_l_A;
  real32_T c45_h_B;
  real32_T c45_bc_x;
  real32_T c45_wb_y;
  real32_T c45_cc_x;
  real32_T c45_xb_y;
  real32_T c45_dc_x;
  real32_T c45_yb_y;
  real32_T c45_g_varargin_1;
  real32_T c45_m_varargin_2;
  real32_T c45_n_varargin_2;
  real32_T c45_g_varargin_3;
  real32_T c45_ec_x;
  real32_T c45_ac_y;
  real32_T c45_fc_x;
  real32_T c45_bc_y;
  real32_T c45_g_xk;
  real32_T c45_g_yk;
  real32_T c45_gc_x;
  real32_T c45_cc_y;
  real32_T c45_d_minval;
  real32_T c45_h_varargin_1;
  real32_T c45_o_varargin_2;
  real32_T c45_p_varargin_2;
  real32_T c45_h_varargin_3;
  real32_T c45_hc_x;
  real32_T c45_dc_y;
  real32_T c45_ic_x;
  real32_T c45_ec_y;
  real32_T c45_h_xk;
  real32_T c45_h_yk;
  real32_T c45_jc_x;
  real32_T c45_fc_y;
  real_T c45_m_A;
  real32_T c45_i_B;
  real_T c45_kc_x;
  real32_T c45_gc_y;
  real_T c45_lc_x;
  real32_T c45_hc_y;
  real_T c45_mc_x;
  real32_T c45_ic_y;
  real32_T c45_n_A;
  real32_T c45_nc_x;
  real32_T c45_oc_x;
  real32_T c45_pc_x;
  real32_T c45_jc_y;
  real32_T c45_e_b;
  real32_T c45_kc_y;
  real32_T c45_o_A;
  real32_T c45_j_B;
  real32_T c45_qc_x;
  real32_T c45_lc_y;
  real32_T c45_rc_x;
  real32_T c45_mc_y;
  real32_T c45_sc_x;
  real32_T c45_nc_y;
  real32_T c45_i_varargin_1;
  real32_T c45_q_varargin_2;
  real32_T c45_r_varargin_2;
  real32_T c45_i_varargin_3;
  real32_T c45_tc_x;
  real32_T c45_oc_y;
  real32_T c45_uc_x;
  real32_T c45_pc_y;
  real32_T c45_i_xk;
  real32_T c45_i_yk;
  real32_T c45_vc_x;
  real32_T c45_qc_y;
  real32_T c45_e_minval;
  real32_T c45_j_varargin_1;
  real32_T c45_s_varargin_2;
  real32_T c45_t_varargin_2;
  real32_T c45_j_varargin_3;
  real32_T c45_wc_x;
  real32_T c45_rc_y;
  real32_T c45_xc_x;
  real32_T c45_sc_y;
  real32_T c45_j_xk;
  real32_T c45_j_yk;
  real32_T c45_yc_x;
  real32_T c45_tc_y;
  real_T c45_p_A;
  real32_T c45_k_B;
  real_T c45_ad_x;
  real32_T c45_uc_y;
  real_T c45_bd_x;
  real32_T c45_vc_y;
  real_T c45_cd_x;
  real32_T c45_wc_y;
  real32_T c45_q_A;
  real32_T c45_dd_x;
  real32_T c45_ed_x;
  real32_T c45_fd_x;
  real32_T c45_xc_y;
  real32_T c45_f_b;
  real32_T c45_yc_y;
  real32_T c45_r_A;
  real32_T c45_l_B;
  real32_T c45_gd_x;
  real32_T c45_ad_y;
  real32_T c45_hd_x;
  real32_T c45_bd_y;
  real32_T c45_id_x;
  real32_T c45_cd_y;
  real32_T c45_k_varargin_1;
  real32_T c45_u_varargin_2;
  real32_T c45_v_varargin_2;
  real32_T c45_k_varargin_3;
  real32_T c45_jd_x;
  real32_T c45_dd_y;
  real32_T c45_kd_x;
  real32_T c45_ed_y;
  real32_T c45_k_xk;
  real32_T c45_k_yk;
  real32_T c45_ld_x;
  real32_T c45_fd_y;
  real32_T c45_f_minval;
  real32_T c45_l_varargin_1;
  real32_T c45_w_varargin_2;
  real32_T c45_x_varargin_2;
  real32_T c45_l_varargin_3;
  real32_T c45_md_x;
  real32_T c45_gd_y;
  real32_T c45_nd_x;
  real32_T c45_hd_y;
  real32_T c45_l_xk;
  real32_T c45_l_yk;
  real32_T c45_od_x;
  real32_T c45_id_y;
  real32_T c45_s_A;
  real32_T c45_pd_x;
  real32_T c45_qd_x;
  real32_T c45_rd_x;
  real32_T c45_jd_y;
  real32_T c45_t_A;
  real32_T c45_sd_x;
  real32_T c45_td_x;
  real32_T c45_ud_x;
  real32_T c45_u_A;
  real32_T c45_vd_x;
  real32_T c45_wd_x;
  real32_T c45_xd_x;
  real32_T c45_kd_y;
  real32_T c45_v_A;
  real32_T c45_yd_x;
  real32_T c45_ae_x;
  real32_T c45_be_x;
  real32_T c45_m_varargin_1;
  real32_T c45_y_varargin_2;
  real32_T c45_ab_varargin_2;
  real32_T c45_m_varargin_3;
  real32_T c45_ce_x;
  real32_T c45_ld_y;
  real32_T c45_de_x;
  real32_T c45_md_y;
  real32_T c45_m_xk;
  real32_T c45_m_yk;
  real32_T c45_ee_x;
  real32_T c45_nd_y;
  real32_T c45_n_varargin_1;
  real32_T c45_bb_varargin_2;
  real32_T c45_fe_x;
  real32_T c45_ge_x;
  real32_T c45_n_xk;
  real32_T c45_he_x;
  real32_T c45_a;
  boolean_T c45_p;
  real32_T c45_ie_x;
  boolean_T c45_g_b;
  real32_T c45_o_varargin_1;
  real32_T c45_cb_varargin_2;
  real32_T c45_db_varargin_2;
  real32_T c45_n_varargin_3;
  real32_T c45_je_x;
  real32_T c45_od_y;
  real32_T c45_ke_x;
  real32_T c45_pd_y;
  real32_T c45_o_xk;
  real32_T c45_n_yk;
  real32_T c45_le_x;
  real32_T c45_qd_y;
  real32_T c45_p_varargin_1;
  real32_T c45_eb_varargin_2;
  real32_T c45_me_x;
  real32_T c45_ne_x;
  real32_T c45_p_xk;
  real32_T c45_oe_x;
  real32_T c45_b_a;
  boolean_T c45_b_p;
  real32_T c45_pe_x;
  boolean_T c45_h_b;
  real32_T c45_q_varargin_1;
  real32_T c45_fb_varargin_2;
  real32_T c45_gb_varargin_2;
  real32_T c45_o_varargin_3;
  real32_T c45_qe_x;
  real32_T c45_rd_y;
  real32_T c45_re_x;
  real32_T c45_sd_y;
  real32_T c45_q_xk;
  real32_T c45_o_yk;
  real32_T c45_se_x;
  real32_T c45_td_y;
  real32_T c45_r_varargin_1;
  real32_T c45_hb_varargin_2;
  real32_T c45_te_x;
  real32_T c45_ue_x;
  real32_T c45_r_xk;
  real32_T c45_ve_x;
  real32_T c45_c_a;
  boolean_T c45_c_p;
  real32_T c45_we_x;
  boolean_T c45_i_b;
  real32_T c45_s_varargin_1;
  real32_T c45_ib_varargin_2;
  real32_T c45_jb_varargin_2;
  real32_T c45_p_varargin_3;
  real32_T c45_xe_x;
  real32_T c45_ud_y;
  real32_T c45_ye_x;
  real32_T c45_vd_y;
  real32_T c45_s_xk;
  real32_T c45_p_yk;
  real32_T c45_af_x;
  real32_T c45_wd_y;
  real32_T c45_t_varargin_1;
  real32_T c45_kb_varargin_2;
  real32_T c45_bf_x;
  real32_T c45_cf_x;
  real32_T c45_t_xk;
  real32_T c45_df_x;
  real32_T c45_d_a;
  boolean_T c45_d_p;
  real32_T c45_ef_x;
  boolean_T c45_j_b;
  real32_T c45_e_a;
  real32_T c45_xd_y;
  real32_T c45_w_A;
  real32_T c45_ff_x;
  real32_T c45_gf_x;
  real32_T c45_hf_x;
  real32_T c45_f_a;
  real32_T c45_yd_y;
  real32_T c45_x_A;
  real32_T c45_if_x;
  real32_T c45_jf_x;
  real32_T c45_kf_x;
  real32_T *c45_b_brapre_out_r;
  real32_T *c45_b_brapre_out_l;
  real32_T *c45_b_bratrq_mot_rr;
  real32_T *c45_b_bratrq_mot_rm;
  real32_T *c45_b_bratrq_mot_rf;
  real32_T *c45_b_bratrq_mot_lr;
  real32_T *c45_b_bratrq_mot_lm;
  real32_T *c45_b_bratrq_mot_lf;
  boolean_T *c45_b_guzhang_rr;
  boolean_T *c45_b_guzhang_rm;
  boolean_T *c45_b_guzhang_rf;
  boolean_T *c45_b_guzhang_lr;
  boolean_T *c45_b_guzhang_lm;
  boolean_T *c45_b_guzhang_lf;
  real32_T *c45_b_tras_ratio;
  real32_T *c45_b_trqlim_map_rr;
  real32_T *c45_b_trqlim_map_rm;
  real32_T *c45_b_trqlim_map_rf;
  real32_T *c45_b_trqlim_map_lr;
  real32_T *c45_b_trqlim_map_lm;
  real32_T *c45_b_trqlim_map_lf;
  real32_T *c45_b_speed_act_rr;
  real32_T *c45_b_speed_act_rm;
  real32_T *c45_b_speed_act_rf;
  real32_T *c45_b_speed_act_lr;
  real32_T *c45_b_speed_act_lm;
  real32_T *c45_b_speed_act_lf;
  real32_T *c45_b_trqlimL_dig_rr;
  real32_T *c45_b_trqlimL_dig_rm;
  real32_T *c45_b_trqlimL_dig_rf;
  real32_T *c45_b_trqlimL_dig_lr;
  real32_T *c45_b_trqlimL_dig_lm;
  real32_T *c45_b_trqlimL_dig_lf;
  real32_T *c45_b_pwr_chg_bat2;
  real32_T *c45_b_pwr_chg_bat1;
  real32_T *c45_b_pwr_chg_bat;
  real_T *c45_b_bratrq_dem_rr;
  real_T *c45_b_bratrq_dem_rm;
  real_T *c45_b_bratrq_dem_rf;
  real_T *c45_b_bratrq_dem_lr;
  real_T *c45_b_bratrq_dem_lm;
  real_T *c45_b_bratrq_dem_lf;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  c45_b_guzhang_rr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 33);
  c45_b_guzhang_rm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 32);
  c45_b_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 31);
  c45_b_guzhang_lr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 30);
  c45_b_guzhang_lm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 29);
  c45_b_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 28);
  c45_b_tras_ratio = (real32_T *)ssGetInputPortSignal(chartInstance->S, 27);
  c45_b_trqlim_map_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 26);
  c45_b_trqlim_map_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 25);
  c45_b_trqlim_map_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 24);
  c45_b_trqlim_map_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 23);
  c45_b_trqlim_map_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c45_b_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c45_b_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c45_b_trqlim_map_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 21);
  c45_b_speed_act_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 20);
  c45_b_speed_act_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c45_b_speed_act_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c45_b_speed_act_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c45_b_speed_act_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c45_b_speed_act_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c45_b_trqlimL_dig_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c45_b_trqlimL_dig_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c45_b_trqlimL_dig_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c45_b_trqlimL_dig_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c45_b_trqlimL_dig_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c45_b_bratrq_mot_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c45_b_bratrq_mot_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c45_b_bratrq_mot_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c45_b_bratrq_mot_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c45_b_trqlimL_dig_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c45_b_pwr_chg_bat2 = (real32_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c45_b_pwr_chg_bat1 = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c45_b_bratrq_mot_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c45_b_bratrq_mot_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c45_b_pwr_chg_bat = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c45_b_bratrq_dem_rr = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c45_b_bratrq_dem_rm = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c45_b_bratrq_dem_rf = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c45_b_bratrq_dem_lr = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c45_b_bratrq_dem_lm = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c45_b_bratrq_dem_lf = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 44U, chartInstance->c45_sfEvent);
  c45_hoistedGlobal = *c45_b_bratrq_dem_lf;
  c45_b_hoistedGlobal = *c45_b_bratrq_dem_lm;
  c45_c_hoistedGlobal = *c45_b_bratrq_dem_lr;
  c45_d_hoistedGlobal = *c45_b_bratrq_dem_rf;
  c45_e_hoistedGlobal = *c45_b_bratrq_dem_rm;
  c45_f_hoistedGlobal = *c45_b_bratrq_dem_rr;
  c45_g_hoistedGlobal = *c45_b_pwr_chg_bat;
  c45_h_hoistedGlobal = *c45_b_pwr_chg_bat1;
  c45_i_hoistedGlobal = *c45_b_pwr_chg_bat2;
  c45_j_hoistedGlobal = *c45_b_trqlimL_dig_lf;
  c45_k_hoistedGlobal = *c45_b_trqlimL_dig_lm;
  c45_l_hoistedGlobal = *c45_b_trqlimL_dig_lr;
  c45_m_hoistedGlobal = *c45_b_trqlimL_dig_rf;
  c45_n_hoistedGlobal = *c45_b_trqlimL_dig_rm;
  c45_o_hoistedGlobal = *c45_b_trqlimL_dig_rr;
  c45_p_hoistedGlobal = *c45_b_speed_act_lf;
  c45_q_hoistedGlobal = *c45_b_speed_act_lm;
  c45_r_hoistedGlobal = *c45_b_speed_act_lr;
  c45_s_hoistedGlobal = *c45_b_speed_act_rf;
  c45_t_hoistedGlobal = *c45_b_speed_act_rm;
  c45_u_hoistedGlobal = *c45_b_speed_act_rr;
  c45_v_hoistedGlobal = *c45_b_trqlim_map_lf;
  c45_w_hoistedGlobal = *c45_b_trqlim_map_lm;
  c45_x_hoistedGlobal = *c45_b_trqlim_map_lr;
  c45_y_hoistedGlobal = *c45_b_trqlim_map_rf;
  c45_ab_hoistedGlobal = *c45_b_trqlim_map_rm;
  c45_bb_hoistedGlobal = *c45_b_trqlim_map_rr;
  c45_cb_hoistedGlobal = *c45_b_tras_ratio;
  c45_db_hoistedGlobal = *c45_b_guzhang_lf;
  c45_eb_hoistedGlobal = *c45_b_guzhang_lm;
  c45_fb_hoistedGlobal = *c45_b_guzhang_lr;
  c45_gb_hoistedGlobal = *c45_b_guzhang_rf;
  c45_hb_hoistedGlobal = *c45_b_guzhang_rm;
  c45_ib_hoistedGlobal = *c45_b_guzhang_rr;
  c45_bratrq_dem_lf = c45_hoistedGlobal;
  c45_bratrq_dem_lm = c45_b_hoistedGlobal;
  c45_bratrq_dem_lr = c45_c_hoistedGlobal;
  c45_bratrq_dem_rf = c45_d_hoistedGlobal;
  c45_bratrq_dem_rm = c45_e_hoistedGlobal;
  c45_bratrq_dem_rr = c45_f_hoistedGlobal;
  c45_pwr_chg_bat = c45_g_hoistedGlobal;
  c45_pwr_chg_bat1 = c45_h_hoistedGlobal;
  c45_pwr_chg_bat2 = c45_i_hoistedGlobal;
  c45_trqlimL_dig_lf = c45_j_hoistedGlobal;
  c45_trqlimL_dig_lm = c45_k_hoistedGlobal;
  c45_trqlimL_dig_lr = c45_l_hoistedGlobal;
  c45_trqlimL_dig_rf = c45_m_hoistedGlobal;
  c45_trqlimL_dig_rm = c45_n_hoistedGlobal;
  c45_trqlimL_dig_rr = c45_o_hoistedGlobal;
  c45_speed_act_lf = c45_p_hoistedGlobal;
  c45_speed_act_lm = c45_q_hoistedGlobal;
  c45_speed_act_lr = c45_r_hoistedGlobal;
  c45_speed_act_rf = c45_s_hoistedGlobal;
  c45_speed_act_rm = c45_t_hoistedGlobal;
  c45_speed_act_rr = c45_u_hoistedGlobal;
  c45_trqlim_map_lf = c45_v_hoistedGlobal;
  c45_trqlim_map_lm = c45_w_hoistedGlobal;
  c45_trqlim_map_lr = c45_x_hoistedGlobal;
  c45_trqlim_map_rf = c45_y_hoistedGlobal;
  c45_trqlim_map_rm = c45_ab_hoistedGlobal;
  c45_trqlim_map_rr = c45_bb_hoistedGlobal;
  c45_tras_ratio = c45_cb_hoistedGlobal;
  c45_guzhang_lf = c45_db_hoistedGlobal;
  c45_guzhang_lm = c45_eb_hoistedGlobal;
  c45_guzhang_lr = c45_fb_hoistedGlobal;
  c45_guzhang_rf = c45_gb_hoistedGlobal;
  c45_guzhang_rm = c45_hb_hoistedGlobal;
  c45_guzhang_rr = c45_ib_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 56U, 56U, c45_debug_family_names,
    c45_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lf1, 0U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lf2, 1U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lm1, 2U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lm2, 3U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lr1, 4U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lr2, 5U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rf1, 6U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rf2, 7U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rm1, 8U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rm2, 9U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rr1, 10U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rr2, 11U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_nargin, 12U, c45_c_sf_marshallOut,
    c45_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_nargout, 13U, c45_c_sf_marshallOut,
    c45_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_bratrq_dem_lf, 14U, c45_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_bratrq_dem_lm, 15U, c45_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_bratrq_dem_lr, 16U, c45_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_bratrq_dem_rf, 17U, c45_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_bratrq_dem_rm, 18U, c45_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_bratrq_dem_rr, 19U, c45_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_pwr_chg_bat, 20U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_pwr_chg_bat1, 21U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_pwr_chg_bat2, 22U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlimL_dig_lf, 23U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlimL_dig_lm, 24U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlimL_dig_lr, 25U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlimL_dig_rf, 26U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlimL_dig_rm, 27U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlimL_dig_rr, 28U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_speed_act_lf, 29U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_speed_act_lm, 30U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_speed_act_lr, 31U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_speed_act_rf, 32U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_speed_act_rm, 33U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_speed_act_rr, 34U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlim_map_lf, 35U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlim_map_lm, 36U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlim_map_lr, 37U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlim_map_rf, 38U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlim_map_rm, 39U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_trqlim_map_rr, 40U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_tras_ratio, 41U, c45_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_guzhang_lf, 42U, c45_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_guzhang_lm, 43U, c45_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_guzhang_lr, 44U, c45_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_guzhang_rf, 45U, c45_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_guzhang_rm, 46U, c45_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c45_guzhang_rr, 47U, c45_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lf, 48U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lm, 49U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_lr, 50U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rf, 51U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rm, 52U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_bratrq_mot_rr, 53U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_brapre_out_l, 54U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c45_brapre_out_r, 55U,
    c45_sf_marshallOut, c45_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 4);
  c45_A = c45_bratrq_dem_lf;
  c45_B = c45_tras_ratio;
  c45_x = c45_A;
  c45_y = c45_B;
  c45_b_x = c45_x;
  c45_b_y = c45_y;
  c45_c_x = c45_b_x;
  c45_c_y = c45_b_y;
  c45_bratrq_mot_lf1 = (real32_T)c45_c_x / c45_c_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 5);
  c45_b_A = c45_pwr_chg_bat;
  c45_d_x = c45_b_A;
  c45_e_x = c45_d_x;
  c45_f_x = c45_e_x;
  c45_d_y = c45_f_x / 2.0F;
  c45_b = c45_d_y;
  c45_e_y = 9549.0F * c45_b;
  c45_c_A = c45_e_y;
  c45_b_B = c45_speed_act_lf;
  c45_g_x = c45_c_A;
  c45_f_y = c45_b_B;
  c45_h_x = c45_g_x;
  c45_g_y = c45_f_y;
  c45_i_x = c45_h_x;
  c45_h_y = c45_g_y;
  c45_bratrq_mot_lf2 = c45_i_x / c45_h_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 6);
  c45_varargin_1 = c45_bratrq_mot_lf1;
  c45_varargin_2 = c45_bratrq_mot_lf2;
  c45_b_varargin_2 = c45_varargin_1;
  c45_varargin_3 = c45_varargin_2;
  c45_j_x = c45_b_varargin_2;
  c45_i_y = c45_varargin_3;
  c45_k_x = c45_j_x;
  c45_j_y = c45_i_y;
  c45_eml_scalar_eg(chartInstance);
  c45_xk = c45_k_x;
  c45_yk = c45_j_y;
  c45_l_x = c45_xk;
  c45_k_y = c45_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_minval = muSingleScalarMin(c45_l_x, c45_k_y);
  c45_b_varargin_1 = c45_trqlimL_dig_lf;
  c45_c_varargin_2 = c45_minval;
  c45_d_varargin_2 = c45_b_varargin_1;
  c45_b_varargin_3 = c45_c_varargin_2;
  c45_m_x = c45_d_varargin_2;
  c45_l_y = c45_b_varargin_3;
  c45_n_x = c45_m_x;
  c45_m_y = c45_l_y;
  c45_eml_scalar_eg(chartInstance);
  c45_b_xk = c45_n_x;
  c45_b_yk = c45_m_y;
  c45_o_x = c45_b_xk;
  c45_n_y = c45_b_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_lf = muSingleScalarMin(c45_o_x, c45_n_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 8);
  c45_d_A = c45_bratrq_dem_lm;
  c45_c_B = c45_tras_ratio;
  c45_p_x = c45_d_A;
  c45_o_y = c45_c_B;
  c45_q_x = c45_p_x;
  c45_p_y = c45_o_y;
  c45_r_x = c45_q_x;
  c45_q_y = c45_p_y;
  c45_bratrq_mot_lm1 = (real32_T)c45_r_x / c45_q_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 9);
  c45_e_A = c45_pwr_chg_bat1;
  c45_s_x = c45_e_A;
  c45_t_x = c45_s_x;
  c45_u_x = c45_t_x;
  c45_r_y = c45_u_x / 2.0F;
  c45_b_b = c45_r_y;
  c45_s_y = 9549.0F * c45_b_b;
  c45_f_A = c45_s_y;
  c45_d_B = c45_speed_act_lm;
  c45_v_x = c45_f_A;
  c45_t_y = c45_d_B;
  c45_w_x = c45_v_x;
  c45_u_y = c45_t_y;
  c45_x_x = c45_w_x;
  c45_v_y = c45_u_y;
  c45_bratrq_mot_lm2 = c45_x_x / c45_v_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 10);
  c45_c_varargin_1 = c45_bratrq_mot_lm1;
  c45_e_varargin_2 = c45_bratrq_mot_lm2;
  c45_f_varargin_2 = c45_c_varargin_1;
  c45_c_varargin_3 = c45_e_varargin_2;
  c45_y_x = c45_f_varargin_2;
  c45_w_y = c45_c_varargin_3;
  c45_ab_x = c45_y_x;
  c45_x_y = c45_w_y;
  c45_eml_scalar_eg(chartInstance);
  c45_c_xk = c45_ab_x;
  c45_c_yk = c45_x_y;
  c45_bb_x = c45_c_xk;
  c45_y_y = c45_c_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_b_minval = muSingleScalarMin(c45_bb_x, c45_y_y);
  c45_d_varargin_1 = c45_trqlimL_dig_lm;
  c45_g_varargin_2 = c45_b_minval;
  c45_h_varargin_2 = c45_d_varargin_1;
  c45_d_varargin_3 = c45_g_varargin_2;
  c45_cb_x = c45_h_varargin_2;
  c45_ab_y = c45_d_varargin_3;
  c45_db_x = c45_cb_x;
  c45_bb_y = c45_ab_y;
  c45_eml_scalar_eg(chartInstance);
  c45_d_xk = c45_db_x;
  c45_d_yk = c45_bb_y;
  c45_eb_x = c45_d_xk;
  c45_cb_y = c45_d_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_lm = muSingleScalarMin(c45_eb_x, c45_cb_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 12);
  c45_g_A = c45_bratrq_dem_lr;
  c45_e_B = c45_tras_ratio;
  c45_fb_x = c45_g_A;
  c45_db_y = c45_e_B;
  c45_gb_x = c45_fb_x;
  c45_eb_y = c45_db_y;
  c45_hb_x = c45_gb_x;
  c45_fb_y = c45_eb_y;
  c45_bratrq_mot_lr1 = (real32_T)c45_hb_x / c45_fb_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 13);
  c45_h_A = c45_pwr_chg_bat2;
  c45_ib_x = c45_h_A;
  c45_jb_x = c45_ib_x;
  c45_kb_x = c45_jb_x;
  c45_gb_y = c45_kb_x / 2.0F;
  c45_c_b = c45_gb_y;
  c45_hb_y = 9549.0F * c45_c_b;
  c45_i_A = c45_hb_y;
  c45_f_B = c45_speed_act_lr;
  c45_lb_x = c45_i_A;
  c45_ib_y = c45_f_B;
  c45_mb_x = c45_lb_x;
  c45_jb_y = c45_ib_y;
  c45_nb_x = c45_mb_x;
  c45_kb_y = c45_jb_y;
  c45_bratrq_mot_lr2 = c45_nb_x / c45_kb_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 14);
  c45_e_varargin_1 = c45_bratrq_mot_lr1;
  c45_i_varargin_2 = c45_bratrq_mot_lr2;
  c45_j_varargin_2 = c45_e_varargin_1;
  c45_e_varargin_3 = c45_i_varargin_2;
  c45_ob_x = c45_j_varargin_2;
  c45_lb_y = c45_e_varargin_3;
  c45_pb_x = c45_ob_x;
  c45_mb_y = c45_lb_y;
  c45_eml_scalar_eg(chartInstance);
  c45_e_xk = c45_pb_x;
  c45_e_yk = c45_mb_y;
  c45_qb_x = c45_e_xk;
  c45_nb_y = c45_e_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_c_minval = muSingleScalarMin(c45_qb_x, c45_nb_y);
  c45_f_varargin_1 = c45_trqlimL_dig_lr;
  c45_k_varargin_2 = c45_c_minval;
  c45_l_varargin_2 = c45_f_varargin_1;
  c45_f_varargin_3 = c45_k_varargin_2;
  c45_rb_x = c45_l_varargin_2;
  c45_ob_y = c45_f_varargin_3;
  c45_sb_x = c45_rb_x;
  c45_pb_y = c45_ob_y;
  c45_eml_scalar_eg(chartInstance);
  c45_f_xk = c45_sb_x;
  c45_f_yk = c45_pb_y;
  c45_tb_x = c45_f_xk;
  c45_qb_y = c45_f_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_lr = muSingleScalarMin(c45_tb_x, c45_qb_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 16);
  c45_j_A = c45_bratrq_dem_rf;
  c45_g_B = c45_tras_ratio;
  c45_ub_x = c45_j_A;
  c45_rb_y = c45_g_B;
  c45_vb_x = c45_ub_x;
  c45_sb_y = c45_rb_y;
  c45_wb_x = c45_vb_x;
  c45_tb_y = c45_sb_y;
  c45_bratrq_mot_rf1 = (real32_T)c45_wb_x / c45_tb_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 17);
  c45_k_A = c45_pwr_chg_bat;
  c45_xb_x = c45_k_A;
  c45_yb_x = c45_xb_x;
  c45_ac_x = c45_yb_x;
  c45_ub_y = c45_ac_x / 2.0F;
  c45_d_b = c45_ub_y;
  c45_vb_y = 9549.0F * c45_d_b;
  c45_l_A = c45_vb_y;
  c45_h_B = c45_speed_act_rf;
  c45_bc_x = c45_l_A;
  c45_wb_y = c45_h_B;
  c45_cc_x = c45_bc_x;
  c45_xb_y = c45_wb_y;
  c45_dc_x = c45_cc_x;
  c45_yb_y = c45_xb_y;
  c45_bratrq_mot_rf2 = c45_dc_x / c45_yb_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 18);
  c45_g_varargin_1 = c45_bratrq_mot_rf1;
  c45_m_varargin_2 = c45_bratrq_mot_rf2;
  c45_n_varargin_2 = c45_g_varargin_1;
  c45_g_varargin_3 = c45_m_varargin_2;
  c45_ec_x = c45_n_varargin_2;
  c45_ac_y = c45_g_varargin_3;
  c45_fc_x = c45_ec_x;
  c45_bc_y = c45_ac_y;
  c45_eml_scalar_eg(chartInstance);
  c45_g_xk = c45_fc_x;
  c45_g_yk = c45_bc_y;
  c45_gc_x = c45_g_xk;
  c45_cc_y = c45_g_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_d_minval = muSingleScalarMin(c45_gc_x, c45_cc_y);
  c45_h_varargin_1 = c45_trqlimL_dig_rf;
  c45_o_varargin_2 = c45_d_minval;
  c45_p_varargin_2 = c45_h_varargin_1;
  c45_h_varargin_3 = c45_o_varargin_2;
  c45_hc_x = c45_p_varargin_2;
  c45_dc_y = c45_h_varargin_3;
  c45_ic_x = c45_hc_x;
  c45_ec_y = c45_dc_y;
  c45_eml_scalar_eg(chartInstance);
  c45_h_xk = c45_ic_x;
  c45_h_yk = c45_ec_y;
  c45_jc_x = c45_h_xk;
  c45_fc_y = c45_h_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_rf = muSingleScalarMin(c45_jc_x, c45_fc_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 20);
  c45_m_A = c45_bratrq_dem_rm;
  c45_i_B = c45_tras_ratio;
  c45_kc_x = c45_m_A;
  c45_gc_y = c45_i_B;
  c45_lc_x = c45_kc_x;
  c45_hc_y = c45_gc_y;
  c45_mc_x = c45_lc_x;
  c45_ic_y = c45_hc_y;
  c45_bratrq_mot_rm1 = (real32_T)c45_mc_x / c45_ic_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 21);
  c45_n_A = c45_pwr_chg_bat1;
  c45_nc_x = c45_n_A;
  c45_oc_x = c45_nc_x;
  c45_pc_x = c45_oc_x;
  c45_jc_y = c45_pc_x / 2.0F;
  c45_e_b = c45_jc_y;
  c45_kc_y = 9549.0F * c45_e_b;
  c45_o_A = c45_kc_y;
  c45_j_B = c45_speed_act_rm;
  c45_qc_x = c45_o_A;
  c45_lc_y = c45_j_B;
  c45_rc_x = c45_qc_x;
  c45_mc_y = c45_lc_y;
  c45_sc_x = c45_rc_x;
  c45_nc_y = c45_mc_y;
  c45_bratrq_mot_rm2 = c45_sc_x / c45_nc_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 22);
  c45_i_varargin_1 = c45_bratrq_mot_rm1;
  c45_q_varargin_2 = c45_bratrq_mot_rm2;
  c45_r_varargin_2 = c45_i_varargin_1;
  c45_i_varargin_3 = c45_q_varargin_2;
  c45_tc_x = c45_r_varargin_2;
  c45_oc_y = c45_i_varargin_3;
  c45_uc_x = c45_tc_x;
  c45_pc_y = c45_oc_y;
  c45_eml_scalar_eg(chartInstance);
  c45_i_xk = c45_uc_x;
  c45_i_yk = c45_pc_y;
  c45_vc_x = c45_i_xk;
  c45_qc_y = c45_i_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_e_minval = muSingleScalarMin(c45_vc_x, c45_qc_y);
  c45_j_varargin_1 = c45_trqlimL_dig_rm;
  c45_s_varargin_2 = c45_e_minval;
  c45_t_varargin_2 = c45_j_varargin_1;
  c45_j_varargin_3 = c45_s_varargin_2;
  c45_wc_x = c45_t_varargin_2;
  c45_rc_y = c45_j_varargin_3;
  c45_xc_x = c45_wc_x;
  c45_sc_y = c45_rc_y;
  c45_eml_scalar_eg(chartInstance);
  c45_j_xk = c45_xc_x;
  c45_j_yk = c45_sc_y;
  c45_yc_x = c45_j_xk;
  c45_tc_y = c45_j_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_rm = muSingleScalarMin(c45_yc_x, c45_tc_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 24);
  c45_p_A = c45_bratrq_dem_rr;
  c45_k_B = c45_tras_ratio;
  c45_ad_x = c45_p_A;
  c45_uc_y = c45_k_B;
  c45_bd_x = c45_ad_x;
  c45_vc_y = c45_uc_y;
  c45_cd_x = c45_bd_x;
  c45_wc_y = c45_vc_y;
  c45_bratrq_mot_rr1 = (real32_T)c45_cd_x / c45_wc_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 25);
  c45_q_A = c45_pwr_chg_bat2;
  c45_dd_x = c45_q_A;
  c45_ed_x = c45_dd_x;
  c45_fd_x = c45_ed_x;
  c45_xc_y = c45_fd_x / 2.0F;
  c45_f_b = c45_xc_y;
  c45_yc_y = 9549.0F * c45_f_b;
  c45_r_A = c45_yc_y;
  c45_l_B = c45_speed_act_rr;
  c45_gd_x = c45_r_A;
  c45_ad_y = c45_l_B;
  c45_hd_x = c45_gd_x;
  c45_bd_y = c45_ad_y;
  c45_id_x = c45_hd_x;
  c45_cd_y = c45_bd_y;
  c45_bratrq_mot_rr2 = c45_id_x / c45_cd_y;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 26);
  c45_k_varargin_1 = c45_bratrq_mot_rr1;
  c45_u_varargin_2 = c45_bratrq_mot_rr2;
  c45_v_varargin_2 = c45_k_varargin_1;
  c45_k_varargin_3 = c45_u_varargin_2;
  c45_jd_x = c45_v_varargin_2;
  c45_dd_y = c45_k_varargin_3;
  c45_kd_x = c45_jd_x;
  c45_ed_y = c45_dd_y;
  c45_eml_scalar_eg(chartInstance);
  c45_k_xk = c45_kd_x;
  c45_k_yk = c45_ed_y;
  c45_ld_x = c45_k_xk;
  c45_fd_y = c45_k_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_f_minval = muSingleScalarMin(c45_ld_x, c45_fd_y);
  c45_l_varargin_1 = c45_trqlimL_dig_rr;
  c45_w_varargin_2 = c45_f_minval;
  c45_x_varargin_2 = c45_l_varargin_1;
  c45_l_varargin_3 = c45_w_varargin_2;
  c45_md_x = c45_x_varargin_2;
  c45_gd_y = c45_l_varargin_3;
  c45_nd_x = c45_md_x;
  c45_hd_y = c45_gd_y;
  c45_eml_scalar_eg(chartInstance);
  c45_l_xk = c45_nd_x;
  c45_l_yk = c45_hd_y;
  c45_od_x = c45_l_xk;
  c45_id_y = c45_l_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_rr = muSingleScalarMin(c45_od_x, c45_id_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 28);
  c45_s_A = (real32_T)((c45_bratrq_dem_lf + c45_bratrq_dem_lm) +
                       c45_bratrq_dem_lr) - ((c45_bratrq_mot_lf +
    c45_bratrq_mot_lm) + c45_bratrq_mot_lr) * c45_tras_ratio;
  c45_pd_x = c45_s_A;
  c45_qd_x = c45_pd_x;
  c45_rd_x = c45_qd_x;
  c45_jd_y = c45_rd_x / 3.0F;
  c45_t_A = c45_jd_y;
  c45_sd_x = c45_t_A;
  c45_td_x = c45_sd_x;
  c45_ud_x = c45_td_x;
  c45_brapre_out_l = c45_ud_x / 150.0F;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 29);
  c45_u_A = (real32_T)((c45_bratrq_dem_rf + c45_bratrq_dem_rm) +
                       c45_bratrq_dem_rr) - ((c45_bratrq_mot_rf +
    c45_bratrq_mot_rm) + c45_bratrq_mot_rr) * c45_tras_ratio;
  c45_vd_x = c45_u_A;
  c45_wd_x = c45_vd_x;
  c45_xd_x = c45_wd_x;
  c45_kd_y = c45_xd_x / 3.0F;
  c45_v_A = c45_kd_y;
  c45_yd_x = c45_v_A;
  c45_ae_x = c45_yd_x;
  c45_be_x = c45_ae_x;
  c45_brapre_out_r = c45_be_x / 150.0F;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 37);
  c45_m_varargin_1 = c45_bratrq_mot_lf;
  c45_y_varargin_2 = c45_trqlim_map_lf;
  c45_ab_varargin_2 = c45_m_varargin_1;
  c45_m_varargin_3 = c45_y_varargin_2;
  c45_ce_x = c45_ab_varargin_2;
  c45_ld_y = c45_m_varargin_3;
  c45_de_x = c45_ce_x;
  c45_md_y = c45_ld_y;
  c45_eml_scalar_eg(chartInstance);
  c45_m_xk = c45_de_x;
  c45_m_yk = c45_md_y;
  c45_ee_x = c45_m_xk;
  c45_nd_y = c45_m_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_lf = muSingleScalarMin(c45_ee_x, c45_nd_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 38);
  c45_n_varargin_1 = c45_bratrq_mot_lf;
  c45_bb_varargin_2 = c45_n_varargin_1;
  c45_fe_x = c45_bb_varargin_2;
  c45_ge_x = c45_fe_x;
  c45_b_eml_scalar_eg(chartInstance);
  c45_n_xk = c45_ge_x;
  c45_he_x = c45_n_xk;
  c45_b_eml_scalar_eg(chartInstance);
  c45_a = c45_he_x;
  c45_p = (c45_a < 0.0F);
  guard4 = false;
  if (c45_p) {
    guard4 = true;
  } else {
    c45_ie_x = c45_he_x;
    c45_g_b = muSingleScalarIsNaN(c45_ie_x);
    if (c45_g_b) {
      guard4 = true;
    } else {
      c45_bratrq_mot_lf = c45_he_x;
    }
  }

  if (guard4 == true) {
    c45_bratrq_mot_lf = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 39);
  c45_o_varargin_1 = c45_bratrq_mot_lr;
  c45_cb_varargin_2 = c45_trqlim_map_lr;
  c45_db_varargin_2 = c45_o_varargin_1;
  c45_n_varargin_3 = c45_cb_varargin_2;
  c45_je_x = c45_db_varargin_2;
  c45_od_y = c45_n_varargin_3;
  c45_ke_x = c45_je_x;
  c45_pd_y = c45_od_y;
  c45_eml_scalar_eg(chartInstance);
  c45_o_xk = c45_ke_x;
  c45_n_yk = c45_pd_y;
  c45_le_x = c45_o_xk;
  c45_qd_y = c45_n_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_lr = muSingleScalarMin(c45_le_x, c45_qd_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 40);
  c45_p_varargin_1 = c45_bratrq_mot_lr;
  c45_eb_varargin_2 = c45_p_varargin_1;
  c45_me_x = c45_eb_varargin_2;
  c45_ne_x = c45_me_x;
  c45_b_eml_scalar_eg(chartInstance);
  c45_p_xk = c45_ne_x;
  c45_oe_x = c45_p_xk;
  c45_b_eml_scalar_eg(chartInstance);
  c45_b_a = c45_oe_x;
  c45_b_p = (c45_b_a < 0.0F);
  guard3 = false;
  if (c45_b_p) {
    guard3 = true;
  } else {
    c45_pe_x = c45_oe_x;
    c45_h_b = muSingleScalarIsNaN(c45_pe_x);
    if (c45_h_b) {
      guard3 = true;
    } else {
      c45_bratrq_mot_lr = c45_oe_x;
    }
  }

  if (guard3 == true) {
    c45_bratrq_mot_lr = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 41);
  c45_q_varargin_1 = c45_bratrq_mot_rf;
  c45_fb_varargin_2 = c45_trqlim_map_rf;
  c45_gb_varargin_2 = c45_q_varargin_1;
  c45_o_varargin_3 = c45_fb_varargin_2;
  c45_qe_x = c45_gb_varargin_2;
  c45_rd_y = c45_o_varargin_3;
  c45_re_x = c45_qe_x;
  c45_sd_y = c45_rd_y;
  c45_eml_scalar_eg(chartInstance);
  c45_q_xk = c45_re_x;
  c45_o_yk = c45_sd_y;
  c45_se_x = c45_q_xk;
  c45_td_y = c45_o_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_rf = muSingleScalarMin(c45_se_x, c45_td_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 42);
  c45_r_varargin_1 = c45_bratrq_mot_rf;
  c45_hb_varargin_2 = c45_r_varargin_1;
  c45_te_x = c45_hb_varargin_2;
  c45_ue_x = c45_te_x;
  c45_b_eml_scalar_eg(chartInstance);
  c45_r_xk = c45_ue_x;
  c45_ve_x = c45_r_xk;
  c45_b_eml_scalar_eg(chartInstance);
  c45_c_a = c45_ve_x;
  c45_c_p = (c45_c_a < 0.0F);
  guard2 = false;
  if (c45_c_p) {
    guard2 = true;
  } else {
    c45_we_x = c45_ve_x;
    c45_i_b = muSingleScalarIsNaN(c45_we_x);
    if (c45_i_b) {
      guard2 = true;
    } else {
      c45_bratrq_mot_rf = c45_ve_x;
    }
  }

  if (guard2 == true) {
    c45_bratrq_mot_rf = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 43);
  c45_s_varargin_1 = c45_bratrq_mot_rr;
  c45_ib_varargin_2 = c45_trqlim_map_rr;
  c45_jb_varargin_2 = c45_s_varargin_1;
  c45_p_varargin_3 = c45_ib_varargin_2;
  c45_xe_x = c45_jb_varargin_2;
  c45_ud_y = c45_p_varargin_3;
  c45_ye_x = c45_xe_x;
  c45_vd_y = c45_ud_y;
  c45_eml_scalar_eg(chartInstance);
  c45_s_xk = c45_ye_x;
  c45_p_yk = c45_vd_y;
  c45_af_x = c45_s_xk;
  c45_wd_y = c45_p_yk;
  c45_eml_scalar_eg(chartInstance);
  c45_bratrq_mot_rr = muSingleScalarMin(c45_af_x, c45_wd_y);
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 44);
  c45_t_varargin_1 = c45_bratrq_mot_rr;
  c45_kb_varargin_2 = c45_t_varargin_1;
  c45_bf_x = c45_kb_varargin_2;
  c45_cf_x = c45_bf_x;
  c45_b_eml_scalar_eg(chartInstance);
  c45_t_xk = c45_cf_x;
  c45_df_x = c45_t_xk;
  c45_b_eml_scalar_eg(chartInstance);
  c45_d_a = c45_df_x;
  c45_d_p = (c45_d_a < 0.0F);
  guard1 = false;
  if (c45_d_p) {
    guard1 = true;
  } else {
    c45_ef_x = c45_df_x;
    c45_j_b = muSingleScalarIsNaN(c45_ef_x);
    if (c45_j_b) {
      guard1 = true;
    } else {
      c45_bratrq_mot_rr = c45_df_x;
    }
  }

  if (guard1 == true) {
    c45_bratrq_mot_rr = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 48);
  c45_e_a = c45_brapre_out_l;
  c45_xd_y = c45_e_a * 150.0F;
  c45_w_A = c45_xd_y;
  c45_ff_x = c45_w_A;
  c45_gf_x = c45_ff_x;
  c45_hf_x = c45_gf_x;
  c45_brapre_out_l = c45_hf_x / 125.0F;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 49);
  c45_f_a = c45_brapre_out_r;
  c45_yd_y = c45_f_a * 150.0F;
  c45_x_A = c45_yd_y;
  c45_if_x = c45_x_A;
  c45_jf_x = c45_if_x;
  c45_kf_x = c45_jf_x;
  c45_brapre_out_r = c45_kf_x / 125.0F;
  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 51);
  if (CV_EML_IF(0, 1, 0, (real_T)c45_guzhang_lf == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 52);
    c45_bratrq_mot_lf = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 54);
  if (CV_EML_IF(0, 1, 1, (real_T)c45_guzhang_lm == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 55);
    c45_bratrq_mot_lm = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 57);
  if (CV_EML_IF(0, 1, 2, (real_T)c45_guzhang_lr == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 58);
    c45_bratrq_mot_lr = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 60);
  if (CV_EML_IF(0, 1, 3, (real_T)c45_guzhang_rf == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 61);
    c45_bratrq_mot_rf = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 63);
  if (CV_EML_IF(0, 1, 4, (real_T)c45_guzhang_rm == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 64);
    c45_bratrq_mot_rm = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 66);
  if (CV_EML_IF(0, 1, 5, (real_T)c45_guzhang_rr == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, 67);
    c45_bratrq_mot_rr = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c45_sfEvent, -67);
  _SFD_SYMBOL_SCOPE_POP();
  *c45_b_bratrq_mot_lf = c45_bratrq_mot_lf;
  *c45_b_bratrq_mot_lm = c45_bratrq_mot_lm;
  *c45_b_bratrq_mot_lr = c45_bratrq_mot_lr;
  *c45_b_bratrq_mot_rf = c45_bratrq_mot_rf;
  *c45_b_bratrq_mot_rm = c45_bratrq_mot_rm;
  *c45_b_bratrq_mot_rr = c45_bratrq_mot_rr;
  *c45_b_brapre_out_l = c45_brapre_out_l;
  *c45_b_brapre_out_r = c45_brapre_out_r;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 44U, chartInstance->c45_sfEvent);
}

static void initSimStructsc45_six_plus_six_AcmsteeringV09_main
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c45_machineNumber, uint32_T
  c45_chartNumber, uint32_T c45_instanceNumber)
{
  (void)c45_machineNumber;
  (void)c45_chartNumber;
  (void)c45_instanceNumber;
}

static const mxArray *c45_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData)
{
  const mxArray *c45_mxArrayOutData = NULL;
  real32_T c45_u;
  const mxArray *c45_y = NULL;
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c45_mxArrayOutData = NULL;
  c45_u = *(real32_T *)c45_inData;
  c45_y = NULL;
  sf_mex_assign(&c45_y, sf_mex_create("y", &c45_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c45_mxArrayOutData, c45_y, false);
  return c45_mxArrayOutData;
}

static real32_T c45_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_brapre_out_r, const char_T *c45_identifier)
{
  real32_T c45_y;
  emlrtMsgIdentifier c45_thisId;
  c45_thisId.fIdentifier = c45_identifier;
  c45_thisId.fParent = NULL;
  c45_y = c45_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c45_brapre_out_r),
    &c45_thisId);
  sf_mex_destroy(&c45_brapre_out_r);
  return c45_y;
}

static real32_T c45_b_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId)
{
  real32_T c45_y;
  real32_T c45_f0;
  (void)chartInstance;
  sf_mex_import(c45_parentId, sf_mex_dup(c45_u), &c45_f0, 1, 1, 0U, 0, 0U, 0);
  c45_y = c45_f0;
  sf_mex_destroy(&c45_u);
  return c45_y;
}

static void c45_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c45_mxArrayInData, const char_T *c45_varName, void *c45_outData)
{
  const mxArray *c45_brapre_out_r;
  const char_T *c45_identifier;
  emlrtMsgIdentifier c45_thisId;
  real32_T c45_y;
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c45_brapre_out_r = sf_mex_dup(c45_mxArrayInData);
  c45_identifier = c45_varName;
  c45_thisId.fIdentifier = c45_identifier;
  c45_thisId.fParent = NULL;
  c45_y = c45_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c45_brapre_out_r),
    &c45_thisId);
  sf_mex_destroy(&c45_brapre_out_r);
  *(real32_T *)c45_outData = c45_y;
  sf_mex_destroy(&c45_mxArrayInData);
}

static const mxArray *c45_b_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData)
{
  const mxArray *c45_mxArrayOutData = NULL;
  boolean_T c45_u;
  const mxArray *c45_y = NULL;
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c45_mxArrayOutData = NULL;
  c45_u = *(boolean_T *)c45_inData;
  c45_y = NULL;
  sf_mex_assign(&c45_y, sf_mex_create("y", &c45_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c45_mxArrayOutData, c45_y, false);
  return c45_mxArrayOutData;
}

static const mxArray *c45_c_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData)
{
  const mxArray *c45_mxArrayOutData = NULL;
  real_T c45_u;
  const mxArray *c45_y = NULL;
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c45_mxArrayOutData = NULL;
  c45_u = *(real_T *)c45_inData;
  c45_y = NULL;
  sf_mex_assign(&c45_y, sf_mex_create("y", &c45_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c45_mxArrayOutData, c45_y, false);
  return c45_mxArrayOutData;
}

static real_T c45_c_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId)
{
  real_T c45_y;
  real_T c45_d0;
  (void)chartInstance;
  sf_mex_import(c45_parentId, sf_mex_dup(c45_u), &c45_d0, 1, 0, 0U, 0, 0U, 0);
  c45_y = c45_d0;
  sf_mex_destroy(&c45_u);
  return c45_y;
}

static void c45_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c45_mxArrayInData, const char_T *c45_varName, void *c45_outData)
{
  const mxArray *c45_nargout;
  const char_T *c45_identifier;
  emlrtMsgIdentifier c45_thisId;
  real_T c45_y;
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c45_nargout = sf_mex_dup(c45_mxArrayInData);
  c45_identifier = c45_varName;
  c45_thisId.fIdentifier = c45_identifier;
  c45_thisId.fParent = NULL;
  c45_y = c45_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c45_nargout),
    &c45_thisId);
  sf_mex_destroy(&c45_nargout);
  *(real_T *)c45_outData = c45_y;
  sf_mex_destroy(&c45_mxArrayInData);
}

const mxArray
  *sf_c45_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void)
{
  const mxArray *c45_nameCaptureInfo = NULL;
  c45_nameCaptureInfo = NULL;
  sf_mex_assign(&c45_nameCaptureInfo, sf_mex_createstruct("structure", 2, 25, 1),
                false);
  c45_info_helper(&c45_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c45_nameCaptureInfo);
  return c45_nameCaptureInfo;
}

static void c45_info_helper(const mxArray **c45_info)
{
  const mxArray *c45_rhs0 = NULL;
  const mxArray *c45_lhs0 = NULL;
  const mxArray *c45_rhs1 = NULL;
  const mxArray *c45_lhs1 = NULL;
  const mxArray *c45_rhs2 = NULL;
  const mxArray *c45_lhs2 = NULL;
  const mxArray *c45_rhs3 = NULL;
  const mxArray *c45_lhs3 = NULL;
  const mxArray *c45_rhs4 = NULL;
  const mxArray *c45_lhs4 = NULL;
  const mxArray *c45_rhs5 = NULL;
  const mxArray *c45_lhs5 = NULL;
  const mxArray *c45_rhs6 = NULL;
  const mxArray *c45_lhs6 = NULL;
  const mxArray *c45_rhs7 = NULL;
  const mxArray *c45_lhs7 = NULL;
  const mxArray *c45_rhs8 = NULL;
  const mxArray *c45_lhs8 = NULL;
  const mxArray *c45_rhs9 = NULL;
  const mxArray *c45_lhs9 = NULL;
  const mxArray *c45_rhs10 = NULL;
  const mxArray *c45_lhs10 = NULL;
  const mxArray *c45_rhs11 = NULL;
  const mxArray *c45_lhs11 = NULL;
  const mxArray *c45_rhs12 = NULL;
  const mxArray *c45_lhs12 = NULL;
  const mxArray *c45_rhs13 = NULL;
  const mxArray *c45_lhs13 = NULL;
  const mxArray *c45_rhs14 = NULL;
  const mxArray *c45_lhs14 = NULL;
  const mxArray *c45_rhs15 = NULL;
  const mxArray *c45_lhs15 = NULL;
  const mxArray *c45_rhs16 = NULL;
  const mxArray *c45_lhs16 = NULL;
  const mxArray *c45_rhs17 = NULL;
  const mxArray *c45_lhs17 = NULL;
  const mxArray *c45_rhs18 = NULL;
  const mxArray *c45_lhs18 = NULL;
  const mxArray *c45_rhs19 = NULL;
  const mxArray *c45_lhs19 = NULL;
  const mxArray *c45_rhs20 = NULL;
  const mxArray *c45_lhs20 = NULL;
  const mxArray *c45_rhs21 = NULL;
  const mxArray *c45_lhs21 = NULL;
  const mxArray *c45_rhs22 = NULL;
  const mxArray *c45_lhs22 = NULL;
  const mxArray *c45_rhs23 = NULL;
  const mxArray *c45_lhs23 = NULL;
  const mxArray *c45_rhs24 = NULL;
  const mxArray *c45_lhs24 = NULL;
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("mrdivide"), "name", "name",
                  0);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1388463696U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1370017086U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c45_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 1);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 1);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c45_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 2);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("rdivide"), "name", "name", 2);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c45_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 3);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c45_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 4);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c45_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 5);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 5);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1286825996U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c45_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_div"), "name", "name", 6);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c45_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 7);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("coder.internal.div"), "name",
                  "name", 7);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 7);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c45_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(""), "context", "context", 8);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_mtimes_helper"), "name",
                  "name", 8);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1383880894U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c45_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                  "context", "context", 9);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 9);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c45_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs9), "lhs", "lhs",
                  9);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                  "context", "context", 10);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 10);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 10);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c45_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs10), "lhs", "lhs",
                  10);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(""), "context", "context", 11);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("min"), "name", "name", 11);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 11);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved",
                  "resolved", 11);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1311262518U), "fileTimeLo",
                  "fileTimeLo", 11);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 11);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 11);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 11);
  sf_mex_assign(&c45_rhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs11), "rhs", "rhs",
                  11);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs11), "lhs", "lhs",
                  11);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "context",
                  "context", 12);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_min_or_max"), "name",
                  "name", 12);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 12);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                  "resolved", "resolved", 12);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1378303184U), "fileTimeLo",
                  "fileTimeLo", 12);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 12);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 12);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 12);
  sf_mex_assign(&c45_rhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs12), "rhs", "rhs",
                  12);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs12), "lhs", "lhs",
                  12);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 13);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 13);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 13);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 13);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 13);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 13);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 13);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 13);
  sf_mex_assign(&c45_rhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs13), "rhs", "rhs",
                  13);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs13), "lhs", "lhs",
                  13);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 14);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 14);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 14);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 14);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 14);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 14);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 14);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 14);
  sf_mex_assign(&c45_rhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs14), "rhs", "rhs",
                  14);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs14), "lhs", "lhs",
                  14);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 15);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 15);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 15);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 15);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 15);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 15);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 15);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 15);
  sf_mex_assign(&c45_rhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs15), "rhs", "rhs",
                  15);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs15), "lhs", "lhs",
                  15);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 16);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 16);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 16);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 16);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 16);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 16);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 16);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 16);
  sf_mex_assign(&c45_rhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs16), "rhs", "rhs",
                  16);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs16), "lhs", "lhs",
                  16);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 17);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_index_class"), "name",
                  "name", 17);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 17);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                  "resolved", "resolved", 17);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1323174178U), "fileTimeLo",
                  "fileTimeLo", 17);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 17);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 17);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 17);
  sf_mex_assign(&c45_rhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs17), "rhs", "rhs",
                  17);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs17), "lhs", "lhs",
                  17);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 18);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 18);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 18);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 18);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 18);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 18);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 18);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 18);
  sf_mex_assign(&c45_rhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs18), "rhs", "rhs",
                  18);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs18), "lhs", "lhs",
                  18);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 19);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 19);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 19);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 19);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 19);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 19);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 19);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 19);
  sf_mex_assign(&c45_rhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs19), "rhs", "rhs",
                  19);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs19), "lhs", "lhs",
                  19);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(""), "context", "context", 20);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("max"), "name", "name", 20);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 20);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved",
                  "resolved", 20);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1311262516U), "fileTimeLo",
                  "fileTimeLo", 20);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 20);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 20);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 20);
  sf_mex_assign(&c45_rhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs20), "rhs", "rhs",
                  20);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs20), "lhs", "lhs",
                  20);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "context",
                  "context", 21);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_min_or_max"), "name",
                  "name", 21);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 21);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                  "resolved", "resolved", 21);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1378303184U), "fileTimeLo",
                  "fileTimeLo", 21);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 21);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 21);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 21);
  sf_mex_assign(&c45_rhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs21), "rhs", "rhs",
                  21);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs21), "lhs", "lhs",
                  21);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 22);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("eml_relop"), "name", "name",
                  22);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("function_handle"),
                  "dominantType", "dominantType", 22);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved",
                  "resolved", 22);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1342458382U), "fileTimeLo",
                  "fileTimeLo", 22);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 22);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 22);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 22);
  sf_mex_assign(&c45_rhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs22), "rhs", "rhs",
                  22);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs22), "lhs", "lhs",
                  22);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 23);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("isnan"), "name", "name", 23);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 23);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved",
                  "resolved", 23);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363717458U), "fileTimeLo",
                  "fileTimeLo", 23);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 23);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 23);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 23);
  sf_mex_assign(&c45_rhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs23), "rhs", "rhs",
                  23);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs23), "lhs", "lhs",
                  23);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context",
                  "context", 24);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 24);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 24);
  sf_mex_addfield(*c45_info, c45_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 24);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 24);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 24);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 24);
  sf_mex_addfield(*c45_info, c45_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 24);
  sf_mex_assign(&c45_rhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c45_lhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_rhs24), "rhs", "rhs",
                  24);
  sf_mex_addfield(*c45_info, sf_mex_duplicatearraysafe(&c45_lhs24), "lhs", "lhs",
                  24);
  sf_mex_destroy(&c45_rhs0);
  sf_mex_destroy(&c45_lhs0);
  sf_mex_destroy(&c45_rhs1);
  sf_mex_destroy(&c45_lhs1);
  sf_mex_destroy(&c45_rhs2);
  sf_mex_destroy(&c45_lhs2);
  sf_mex_destroy(&c45_rhs3);
  sf_mex_destroy(&c45_lhs3);
  sf_mex_destroy(&c45_rhs4);
  sf_mex_destroy(&c45_lhs4);
  sf_mex_destroy(&c45_rhs5);
  sf_mex_destroy(&c45_lhs5);
  sf_mex_destroy(&c45_rhs6);
  sf_mex_destroy(&c45_lhs6);
  sf_mex_destroy(&c45_rhs7);
  sf_mex_destroy(&c45_lhs7);
  sf_mex_destroy(&c45_rhs8);
  sf_mex_destroy(&c45_lhs8);
  sf_mex_destroy(&c45_rhs9);
  sf_mex_destroy(&c45_lhs9);
  sf_mex_destroy(&c45_rhs10);
  sf_mex_destroy(&c45_lhs10);
  sf_mex_destroy(&c45_rhs11);
  sf_mex_destroy(&c45_lhs11);
  sf_mex_destroy(&c45_rhs12);
  sf_mex_destroy(&c45_lhs12);
  sf_mex_destroy(&c45_rhs13);
  sf_mex_destroy(&c45_lhs13);
  sf_mex_destroy(&c45_rhs14);
  sf_mex_destroy(&c45_lhs14);
  sf_mex_destroy(&c45_rhs15);
  sf_mex_destroy(&c45_lhs15);
  sf_mex_destroy(&c45_rhs16);
  sf_mex_destroy(&c45_lhs16);
  sf_mex_destroy(&c45_rhs17);
  sf_mex_destroy(&c45_lhs17);
  sf_mex_destroy(&c45_rhs18);
  sf_mex_destroy(&c45_lhs18);
  sf_mex_destroy(&c45_rhs19);
  sf_mex_destroy(&c45_lhs19);
  sf_mex_destroy(&c45_rhs20);
  sf_mex_destroy(&c45_lhs20);
  sf_mex_destroy(&c45_rhs21);
  sf_mex_destroy(&c45_lhs21);
  sf_mex_destroy(&c45_rhs22);
  sf_mex_destroy(&c45_lhs22);
  sf_mex_destroy(&c45_rhs23);
  sf_mex_destroy(&c45_lhs23);
  sf_mex_destroy(&c45_rhs24);
  sf_mex_destroy(&c45_lhs24);
}

static const mxArray *c45_emlrt_marshallOut(const char * c45_u)
{
  const mxArray *c45_y = NULL;
  c45_y = NULL;
  sf_mex_assign(&c45_y, sf_mex_create("y", c45_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c45_u)), false);
  return c45_y;
}

static const mxArray *c45_b_emlrt_marshallOut(const uint32_T c45_u)
{
  const mxArray *c45_y = NULL;
  c45_y = NULL;
  sf_mex_assign(&c45_y, sf_mex_create("y", &c45_u, 7, 0U, 0U, 0U, 0), false);
  return c45_y;
}

static void c45_eml_scalar_eg
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c45_b_eml_scalar_eg
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *c45_d_sf_marshallOut(void *chartInstanceVoid, void
  *c45_inData)
{
  const mxArray *c45_mxArrayOutData = NULL;
  int32_T c45_u;
  const mxArray *c45_y = NULL;
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c45_mxArrayOutData = NULL;
  c45_u = *(int32_T *)c45_inData;
  c45_y = NULL;
  sf_mex_assign(&c45_y, sf_mex_create("y", &c45_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c45_mxArrayOutData, c45_y, false);
  return c45_mxArrayOutData;
}

static int32_T c45_d_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId)
{
  int32_T c45_y;
  int32_T c45_i0;
  (void)chartInstance;
  sf_mex_import(c45_parentId, sf_mex_dup(c45_u), &c45_i0, 1, 6, 0U, 0, 0U, 0);
  c45_y = c45_i0;
  sf_mex_destroy(&c45_u);
  return c45_y;
}

static void c45_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c45_mxArrayInData, const char_T *c45_varName, void *c45_outData)
{
  const mxArray *c45_b_sfEvent;
  const char_T *c45_identifier;
  emlrtMsgIdentifier c45_thisId;
  int32_T c45_y;
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c45_b_sfEvent = sf_mex_dup(c45_mxArrayInData);
  c45_identifier = c45_varName;
  c45_thisId.fIdentifier = c45_identifier;
  c45_thisId.fParent = NULL;
  c45_y = c45_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c45_b_sfEvent),
    &c45_thisId);
  sf_mex_destroy(&c45_b_sfEvent);
  *(int32_T *)c45_outData = c45_y;
  sf_mex_destroy(&c45_mxArrayInData);
}

static uint8_T c45_e_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_b_is_active_c45_six_plus_six_AcmsteeringV09_main, const char_T
   *c45_identifier)
{
  uint8_T c45_y;
  emlrtMsgIdentifier c45_thisId;
  c45_thisId.fIdentifier = c45_identifier;
  c45_thisId.fParent = NULL;
  c45_y = c45_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c45_b_is_active_c45_six_plus_six_AcmsteeringV09_main), &c45_thisId);
  sf_mex_destroy(&c45_b_is_active_c45_six_plus_six_AcmsteeringV09_main);
  return c45_y;
}

static uint8_T c45_f_emlrt_marshallIn
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c45_u, const emlrtMsgIdentifier *c45_parentId)
{
  uint8_T c45_y;
  uint8_T c45_u0;
  (void)chartInstance;
  sf_mex_import(c45_parentId, sf_mex_dup(c45_u), &c45_u0, 1, 3, 0U, 0, 0U, 0);
  c45_y = c45_u0;
  sf_mex_destroy(&c45_u);
  return c45_y;
}

static void init_dsm_address_info
  (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
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

void sf_c45_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2377200219U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2005098117U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2552488322U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4190680294U);
}

mxArray *sf_c45_six_plus_six_AcmsteeringV09_main_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("ovaFPnr4CNsauQvGuToz6B");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,34,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,21,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,21,"type",mxType);
    }

    mxSetField(mxData,21,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,22,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,22,"type",mxType);
    }

    mxSetField(mxData,22,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,23,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,23,"type",mxType);
    }

    mxSetField(mxData,23,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,24,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,24,"type",mxType);
    }

    mxSetField(mxData,24,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,25,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,25,"type",mxType);
    }

    mxSetField(mxData,25,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,26,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,26,"type",mxType);
    }

    mxSetField(mxData,26,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,27,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,27,"type",mxType);
    }

    mxSetField(mxData,27,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,28,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,28,"type",mxType);
    }

    mxSetField(mxData,28,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,29,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,29,"type",mxType);
    }

    mxSetField(mxData,29,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,30,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,30,"type",mxType);
    }

    mxSetField(mxData,30,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,31,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,31,"type",mxType);
    }

    mxSetField(mxData,31,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,32,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,32,"type",mxType);
    }

    mxSetField(mxData,32,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,33,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,33,"type",mxType);
    }

    mxSetField(mxData,33,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c45_six_plus_six_AcmsteeringV09_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c45_six_plus_six_AcmsteeringV09_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c45_six_plus_six_AcmsteeringV09_main
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x9'type','srcId','name','auxInfo'{{M[1],M[33],T\"brapre_out_l\",},{M[1],M[34],T\"brapre_out_r\",},{M[1],M[5],T\"bratrq_mot_lf\",},{M[1],M[53],T\"bratrq_mot_lm\",},{M[1],M[15],T\"bratrq_mot_lr\",},{M[1],M[16],T\"bratrq_mot_rf\",},{M[1],M[54],T\"bratrq_mot_rm\",},{M[1],M[17],T\"bratrq_mot_rr\",},{M[8],M[0],T\"is_active_c45_six_plus_six_AcmsteeringV09_main\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 9, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c45_six_plus_six_AcmsteeringV09_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_mainMachineNumber_,
           45,
           1,
           1,
           0,
           42,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"bratrq_dem_lf");
          _SFD_SET_DATA_PROPS(1,1,1,0,"bratrq_dem_lm");
          _SFD_SET_DATA_PROPS(2,1,1,0,"bratrq_dem_lr");
          _SFD_SET_DATA_PROPS(3,1,1,0,"bratrq_dem_rf");
          _SFD_SET_DATA_PROPS(4,1,1,0,"bratrq_dem_rm");
          _SFD_SET_DATA_PROPS(5,1,1,0,"bratrq_dem_rr");
          _SFD_SET_DATA_PROPS(6,1,1,0,"pwr_chg_bat");
          _SFD_SET_DATA_PROPS(7,2,0,1,"bratrq_mot_lf");
          _SFD_SET_DATA_PROPS(8,2,0,1,"bratrq_mot_lm");
          _SFD_SET_DATA_PROPS(9,1,1,0,"pwr_chg_bat1");
          _SFD_SET_DATA_PROPS(10,1,1,0,"pwr_chg_bat2");
          _SFD_SET_DATA_PROPS(11,1,1,0,"trqlimL_dig_lf");
          _SFD_SET_DATA_PROPS(12,2,0,1,"bratrq_mot_lr");
          _SFD_SET_DATA_PROPS(13,2,0,1,"bratrq_mot_rf");
          _SFD_SET_DATA_PROPS(14,2,0,1,"bratrq_mot_rm");
          _SFD_SET_DATA_PROPS(15,2,0,1,"bratrq_mot_rr");
          _SFD_SET_DATA_PROPS(16,1,1,0,"trqlimL_dig_lm");
          _SFD_SET_DATA_PROPS(17,1,1,0,"trqlimL_dig_lr");
          _SFD_SET_DATA_PROPS(18,1,1,0,"trqlimL_dig_rf");
          _SFD_SET_DATA_PROPS(19,1,1,0,"trqlimL_dig_rm");
          _SFD_SET_DATA_PROPS(20,1,1,0,"trqlimL_dig_rr");
          _SFD_SET_DATA_PROPS(21,1,1,0,"speed_act_lf");
          _SFD_SET_DATA_PROPS(22,1,1,0,"speed_act_lm");
          _SFD_SET_DATA_PROPS(23,1,1,0,"speed_act_lr");
          _SFD_SET_DATA_PROPS(24,1,1,0,"speed_act_rf");
          _SFD_SET_DATA_PROPS(25,1,1,0,"speed_act_rm");
          _SFD_SET_DATA_PROPS(26,1,1,0,"speed_act_rr");
          _SFD_SET_DATA_PROPS(27,1,1,0,"trqlim_map_lf");
          _SFD_SET_DATA_PROPS(28,2,0,1,"brapre_out_l");
          _SFD_SET_DATA_PROPS(29,2,0,1,"brapre_out_r");
          _SFD_SET_DATA_PROPS(30,1,1,0,"trqlim_map_lm");
          _SFD_SET_DATA_PROPS(31,1,1,0,"trqlim_map_lr");
          _SFD_SET_DATA_PROPS(32,1,1,0,"trqlim_map_rf");
          _SFD_SET_DATA_PROPS(33,1,1,0,"trqlim_map_rm");
          _SFD_SET_DATA_PROPS(34,1,1,0,"trqlim_map_rr");
          _SFD_SET_DATA_PROPS(35,1,1,0,"tras_ratio");
          _SFD_SET_DATA_PROPS(36,1,1,0,"guzhang_lf");
          _SFD_SET_DATA_PROPS(37,1,1,0,"guzhang_lm");
          _SFD_SET_DATA_PROPS(38,1,1,0,"guzhang_lr");
          _SFD_SET_DATA_PROPS(39,1,1,0,"guzhang_rf");
          _SFD_SET_DATA_PROPS(40,1,1,0,"guzhang_rm");
          _SFD_SET_DATA_PROPS(41,1,1,0,"guzhang_rr");
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
        _SFD_CV_INIT_EML(0,1,1,6,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,3001);
        _SFD_CV_INIT_EML_IF(0,1,0,2697,2713,-1,2746);
        _SFD_CV_INIT_EML_IF(0,1,1,2747,2763,-1,2796);
        _SFD_CV_INIT_EML_IF(0,1,2,2797,2813,-1,2846);
        _SFD_CV_INIT_EML_IF(0,1,3,2847,2863,-1,2896);
        _SFD_CV_INIT_EML_IF(0,1,4,2897,2913,-1,2946);
        _SFD_CV_INIT_EML_IF(0,1,5,2947,2963,-1,2996);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)c45_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(30,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(31,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(32,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(33,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(34,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(35,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(36,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(37,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(38,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(39,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(40,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(41,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c45_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c45_bratrq_dem_lf;
          real_T *c45_bratrq_dem_lm;
          real_T *c45_bratrq_dem_lr;
          real_T *c45_bratrq_dem_rf;
          real_T *c45_bratrq_dem_rm;
          real_T *c45_bratrq_dem_rr;
          real32_T *c45_pwr_chg_bat;
          real32_T *c45_bratrq_mot_lf;
          real32_T *c45_bratrq_mot_lm;
          real32_T *c45_pwr_chg_bat1;
          real32_T *c45_pwr_chg_bat2;
          real32_T *c45_trqlimL_dig_lf;
          real32_T *c45_bratrq_mot_lr;
          real32_T *c45_bratrq_mot_rf;
          real32_T *c45_bratrq_mot_rm;
          real32_T *c45_bratrq_mot_rr;
          real32_T *c45_trqlimL_dig_lm;
          real32_T *c45_trqlimL_dig_lr;
          real32_T *c45_trqlimL_dig_rf;
          real32_T *c45_trqlimL_dig_rm;
          real32_T *c45_trqlimL_dig_rr;
          real32_T *c45_speed_act_lf;
          real32_T *c45_speed_act_lm;
          real32_T *c45_speed_act_lr;
          real32_T *c45_speed_act_rf;
          real32_T *c45_speed_act_rm;
          real32_T *c45_speed_act_rr;
          real32_T *c45_trqlim_map_lf;
          real32_T *c45_brapre_out_l;
          real32_T *c45_brapre_out_r;
          real32_T *c45_trqlim_map_lm;
          real32_T *c45_trqlim_map_lr;
          real32_T *c45_trqlim_map_rf;
          real32_T *c45_trqlim_map_rm;
          real32_T *c45_trqlim_map_rr;
          real32_T *c45_tras_ratio;
          boolean_T *c45_guzhang_lf;
          boolean_T *c45_guzhang_lm;
          boolean_T *c45_guzhang_lr;
          boolean_T *c45_guzhang_rf;
          boolean_T *c45_guzhang_rm;
          boolean_T *c45_guzhang_rr;
          c45_guzhang_rr = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            33);
          c45_guzhang_rm = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            32);
          c45_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            31);
          c45_guzhang_lr = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            30);
          c45_guzhang_lm = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            29);
          c45_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            28);
          c45_tras_ratio = (real32_T *)ssGetInputPortSignal(chartInstance->S, 27);
          c45_trqlim_map_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            26);
          c45_trqlim_map_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            25);
          c45_trqlim_map_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            24);
          c45_trqlim_map_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            23);
          c45_trqlim_map_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            22);
          c45_brapre_out_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            8);
          c45_brapre_out_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            7);
          c45_trqlim_map_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            21);
          c45_speed_act_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            20);
          c45_speed_act_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            19);
          c45_speed_act_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            18);
          c45_speed_act_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            17);
          c45_speed_act_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            16);
          c45_speed_act_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            15);
          c45_trqlimL_dig_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            14);
          c45_trqlimL_dig_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            13);
          c45_trqlimL_dig_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            12);
          c45_trqlimL_dig_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            11);
          c45_trqlimL_dig_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            10);
          c45_bratrq_mot_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            6);
          c45_bratrq_mot_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            5);
          c45_bratrq_mot_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c45_bratrq_mot_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            3);
          c45_trqlimL_dig_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            9);
          c45_pwr_chg_bat2 = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            8);
          c45_pwr_chg_bat1 = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            7);
          c45_bratrq_mot_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            2);
          c45_bratrq_mot_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c45_pwr_chg_bat = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c45_bratrq_dem_rr = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c45_bratrq_dem_rm = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c45_bratrq_dem_rf = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c45_bratrq_dem_lr = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c45_bratrq_dem_lm = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c45_bratrq_dem_lf = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c45_bratrq_dem_lf);
          _SFD_SET_DATA_VALUE_PTR(1U, c45_bratrq_dem_lm);
          _SFD_SET_DATA_VALUE_PTR(2U, c45_bratrq_dem_lr);
          _SFD_SET_DATA_VALUE_PTR(3U, c45_bratrq_dem_rf);
          _SFD_SET_DATA_VALUE_PTR(4U, c45_bratrq_dem_rm);
          _SFD_SET_DATA_VALUE_PTR(5U, c45_bratrq_dem_rr);
          _SFD_SET_DATA_VALUE_PTR(6U, c45_pwr_chg_bat);
          _SFD_SET_DATA_VALUE_PTR(7U, c45_bratrq_mot_lf);
          _SFD_SET_DATA_VALUE_PTR(8U, c45_bratrq_mot_lm);
          _SFD_SET_DATA_VALUE_PTR(9U, c45_pwr_chg_bat1);
          _SFD_SET_DATA_VALUE_PTR(10U, c45_pwr_chg_bat2);
          _SFD_SET_DATA_VALUE_PTR(11U, c45_trqlimL_dig_lf);
          _SFD_SET_DATA_VALUE_PTR(12U, c45_bratrq_mot_lr);
          _SFD_SET_DATA_VALUE_PTR(13U, c45_bratrq_mot_rf);
          _SFD_SET_DATA_VALUE_PTR(14U, c45_bratrq_mot_rm);
          _SFD_SET_DATA_VALUE_PTR(15U, c45_bratrq_mot_rr);
          _SFD_SET_DATA_VALUE_PTR(16U, c45_trqlimL_dig_lm);
          _SFD_SET_DATA_VALUE_PTR(17U, c45_trqlimL_dig_lr);
          _SFD_SET_DATA_VALUE_PTR(18U, c45_trqlimL_dig_rf);
          _SFD_SET_DATA_VALUE_PTR(19U, c45_trqlimL_dig_rm);
          _SFD_SET_DATA_VALUE_PTR(20U, c45_trqlimL_dig_rr);
          _SFD_SET_DATA_VALUE_PTR(21U, c45_speed_act_lf);
          _SFD_SET_DATA_VALUE_PTR(22U, c45_speed_act_lm);
          _SFD_SET_DATA_VALUE_PTR(23U, c45_speed_act_lr);
          _SFD_SET_DATA_VALUE_PTR(24U, c45_speed_act_rf);
          _SFD_SET_DATA_VALUE_PTR(25U, c45_speed_act_rm);
          _SFD_SET_DATA_VALUE_PTR(26U, c45_speed_act_rr);
          _SFD_SET_DATA_VALUE_PTR(27U, c45_trqlim_map_lf);
          _SFD_SET_DATA_VALUE_PTR(28U, c45_brapre_out_l);
          _SFD_SET_DATA_VALUE_PTR(29U, c45_brapre_out_r);
          _SFD_SET_DATA_VALUE_PTR(30U, c45_trqlim_map_lm);
          _SFD_SET_DATA_VALUE_PTR(31U, c45_trqlim_map_lr);
          _SFD_SET_DATA_VALUE_PTR(32U, c45_trqlim_map_rf);
          _SFD_SET_DATA_VALUE_PTR(33U, c45_trqlim_map_rm);
          _SFD_SET_DATA_VALUE_PTR(34U, c45_trqlim_map_rr);
          _SFD_SET_DATA_VALUE_PTR(35U, c45_tras_ratio);
          _SFD_SET_DATA_VALUE_PTR(36U, c45_guzhang_lf);
          _SFD_SET_DATA_VALUE_PTR(37U, c45_guzhang_lm);
          _SFD_SET_DATA_VALUE_PTR(38U, c45_guzhang_lr);
          _SFD_SET_DATA_VALUE_PTR(39U, c45_guzhang_rf);
          _SFD_SET_DATA_VALUE_PTR(40U, c45_guzhang_rm);
          _SFD_SET_DATA_VALUE_PTR(41U, c45_guzhang_rr);
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
  return "i9lGuzh2G6zBKPeE8hTkjH";
}

static void sf_opaque_initialize_c45_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
  initialize_c45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c45_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  enable_c45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c45_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  disable_c45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c45_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  sf_gateway_c45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c45_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c45_six_plus_six_AcmsteeringV09_main();/* state var info */
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

extern void sf_internal_set_sim_state_c45_six_plus_six_AcmsteeringV09_main
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
    sf_get_sim_state_info_c45_six_plus_six_AcmsteeringV09_main();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c45_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  return sf_internal_get_sim_state_c45_six_plus_six_AcmsteeringV09_main(S);
}

static void sf_opaque_set_sim_state_c45_six_plus_six_AcmsteeringV09_main
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c45_six_plus_six_AcmsteeringV09_main(S, st);
}

static void sf_opaque_terminate_c45_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_optimization_info();
    }

    finalize_c45_six_plus_six_AcmsteeringV09_main
      ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc45_six_plus_six_AcmsteeringV09_main
    ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c45_six_plus_six_AcmsteeringV09_main(SimStruct *
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
    initialize_params_c45_six_plus_six_AcmsteeringV09_main
      ((SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c45_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      45);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,45,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,45,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,45);
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
      ssSetInputPortOptimOpts(S, 21, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 22, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 23, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 24, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 25, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 26, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 27, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 28, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 29, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 30, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 31, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 32, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 33, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,45,34);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,45,8);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=8; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 34; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,45);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3434153944U));
  ssSetChecksum1(S,(2114766815U));
  ssSetChecksum2(S,(3259190160U));
  ssSetChecksum3(S,(73916030U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c45_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c45_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    utMalloc(sizeof(SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc45_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c45_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c45_six_plus_six_AcmsteeringV09_main;
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

void c45_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c45_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c45_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c45_six_plus_six_AcmsteeringV09_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c45_six_plus_six_AcmsteeringV09_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
