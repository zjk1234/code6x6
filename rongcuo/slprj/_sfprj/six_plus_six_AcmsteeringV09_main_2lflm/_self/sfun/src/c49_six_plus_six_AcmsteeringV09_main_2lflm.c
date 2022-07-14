/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun.h"
#include "c49_six_plus_six_AcmsteeringV09_main_2lflm.h"
#include "mwmathutil.h"
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
static const char * c49_debug_family_names[29] = { "nargin", "nargout",
  "trq_dem_l", "trq_dem_r", "trqlim_lf", "trqlim_lm", "trqlim_lr", "trqlim_rf",
  "trqlim_rm", "trqlim_rr", "guzhang_lf", "guzhang_lm", "guzhang_lr",
  "guzhang_rf", "guzhang_rm", "guzhang_rr", "bra_pre_yd", "bra_dem_l",
  "bra_dem_r", "brake_dem", "trq_dem_lf", "trq_dem_lm", "trq_dem_lr",
  "trq_dem_rf", "trq_dem_rm", "trq_dem_rr", "bra_pre_l", "bra_pre_r", "mode" };

/* Function Declarations */
static void initialize_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initialize_params_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void enable_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void disable_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c49_update_debugger_state_c49_six_plus_six_AcmsteeringV09_main_2
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void set_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_st);
static void finalize_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void sf_gateway_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c49_chartstep_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initSimStructsc49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c49_machineNumber, uint32_T
  c49_chartNumber, uint32_T c49_instanceNumber);
static const mxArray *c49_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData);
static real_T c49_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_mode, const char_T *c49_identifier);
static real_T c49_b_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId);
static void c49_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c49_mxArrayInData, const char_T *c49_varName, void *c49_outData);
static const mxArray *c49_b_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData);
static real32_T c49_c_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_bra_pre_r, const char_T *c49_identifier);
static real32_T c49_d_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId);
static void c49_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c49_mxArrayInData, const char_T *c49_varName, void *c49_outData);
static const mxArray *c49_c_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData);
static void c49_info_helper(const mxArray **c49_info);
static const mxArray *c49_emlrt_marshallOut(const char * c49_u);
static const mxArray *c49_b_emlrt_marshallOut(const uint32_T c49_u);
static void c49_eml_scalar_eg
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c49_b_eml_scalar_eg
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *c49_d_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData);
static int32_T c49_e_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId);
static void c49_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c49_mxArrayInData, const char_T *c49_varName, void *c49_outData);
static uint8_T c49_f_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_b_is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c49_identifier);
static uint8_T c49_g_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId);
static void init_dsm_address_info
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  chartInstance->c49_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c49_is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm = 0U;
}

static void initialize_params_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c49_update_debugger_state_c49_six_plus_six_AcmsteeringV09_main_2
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  const mxArray *c49_st;
  const mxArray *c49_y = NULL;
  real32_T c49_hoistedGlobal;
  real32_T c49_u;
  const mxArray *c49_b_y = NULL;
  real32_T c49_b_hoistedGlobal;
  real32_T c49_b_u;
  const mxArray *c49_c_y = NULL;
  real_T c49_c_hoistedGlobal;
  real_T c49_c_u;
  const mxArray *c49_d_y = NULL;
  real32_T c49_d_hoistedGlobal;
  real32_T c49_d_u;
  const mxArray *c49_e_y = NULL;
  real32_T c49_e_hoistedGlobal;
  real32_T c49_e_u;
  const mxArray *c49_f_y = NULL;
  real32_T c49_f_hoistedGlobal;
  real32_T c49_f_u;
  const mxArray *c49_g_y = NULL;
  real32_T c49_g_hoistedGlobal;
  real32_T c49_g_u;
  const mxArray *c49_h_y = NULL;
  real32_T c49_h_hoistedGlobal;
  real32_T c49_h_u;
  const mxArray *c49_i_y = NULL;
  real32_T c49_i_hoistedGlobal;
  real32_T c49_i_u;
  const mxArray *c49_j_y = NULL;
  uint8_T c49_j_hoistedGlobal;
  uint8_T c49_j_u;
  const mxArray *c49_k_y = NULL;
  real32_T *c49_bra_pre_l;
  real32_T *c49_bra_pre_r;
  real_T *c49_mode;
  real32_T *c49_trq_dem_lf;
  real32_T *c49_trq_dem_lm;
  real32_T *c49_trq_dem_lr;
  real32_T *c49_trq_dem_rf;
  real32_T *c49_trq_dem_rm;
  real32_T *c49_trq_dem_rr;
  c49_mode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c49_bra_pre_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c49_bra_pre_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c49_trq_dem_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c49_trq_dem_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c49_trq_dem_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c49_trq_dem_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c49_trq_dem_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c49_trq_dem_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c49_st = NULL;
  c49_st = NULL;
  c49_y = NULL;
  sf_mex_assign(&c49_y, sf_mex_createcellmatrix(10, 1), false);
  c49_hoistedGlobal = *c49_bra_pre_l;
  c49_u = c49_hoistedGlobal;
  c49_b_y = NULL;
  sf_mex_assign(&c49_b_y, sf_mex_create("y", &c49_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 0, c49_b_y);
  c49_b_hoistedGlobal = *c49_bra_pre_r;
  c49_b_u = c49_b_hoistedGlobal;
  c49_c_y = NULL;
  sf_mex_assign(&c49_c_y, sf_mex_create("y", &c49_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 1, c49_c_y);
  c49_c_hoistedGlobal = *c49_mode;
  c49_c_u = c49_c_hoistedGlobal;
  c49_d_y = NULL;
  sf_mex_assign(&c49_d_y, sf_mex_create("y", &c49_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 2, c49_d_y);
  c49_d_hoistedGlobal = *c49_trq_dem_lf;
  c49_d_u = c49_d_hoistedGlobal;
  c49_e_y = NULL;
  sf_mex_assign(&c49_e_y, sf_mex_create("y", &c49_d_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 3, c49_e_y);
  c49_e_hoistedGlobal = *c49_trq_dem_lm;
  c49_e_u = c49_e_hoistedGlobal;
  c49_f_y = NULL;
  sf_mex_assign(&c49_f_y, sf_mex_create("y", &c49_e_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 4, c49_f_y);
  c49_f_hoistedGlobal = *c49_trq_dem_lr;
  c49_f_u = c49_f_hoistedGlobal;
  c49_g_y = NULL;
  sf_mex_assign(&c49_g_y, sf_mex_create("y", &c49_f_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 5, c49_g_y);
  c49_g_hoistedGlobal = *c49_trq_dem_rf;
  c49_g_u = c49_g_hoistedGlobal;
  c49_h_y = NULL;
  sf_mex_assign(&c49_h_y, sf_mex_create("y", &c49_g_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 6, c49_h_y);
  c49_h_hoistedGlobal = *c49_trq_dem_rm;
  c49_h_u = c49_h_hoistedGlobal;
  c49_i_y = NULL;
  sf_mex_assign(&c49_i_y, sf_mex_create("y", &c49_h_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 7, c49_i_y);
  c49_i_hoistedGlobal = *c49_trq_dem_rr;
  c49_i_u = c49_i_hoistedGlobal;
  c49_j_y = NULL;
  sf_mex_assign(&c49_j_y, sf_mex_create("y", &c49_i_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 8, c49_j_y);
  c49_j_hoistedGlobal =
    chartInstance->c49_is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  c49_j_u = c49_j_hoistedGlobal;
  c49_k_y = NULL;
  sf_mex_assign(&c49_k_y, sf_mex_create("y", &c49_j_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c49_y, 9, c49_k_y);
  sf_mex_assign(&c49_st, c49_y, false);
  return c49_st;
}

static void set_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_st)
{
  const mxArray *c49_u;
  real32_T *c49_bra_pre_l;
  real32_T *c49_bra_pre_r;
  real_T *c49_mode;
  real32_T *c49_trq_dem_lf;
  real32_T *c49_trq_dem_lm;
  real32_T *c49_trq_dem_lr;
  real32_T *c49_trq_dem_rf;
  real32_T *c49_trq_dem_rm;
  real32_T *c49_trq_dem_rr;
  c49_mode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c49_bra_pre_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c49_bra_pre_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c49_trq_dem_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c49_trq_dem_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c49_trq_dem_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c49_trq_dem_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c49_trq_dem_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c49_trq_dem_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c49_doneDoubleBufferReInit = true;
  c49_u = sf_mex_dup(c49_st);
  *c49_bra_pre_l = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 0)), "bra_pre_l");
  *c49_bra_pre_r = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 1)), "bra_pre_r");
  *c49_mode = c49_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c49_u, 2)), "mode");
  *c49_trq_dem_lf = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 3)), "trq_dem_lf");
  *c49_trq_dem_lm = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 4)), "trq_dem_lm");
  *c49_trq_dem_lr = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 5)), "trq_dem_lr");
  *c49_trq_dem_rf = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 6)), "trq_dem_rf");
  *c49_trq_dem_rm = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 7)), "trq_dem_rm");
  *c49_trq_dem_rr = c49_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c49_u, 8)), "trq_dem_rr");
  chartInstance->c49_is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm =
    c49_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c49_u, 9)),
    "is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm");
  sf_mex_destroy(&c49_u);
  c49_update_debugger_state_c49_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c49_st);
}

static void finalize_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real32_T *c49_trq_dem_l;
  real32_T *c49_trq_dem_lf;
  real32_T *c49_trq_dem_lm;
  real32_T *c49_trq_dem_r;
  real32_T *c49_trqlim_lf;
  real32_T *c49_trqlim_lm;
  real32_T *c49_trqlim_lr;
  real32_T *c49_trqlim_rf;
  real32_T *c49_trqlim_rm;
  real32_T *c49_trqlim_rr;
  boolean_T *c49_guzhang_lf;
  boolean_T *c49_guzhang_lm;
  boolean_T *c49_guzhang_lr;
  boolean_T *c49_guzhang_rf;
  boolean_T *c49_guzhang_rm;
  boolean_T *c49_guzhang_rr;
  real32_T *c49_trq_dem_lr;
  real32_T *c49_trq_dem_rf;
  real32_T *c49_trq_dem_rm;
  real32_T *c49_trq_dem_rr;
  real32_T *c49_bra_pre_l;
  real32_T *c49_bra_pre_r;
  real32_T *c49_bra_pre_yd;
  real_T *c49_mode;
  real32_T *c49_bra_dem_l;
  real32_T *c49_bra_dem_r;
  real32_T *c49_brake_dem;
  c49_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c49_bra_dem_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c49_bra_dem_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c49_mode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c49_bra_pre_yd = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c49_bra_pre_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c49_bra_pre_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c49_trq_dem_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c49_trq_dem_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c49_trq_dem_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c49_trq_dem_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c49_guzhang_rr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c49_guzhang_rm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c49_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c49_guzhang_lr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c49_guzhang_lm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c49_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c49_trqlim_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c49_trqlim_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c49_trqlim_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c49_trqlim_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c49_trqlim_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c49_trqlim_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c49_trq_dem_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c49_trq_dem_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c49_trq_dem_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c49_trq_dem_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 48U, chartInstance->c49_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_l, 0U);
  chartInstance->c49_sfEvent = CALL_EVENT;
  c49_chartstep_c49_six_plus_six_AcmsteeringV09_main_2lflm(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_lf, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_lm, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_r, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trqlim_lf, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trqlim_lm, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trqlim_lr, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trqlim_rf, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trqlim_rm, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trqlim_rr, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_guzhang_lf, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_guzhang_lm, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_guzhang_lr, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_guzhang_rf, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_guzhang_rm, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_guzhang_rr, 15U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_lr, 16U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_rf, 17U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_rm, 18U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_trq_dem_rr, 19U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_bra_pre_l, 20U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_bra_pre_r, 21U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_bra_pre_yd, 22U);
  _SFD_DATA_RANGE_CHECK(*c49_mode, 23U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_bra_dem_l, 24U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_bra_dem_r, 25U);
  _SFD_DATA_RANGE_CHECK((real_T)*c49_brake_dem, 26U);
}

static void c49_chartstep_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real32_T c49_hoistedGlobal;
  real32_T c49_b_hoistedGlobal;
  real32_T c49_c_hoistedGlobal;
  real32_T c49_d_hoistedGlobal;
  real32_T c49_e_hoistedGlobal;
  real32_T c49_f_hoistedGlobal;
  real32_T c49_g_hoistedGlobal;
  real32_T c49_h_hoistedGlobal;
  boolean_T c49_i_hoistedGlobal;
  boolean_T c49_j_hoistedGlobal;
  boolean_T c49_k_hoistedGlobal;
  boolean_T c49_l_hoistedGlobal;
  boolean_T c49_m_hoistedGlobal;
  boolean_T c49_n_hoistedGlobal;
  real32_T c49_o_hoistedGlobal;
  real32_T c49_p_hoistedGlobal;
  real32_T c49_q_hoistedGlobal;
  real32_T c49_r_hoistedGlobal;
  real32_T c49_trq_dem_l;
  real32_T c49_trq_dem_r;
  real32_T c49_trqlim_lf;
  real32_T c49_trqlim_lm;
  real32_T c49_trqlim_lr;
  real32_T c49_trqlim_rf;
  real32_T c49_trqlim_rm;
  real32_T c49_trqlim_rr;
  boolean_T c49_guzhang_lf;
  boolean_T c49_guzhang_lm;
  boolean_T c49_guzhang_lr;
  boolean_T c49_guzhang_rf;
  boolean_T c49_guzhang_rm;
  boolean_T c49_guzhang_rr;
  real32_T c49_bra_pre_yd;
  real32_T c49_bra_dem_l;
  real32_T c49_bra_dem_r;
  real32_T c49_brake_dem;
  uint32_T c49_debug_family_var_map[29];
  real_T c49_nargin = 18.0;
  real_T c49_nargout = 9.0;
  real32_T c49_trq_dem_lf;
  real32_T c49_trq_dem_lm;
  real32_T c49_trq_dem_lr;
  real32_T c49_trq_dem_rf;
  real32_T c49_trq_dem_rm;
  real32_T c49_trq_dem_rr;
  real32_T c49_bra_pre_l;
  real32_T c49_bra_pre_r;
  real_T c49_mode;
  real32_T c49_A;
  real32_T c49_x;
  real32_T c49_b_x;
  real32_T c49_c_x;
  real32_T c49_b_A;
  real32_T c49_d_x;
  real32_T c49_e_x;
  real32_T c49_f_x;
  real32_T c49_c_A;
  real32_T c49_g_x;
  real32_T c49_h_x;
  real32_T c49_i_x;
  real32_T c49_d_A;
  real32_T c49_j_x;
  real32_T c49_k_x;
  real32_T c49_l_x;
  real32_T c49_e_A;
  real32_T c49_m_x;
  real32_T c49_n_x;
  real32_T c49_o_x;
  real32_T c49_f_A;
  real32_T c49_p_x;
  real32_T c49_q_x;
  real32_T c49_r_x;
  real32_T c49_varargin_1;
  real32_T c49_varargin_2;
  real32_T c49_b_varargin_2;
  real32_T c49_varargin_3;
  real32_T c49_s_x;
  real32_T c49_y;
  real32_T c49_t_x;
  real32_T c49_b_y;
  real32_T c49_xk;
  real32_T c49_yk;
  real32_T c49_u_x;
  real32_T c49_c_y;
  real32_T c49_c_varargin_2;
  real32_T c49_b_varargin_3;
  real32_T c49_d_y;
  real32_T c49_e_y;
  real32_T c49_b_yk;
  real32_T c49_f_y;
  real32_T c49_b;
  boolean_T c49_p;
  real32_T c49_b_varargin_1;
  real32_T c49_d_varargin_2;
  real32_T c49_e_varargin_2;
  real32_T c49_c_varargin_3;
  real32_T c49_v_x;
  real32_T c49_g_y;
  real32_T c49_w_x;
  real32_T c49_h_y;
  real32_T c49_b_xk;
  real32_T c49_c_yk;
  real32_T c49_x_x;
  real32_T c49_i_y;
  real32_T c49_f_varargin_2;
  real32_T c49_d_varargin_3;
  real32_T c49_j_y;
  real32_T c49_k_y;
  real32_T c49_d_yk;
  real32_T c49_l_y;
  real32_T c49_b_b;
  boolean_T c49_b_p;
  real32_T c49_c_varargin_1;
  real32_T c49_g_varargin_2;
  real32_T c49_h_varargin_2;
  real32_T c49_e_varargin_3;
  real32_T c49_y_x;
  real32_T c49_m_y;
  real32_T c49_ab_x;
  real32_T c49_n_y;
  real32_T c49_c_xk;
  real32_T c49_e_yk;
  real32_T c49_bb_x;
  real32_T c49_o_y;
  real32_T c49_i_varargin_2;
  real32_T c49_f_varargin_3;
  real32_T c49_p_y;
  real32_T c49_q_y;
  real32_T c49_f_yk;
  real32_T c49_r_y;
  real32_T c49_c_b;
  boolean_T c49_c_p;
  real32_T c49_d_varargin_1;
  real32_T c49_j_varargin_2;
  real32_T c49_k_varargin_2;
  real32_T c49_g_varargin_3;
  real32_T c49_cb_x;
  real32_T c49_s_y;
  real32_T c49_db_x;
  real32_T c49_t_y;
  real32_T c49_d_xk;
  real32_T c49_g_yk;
  real32_T c49_eb_x;
  real32_T c49_u_y;
  real32_T c49_l_varargin_2;
  real32_T c49_h_varargin_3;
  real32_T c49_v_y;
  real32_T c49_w_y;
  real32_T c49_h_yk;
  real32_T c49_x_y;
  real32_T c49_d_b;
  boolean_T c49_d_p;
  real32_T c49_e_varargin_1;
  real32_T c49_m_varargin_2;
  real32_T c49_n_varargin_2;
  real32_T c49_i_varargin_3;
  real32_T c49_fb_x;
  real32_T c49_y_y;
  real32_T c49_gb_x;
  real32_T c49_ab_y;
  real32_T c49_e_xk;
  real32_T c49_i_yk;
  real32_T c49_hb_x;
  real32_T c49_bb_y;
  real32_T c49_o_varargin_2;
  real32_T c49_j_varargin_3;
  real32_T c49_cb_y;
  real32_T c49_db_y;
  real32_T c49_j_yk;
  real32_T c49_eb_y;
  real32_T c49_e_b;
  boolean_T c49_e_p;
  real32_T c49_f_varargin_1;
  real32_T c49_p_varargin_2;
  real32_T c49_q_varargin_2;
  real32_T c49_k_varargin_3;
  real32_T c49_ib_x;
  real32_T c49_fb_y;
  real32_T c49_jb_x;
  real32_T c49_gb_y;
  real32_T c49_f_xk;
  real32_T c49_k_yk;
  real32_T c49_kb_x;
  real32_T c49_hb_y;
  real32_T c49_r_varargin_2;
  real32_T c49_l_varargin_3;
  real32_T c49_ib_y;
  real32_T c49_jb_y;
  real32_T c49_l_yk;
  real32_T c49_kb_y;
  real32_T c49_f_b;
  boolean_T c49_f_p;
  real_T *c49_b_mode;
  real32_T *c49_b_bra_pre_r;
  real32_T *c49_b_bra_pre_l;
  real32_T *c49_b_trq_dem_rr;
  real32_T *c49_b_trq_dem_rm;
  real32_T *c49_b_trq_dem_rf;
  real32_T *c49_b_trq_dem_lr;
  real32_T *c49_b_trq_dem_lm;
  real32_T *c49_b_trq_dem_lf;
  real32_T *c49_b_brake_dem;
  real32_T *c49_b_bra_dem_r;
  real32_T *c49_b_bra_dem_l;
  real32_T *c49_b_bra_pre_yd;
  boolean_T *c49_b_guzhang_rr;
  boolean_T *c49_b_guzhang_rm;
  boolean_T *c49_b_guzhang_rf;
  boolean_T *c49_b_guzhang_lr;
  boolean_T *c49_b_guzhang_lm;
  boolean_T *c49_b_guzhang_lf;
  real32_T *c49_b_trqlim_rr;
  real32_T *c49_b_trqlim_rm;
  real32_T *c49_b_trqlim_rf;
  real32_T *c49_b_trqlim_lr;
  real32_T *c49_b_trqlim_lm;
  real32_T *c49_b_trqlim_lf;
  real32_T *c49_b_trq_dem_r;
  real32_T *c49_b_trq_dem_l;
  c49_b_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c49_b_bra_dem_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c49_b_bra_dem_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c49_b_mode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c49_b_bra_pre_yd = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c49_b_bra_pre_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c49_b_bra_pre_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c49_b_trq_dem_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c49_b_trq_dem_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c49_b_trq_dem_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c49_b_trq_dem_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c49_b_guzhang_rr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c49_b_guzhang_rm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c49_b_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c49_b_guzhang_lr = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c49_b_guzhang_lm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c49_b_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c49_b_trqlim_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c49_b_trqlim_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c49_b_trqlim_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c49_b_trqlim_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c49_b_trqlim_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c49_b_trqlim_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c49_b_trq_dem_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c49_b_trq_dem_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c49_b_trq_dem_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c49_b_trq_dem_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 48U, chartInstance->c49_sfEvent);
  c49_hoistedGlobal = *c49_b_trq_dem_l;
  c49_b_hoistedGlobal = *c49_b_trq_dem_r;
  c49_c_hoistedGlobal = *c49_b_trqlim_lf;
  c49_d_hoistedGlobal = *c49_b_trqlim_lm;
  c49_e_hoistedGlobal = *c49_b_trqlim_lr;
  c49_f_hoistedGlobal = *c49_b_trqlim_rf;
  c49_g_hoistedGlobal = *c49_b_trqlim_rm;
  c49_h_hoistedGlobal = *c49_b_trqlim_rr;
  c49_i_hoistedGlobal = *c49_b_guzhang_lf;
  c49_j_hoistedGlobal = *c49_b_guzhang_lm;
  c49_k_hoistedGlobal = *c49_b_guzhang_lr;
  c49_l_hoistedGlobal = *c49_b_guzhang_rf;
  c49_m_hoistedGlobal = *c49_b_guzhang_rm;
  c49_n_hoistedGlobal = *c49_b_guzhang_rr;
  c49_o_hoistedGlobal = *c49_b_bra_pre_yd;
  c49_p_hoistedGlobal = *c49_b_bra_dem_l;
  c49_q_hoistedGlobal = *c49_b_bra_dem_r;
  c49_r_hoistedGlobal = *c49_b_brake_dem;
  c49_trq_dem_l = c49_hoistedGlobal;
  c49_trq_dem_r = c49_b_hoistedGlobal;
  c49_trqlim_lf = c49_c_hoistedGlobal;
  c49_trqlim_lm = c49_d_hoistedGlobal;
  c49_trqlim_lr = c49_e_hoistedGlobal;
  c49_trqlim_rf = c49_f_hoistedGlobal;
  c49_trqlim_rm = c49_g_hoistedGlobal;
  c49_trqlim_rr = c49_h_hoistedGlobal;
  c49_guzhang_lf = c49_i_hoistedGlobal;
  c49_guzhang_lm = c49_j_hoistedGlobal;
  c49_guzhang_lr = c49_k_hoistedGlobal;
  c49_guzhang_rf = c49_l_hoistedGlobal;
  c49_guzhang_rm = c49_m_hoistedGlobal;
  c49_guzhang_rr = c49_n_hoistedGlobal;
  c49_bra_pre_yd = c49_o_hoistedGlobal;
  c49_bra_dem_l = c49_p_hoistedGlobal;
  c49_bra_dem_r = c49_q_hoistedGlobal;
  c49_brake_dem = c49_r_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 29U, 29U, c49_debug_family_names,
    c49_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_nargin, 0U, c49_sf_marshallOut,
    c49_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_nargout, 1U, c49_sf_marshallOut,
    c49_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trq_dem_l, 2U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trq_dem_r, 3U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trqlim_lf, 4U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trqlim_lm, 5U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trqlim_lr, 6U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trqlim_rf, 7U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trqlim_rm, 8U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_trqlim_rr, 9U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_guzhang_lf, 10U, c49_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_guzhang_lm, 11U, c49_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_guzhang_lr, 12U, c49_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_guzhang_rf, 13U, c49_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_guzhang_rm, 14U, c49_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_guzhang_rr, 15U, c49_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_bra_pre_yd, 16U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_bra_dem_l, 17U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_bra_dem_r, 18U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c49_brake_dem, 19U, c49_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_trq_dem_lf, 20U,
    c49_b_sf_marshallOut, c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_trq_dem_lm, 21U,
    c49_b_sf_marshallOut, c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_trq_dem_lr, 22U,
    c49_b_sf_marshallOut, c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_trq_dem_rf, 23U,
    c49_b_sf_marshallOut, c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_trq_dem_rm, 24U,
    c49_b_sf_marshallOut, c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_trq_dem_rr, 25U,
    c49_b_sf_marshallOut, c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_bra_pre_l, 26U, c49_b_sf_marshallOut,
    c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_bra_pre_r, 27U, c49_b_sf_marshallOut,
    c49_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c49_mode, 28U, c49_sf_marshallOut,
    c49_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 3);
  if (CV_EML_IF(0, 1, 0, c49_brake_dem == 0.0F)) {
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 5);
    c49_A = c49_trq_dem_l;
    c49_x = c49_A;
    c49_b_x = c49_x;
    c49_c_x = c49_b_x;
    c49_trq_dem_lf = c49_c_x / 3.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 6);
    c49_b_A = c49_trq_dem_l;
    c49_d_x = c49_b_A;
    c49_e_x = c49_d_x;
    c49_f_x = c49_e_x;
    c49_trq_dem_lm = c49_f_x / 3.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 7);
    c49_c_A = c49_trq_dem_l;
    c49_g_x = c49_c_A;
    c49_h_x = c49_g_x;
    c49_i_x = c49_h_x;
    c49_trq_dem_lr = c49_i_x / 3.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 8);
    c49_d_A = c49_trq_dem_r;
    c49_j_x = c49_d_A;
    c49_k_x = c49_j_x;
    c49_l_x = c49_k_x;
    c49_trq_dem_rf = c49_l_x / 3.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 9);
    c49_e_A = c49_trq_dem_r;
    c49_m_x = c49_e_A;
    c49_n_x = c49_m_x;
    c49_o_x = c49_n_x;
    c49_trq_dem_rm = c49_o_x / 3.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 10);
    c49_f_A = c49_trq_dem_r;
    c49_p_x = c49_f_A;
    c49_q_x = c49_p_x;
    c49_r_x = c49_q_x;
    c49_trq_dem_rr = c49_r_x / 3.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 11);
    c49_bra_pre_l = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 12);
    c49_bra_pre_r = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 13);
    c49_mode = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 147U);
    c49_trq_dem_lf = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 148U);
    c49_trq_dem_lm = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 149U);
    c49_trq_dem_lr = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 150U);
    c49_trq_dem_rf = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 151U);
    c49_trq_dem_rm = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 152U);
    c49_trq_dem_rr = 0.0F;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 153U);
    c49_bra_pre_l = c49_bra_dem_l;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 154U);
    c49_bra_pre_r = c49_bra_dem_r;
    _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 155U);
    c49_mode = 17.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 157U);
  c49_varargin_1 = c49_trqlim_lf;
  c49_varargin_2 = c49_trq_dem_lf;
  c49_b_varargin_2 = c49_varargin_1;
  c49_varargin_3 = c49_varargin_2;
  c49_s_x = c49_b_varargin_2;
  c49_y = c49_varargin_3;
  c49_t_x = c49_s_x;
  c49_b_y = c49_y;
  c49_eml_scalar_eg(chartInstance);
  c49_xk = c49_t_x;
  c49_yk = c49_b_y;
  c49_u_x = c49_xk;
  c49_c_y = c49_yk;
  c49_eml_scalar_eg(chartInstance);
  c49_trq_dem_lf = muSingleScalarMin(c49_u_x, c49_c_y);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 157U);
  c49_c_varargin_2 = c49_trq_dem_lf;
  c49_b_varargin_3 = c49_c_varargin_2;
  c49_d_y = c49_b_varargin_3;
  c49_e_y = c49_d_y;
  c49_b_eml_scalar_eg(chartInstance);
  c49_b_yk = c49_e_y;
  c49_f_y = c49_b_yk;
  c49_b_eml_scalar_eg(chartInstance);
  c49_b = c49_f_y;
  c49_p = (0.0F < c49_b);
  if (c49_p) {
    c49_trq_dem_lf = c49_f_y;
  } else {
    c49_trq_dem_lf = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 158U);
  c49_b_varargin_1 = c49_trqlim_lm;
  c49_d_varargin_2 = c49_trq_dem_lm;
  c49_e_varargin_2 = c49_b_varargin_1;
  c49_c_varargin_3 = c49_d_varargin_2;
  c49_v_x = c49_e_varargin_2;
  c49_g_y = c49_c_varargin_3;
  c49_w_x = c49_v_x;
  c49_h_y = c49_g_y;
  c49_eml_scalar_eg(chartInstance);
  c49_b_xk = c49_w_x;
  c49_c_yk = c49_h_y;
  c49_x_x = c49_b_xk;
  c49_i_y = c49_c_yk;
  c49_eml_scalar_eg(chartInstance);
  c49_trq_dem_lm = muSingleScalarMin(c49_x_x, c49_i_y);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 158U);
  c49_f_varargin_2 = c49_trq_dem_lm;
  c49_d_varargin_3 = c49_f_varargin_2;
  c49_j_y = c49_d_varargin_3;
  c49_k_y = c49_j_y;
  c49_b_eml_scalar_eg(chartInstance);
  c49_d_yk = c49_k_y;
  c49_l_y = c49_d_yk;
  c49_b_eml_scalar_eg(chartInstance);
  c49_b_b = c49_l_y;
  c49_b_p = (0.0F < c49_b_b);
  if (c49_b_p) {
    c49_trq_dem_lm = c49_l_y;
  } else {
    c49_trq_dem_lm = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 159U);
  c49_c_varargin_1 = c49_trqlim_lr;
  c49_g_varargin_2 = c49_trq_dem_lr;
  c49_h_varargin_2 = c49_c_varargin_1;
  c49_e_varargin_3 = c49_g_varargin_2;
  c49_y_x = c49_h_varargin_2;
  c49_m_y = c49_e_varargin_3;
  c49_ab_x = c49_y_x;
  c49_n_y = c49_m_y;
  c49_eml_scalar_eg(chartInstance);
  c49_c_xk = c49_ab_x;
  c49_e_yk = c49_n_y;
  c49_bb_x = c49_c_xk;
  c49_o_y = c49_e_yk;
  c49_eml_scalar_eg(chartInstance);
  c49_trq_dem_lr = muSingleScalarMin(c49_bb_x, c49_o_y);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 159U);
  c49_i_varargin_2 = c49_trq_dem_lr;
  c49_f_varargin_3 = c49_i_varargin_2;
  c49_p_y = c49_f_varargin_3;
  c49_q_y = c49_p_y;
  c49_b_eml_scalar_eg(chartInstance);
  c49_f_yk = c49_q_y;
  c49_r_y = c49_f_yk;
  c49_b_eml_scalar_eg(chartInstance);
  c49_c_b = c49_r_y;
  c49_c_p = (0.0F < c49_c_b);
  if (c49_c_p) {
    c49_trq_dem_lr = c49_r_y;
  } else {
    c49_trq_dem_lr = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 160U);
  c49_d_varargin_1 = c49_trqlim_rf;
  c49_j_varargin_2 = c49_trq_dem_rf;
  c49_k_varargin_2 = c49_d_varargin_1;
  c49_g_varargin_3 = c49_j_varargin_2;
  c49_cb_x = c49_k_varargin_2;
  c49_s_y = c49_g_varargin_3;
  c49_db_x = c49_cb_x;
  c49_t_y = c49_s_y;
  c49_eml_scalar_eg(chartInstance);
  c49_d_xk = c49_db_x;
  c49_g_yk = c49_t_y;
  c49_eb_x = c49_d_xk;
  c49_u_y = c49_g_yk;
  c49_eml_scalar_eg(chartInstance);
  c49_trq_dem_rf = muSingleScalarMin(c49_eb_x, c49_u_y);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 160U);
  c49_l_varargin_2 = c49_trq_dem_rf;
  c49_h_varargin_3 = c49_l_varargin_2;
  c49_v_y = c49_h_varargin_3;
  c49_w_y = c49_v_y;
  c49_b_eml_scalar_eg(chartInstance);
  c49_h_yk = c49_w_y;
  c49_x_y = c49_h_yk;
  c49_b_eml_scalar_eg(chartInstance);
  c49_d_b = c49_x_y;
  c49_d_p = (0.0F < c49_d_b);
  if (c49_d_p) {
    c49_trq_dem_rf = c49_x_y;
  } else {
    c49_trq_dem_rf = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 161U);
  c49_e_varargin_1 = c49_trqlim_rm;
  c49_m_varargin_2 = c49_trq_dem_rm;
  c49_n_varargin_2 = c49_e_varargin_1;
  c49_i_varargin_3 = c49_m_varargin_2;
  c49_fb_x = c49_n_varargin_2;
  c49_y_y = c49_i_varargin_3;
  c49_gb_x = c49_fb_x;
  c49_ab_y = c49_y_y;
  c49_eml_scalar_eg(chartInstance);
  c49_e_xk = c49_gb_x;
  c49_i_yk = c49_ab_y;
  c49_hb_x = c49_e_xk;
  c49_bb_y = c49_i_yk;
  c49_eml_scalar_eg(chartInstance);
  c49_trq_dem_rm = muSingleScalarMin(c49_hb_x, c49_bb_y);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 161U);
  c49_o_varargin_2 = c49_trq_dem_rm;
  c49_j_varargin_3 = c49_o_varargin_2;
  c49_cb_y = c49_j_varargin_3;
  c49_db_y = c49_cb_y;
  c49_b_eml_scalar_eg(chartInstance);
  c49_j_yk = c49_db_y;
  c49_eb_y = c49_j_yk;
  c49_b_eml_scalar_eg(chartInstance);
  c49_e_b = c49_eb_y;
  c49_e_p = (0.0F < c49_e_b);
  if (c49_e_p) {
    c49_trq_dem_rm = c49_eb_y;
  } else {
    c49_trq_dem_rm = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 162U);
  c49_f_varargin_1 = c49_trqlim_rr;
  c49_p_varargin_2 = c49_trq_dem_rr;
  c49_q_varargin_2 = c49_f_varargin_1;
  c49_k_varargin_3 = c49_p_varargin_2;
  c49_ib_x = c49_q_varargin_2;
  c49_fb_y = c49_k_varargin_3;
  c49_jb_x = c49_ib_x;
  c49_gb_y = c49_fb_y;
  c49_eml_scalar_eg(chartInstance);
  c49_f_xk = c49_jb_x;
  c49_k_yk = c49_gb_y;
  c49_kb_x = c49_f_xk;
  c49_hb_y = c49_k_yk;
  c49_eml_scalar_eg(chartInstance);
  c49_trq_dem_rr = muSingleScalarMin(c49_kb_x, c49_hb_y);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 162U);
  c49_r_varargin_2 = c49_trq_dem_rr;
  c49_l_varargin_3 = c49_r_varargin_2;
  c49_ib_y = c49_l_varargin_3;
  c49_jb_y = c49_ib_y;
  c49_b_eml_scalar_eg(chartInstance);
  c49_l_yk = c49_jb_y;
  c49_kb_y = c49_l_yk;
  c49_b_eml_scalar_eg(chartInstance);
  c49_f_b = c49_kb_y;
  c49_f_p = (0.0F < c49_f_b);
  if (c49_f_p) {
    c49_trq_dem_rr = c49_kb_y;
  } else {
    c49_trq_dem_rr = 0.0F;
  }

  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 163U);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, 164U);
  _SFD_EML_CALL(0U, chartInstance->c49_sfEvent, -164);
  _SFD_SYMBOL_SCOPE_POP();
  *c49_b_trq_dem_lf = c49_trq_dem_lf;
  *c49_b_trq_dem_lm = c49_trq_dem_lm;
  *c49_b_trq_dem_lr = c49_trq_dem_lr;
  *c49_b_trq_dem_rf = c49_trq_dem_rf;
  *c49_b_trq_dem_rm = c49_trq_dem_rm;
  *c49_b_trq_dem_rr = c49_trq_dem_rr;
  *c49_b_bra_pre_l = c49_bra_pre_l;
  *c49_b_bra_pre_r = c49_bra_pre_r;
  *c49_b_mode = c49_mode;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 48U, chartInstance->c49_sfEvent);
}

static void initSimStructsc49_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c49_machineNumber, uint32_T
  c49_chartNumber, uint32_T c49_instanceNumber)
{
  (void)c49_machineNumber;
  (void)c49_chartNumber;
  (void)c49_instanceNumber;
}

static const mxArray *c49_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData)
{
  const mxArray *c49_mxArrayOutData = NULL;
  real_T c49_u;
  const mxArray *c49_y = NULL;
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c49_mxArrayOutData = NULL;
  c49_u = *(real_T *)c49_inData;
  c49_y = NULL;
  sf_mex_assign(&c49_y, sf_mex_create("y", &c49_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c49_mxArrayOutData, c49_y, false);
  return c49_mxArrayOutData;
}

static real_T c49_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_mode, const char_T *c49_identifier)
{
  real_T c49_y;
  emlrtMsgIdentifier c49_thisId;
  c49_thisId.fIdentifier = c49_identifier;
  c49_thisId.fParent = NULL;
  c49_y = c49_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c49_mode),
    &c49_thisId);
  sf_mex_destroy(&c49_mode);
  return c49_y;
}

static real_T c49_b_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId)
{
  real_T c49_y;
  real_T c49_d0;
  (void)chartInstance;
  sf_mex_import(c49_parentId, sf_mex_dup(c49_u), &c49_d0, 1, 0, 0U, 0, 0U, 0);
  c49_y = c49_d0;
  sf_mex_destroy(&c49_u);
  return c49_y;
}

static void c49_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c49_mxArrayInData, const char_T *c49_varName, void *c49_outData)
{
  const mxArray *c49_mode;
  const char_T *c49_identifier;
  emlrtMsgIdentifier c49_thisId;
  real_T c49_y;
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c49_mode = sf_mex_dup(c49_mxArrayInData);
  c49_identifier = c49_varName;
  c49_thisId.fIdentifier = c49_identifier;
  c49_thisId.fParent = NULL;
  c49_y = c49_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c49_mode),
    &c49_thisId);
  sf_mex_destroy(&c49_mode);
  *(real_T *)c49_outData = c49_y;
  sf_mex_destroy(&c49_mxArrayInData);
}

static const mxArray *c49_b_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData)
{
  const mxArray *c49_mxArrayOutData = NULL;
  real32_T c49_u;
  const mxArray *c49_y = NULL;
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c49_mxArrayOutData = NULL;
  c49_u = *(real32_T *)c49_inData;
  c49_y = NULL;
  sf_mex_assign(&c49_y, sf_mex_create("y", &c49_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c49_mxArrayOutData, c49_y, false);
  return c49_mxArrayOutData;
}

static real32_T c49_c_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_bra_pre_r, const char_T *c49_identifier)
{
  real32_T c49_y;
  emlrtMsgIdentifier c49_thisId;
  c49_thisId.fIdentifier = c49_identifier;
  c49_thisId.fParent = NULL;
  c49_y = c49_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c49_bra_pre_r),
    &c49_thisId);
  sf_mex_destroy(&c49_bra_pre_r);
  return c49_y;
}

static real32_T c49_d_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId)
{
  real32_T c49_y;
  real32_T c49_f0;
  (void)chartInstance;
  sf_mex_import(c49_parentId, sf_mex_dup(c49_u), &c49_f0, 1, 1, 0U, 0, 0U, 0);
  c49_y = c49_f0;
  sf_mex_destroy(&c49_u);
  return c49_y;
}

static void c49_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c49_mxArrayInData, const char_T *c49_varName, void *c49_outData)
{
  const mxArray *c49_bra_pre_r;
  const char_T *c49_identifier;
  emlrtMsgIdentifier c49_thisId;
  real32_T c49_y;
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c49_bra_pre_r = sf_mex_dup(c49_mxArrayInData);
  c49_identifier = c49_varName;
  c49_thisId.fIdentifier = c49_identifier;
  c49_thisId.fParent = NULL;
  c49_y = c49_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c49_bra_pre_r),
    &c49_thisId);
  sf_mex_destroy(&c49_bra_pre_r);
  *(real32_T *)c49_outData = c49_y;
  sf_mex_destroy(&c49_mxArrayInData);
}

static const mxArray *c49_c_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData)
{
  const mxArray *c49_mxArrayOutData = NULL;
  boolean_T c49_u;
  const mxArray *c49_y = NULL;
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c49_mxArrayOutData = NULL;
  c49_u = *(boolean_T *)c49_inData;
  c49_y = NULL;
  sf_mex_assign(&c49_y, sf_mex_create("y", &c49_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c49_mxArrayOutData, c49_y, false);
  return c49_mxArrayOutData;
}

const mxArray
  *sf_c49_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c49_nameCaptureInfo = NULL;
  c49_nameCaptureInfo = NULL;
  sf_mex_assign(&c49_nameCaptureInfo, sf_mex_createstruct("structure", 2, 22, 1),
                false);
  c49_info_helper(&c49_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c49_nameCaptureInfo);
  return c49_nameCaptureInfo;
}

static void c49_info_helper(const mxArray **c49_info)
{
  const mxArray *c49_rhs0 = NULL;
  const mxArray *c49_lhs0 = NULL;
  const mxArray *c49_rhs1 = NULL;
  const mxArray *c49_lhs1 = NULL;
  const mxArray *c49_rhs2 = NULL;
  const mxArray *c49_lhs2 = NULL;
  const mxArray *c49_rhs3 = NULL;
  const mxArray *c49_lhs3 = NULL;
  const mxArray *c49_rhs4 = NULL;
  const mxArray *c49_lhs4 = NULL;
  const mxArray *c49_rhs5 = NULL;
  const mxArray *c49_lhs5 = NULL;
  const mxArray *c49_rhs6 = NULL;
  const mxArray *c49_lhs6 = NULL;
  const mxArray *c49_rhs7 = NULL;
  const mxArray *c49_lhs7 = NULL;
  const mxArray *c49_rhs8 = NULL;
  const mxArray *c49_lhs8 = NULL;
  const mxArray *c49_rhs9 = NULL;
  const mxArray *c49_lhs9 = NULL;
  const mxArray *c49_rhs10 = NULL;
  const mxArray *c49_lhs10 = NULL;
  const mxArray *c49_rhs11 = NULL;
  const mxArray *c49_lhs11 = NULL;
  const mxArray *c49_rhs12 = NULL;
  const mxArray *c49_lhs12 = NULL;
  const mxArray *c49_rhs13 = NULL;
  const mxArray *c49_lhs13 = NULL;
  const mxArray *c49_rhs14 = NULL;
  const mxArray *c49_lhs14 = NULL;
  const mxArray *c49_rhs15 = NULL;
  const mxArray *c49_lhs15 = NULL;
  const mxArray *c49_rhs16 = NULL;
  const mxArray *c49_lhs16 = NULL;
  const mxArray *c49_rhs17 = NULL;
  const mxArray *c49_lhs17 = NULL;
  const mxArray *c49_rhs18 = NULL;
  const mxArray *c49_lhs18 = NULL;
  const mxArray *c49_rhs19 = NULL;
  const mxArray *c49_lhs19 = NULL;
  const mxArray *c49_rhs20 = NULL;
  const mxArray *c49_lhs20 = NULL;
  const mxArray *c49_rhs21 = NULL;
  const mxArray *c49_lhs21 = NULL;
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("mrdivide"), "name", "name",
                  0);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1388463696U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1370017086U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c49_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 1);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 1);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c49_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 2);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("rdivide"), "name", "name", 2);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c49_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 3);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c49_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 4);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c49_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 5);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 5);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1286825996U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c49_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_div"), "name", "name", 6);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c49_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 7);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("coder.internal.div"), "name",
                  "name", 7);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 7);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c49_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(""), "context", "context", 8);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("min"), "name", "name", 8);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved",
                  "resolved", 8);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1311262518U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c49_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "context",
                  "context", 9);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_min_or_max"), "name",
                  "name", 9);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1378303184U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c49_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs9), "lhs", "lhs",
                  9);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 10);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 10);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 10);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c49_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs10), "lhs", "lhs",
                  10);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 11);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 11);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 11);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 11);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 11);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 11);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 11);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 11);
  sf_mex_assign(&c49_rhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs11), "rhs", "rhs",
                  11);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs11), "lhs", "lhs",
                  11);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 12);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 12);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 12);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 12);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 12);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 12);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 12);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 12);
  sf_mex_assign(&c49_rhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs12), "rhs", "rhs",
                  12);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs12), "lhs", "lhs",
                  12);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 13);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 13);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 13);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 13);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 13);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 13);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 13);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 13);
  sf_mex_assign(&c49_rhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs13), "rhs", "rhs",
                  13);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs13), "lhs", "lhs",
                  13);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 14);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_index_class"), "name",
                  "name", 14);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 14);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                  "resolved", "resolved", 14);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1323174178U), "fileTimeLo",
                  "fileTimeLo", 14);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 14);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 14);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 14);
  sf_mex_assign(&c49_rhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs14), "rhs", "rhs",
                  14);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs14), "lhs", "lhs",
                  14);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 15);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 15);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 15);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 15);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 15);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 15);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 15);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 15);
  sf_mex_assign(&c49_rhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs15), "rhs", "rhs",
                  15);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs15), "lhs", "lhs",
                  15);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 16);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 16);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 16);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 16);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 16);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 16);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 16);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 16);
  sf_mex_assign(&c49_rhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs16), "rhs", "rhs",
                  16);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs16), "lhs", "lhs",
                  16);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(""), "context", "context", 17);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("max"), "name", "name", 17);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 17);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved",
                  "resolved", 17);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1311262516U), "fileTimeLo",
                  "fileTimeLo", 17);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 17);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 17);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 17);
  sf_mex_assign(&c49_rhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs17), "rhs", "rhs",
                  17);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs17), "lhs", "lhs",
                  17);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "context",
                  "context", 18);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_min_or_max"), "name",
                  "name", 18);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 18);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                  "resolved", "resolved", 18);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1378303184U), "fileTimeLo",
                  "fileTimeLo", 18);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 18);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 18);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 18);
  sf_mex_assign(&c49_rhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs18), "rhs", "rhs",
                  18);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs18), "lhs", "lhs",
                  18);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 19);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("eml_relop"), "name", "name",
                  19);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("function_handle"),
                  "dominantType", "dominantType", 19);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved",
                  "resolved", 19);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1342458382U), "fileTimeLo",
                  "fileTimeLo", 19);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 19);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 19);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 19);
  sf_mex_assign(&c49_rhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs19), "rhs", "rhs",
                  19);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs19), "lhs", "lhs",
                  19);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 20);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("isnan"), "name", "name", 20);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 20);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved",
                  "resolved", 20);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1363717458U), "fileTimeLo",
                  "fileTimeLo", 20);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 20);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 20);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 20);
  sf_mex_assign(&c49_rhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs20), "rhs", "rhs",
                  20);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs20), "lhs", "lhs",
                  20);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context",
                  "context", 21);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 21);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 21);
  sf_mex_addfield(*c49_info, c49_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 21);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 21);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 21);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 21);
  sf_mex_addfield(*c49_info, c49_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 21);
  sf_mex_assign(&c49_rhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c49_lhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_rhs21), "rhs", "rhs",
                  21);
  sf_mex_addfield(*c49_info, sf_mex_duplicatearraysafe(&c49_lhs21), "lhs", "lhs",
                  21);
  sf_mex_destroy(&c49_rhs0);
  sf_mex_destroy(&c49_lhs0);
  sf_mex_destroy(&c49_rhs1);
  sf_mex_destroy(&c49_lhs1);
  sf_mex_destroy(&c49_rhs2);
  sf_mex_destroy(&c49_lhs2);
  sf_mex_destroy(&c49_rhs3);
  sf_mex_destroy(&c49_lhs3);
  sf_mex_destroy(&c49_rhs4);
  sf_mex_destroy(&c49_lhs4);
  sf_mex_destroy(&c49_rhs5);
  sf_mex_destroy(&c49_lhs5);
  sf_mex_destroy(&c49_rhs6);
  sf_mex_destroy(&c49_lhs6);
  sf_mex_destroy(&c49_rhs7);
  sf_mex_destroy(&c49_lhs7);
  sf_mex_destroy(&c49_rhs8);
  sf_mex_destroy(&c49_lhs8);
  sf_mex_destroy(&c49_rhs9);
  sf_mex_destroy(&c49_lhs9);
  sf_mex_destroy(&c49_rhs10);
  sf_mex_destroy(&c49_lhs10);
  sf_mex_destroy(&c49_rhs11);
  sf_mex_destroy(&c49_lhs11);
  sf_mex_destroy(&c49_rhs12);
  sf_mex_destroy(&c49_lhs12);
  sf_mex_destroy(&c49_rhs13);
  sf_mex_destroy(&c49_lhs13);
  sf_mex_destroy(&c49_rhs14);
  sf_mex_destroy(&c49_lhs14);
  sf_mex_destroy(&c49_rhs15);
  sf_mex_destroy(&c49_lhs15);
  sf_mex_destroy(&c49_rhs16);
  sf_mex_destroy(&c49_lhs16);
  sf_mex_destroy(&c49_rhs17);
  sf_mex_destroy(&c49_lhs17);
  sf_mex_destroy(&c49_rhs18);
  sf_mex_destroy(&c49_lhs18);
  sf_mex_destroy(&c49_rhs19);
  sf_mex_destroy(&c49_lhs19);
  sf_mex_destroy(&c49_rhs20);
  sf_mex_destroy(&c49_lhs20);
  sf_mex_destroy(&c49_rhs21);
  sf_mex_destroy(&c49_lhs21);
}

static const mxArray *c49_emlrt_marshallOut(const char * c49_u)
{
  const mxArray *c49_y = NULL;
  c49_y = NULL;
  sf_mex_assign(&c49_y, sf_mex_create("y", c49_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c49_u)), false);
  return c49_y;
}

static const mxArray *c49_b_emlrt_marshallOut(const uint32_T c49_u)
{
  const mxArray *c49_y = NULL;
  c49_y = NULL;
  sf_mex_assign(&c49_y, sf_mex_create("y", &c49_u, 7, 0U, 0U, 0U, 0), false);
  return c49_y;
}

static void c49_eml_scalar_eg
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c49_b_eml_scalar_eg
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *c49_d_sf_marshallOut(void *chartInstanceVoid, void
  *c49_inData)
{
  const mxArray *c49_mxArrayOutData = NULL;
  int32_T c49_u;
  const mxArray *c49_y = NULL;
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c49_mxArrayOutData = NULL;
  c49_u = *(int32_T *)c49_inData;
  c49_y = NULL;
  sf_mex_assign(&c49_y, sf_mex_create("y", &c49_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c49_mxArrayOutData, c49_y, false);
  return c49_mxArrayOutData;
}

static int32_T c49_e_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId)
{
  int32_T c49_y;
  int32_T c49_i0;
  (void)chartInstance;
  sf_mex_import(c49_parentId, sf_mex_dup(c49_u), &c49_i0, 1, 6, 0U, 0, 0U, 0);
  c49_y = c49_i0;
  sf_mex_destroy(&c49_u);
  return c49_y;
}

static void c49_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c49_mxArrayInData, const char_T *c49_varName, void *c49_outData)
{
  const mxArray *c49_b_sfEvent;
  const char_T *c49_identifier;
  emlrtMsgIdentifier c49_thisId;
  int32_T c49_y;
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c49_b_sfEvent = sf_mex_dup(c49_mxArrayInData);
  c49_identifier = c49_varName;
  c49_thisId.fIdentifier = c49_identifier;
  c49_thisId.fParent = NULL;
  c49_y = c49_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c49_b_sfEvent),
    &c49_thisId);
  sf_mex_destroy(&c49_b_sfEvent);
  *(int32_T *)c49_outData = c49_y;
  sf_mex_destroy(&c49_mxArrayInData);
}

static uint8_T c49_f_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_b_is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c49_identifier)
{
  uint8_T c49_y;
  emlrtMsgIdentifier c49_thisId;
  c49_thisId.fIdentifier = c49_identifier;
  c49_thisId.fParent = NULL;
  c49_y = c49_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c49_b_is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm), &c49_thisId);
  sf_mex_destroy(&c49_b_is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm);
  return c49_y;
}

static uint8_T c49_g_emlrt_marshallIn
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c49_u, const emlrtMsgIdentifier *c49_parentId)
{
  uint8_T c49_y;
  uint8_T c49_u0;
  (void)chartInstance;
  sf_mex_import(c49_parentId, sf_mex_dup(c49_u), &c49_u0, 1, 3, 0U, 0, 0U, 0);
  c49_y = c49_u0;
  sf_mex_destroy(&c49_u);
  return c49_y;
}

static void init_dsm_address_info
  (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
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

void sf_c49_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3374396879U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1930565406U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1360726588U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1916589578U);
}

mxArray *sf_c49_six_plus_six_AcmsteeringV09_main_2lflm_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("YoQquxXDA0gW0mNJcK3xJH");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,18,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

mxArray *sf_c49_six_plus_six_AcmsteeringV09_main_2lflm_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c49_six_plus_six_AcmsteeringV09_main_2lflm_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c49_six_plus_six_AcmsteeringV09_main_2lflm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[18],T\"bra_pre_l\",},{M[1],M[19],T\"bra_pre_r\",},{M[1],M[21],T\"mode\",},{M[1],M[5],T\"trq_dem_lf\",},{M[1],M[29],T\"trq_dem_lm\",},{M[1],M[15],T\"trq_dem_lr\",},{M[1],M[16],T\"trq_dem_rf\",},{M[1],M[30],T\"trq_dem_rm\",},{M[1],M[17],T\"trq_dem_rr\",},{M[8],M[0],T\"is_active_c49_six_plus_six_AcmsteeringV09_main_2lflm\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c49_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           49,
           1,
           1,
           0,
           27,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"trq_dem_l");
          _SFD_SET_DATA_PROPS(1,2,0,1,"trq_dem_lf");
          _SFD_SET_DATA_PROPS(2,2,0,1,"trq_dem_lm");
          _SFD_SET_DATA_PROPS(3,1,1,0,"trq_dem_r");
          _SFD_SET_DATA_PROPS(4,1,1,0,"trqlim_lf");
          _SFD_SET_DATA_PROPS(5,1,1,0,"trqlim_lm");
          _SFD_SET_DATA_PROPS(6,1,1,0,"trqlim_lr");
          _SFD_SET_DATA_PROPS(7,1,1,0,"trqlim_rf");
          _SFD_SET_DATA_PROPS(8,1,1,0,"trqlim_rm");
          _SFD_SET_DATA_PROPS(9,1,1,0,"trqlim_rr");
          _SFD_SET_DATA_PROPS(10,1,1,0,"guzhang_lf");
          _SFD_SET_DATA_PROPS(11,1,1,0,"guzhang_lm");
          _SFD_SET_DATA_PROPS(12,1,1,0,"guzhang_lr");
          _SFD_SET_DATA_PROPS(13,1,1,0,"guzhang_rf");
          _SFD_SET_DATA_PROPS(14,1,1,0,"guzhang_rm");
          _SFD_SET_DATA_PROPS(15,1,1,0,"guzhang_rr");
          _SFD_SET_DATA_PROPS(16,2,0,1,"trq_dem_lr");
          _SFD_SET_DATA_PROPS(17,2,0,1,"trq_dem_rf");
          _SFD_SET_DATA_PROPS(18,2,0,1,"trq_dem_rm");
          _SFD_SET_DATA_PROPS(19,2,0,1,"trq_dem_rr");
          _SFD_SET_DATA_PROPS(20,2,0,1,"bra_pre_l");
          _SFD_SET_DATA_PROPS(21,2,0,1,"bra_pre_r");
          _SFD_SET_DATA_PROPS(22,1,1,0,"bra_pre_yd");
          _SFD_SET_DATA_PROPS(23,2,0,1,"mode");
          _SFD_SET_DATA_PROPS(24,1,1,0,"bra_dem_l");
          _SFD_SET_DATA_PROPS(25,1,1,0,"bra_dem_r");
          _SFD_SET_DATA_PROPS(26,1,1,0,"brake_dem");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,7431);
        _SFD_CV_INIT_EML_IF(0,1,0,306,321,6628,6871);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)
          c49_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_sf_marshallOut,(MexInFcnForType)c49_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c49_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real32_T *c49_trq_dem_l;
          real32_T *c49_trq_dem_lf;
          real32_T *c49_trq_dem_lm;
          real32_T *c49_trq_dem_r;
          real32_T *c49_trqlim_lf;
          real32_T *c49_trqlim_lm;
          real32_T *c49_trqlim_lr;
          real32_T *c49_trqlim_rf;
          real32_T *c49_trqlim_rm;
          real32_T *c49_trqlim_rr;
          boolean_T *c49_guzhang_lf;
          boolean_T *c49_guzhang_lm;
          boolean_T *c49_guzhang_lr;
          boolean_T *c49_guzhang_rf;
          boolean_T *c49_guzhang_rm;
          boolean_T *c49_guzhang_rr;
          real32_T *c49_trq_dem_lr;
          real32_T *c49_trq_dem_rf;
          real32_T *c49_trq_dem_rm;
          real32_T *c49_trq_dem_rr;
          real32_T *c49_bra_pre_l;
          real32_T *c49_bra_pre_r;
          real32_T *c49_bra_pre_yd;
          real_T *c49_mode;
          real32_T *c49_bra_dem_l;
          real32_T *c49_bra_dem_r;
          real32_T *c49_brake_dem;
          c49_brake_dem = (real32_T *)ssGetInputPortSignal(chartInstance->S, 17);
          c49_bra_dem_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 16);
          c49_bra_dem_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 15);
          c49_mode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
          c49_bra_pre_yd = (real32_T *)ssGetInputPortSignal(chartInstance->S, 14);
          c49_bra_pre_r = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c49_bra_pre_l = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 7);
          c49_trq_dem_rr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c49_trq_dem_rm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c49_trq_dem_rf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c49_trq_dem_lr = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c49_guzhang_rr = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            13);
          c49_guzhang_rm = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            12);
          c49_guzhang_rf = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            11);
          c49_guzhang_lr = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            10);
          c49_guzhang_lm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c49_guzhang_lf = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c49_trqlim_rr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c49_trqlim_rm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c49_trqlim_rf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c49_trqlim_lr = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c49_trqlim_lm = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c49_trqlim_lf = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c49_trq_dem_r = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c49_trq_dem_lm = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c49_trq_dem_lf = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c49_trq_dem_l = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c49_trq_dem_l);
          _SFD_SET_DATA_VALUE_PTR(1U, c49_trq_dem_lf);
          _SFD_SET_DATA_VALUE_PTR(2U, c49_trq_dem_lm);
          _SFD_SET_DATA_VALUE_PTR(3U, c49_trq_dem_r);
          _SFD_SET_DATA_VALUE_PTR(4U, c49_trqlim_lf);
          _SFD_SET_DATA_VALUE_PTR(5U, c49_trqlim_lm);
          _SFD_SET_DATA_VALUE_PTR(6U, c49_trqlim_lr);
          _SFD_SET_DATA_VALUE_PTR(7U, c49_trqlim_rf);
          _SFD_SET_DATA_VALUE_PTR(8U, c49_trqlim_rm);
          _SFD_SET_DATA_VALUE_PTR(9U, c49_trqlim_rr);
          _SFD_SET_DATA_VALUE_PTR(10U, c49_guzhang_lf);
          _SFD_SET_DATA_VALUE_PTR(11U, c49_guzhang_lm);
          _SFD_SET_DATA_VALUE_PTR(12U, c49_guzhang_lr);
          _SFD_SET_DATA_VALUE_PTR(13U, c49_guzhang_rf);
          _SFD_SET_DATA_VALUE_PTR(14U, c49_guzhang_rm);
          _SFD_SET_DATA_VALUE_PTR(15U, c49_guzhang_rr);
          _SFD_SET_DATA_VALUE_PTR(16U, c49_trq_dem_lr);
          _SFD_SET_DATA_VALUE_PTR(17U, c49_trq_dem_rf);
          _SFD_SET_DATA_VALUE_PTR(18U, c49_trq_dem_rm);
          _SFD_SET_DATA_VALUE_PTR(19U, c49_trq_dem_rr);
          _SFD_SET_DATA_VALUE_PTR(20U, c49_bra_pre_l);
          _SFD_SET_DATA_VALUE_PTR(21U, c49_bra_pre_r);
          _SFD_SET_DATA_VALUE_PTR(22U, c49_bra_pre_yd);
          _SFD_SET_DATA_VALUE_PTR(23U, c49_mode);
          _SFD_SET_DATA_VALUE_PTR(24U, c49_bra_dem_l);
          _SFD_SET_DATA_VALUE_PTR(25U, c49_bra_dem_r);
          _SFD_SET_DATA_VALUE_PTR(26U, c49_brake_dem);
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
  return "uhozmsgNAhJKZw7ER39MlE";
}

static void sf_opaque_initialize_c49_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
  initialize_c49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c49_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  enable_c49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c49_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  disable_c49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c49_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  sf_gateway_c49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c49_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
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

extern void sf_internal_set_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
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
    sf_get_sim_state_info_c49_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm(S);
}

static void sf_opaque_set_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm(S, st);
}

static void sf_opaque_terminate_c49_six_plus_six_AcmsteeringV09_main_2lflm(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    }

    finalize_c49_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
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
  initSimStructsc49_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c49_six_plus_six_AcmsteeringV09_main_2lflm
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
    initialize_params_c49_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c49_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      49);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,49,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,49,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,49);
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
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,49,18);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,49,9);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=9; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 18; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,49);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2503472706U));
  ssSetChecksum1(S,(2271362542U));
  ssSetChecksum2(S,(762857586U));
  ssSetChecksum3(S,(2993347389U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c49_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c49_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    utMalloc(sizeof(SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc49_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c49_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c49_six_plus_six_AcmsteeringV09_main_2lflm;
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

void c49_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c49_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c49_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c49_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c49_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
