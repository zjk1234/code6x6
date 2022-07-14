/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_sfun.h"
#include "c104_six_plus_six_AcmsteeringV09_main.h"
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
static const char * c104_debug_family_names[34] = { "nargin", "nargout",
  "Xangularrate", "Yangularrate", "Zangularrate", "Xacceleration",
  "Yacceleration", "Zacceleration", "NorthSpd", "SkySpd", "EastSpd", "Altitude",
  "Longitude", "Latitude", "Rolling", "Heading", "Pitching", "Xangularrate1",
  "Yangularrate1", "Zangularrate1", "Xacceleration1", "Yacceleration1",
  "Zacceleration1", "NorthSpd1", "SkySpd1", "EastSpd1", "Altitude1",
  "Longitude1", "Latitude1", "Rolling1", "Heading1", "Pitching1", "Xspd", "Yspd"
};

/* Function Declarations */
static void initialize_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initialize_params_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void enable_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void disable_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c104_update_debugger_state_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void set_sim_state_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_st);
static void finalize_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void sf_gateway_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void c104_chartstep_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void initSimStructsc104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c104_machineNumber, uint32_T
  c104_chartNumber, uint32_T c104_instanceNumber);
static const mxArray *c104_sf_marshallOut(void *chartInstanceVoid, void
  *c104_inData);
static real_T c104_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_Yspd, const char_T *c104_identifier);
static real_T c104_b_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_u, const emlrtMsgIdentifier *c104_parentId);
static void c104_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c104_mxArrayInData, const char_T *c104_varName, void *c104_outData);
static void c104_info_helper(const mxArray **c104_info);
static const mxArray *c104_emlrt_marshallOut(const char * c104_u);
static const mxArray *c104_b_emlrt_marshallOut(const uint32_T c104_u);
static const mxArray *c104_b_sf_marshallOut(void *chartInstanceVoid, void
  *c104_inData);
static int32_T c104_c_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_u, const emlrtMsgIdentifier *c104_parentId);
static void c104_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c104_mxArrayInData, const char_T *c104_varName, void *c104_outData);
static uint8_T c104_d_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_b_is_active_c104_six_plus_six_AcmsteeringV09_main, const char_T
   *c104_identifier);
static uint8_T c104_e_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_u, const emlrtMsgIdentifier *c104_parentId);
static void init_dsm_address_info
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  chartInstance->c104_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c104_is_active_c104_six_plus_six_AcmsteeringV09_main = 0U;
}

static void initialize_params_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c104_update_debugger_state_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  const mxArray *c104_st;
  const mxArray *c104_y = NULL;
  real_T c104_hoistedGlobal;
  real_T c104_u;
  const mxArray *c104_b_y = NULL;
  real_T c104_b_hoistedGlobal;
  real_T c104_b_u;
  const mxArray *c104_c_y = NULL;
  real_T c104_c_hoistedGlobal;
  real_T c104_c_u;
  const mxArray *c104_d_y = NULL;
  real_T c104_d_hoistedGlobal;
  real_T c104_d_u;
  const mxArray *c104_e_y = NULL;
  real_T c104_e_hoistedGlobal;
  real_T c104_e_u;
  const mxArray *c104_f_y = NULL;
  real_T c104_f_hoistedGlobal;
  real_T c104_f_u;
  const mxArray *c104_g_y = NULL;
  real_T c104_g_hoistedGlobal;
  real_T c104_g_u;
  const mxArray *c104_h_y = NULL;
  real_T c104_h_hoistedGlobal;
  real_T c104_h_u;
  const mxArray *c104_i_y = NULL;
  real_T c104_i_hoistedGlobal;
  real_T c104_i_u;
  const mxArray *c104_j_y = NULL;
  real_T c104_j_hoistedGlobal;
  real_T c104_j_u;
  const mxArray *c104_k_y = NULL;
  real_T c104_k_hoistedGlobal;
  real_T c104_k_u;
  const mxArray *c104_l_y = NULL;
  real_T c104_l_hoistedGlobal;
  real_T c104_l_u;
  const mxArray *c104_m_y = NULL;
  real_T c104_m_hoistedGlobal;
  real_T c104_m_u;
  const mxArray *c104_n_y = NULL;
  real_T c104_n_hoistedGlobal;
  real_T c104_n_u;
  const mxArray *c104_o_y = NULL;
  real_T c104_o_hoistedGlobal;
  real_T c104_o_u;
  const mxArray *c104_p_y = NULL;
  real_T c104_p_hoistedGlobal;
  real_T c104_p_u;
  const mxArray *c104_q_y = NULL;
  real_T c104_q_hoistedGlobal;
  real_T c104_q_u;
  const mxArray *c104_r_y = NULL;
  uint8_T c104_r_hoistedGlobal;
  uint8_T c104_r_u;
  const mxArray *c104_s_y = NULL;
  real_T *c104_Altitude1;
  real_T *c104_EastSpd1;
  real_T *c104_Heading1;
  real_T *c104_Latitude1;
  real_T *c104_Longitude1;
  real_T *c104_NorthSpd1;
  real_T *c104_Pitching1;
  real_T *c104_Rolling1;
  real_T *c104_SkySpd1;
  real_T *c104_Xacceleration1;
  real_T *c104_Xangularrate1;
  real_T *c104_Xspd;
  real_T *c104_Yacceleration1;
  real_T *c104_Yangularrate1;
  real_T *c104_Yspd;
  real_T *c104_Zacceleration1;
  real_T *c104_Zangularrate1;
  c104_Yspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c104_Xspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 16);
  c104_Pitching1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 15);
  c104_Heading1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c104_Rolling1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c104_Latitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c104_Longitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c104_Altitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c104_EastSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c104_SkySpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c104_NorthSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c104_Zacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c104_Yacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c104_Xacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c104_Zangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c104_Yangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c104_Xangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c104_st = NULL;
  c104_st = NULL;
  c104_y = NULL;
  sf_mex_assign(&c104_y, sf_mex_createcellmatrix(18, 1), false);
  c104_hoistedGlobal = *c104_Altitude1;
  c104_u = c104_hoistedGlobal;
  c104_b_y = NULL;
  sf_mex_assign(&c104_b_y, sf_mex_create("y", &c104_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c104_y, 0, c104_b_y);
  c104_b_hoistedGlobal = *c104_EastSpd1;
  c104_b_u = c104_b_hoistedGlobal;
  c104_c_y = NULL;
  sf_mex_assign(&c104_c_y, sf_mex_create("y", &c104_b_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 1, c104_c_y);
  c104_c_hoistedGlobal = *c104_Heading1;
  c104_c_u = c104_c_hoistedGlobal;
  c104_d_y = NULL;
  sf_mex_assign(&c104_d_y, sf_mex_create("y", &c104_c_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 2, c104_d_y);
  c104_d_hoistedGlobal = *c104_Latitude1;
  c104_d_u = c104_d_hoistedGlobal;
  c104_e_y = NULL;
  sf_mex_assign(&c104_e_y, sf_mex_create("y", &c104_d_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 3, c104_e_y);
  c104_e_hoistedGlobal = *c104_Longitude1;
  c104_e_u = c104_e_hoistedGlobal;
  c104_f_y = NULL;
  sf_mex_assign(&c104_f_y, sf_mex_create("y", &c104_e_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 4, c104_f_y);
  c104_f_hoistedGlobal = *c104_NorthSpd1;
  c104_f_u = c104_f_hoistedGlobal;
  c104_g_y = NULL;
  sf_mex_assign(&c104_g_y, sf_mex_create("y", &c104_f_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 5, c104_g_y);
  c104_g_hoistedGlobal = *c104_Pitching1;
  c104_g_u = c104_g_hoistedGlobal;
  c104_h_y = NULL;
  sf_mex_assign(&c104_h_y, sf_mex_create("y", &c104_g_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 6, c104_h_y);
  c104_h_hoistedGlobal = *c104_Rolling1;
  c104_h_u = c104_h_hoistedGlobal;
  c104_i_y = NULL;
  sf_mex_assign(&c104_i_y, sf_mex_create("y", &c104_h_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 7, c104_i_y);
  c104_i_hoistedGlobal = *c104_SkySpd1;
  c104_i_u = c104_i_hoistedGlobal;
  c104_j_y = NULL;
  sf_mex_assign(&c104_j_y, sf_mex_create("y", &c104_i_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 8, c104_j_y);
  c104_j_hoistedGlobal = *c104_Xacceleration1;
  c104_j_u = c104_j_hoistedGlobal;
  c104_k_y = NULL;
  sf_mex_assign(&c104_k_y, sf_mex_create("y", &c104_j_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 9, c104_k_y);
  c104_k_hoistedGlobal = *c104_Xangularrate1;
  c104_k_u = c104_k_hoistedGlobal;
  c104_l_y = NULL;
  sf_mex_assign(&c104_l_y, sf_mex_create("y", &c104_k_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 10, c104_l_y);
  c104_l_hoistedGlobal = *c104_Xspd;
  c104_l_u = c104_l_hoistedGlobal;
  c104_m_y = NULL;
  sf_mex_assign(&c104_m_y, sf_mex_create("y", &c104_l_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 11, c104_m_y);
  c104_m_hoistedGlobal = *c104_Yacceleration1;
  c104_m_u = c104_m_hoistedGlobal;
  c104_n_y = NULL;
  sf_mex_assign(&c104_n_y, sf_mex_create("y", &c104_m_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 12, c104_n_y);
  c104_n_hoistedGlobal = *c104_Yangularrate1;
  c104_n_u = c104_n_hoistedGlobal;
  c104_o_y = NULL;
  sf_mex_assign(&c104_o_y, sf_mex_create("y", &c104_n_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 13, c104_o_y);
  c104_o_hoistedGlobal = *c104_Yspd;
  c104_o_u = c104_o_hoistedGlobal;
  c104_p_y = NULL;
  sf_mex_assign(&c104_p_y, sf_mex_create("y", &c104_o_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 14, c104_p_y);
  c104_p_hoistedGlobal = *c104_Zacceleration1;
  c104_p_u = c104_p_hoistedGlobal;
  c104_q_y = NULL;
  sf_mex_assign(&c104_q_y, sf_mex_create("y", &c104_p_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 15, c104_q_y);
  c104_q_hoistedGlobal = *c104_Zangularrate1;
  c104_q_u = c104_q_hoistedGlobal;
  c104_r_y = NULL;
  sf_mex_assign(&c104_r_y, sf_mex_create("y", &c104_q_u, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 16, c104_r_y);
  c104_r_hoistedGlobal =
    chartInstance->c104_is_active_c104_six_plus_six_AcmsteeringV09_main;
  c104_r_u = c104_r_hoistedGlobal;
  c104_s_y = NULL;
  sf_mex_assign(&c104_s_y, sf_mex_create("y", &c104_r_u, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c104_y, 17, c104_s_y);
  sf_mex_assign(&c104_st, c104_y, false);
  return c104_st;
}

static void set_sim_state_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_st)
{
  const mxArray *c104_u;
  real_T *c104_Altitude1;
  real_T *c104_EastSpd1;
  real_T *c104_Heading1;
  real_T *c104_Latitude1;
  real_T *c104_Longitude1;
  real_T *c104_NorthSpd1;
  real_T *c104_Pitching1;
  real_T *c104_Rolling1;
  real_T *c104_SkySpd1;
  real_T *c104_Xacceleration1;
  real_T *c104_Xangularrate1;
  real_T *c104_Xspd;
  real_T *c104_Yacceleration1;
  real_T *c104_Yangularrate1;
  real_T *c104_Yspd;
  real_T *c104_Zacceleration1;
  real_T *c104_Zangularrate1;
  c104_Yspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c104_Xspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 16);
  c104_Pitching1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 15);
  c104_Heading1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c104_Rolling1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c104_Latitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c104_Longitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c104_Altitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c104_EastSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c104_SkySpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c104_NorthSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c104_Zacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c104_Yacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c104_Xacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c104_Zangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c104_Yangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c104_Xangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c104_doneDoubleBufferReInit = true;
  c104_u = sf_mex_dup(c104_st);
  *c104_Altitude1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 0)), "Altitude1");
  *c104_EastSpd1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 1)), "EastSpd1");
  *c104_Heading1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 2)), "Heading1");
  *c104_Latitude1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 3)), "Latitude1");
  *c104_Longitude1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 4)), "Longitude1");
  *c104_NorthSpd1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 5)), "NorthSpd1");
  *c104_Pitching1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 6)), "Pitching1");
  *c104_Rolling1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 7)), "Rolling1");
  *c104_SkySpd1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c104_u, 8)), "SkySpd1");
  *c104_Xacceleration1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 9)), "Xacceleration1");
  *c104_Xangularrate1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 10)), "Xangularrate1");
  *c104_Xspd = c104_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c104_u, 11)), "Xspd");
  *c104_Yacceleration1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 12)), "Yacceleration1");
  *c104_Yangularrate1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 13)), "Yangularrate1");
  *c104_Yspd = c104_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c104_u, 14)), "Yspd");
  *c104_Zacceleration1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 15)), "Zacceleration1");
  *c104_Zangularrate1 = c104_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c104_u, 16)), "Zangularrate1");
  chartInstance->c104_is_active_c104_six_plus_six_AcmsteeringV09_main =
    c104_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c104_u, 17)),
    "is_active_c104_six_plus_six_AcmsteeringV09_main");
  sf_mex_destroy(&c104_u);
  c104_update_debugger_state_c104_six_plus_six_AcmsteeringV09_main(chartInstance);
  sf_mex_destroy(&c104_st);
}

static void finalize_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real_T *c104_Xangularrate;
  real_T *c104_Yangularrate;
  real_T *c104_Zangularrate;
  real_T *c104_Xacceleration;
  real_T *c104_Yacceleration;
  real_T *c104_Zacceleration;
  real_T *c104_Xangularrate1;
  real_T *c104_Yangularrate1;
  real_T *c104_Zangularrate1;
  real_T *c104_Xacceleration1;
  real_T *c104_Yacceleration1;
  real_T *c104_Zacceleration1;
  real_T *c104_NorthSpd1;
  real_T *c104_SkySpd1;
  real_T *c104_EastSpd1;
  real_T *c104_Altitude1;
  real_T *c104_Longitude1;
  real_T *c104_Latitude1;
  real_T *c104_Rolling1;
  real_T *c104_Heading1;
  real_T *c104_Pitching1;
  real_T *c104_NorthSpd;
  real_T *c104_SkySpd;
  real_T *c104_Xspd;
  real_T *c104_EastSpd;
  real_T *c104_Altitude;
  real_T *c104_Longitude;
  real_T *c104_Latitude;
  real_T *c104_Rolling;
  real_T *c104_Heading;
  real_T *c104_Yspd;
  real_T *c104_Pitching;
  c104_Pitching = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c104_Yspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c104_Heading = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c104_Rolling = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c104_Latitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c104_Longitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c104_Altitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c104_EastSpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c104_Xspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 16);
  c104_SkySpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c104_NorthSpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c104_Pitching1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 15);
  c104_Heading1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c104_Rolling1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c104_Latitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c104_Longitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c104_Altitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c104_EastSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c104_SkySpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c104_NorthSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c104_Zacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c104_Yacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c104_Xacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c104_Zangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c104_Yangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c104_Xangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c104_Zacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c104_Yacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c104_Xacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c104_Zangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c104_Yangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c104_Xangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 103U, chartInstance->c104_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c104_Xangularrate, 0U);
  _SFD_DATA_RANGE_CHECK(*c104_Yangularrate, 1U);
  _SFD_DATA_RANGE_CHECK(*c104_Zangularrate, 2U);
  _SFD_DATA_RANGE_CHECK(*c104_Xacceleration, 3U);
  _SFD_DATA_RANGE_CHECK(*c104_Yacceleration, 4U);
  _SFD_DATA_RANGE_CHECK(*c104_Zacceleration, 5U);
  chartInstance->c104_sfEvent = CALL_EVENT;
  c104_chartstep_c104_six_plus_six_AcmsteeringV09_main(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_mainMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c104_Xangularrate1, 6U);
  _SFD_DATA_RANGE_CHECK(*c104_Yangularrate1, 7U);
  _SFD_DATA_RANGE_CHECK(*c104_Zangularrate1, 8U);
  _SFD_DATA_RANGE_CHECK(*c104_Xacceleration1, 9U);
  _SFD_DATA_RANGE_CHECK(*c104_Yacceleration1, 10U);
  _SFD_DATA_RANGE_CHECK(*c104_Zacceleration1, 11U);
  _SFD_DATA_RANGE_CHECK(*c104_NorthSpd1, 12U);
  _SFD_DATA_RANGE_CHECK(*c104_SkySpd1, 13U);
  _SFD_DATA_RANGE_CHECK(*c104_EastSpd1, 14U);
  _SFD_DATA_RANGE_CHECK(*c104_Altitude1, 15U);
  _SFD_DATA_RANGE_CHECK(*c104_Longitude1, 16U);
  _SFD_DATA_RANGE_CHECK(*c104_Latitude1, 17U);
  _SFD_DATA_RANGE_CHECK(*c104_Rolling1, 18U);
  _SFD_DATA_RANGE_CHECK(*c104_Heading1, 19U);
  _SFD_DATA_RANGE_CHECK(*c104_Pitching1, 20U);
  _SFD_DATA_RANGE_CHECK(*c104_NorthSpd, 21U);
  _SFD_DATA_RANGE_CHECK(*c104_SkySpd, 22U);
  _SFD_DATA_RANGE_CHECK(*c104_Xspd, 23U);
  _SFD_DATA_RANGE_CHECK(*c104_EastSpd, 24U);
  _SFD_DATA_RANGE_CHECK(*c104_Altitude, 25U);
  _SFD_DATA_RANGE_CHECK(*c104_Longitude, 26U);
  _SFD_DATA_RANGE_CHECK(*c104_Latitude, 27U);
  _SFD_DATA_RANGE_CHECK(*c104_Rolling, 28U);
  _SFD_DATA_RANGE_CHECK(*c104_Heading, 29U);
  _SFD_DATA_RANGE_CHECK(*c104_Yspd, 30U);
  _SFD_DATA_RANGE_CHECK(*c104_Pitching, 31U);
}

static void c104_chartstep_c104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  real_T c104_hoistedGlobal;
  real_T c104_b_hoistedGlobal;
  real_T c104_c_hoistedGlobal;
  real_T c104_d_hoistedGlobal;
  real_T c104_e_hoistedGlobal;
  real_T c104_f_hoistedGlobal;
  real_T c104_g_hoistedGlobal;
  real_T c104_h_hoistedGlobal;
  real_T c104_i_hoistedGlobal;
  real_T c104_j_hoistedGlobal;
  real_T c104_k_hoistedGlobal;
  real_T c104_l_hoistedGlobal;
  real_T c104_m_hoistedGlobal;
  real_T c104_n_hoistedGlobal;
  real_T c104_o_hoistedGlobal;
  real_T c104_Xangularrate;
  real_T c104_Yangularrate;
  real_T c104_Zangularrate;
  real_T c104_Xacceleration;
  real_T c104_Yacceleration;
  real_T c104_Zacceleration;
  real_T c104_NorthSpd;
  real_T c104_SkySpd;
  real_T c104_EastSpd;
  real_T c104_Altitude;
  real_T c104_Longitude;
  real_T c104_Latitude;
  real_T c104_Rolling;
  real_T c104_Heading;
  real_T c104_Pitching;
  uint32_T c104_debug_family_var_map[34];
  real_T c104_nargin = 15.0;
  real_T c104_nargout = 17.0;
  real_T c104_Xangularrate1;
  real_T c104_Yangularrate1;
  real_T c104_Zangularrate1;
  real_T c104_Xacceleration1;
  real_T c104_Yacceleration1;
  real_T c104_Zacceleration1;
  real_T c104_NorthSpd1;
  real_T c104_SkySpd1;
  real_T c104_EastSpd1;
  real_T c104_Altitude1;
  real_T c104_Longitude1;
  real_T c104_Latitude1;
  real_T c104_Rolling1;
  real_T c104_Heading1;
  real_T c104_Pitching1;
  real_T c104_Xspd;
  real_T c104_Yspd;
  real_T c104_A;
  real_T c104_x;
  real_T c104_b_x;
  real_T c104_c_x;
  real_T c104_y;
  real_T c104_d_x;
  real_T c104_e_x;
  real_T c104_b_A;
  real_T c104_f_x;
  real_T c104_g_x;
  real_T c104_h_x;
  real_T c104_b_y;
  real_T c104_i_x;
  real_T c104_j_x;
  real_T c104_c_A;
  real_T c104_k_x;
  real_T c104_l_x;
  real_T c104_m_x;
  real_T c104_c_y;
  real_T c104_n_x;
  real_T c104_o_x;
  real_T c104_d_A;
  real_T c104_p_x;
  real_T c104_q_x;
  real_T c104_r_x;
  real_T c104_d_y;
  real_T c104_s_x;
  real_T c104_t_x;
  real_T *c104_b_Yspd;
  real_T *c104_b_Xspd;
  real_T *c104_b_Pitching1;
  real_T *c104_b_Heading1;
  real_T *c104_b_Rolling1;
  real_T *c104_b_Latitude1;
  real_T *c104_b_Longitude1;
  real_T *c104_b_Altitude1;
  real_T *c104_b_EastSpd1;
  real_T *c104_b_SkySpd1;
  real_T *c104_b_NorthSpd1;
  real_T *c104_b_Zacceleration1;
  real_T *c104_b_Yacceleration1;
  real_T *c104_b_Xacceleration1;
  real_T *c104_b_Zangularrate1;
  real_T *c104_b_Yangularrate1;
  real_T *c104_b_Xangularrate1;
  real_T *c104_b_Pitching;
  real_T *c104_b_Heading;
  real_T *c104_b_Rolling;
  real_T *c104_b_Latitude;
  real_T *c104_b_Longitude;
  real_T *c104_b_Altitude;
  real_T *c104_b_EastSpd;
  real_T *c104_b_SkySpd;
  real_T *c104_b_NorthSpd;
  real_T *c104_b_Zacceleration;
  real_T *c104_b_Yacceleration;
  real_T *c104_b_Xacceleration;
  real_T *c104_b_Zangularrate;
  real_T *c104_b_Yangularrate;
  real_T *c104_b_Xangularrate;
  c104_b_Pitching = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c104_b_Yspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c104_b_Heading = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c104_b_Rolling = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c104_b_Latitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c104_b_Longitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c104_b_Altitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c104_b_EastSpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c104_b_Xspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 16);
  c104_b_SkySpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c104_b_NorthSpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c104_b_Pitching1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 15);
  c104_b_Heading1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c104_b_Rolling1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c104_b_Latitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c104_b_Longitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c104_b_Altitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c104_b_EastSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c104_b_SkySpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c104_b_NorthSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c104_b_Zacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c104_b_Yacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c104_b_Xacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c104_b_Zangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c104_b_Yangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c104_b_Xangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c104_b_Zacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c104_b_Yacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c104_b_Xacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c104_b_Zangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c104_b_Yangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c104_b_Xangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 103U,
               chartInstance->c104_sfEvent);
  c104_hoistedGlobal = *c104_b_Xangularrate;
  c104_b_hoistedGlobal = *c104_b_Yangularrate;
  c104_c_hoistedGlobal = *c104_b_Zangularrate;
  c104_d_hoistedGlobal = *c104_b_Xacceleration;
  c104_e_hoistedGlobal = *c104_b_Yacceleration;
  c104_f_hoistedGlobal = *c104_b_Zacceleration;
  c104_g_hoistedGlobal = *c104_b_NorthSpd;
  c104_h_hoistedGlobal = *c104_b_SkySpd;
  c104_i_hoistedGlobal = *c104_b_EastSpd;
  c104_j_hoistedGlobal = *c104_b_Altitude;
  c104_k_hoistedGlobal = *c104_b_Longitude;
  c104_l_hoistedGlobal = *c104_b_Latitude;
  c104_m_hoistedGlobal = *c104_b_Rolling;
  c104_n_hoistedGlobal = *c104_b_Heading;
  c104_o_hoistedGlobal = *c104_b_Pitching;
  c104_Xangularrate = c104_hoistedGlobal;
  c104_Yangularrate = c104_b_hoistedGlobal;
  c104_Zangularrate = c104_c_hoistedGlobal;
  c104_Xacceleration = c104_d_hoistedGlobal;
  c104_Yacceleration = c104_e_hoistedGlobal;
  c104_Zacceleration = c104_f_hoistedGlobal;
  c104_NorthSpd = c104_g_hoistedGlobal;
  c104_SkySpd = c104_h_hoistedGlobal;
  c104_EastSpd = c104_i_hoistedGlobal;
  c104_Altitude = c104_j_hoistedGlobal;
  c104_Longitude = c104_k_hoistedGlobal;
  c104_Latitude = c104_l_hoistedGlobal;
  c104_Rolling = c104_m_hoistedGlobal;
  c104_Heading = c104_n_hoistedGlobal;
  c104_Pitching = c104_o_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 34U, 34U, c104_debug_family_names,
    c104_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_nargin, 0U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_nargout, 1U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Xangularrate, 2U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Yangularrate, 3U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Zangularrate, 4U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Xacceleration, 5U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Yacceleration, 6U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Zacceleration, 7U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_NorthSpd, 8U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_SkySpd, 9U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_EastSpd, 10U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Altitude, 11U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Longitude, 12U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Latitude, 13U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Rolling, 14U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Heading, 15U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c104_Pitching, 16U, c104_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Xangularrate1, 17U,
    c104_sf_marshallOut, c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Yangularrate1, 18U,
    c104_sf_marshallOut, c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Zangularrate1, 19U,
    c104_sf_marshallOut, c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Xacceleration1, 20U,
    c104_sf_marshallOut, c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Yacceleration1, 21U,
    c104_sf_marshallOut, c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Zacceleration1, 22U,
    c104_sf_marshallOut, c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_NorthSpd1, 23U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_SkySpd1, 24U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_EastSpd1, 25U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Altitude1, 26U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Longitude1, 27U,
    c104_sf_marshallOut, c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Latitude1, 28U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Rolling1, 29U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Heading1, 30U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Pitching1, 31U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Xspd, 32U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c104_Yspd, 33U, c104_sf_marshallOut,
    c104_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 3);
  c104_Xangularrate1 = c104_Xangularrate;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 4);
  c104_Yangularrate1 = -c104_Zangularrate;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 5);
  c104_Zangularrate1 = -c104_Yangularrate;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 6);
  c104_Xacceleration1 = c104_Xacceleration;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 7);
  c104_Yacceleration1 = -c104_Zacceleration;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 8);
  c104_Zacceleration1 = -c104_Yacceleration;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 9);
  c104_NorthSpd1 = c104_NorthSpd;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 10);
  c104_SkySpd1 = c104_SkySpd;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 11);
  c104_EastSpd1 = c104_EastSpd;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 12);
  c104_Altitude1 = c104_Altitude;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 13);
  c104_Longitude1 = c104_Longitude;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 14);
  c104_Latitude1 = c104_Latitude;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 15);
  c104_Rolling1 = c104_Rolling;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 16);
  c104_Heading1 = c104_Heading;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 17);
  c104_Pitching1 = c104_Pitching;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 18);
  c104_A = c104_Heading;
  c104_x = c104_A;
  c104_b_x = c104_x;
  c104_c_x = c104_b_x;
  c104_y = c104_c_x / 180.0;
  c104_d_x = c104_y * 3.1415926535897931;
  c104_e_x = c104_d_x;
  c104_e_x = muDoubleScalarCos(c104_e_x);
  c104_b_A = c104_Heading;
  c104_f_x = c104_b_A;
  c104_g_x = c104_f_x;
  c104_h_x = c104_g_x;
  c104_b_y = c104_h_x / 180.0;
  c104_i_x = c104_b_y * 3.1415926535897931;
  c104_j_x = c104_i_x;
  c104_j_x = muDoubleScalarSin(c104_j_x);
  c104_Xspd = c104_NorthSpd * c104_e_x - c104_EastSpd * c104_j_x;
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, 19);
  c104_c_A = c104_Heading;
  c104_k_x = c104_c_A;
  c104_l_x = c104_k_x;
  c104_m_x = c104_l_x;
  c104_c_y = c104_m_x / 180.0;
  c104_n_x = c104_c_y * 3.1415926535897931;
  c104_o_x = c104_n_x;
  c104_o_x = muDoubleScalarSin(c104_o_x);
  c104_d_A = c104_Heading;
  c104_p_x = c104_d_A;
  c104_q_x = c104_p_x;
  c104_r_x = c104_q_x;
  c104_d_y = c104_r_x / 180.0;
  c104_s_x = c104_d_y * 3.1415926535897931;
  c104_t_x = c104_s_x;
  c104_t_x = muDoubleScalarCos(c104_t_x);
  c104_Yspd = -(c104_NorthSpd * c104_o_x + c104_EastSpd * c104_t_x);
  _SFD_EML_CALL(0U, chartInstance->c104_sfEvent, -19);
  _SFD_SYMBOL_SCOPE_POP();
  *c104_b_Xangularrate1 = c104_Xangularrate1;
  *c104_b_Yangularrate1 = c104_Yangularrate1;
  *c104_b_Zangularrate1 = c104_Zangularrate1;
  *c104_b_Xacceleration1 = c104_Xacceleration1;
  *c104_b_Yacceleration1 = c104_Yacceleration1;
  *c104_b_Zacceleration1 = c104_Zacceleration1;
  *c104_b_NorthSpd1 = c104_NorthSpd1;
  *c104_b_SkySpd1 = c104_SkySpd1;
  *c104_b_EastSpd1 = c104_EastSpd1;
  *c104_b_Altitude1 = c104_Altitude1;
  *c104_b_Longitude1 = c104_Longitude1;
  *c104_b_Latitude1 = c104_Latitude1;
  *c104_b_Rolling1 = c104_Rolling1;
  *c104_b_Heading1 = c104_Heading1;
  *c104_b_Pitching1 = c104_Pitching1;
  *c104_b_Xspd = c104_Xspd;
  *c104_b_Yspd = c104_Yspd;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 103U, chartInstance->c104_sfEvent);
}

static void initSimStructsc104_six_plus_six_AcmsteeringV09_main
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c104_machineNumber, uint32_T
  c104_chartNumber, uint32_T c104_instanceNumber)
{
  (void)c104_machineNumber;
  (void)c104_chartNumber;
  (void)c104_instanceNumber;
}

static const mxArray *c104_sf_marshallOut(void *chartInstanceVoid, void
  *c104_inData)
{
  const mxArray *c104_mxArrayOutData = NULL;
  real_T c104_u;
  const mxArray *c104_y = NULL;
  SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c104_mxArrayOutData = NULL;
  c104_u = *(real_T *)c104_inData;
  c104_y = NULL;
  sf_mex_assign(&c104_y, sf_mex_create("y", &c104_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c104_mxArrayOutData, c104_y, false);
  return c104_mxArrayOutData;
}

static real_T c104_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_Yspd, const char_T *c104_identifier)
{
  real_T c104_y;
  emlrtMsgIdentifier c104_thisId;
  c104_thisId.fIdentifier = c104_identifier;
  c104_thisId.fParent = NULL;
  c104_y = c104_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c104_Yspd),
    &c104_thisId);
  sf_mex_destroy(&c104_Yspd);
  return c104_y;
}

static real_T c104_b_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_u, const emlrtMsgIdentifier *c104_parentId)
{
  real_T c104_y;
  real_T c104_d0;
  (void)chartInstance;
  sf_mex_import(c104_parentId, sf_mex_dup(c104_u), &c104_d0, 1, 0, 0U, 0, 0U, 0);
  c104_y = c104_d0;
  sf_mex_destroy(&c104_u);
  return c104_y;
}

static void c104_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c104_mxArrayInData, const char_T *c104_varName, void *c104_outData)
{
  const mxArray *c104_Yspd;
  const char_T *c104_identifier;
  emlrtMsgIdentifier c104_thisId;
  real_T c104_y;
  SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c104_Yspd = sf_mex_dup(c104_mxArrayInData);
  c104_identifier = c104_varName;
  c104_thisId.fIdentifier = c104_identifier;
  c104_thisId.fParent = NULL;
  c104_y = c104_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c104_Yspd),
    &c104_thisId);
  sf_mex_destroy(&c104_Yspd);
  *(real_T *)c104_outData = c104_y;
  sf_mex_destroy(&c104_mxArrayInData);
}

const mxArray
  *sf_c104_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void)
{
  const mxArray *c104_nameCaptureInfo = NULL;
  c104_nameCaptureInfo = NULL;
  sf_mex_assign(&c104_nameCaptureInfo, sf_mex_createstruct("structure", 2, 11, 1),
                false);
  c104_info_helper(&c104_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c104_nameCaptureInfo);
  return c104_nameCaptureInfo;
}

static void c104_info_helper(const mxArray **c104_info)
{
  const mxArray *c104_rhs0 = NULL;
  const mxArray *c104_lhs0 = NULL;
  const mxArray *c104_rhs1 = NULL;
  const mxArray *c104_lhs1 = NULL;
  const mxArray *c104_rhs2 = NULL;
  const mxArray *c104_lhs2 = NULL;
  const mxArray *c104_rhs3 = NULL;
  const mxArray *c104_lhs3 = NULL;
  const mxArray *c104_rhs4 = NULL;
  const mxArray *c104_lhs4 = NULL;
  const mxArray *c104_rhs5 = NULL;
  const mxArray *c104_lhs5 = NULL;
  const mxArray *c104_rhs6 = NULL;
  const mxArray *c104_lhs6 = NULL;
  const mxArray *c104_rhs7 = NULL;
  const mxArray *c104_lhs7 = NULL;
  const mxArray *c104_rhs8 = NULL;
  const mxArray *c104_lhs8 = NULL;
  const mxArray *c104_rhs9 = NULL;
  const mxArray *c104_lhs9 = NULL;
  const mxArray *c104_rhs10 = NULL;
  const mxArray *c104_lhs10 = NULL;
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(""), "context", "context",
                  0);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("mrdivide"), "name", "name",
                  0);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1388463696U),
                  "fileTimeLo", "fileTimeLo", 0);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1370017086U),
                  "mFileTimeLo", "mFileTimeLo", 0);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c104_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs0), "rhs",
                  "rhs", 0);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs0), "lhs",
                  "lhs", 0);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 1);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 1);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1363718156U),
                  "fileTimeLo", "fileTimeLo", 1);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c104_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs1), "rhs",
                  "rhs", 1);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs1), "lhs",
                  "lhs", 1);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 2);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("rdivide"), "name", "name",
                  2);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1363717480U),
                  "fileTimeLo", "fileTimeLo", 2);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c104_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs2), "rhs",
                  "rhs", 2);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs2), "lhs",
                  "lhs", 2);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 3);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1363718156U),
                  "fileTimeLo", "fileTimeLo", 3);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c104_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs3), "rhs",
                  "rhs", 3);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs3), "lhs",
                  "lhs", 3);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 4);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1286825996U),
                  "fileTimeLo", "fileTimeLo", 4);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c104_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs4), "rhs",
                  "rhs", 4);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs4), "lhs",
                  "lhs", 4);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("eml_div"), "name", "name",
                  5);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 5);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1375987888U),
                  "fileTimeLo", "fileTimeLo", 5);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c104_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs5), "rhs",
                  "rhs", 5);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs5), "lhs",
                  "lhs", 5);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("coder.internal.div"),
                  "name", "name", 6);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1389311520U),
                  "fileTimeLo", "fileTimeLo", 6);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c104_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs6), "rhs",
                  "rhs", 6);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs6), "lhs",
                  "lhs", 6);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(""), "context", "context",
                  7);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("cos"), "name", "name", 7);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "resolved",
                  "resolved", 7);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1343837572U),
                  "fileTimeLo", "fileTimeLo", 7);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c104_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs7), "rhs",
                  "rhs", 7);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs7), "lhs",
                  "lhs", 7);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "context",
                  "context", 8);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("eml_scalar_cos"), "name",
                  "name", 8);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1286825922U),
                  "fileTimeLo", "fileTimeLo", 8);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c104_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs8), "rhs",
                  "rhs", 8);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs8), "lhs",
                  "lhs", 8);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(""), "context", "context",
                  9);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("sin"), "name", "name", 9);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "resolved",
                  "resolved", 9);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1343837586U),
                  "fileTimeLo", "fileTimeLo", 9);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c104_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs9), "rhs",
                  "rhs", 9);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs9), "lhs",
                  "lhs", 9);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "context",
                  "context", 10);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("eml_scalar_sin"), "name",
                  "name", 10);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c104_info, c104_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m"),
                  "resolved", "resolved", 10);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(1286825936U),
                  "fileTimeLo", "fileTimeLo", 10);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c104_info, c104_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c104_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c104_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_rhs10), "rhs",
                  "rhs", 10);
  sf_mex_addfield(*c104_info, sf_mex_duplicatearraysafe(&c104_lhs10), "lhs",
                  "lhs", 10);
  sf_mex_destroy(&c104_rhs0);
  sf_mex_destroy(&c104_lhs0);
  sf_mex_destroy(&c104_rhs1);
  sf_mex_destroy(&c104_lhs1);
  sf_mex_destroy(&c104_rhs2);
  sf_mex_destroy(&c104_lhs2);
  sf_mex_destroy(&c104_rhs3);
  sf_mex_destroy(&c104_lhs3);
  sf_mex_destroy(&c104_rhs4);
  sf_mex_destroy(&c104_lhs4);
  sf_mex_destroy(&c104_rhs5);
  sf_mex_destroy(&c104_lhs5);
  sf_mex_destroy(&c104_rhs6);
  sf_mex_destroy(&c104_lhs6);
  sf_mex_destroy(&c104_rhs7);
  sf_mex_destroy(&c104_lhs7);
  sf_mex_destroy(&c104_rhs8);
  sf_mex_destroy(&c104_lhs8);
  sf_mex_destroy(&c104_rhs9);
  sf_mex_destroy(&c104_lhs9);
  sf_mex_destroy(&c104_rhs10);
  sf_mex_destroy(&c104_lhs10);
}

static const mxArray *c104_emlrt_marshallOut(const char * c104_u)
{
  const mxArray *c104_y = NULL;
  c104_y = NULL;
  sf_mex_assign(&c104_y, sf_mex_create("y", c104_u, 15, 0U, 0U, 0U, 2, 1, strlen
                 (c104_u)), false);
  return c104_y;
}

static const mxArray *c104_b_emlrt_marshallOut(const uint32_T c104_u)
{
  const mxArray *c104_y = NULL;
  c104_y = NULL;
  sf_mex_assign(&c104_y, sf_mex_create("y", &c104_u, 7, 0U, 0U, 0U, 0), false);
  return c104_y;
}

static const mxArray *c104_b_sf_marshallOut(void *chartInstanceVoid, void
  *c104_inData)
{
  const mxArray *c104_mxArrayOutData = NULL;
  int32_T c104_u;
  const mxArray *c104_y = NULL;
  SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c104_mxArrayOutData = NULL;
  c104_u = *(int32_T *)c104_inData;
  c104_y = NULL;
  sf_mex_assign(&c104_y, sf_mex_create("y", &c104_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c104_mxArrayOutData, c104_y, false);
  return c104_mxArrayOutData;
}

static int32_T c104_c_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_u, const emlrtMsgIdentifier *c104_parentId)
{
  int32_T c104_y;
  int32_T c104_i0;
  (void)chartInstance;
  sf_mex_import(c104_parentId, sf_mex_dup(c104_u), &c104_i0, 1, 6, 0U, 0, 0U, 0);
  c104_y = c104_i0;
  sf_mex_destroy(&c104_u);
  return c104_y;
}

static void c104_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c104_mxArrayInData, const char_T *c104_varName, void *c104_outData)
{
  const mxArray *c104_b_sfEvent;
  const char_T *c104_identifier;
  emlrtMsgIdentifier c104_thisId;
  int32_T c104_y;
  SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  chartInstance = (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    chartInstanceVoid;
  c104_b_sfEvent = sf_mex_dup(c104_mxArrayInData);
  c104_identifier = c104_varName;
  c104_thisId.fIdentifier = c104_identifier;
  c104_thisId.fParent = NULL;
  c104_y = c104_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c104_b_sfEvent),
    &c104_thisId);
  sf_mex_destroy(&c104_b_sfEvent);
  *(int32_T *)c104_outData = c104_y;
  sf_mex_destroy(&c104_mxArrayInData);
}

static uint8_T c104_d_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_b_is_active_c104_six_plus_six_AcmsteeringV09_main, const char_T
   *c104_identifier)
{
  uint8_T c104_y;
  emlrtMsgIdentifier c104_thisId;
  c104_thisId.fIdentifier = c104_identifier;
  c104_thisId.fParent = NULL;
  c104_y = c104_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c104_b_is_active_c104_six_plus_six_AcmsteeringV09_main), &c104_thisId);
  sf_mex_destroy(&c104_b_is_active_c104_six_plus_six_AcmsteeringV09_main);
  return c104_y;
}

static uint8_T c104_e_emlrt_marshallIn
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance, const
   mxArray *c104_u, const emlrtMsgIdentifier *c104_parentId)
{
  uint8_T c104_y;
  uint8_T c104_u0;
  (void)chartInstance;
  sf_mex_import(c104_parentId, sf_mex_dup(c104_u), &c104_u0, 1, 3, 0U, 0, 0U, 0);
  c104_y = c104_u0;
  sf_mex_destroy(&c104_u);
  return c104_y;
}

static void init_dsm_address_info
  (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance)
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

void sf_c104_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2990715148U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4137523447U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(868770448U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1906761820U);
}

mxArray *sf_c104_six_plus_six_AcmsteeringV09_main_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("XZUdMohORNcHavGNZyE0iC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,15,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,17,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c104_six_plus_six_AcmsteeringV09_main_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c104_six_plus_six_AcmsteeringV09_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c104_six_plus_six_AcmsteeringV09_main(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[30],T\"Altitude1\",},{M[1],M[29],T\"EastSpd1\",},{M[1],M[34],T\"Heading1\",},{M[1],M[32],T\"Latitude1\",},{M[1],M[31],T\"Longitude1\",},{M[1],M[27],T\"NorthSpd1\",},{M[1],M[35],T\"Pitching1\",},{M[1],M[33],T\"Rolling1\",},{M[1],M[28],T\"SkySpd1\",},{M[1],M[24],T\"Xacceleration1\",}}",
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[21],T\"Xangularrate1\",},{M[1],M[5],T\"Xspd\",},{M[1],M[25],T\"Yacceleration1\",},{M[1],M[22],T\"Yangularrate1\",},{M[1],M[8],T\"Yspd\",},{M[1],M[26],T\"Zacceleration1\",},{M[1],M[23],T\"Zangularrate1\",},{M[8],M[0],T\"is_active_c104_six_plus_six_AcmsteeringV09_main\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 18, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c104_six_plus_six_AcmsteeringV09_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_mainMachineNumber_,
           104,
           1,
           1,
           0,
           32,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"Xangularrate");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Yangularrate");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Zangularrate");
          _SFD_SET_DATA_PROPS(3,1,1,0,"Xacceleration");
          _SFD_SET_DATA_PROPS(4,1,1,0,"Yacceleration");
          _SFD_SET_DATA_PROPS(5,1,1,0,"Zacceleration");
          _SFD_SET_DATA_PROPS(6,2,0,1,"Xangularrate1");
          _SFD_SET_DATA_PROPS(7,2,0,1,"Yangularrate1");
          _SFD_SET_DATA_PROPS(8,2,0,1,"Zangularrate1");
          _SFD_SET_DATA_PROPS(9,2,0,1,"Xacceleration1");
          _SFD_SET_DATA_PROPS(10,2,0,1,"Yacceleration1");
          _SFD_SET_DATA_PROPS(11,2,0,1,"Zacceleration1");
          _SFD_SET_DATA_PROPS(12,2,0,1,"NorthSpd1");
          _SFD_SET_DATA_PROPS(13,2,0,1,"SkySpd1");
          _SFD_SET_DATA_PROPS(14,2,0,1,"EastSpd1");
          _SFD_SET_DATA_PROPS(15,2,0,1,"Altitude1");
          _SFD_SET_DATA_PROPS(16,2,0,1,"Longitude1");
          _SFD_SET_DATA_PROPS(17,2,0,1,"Latitude1");
          _SFD_SET_DATA_PROPS(18,2,0,1,"Rolling1");
          _SFD_SET_DATA_PROPS(19,2,0,1,"Heading1");
          _SFD_SET_DATA_PROPS(20,2,0,1,"Pitching1");
          _SFD_SET_DATA_PROPS(21,1,1,0,"NorthSpd");
          _SFD_SET_DATA_PROPS(22,1,1,0,"SkySpd");
          _SFD_SET_DATA_PROPS(23,2,0,1,"Xspd");
          _SFD_SET_DATA_PROPS(24,1,1,0,"EastSpd");
          _SFD_SET_DATA_PROPS(25,1,1,0,"Altitude");
          _SFD_SET_DATA_PROPS(26,1,1,0,"Longitude");
          _SFD_SET_DATA_PROPS(27,1,1,0,"Latitude");
          _SFD_SET_DATA_PROPS(28,1,1,0,"Rolling");
          _SFD_SET_DATA_PROPS(29,1,1,0,"Heading");
          _SFD_SET_DATA_PROPS(30,2,0,1,"Yspd");
          _SFD_SET_DATA_PROPS(31,1,1,0,"Pitching");
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
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,851);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(30,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)c104_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(31,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c104_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c104_Xangularrate;
          real_T *c104_Yangularrate;
          real_T *c104_Zangularrate;
          real_T *c104_Xacceleration;
          real_T *c104_Yacceleration;
          real_T *c104_Zacceleration;
          real_T *c104_Xangularrate1;
          real_T *c104_Yangularrate1;
          real_T *c104_Zangularrate1;
          real_T *c104_Xacceleration1;
          real_T *c104_Yacceleration1;
          real_T *c104_Zacceleration1;
          real_T *c104_NorthSpd1;
          real_T *c104_SkySpd1;
          real_T *c104_EastSpd1;
          real_T *c104_Altitude1;
          real_T *c104_Longitude1;
          real_T *c104_Latitude1;
          real_T *c104_Rolling1;
          real_T *c104_Heading1;
          real_T *c104_Pitching1;
          real_T *c104_NorthSpd;
          real_T *c104_SkySpd;
          real_T *c104_Xspd;
          real_T *c104_EastSpd;
          real_T *c104_Altitude;
          real_T *c104_Longitude;
          real_T *c104_Latitude;
          real_T *c104_Rolling;
          real_T *c104_Heading;
          real_T *c104_Yspd;
          real_T *c104_Pitching;
          c104_Pitching = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
          c104_Yspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 17);
          c104_Heading = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
          c104_Rolling = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
          c104_Latitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
          c104_Longitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
          c104_Altitude = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c104_EastSpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c104_Xspd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 16);
          c104_SkySpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c104_NorthSpd = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c104_Pitching1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 15);
          c104_Heading1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 14);
          c104_Rolling1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 13);
          c104_Latitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 12);
          c104_Longitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 11);
          c104_Altitude1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
          c104_EastSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
          c104_SkySpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c104_NorthSpd1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
          c104_Zacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            6);
          c104_Yacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            5);
          c104_Xacceleration1 = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c104_Zangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            3);
          c104_Yangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            2);
          c104_Xangularrate1 = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c104_Zacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S,
            5);
          c104_Yacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S,
            4);
          c104_Xacceleration = (real_T *)ssGetInputPortSignal(chartInstance->S,
            3);
          c104_Zangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c104_Yangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c104_Xangularrate = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c104_Xangularrate);
          _SFD_SET_DATA_VALUE_PTR(1U, c104_Yangularrate);
          _SFD_SET_DATA_VALUE_PTR(2U, c104_Zangularrate);
          _SFD_SET_DATA_VALUE_PTR(3U, c104_Xacceleration);
          _SFD_SET_DATA_VALUE_PTR(4U, c104_Yacceleration);
          _SFD_SET_DATA_VALUE_PTR(5U, c104_Zacceleration);
          _SFD_SET_DATA_VALUE_PTR(6U, c104_Xangularrate1);
          _SFD_SET_DATA_VALUE_PTR(7U, c104_Yangularrate1);
          _SFD_SET_DATA_VALUE_PTR(8U, c104_Zangularrate1);
          _SFD_SET_DATA_VALUE_PTR(9U, c104_Xacceleration1);
          _SFD_SET_DATA_VALUE_PTR(10U, c104_Yacceleration1);
          _SFD_SET_DATA_VALUE_PTR(11U, c104_Zacceleration1);
          _SFD_SET_DATA_VALUE_PTR(12U, c104_NorthSpd1);
          _SFD_SET_DATA_VALUE_PTR(13U, c104_SkySpd1);
          _SFD_SET_DATA_VALUE_PTR(14U, c104_EastSpd1);
          _SFD_SET_DATA_VALUE_PTR(15U, c104_Altitude1);
          _SFD_SET_DATA_VALUE_PTR(16U, c104_Longitude1);
          _SFD_SET_DATA_VALUE_PTR(17U, c104_Latitude1);
          _SFD_SET_DATA_VALUE_PTR(18U, c104_Rolling1);
          _SFD_SET_DATA_VALUE_PTR(19U, c104_Heading1);
          _SFD_SET_DATA_VALUE_PTR(20U, c104_Pitching1);
          _SFD_SET_DATA_VALUE_PTR(21U, c104_NorthSpd);
          _SFD_SET_DATA_VALUE_PTR(22U, c104_SkySpd);
          _SFD_SET_DATA_VALUE_PTR(23U, c104_Xspd);
          _SFD_SET_DATA_VALUE_PTR(24U, c104_EastSpd);
          _SFD_SET_DATA_VALUE_PTR(25U, c104_Altitude);
          _SFD_SET_DATA_VALUE_PTR(26U, c104_Longitude);
          _SFD_SET_DATA_VALUE_PTR(27U, c104_Latitude);
          _SFD_SET_DATA_VALUE_PTR(28U, c104_Rolling);
          _SFD_SET_DATA_VALUE_PTR(29U, c104_Heading);
          _SFD_SET_DATA_VALUE_PTR(30U, c104_Yspd);
          _SFD_SET_DATA_VALUE_PTR(31U, c104_Pitching);
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
  return "LnnnYULUAj4dha8UgHxZ8D";
}

static void sf_opaque_initialize_c104_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
  initialize_c104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c104_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  enable_c104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c104_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  disable_c104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c104_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  sf_gateway_c104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c104_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c104_six_plus_six_AcmsteeringV09_main();/* state var info */
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

extern void sf_internal_set_sim_state_c104_six_plus_six_AcmsteeringV09_main
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
    sf_get_sim_state_info_c104_six_plus_six_AcmsteeringV09_main();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c104_six_plus_six_AcmsteeringV09_main(SimStruct* S)
{
  return sf_internal_get_sim_state_c104_six_plus_six_AcmsteeringV09_main(S);
}

static void sf_opaque_set_sim_state_c104_six_plus_six_AcmsteeringV09_main
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c104_six_plus_six_AcmsteeringV09_main(S, st);
}

static void sf_opaque_terminate_c104_six_plus_six_AcmsteeringV09_main(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_optimization_info();
    }

    finalize_c104_six_plus_six_AcmsteeringV09_main
      ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc104_six_plus_six_AcmsteeringV09_main
    ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c104_six_plus_six_AcmsteeringV09_main(SimStruct
  *S)
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
    initialize_params_c104_six_plus_six_AcmsteeringV09_main
      ((SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c104_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      104);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,104,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,104,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,104);
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
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,104,15);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,104,17);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=17; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 15; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,104);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3066235353U));
  ssSetChecksum1(S,(3035232503U));
  ssSetChecksum2(S,(3723666489U));
  ssSetChecksum3(S,(1264690537U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c104_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c104_six_plus_six_AcmsteeringV09_main(SimStruct *S)
{
  SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct *)
    utMalloc(sizeof(SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc104_six_plus_six_AcmsteeringV09_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c104_six_plus_six_AcmsteeringV09_main;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c104_six_plus_six_AcmsteeringV09_main;
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

void c104_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c104_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c104_six_plus_six_AcmsteeringV09_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c104_six_plus_six_AcmsteeringV09_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c104_six_plus_six_AcmsteeringV09_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
