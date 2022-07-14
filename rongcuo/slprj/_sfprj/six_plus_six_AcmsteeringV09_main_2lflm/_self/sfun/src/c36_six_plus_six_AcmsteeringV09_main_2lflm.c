/* Include files */

#include <stddef.h>
#include "blas.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_sfun.h"
#include "c36_six_plus_six_AcmsteeringV09_main_2lflm.h"
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
static const char * c36_debug_family_names[10] = { "delta_Fsteer_max", "nargin",
  "nargout", "umax", "G", "L", "B", "Radius", "Rturn_min_xy", "delta_Tsteer_max"
};

/* Function Declarations */
static void initialize_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initialize_params_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void enable_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void disable_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void c36_update_debugger_state_c36_six_plus_six_AcmsteeringV09_main_2
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void set_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_st);
static void finalize_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void sf_gateway_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void initSimStructsc36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c36_machineNumber, uint32_T
  c36_chartNumber, uint32_T c36_instanceNumber);
static const mxArray *c36_sf_marshallOut(void *chartInstanceVoid, void
  *c36_inData);
static real32_T c36_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_delta_Tsteer_max, const char_T *c36_identifier);
static real32_T c36_b_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId);
static void c36_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c36_mxArrayInData, const char_T *c36_varName, void *c36_outData);
static const mxArray *c36_b_sf_marshallOut(void *chartInstanceVoid, void
  *c36_inData);
static real_T c36_c_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId);
static void c36_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c36_mxArrayInData, const char_T *c36_varName, void *c36_outData);
static void c36_info_helper(const mxArray **c36_info);
static const mxArray *c36_emlrt_marshallOut(const char * c36_u);
static const mxArray *c36_b_emlrt_marshallOut(const uint32_T c36_u);
static const mxArray *c36_c_sf_marshallOut(void *chartInstanceVoid, void
  *c36_inData);
static int32_T c36_d_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId);
static void c36_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c36_mxArrayInData, const char_T *c36_varName, void *c36_outData);
static uint8_T c36_e_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_b_is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c36_identifier);
static uint8_T c36_f_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId);
static void init_dsm_address_info
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  chartInstance->c36_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c36_is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm = 0U;
}

static void initialize_params_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c36_update_debugger_state_c36_six_plus_six_AcmsteeringV09_main_2
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  const mxArray *c36_st;
  const mxArray *c36_y = NULL;
  real32_T c36_hoistedGlobal;
  real32_T c36_u;
  const mxArray *c36_b_y = NULL;
  uint8_T c36_b_hoistedGlobal;
  uint8_T c36_b_u;
  const mxArray *c36_c_y = NULL;
  real32_T *c36_delta_Tsteer_max;
  c36_delta_Tsteer_max = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c36_st = NULL;
  c36_st = NULL;
  c36_y = NULL;
  sf_mex_assign(&c36_y, sf_mex_createcellmatrix(2, 1), false);
  c36_hoistedGlobal = *c36_delta_Tsteer_max;
  c36_u = c36_hoistedGlobal;
  c36_b_y = NULL;
  sf_mex_assign(&c36_b_y, sf_mex_create("y", &c36_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c36_y, 0, c36_b_y);
  c36_b_hoistedGlobal =
    chartInstance->c36_is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  c36_b_u = c36_b_hoistedGlobal;
  c36_c_y = NULL;
  sf_mex_assign(&c36_c_y, sf_mex_create("y", &c36_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c36_y, 1, c36_c_y);
  sf_mex_assign(&c36_st, c36_y, false);
  return c36_st;
}

static void set_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_st)
{
  const mxArray *c36_u;
  real32_T *c36_delta_Tsteer_max;
  c36_delta_Tsteer_max = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c36_doneDoubleBufferReInit = true;
  c36_u = sf_mex_dup(c36_st);
  *c36_delta_Tsteer_max = c36_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c36_u, 0)), "delta_Tsteer_max");
  chartInstance->c36_is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm =
    c36_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c36_u, 1)),
    "is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm");
  sf_mex_destroy(&c36_u);
  c36_update_debugger_state_c36_six_plus_six_AcmsteeringV09_main_2(chartInstance);
  sf_mex_destroy(&c36_st);
}

static void finalize_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  real32_T c36_hoistedGlobal;
  real32_T c36_b_hoistedGlobal;
  real32_T c36_c_hoistedGlobal;
  real32_T c36_d_hoistedGlobal;
  real32_T c36_e_hoistedGlobal;
  real32_T c36_f_hoistedGlobal;
  real32_T c36_umax;
  real32_T c36_G;
  real32_T c36_L;
  real32_T c36_B;
  real32_T c36_Radius;
  real32_T c36_Rturn_min_xy;
  uint32_T c36_debug_family_var_map[10];
  real32_T c36_delta_Fsteer_max;
  real_T c36_nargin = 6.0;
  real_T c36_nargout = 1.0;
  real32_T c36_delta_Tsteer_max;
  real32_T c36_A;
  real32_T c36_b_B;
  real32_T c36_x;
  real32_T c36_y;
  real32_T c36_b_x;
  real32_T c36_b_y;
  real32_T c36_c_x;
  real32_T c36_c_y;
  real32_T c36_d_y;
  real32_T c36_b;
  real32_T c36_e_y;
  real32_T c36_b_A;
  real32_T c36_c_B;
  real32_T c36_d_x;
  real32_T c36_f_y;
  real32_T c36_e_x;
  real32_T c36_g_y;
  real32_T c36_f_x;
  real32_T c36_h_y;
  real32_T c36_i_y;
  real32_T c36_b_b;
  real32_T c36_j_y;
  real32_T c36_c_A;
  real32_T c36_d_B;
  real32_T c36_g_x;
  real32_T c36_k_y;
  real32_T c36_h_x;
  real32_T c36_l_y;
  real32_T c36_i_x;
  real32_T c36_m_y;
  real32_T *c36_b_Rturn_min_xy;
  real32_T *c36_b_Radius;
  real32_T *c36_e_B;
  real32_T *c36_b_L;
  real32_T *c36_b_G;
  real32_T *c36_b_umax;
  real32_T *c36_b_delta_Tsteer_max;
  c36_b_Rturn_min_xy = (real32_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c36_b_Radius = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c36_e_B = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c36_b_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c36_b_G = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c36_b_delta_Tsteer_max = (real32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c36_b_umax = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 35U, chartInstance->c36_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c36_b_umax, 0U);
  chartInstance->c36_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 35U, chartInstance->c36_sfEvent);
  c36_hoistedGlobal = *c36_b_umax;
  c36_b_hoistedGlobal = *c36_b_G;
  c36_c_hoistedGlobal = *c36_b_L;
  c36_d_hoistedGlobal = *c36_e_B;
  c36_e_hoistedGlobal = *c36_b_Radius;
  c36_f_hoistedGlobal = *c36_b_Rturn_min_xy;
  c36_umax = c36_hoistedGlobal;
  c36_G = c36_b_hoistedGlobal;
  c36_L = c36_c_hoistedGlobal;
  c36_B = c36_d_hoistedGlobal;
  c36_Radius = c36_e_hoistedGlobal;
  c36_Rturn_min_xy = c36_f_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 10U, 10U, c36_debug_family_names,
    c36_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c36_delta_Fsteer_max, 0U,
    c36_sf_marshallOut, c36_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c36_nargin, 1U, c36_b_sf_marshallOut,
    c36_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c36_nargout, 2U, c36_b_sf_marshallOut,
    c36_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c36_umax, 3U, c36_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c36_G, 4U, c36_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c36_L, 5U, c36_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c36_B, 6U, c36_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c36_Radius, 7U, c36_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c36_Rturn_min_xy, 8U, c36_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c36_delta_Tsteer_max, 9U,
    c36_sf_marshallOut, c36_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c36_sfEvent, 4);
  c36_A = c36_Rturn_min_xy;
  c36_b_B = c36_B;
  c36_x = c36_A;
  c36_y = c36_b_B;
  c36_b_x = c36_x;
  c36_b_y = c36_y;
  c36_c_x = c36_b_x;
  c36_c_y = c36_b_y;
  c36_d_y = c36_c_x / c36_c_y;
  c36_b = c36_d_y;
  c36_e_y = 0.15F * c36_b;
  c36_b_A = c36_umax;
  c36_c_B = 0.925F + c36_e_y;
  c36_d_x = c36_b_A;
  c36_f_y = c36_c_B;
  c36_e_x = c36_d_x;
  c36_g_y = c36_f_y;
  c36_f_x = c36_e_x;
  c36_h_y = c36_g_y;
  c36_i_y = c36_f_x / c36_h_y;
  c36_b_b = c36_B;
  c36_j_y = 2.0F * c36_b_b;
  c36_c_A = c36_i_y * c36_G * c36_L;
  c36_d_B = c36_j_y;
  c36_g_x = c36_c_A;
  c36_k_y = c36_d_B;
  c36_h_x = c36_g_x;
  c36_l_y = c36_k_y;
  c36_i_x = c36_h_x;
  c36_m_y = c36_l_y;
  c36_delta_Fsteer_max = c36_i_x / c36_m_y;
  _SFD_EML_CALL(0U, chartInstance->c36_sfEvent, 5);
  c36_delta_Tsteer_max = c36_delta_Fsteer_max * c36_Radius;
  _SFD_EML_CALL(0U, chartInstance->c36_sfEvent, -5);
  _SFD_SYMBOL_SCOPE_POP();
  *c36_b_delta_Tsteer_max = c36_delta_Tsteer_max;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 35U, chartInstance->c36_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*c36_b_delta_Tsteer_max, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c36_b_G, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c36_b_L, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c36_e_B, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c36_b_Radius, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c36_b_Rturn_min_xy, 6U);
}

static void initSimStructsc36_six_plus_six_AcmsteeringV09_main_2lflm
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c36_machineNumber, uint32_T
  c36_chartNumber, uint32_T c36_instanceNumber)
{
  (void)c36_machineNumber;
  (void)c36_chartNumber;
  (void)c36_instanceNumber;
}

static const mxArray *c36_sf_marshallOut(void *chartInstanceVoid, void
  *c36_inData)
{
  const mxArray *c36_mxArrayOutData = NULL;
  real32_T c36_u;
  const mxArray *c36_y = NULL;
  SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c36_mxArrayOutData = NULL;
  c36_u = *(real32_T *)c36_inData;
  c36_y = NULL;
  sf_mex_assign(&c36_y, sf_mex_create("y", &c36_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c36_mxArrayOutData, c36_y, false);
  return c36_mxArrayOutData;
}

static real32_T c36_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_delta_Tsteer_max, const char_T *c36_identifier)
{
  real32_T c36_y;
  emlrtMsgIdentifier c36_thisId;
  c36_thisId.fIdentifier = c36_identifier;
  c36_thisId.fParent = NULL;
  c36_y = c36_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c36_delta_Tsteer_max),
    &c36_thisId);
  sf_mex_destroy(&c36_delta_Tsteer_max);
  return c36_y;
}

static real32_T c36_b_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId)
{
  real32_T c36_y;
  real32_T c36_f0;
  (void)chartInstance;
  sf_mex_import(c36_parentId, sf_mex_dup(c36_u), &c36_f0, 1, 1, 0U, 0, 0U, 0);
  c36_y = c36_f0;
  sf_mex_destroy(&c36_u);
  return c36_y;
}

static void c36_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c36_mxArrayInData, const char_T *c36_varName, void *c36_outData)
{
  const mxArray *c36_delta_Tsteer_max;
  const char_T *c36_identifier;
  emlrtMsgIdentifier c36_thisId;
  real32_T c36_y;
  SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c36_delta_Tsteer_max = sf_mex_dup(c36_mxArrayInData);
  c36_identifier = c36_varName;
  c36_thisId.fIdentifier = c36_identifier;
  c36_thisId.fParent = NULL;
  c36_y = c36_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c36_delta_Tsteer_max),
    &c36_thisId);
  sf_mex_destroy(&c36_delta_Tsteer_max);
  *(real32_T *)c36_outData = c36_y;
  sf_mex_destroy(&c36_mxArrayInData);
}

static const mxArray *c36_b_sf_marshallOut(void *chartInstanceVoid, void
  *c36_inData)
{
  const mxArray *c36_mxArrayOutData = NULL;
  real_T c36_u;
  const mxArray *c36_y = NULL;
  SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c36_mxArrayOutData = NULL;
  c36_u = *(real_T *)c36_inData;
  c36_y = NULL;
  sf_mex_assign(&c36_y, sf_mex_create("y", &c36_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c36_mxArrayOutData, c36_y, false);
  return c36_mxArrayOutData;
}

static real_T c36_c_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId)
{
  real_T c36_y;
  real_T c36_d0;
  (void)chartInstance;
  sf_mex_import(c36_parentId, sf_mex_dup(c36_u), &c36_d0, 1, 0, 0U, 0, 0U, 0);
  c36_y = c36_d0;
  sf_mex_destroy(&c36_u);
  return c36_y;
}

static void c36_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c36_mxArrayInData, const char_T *c36_varName, void *c36_outData)
{
  const mxArray *c36_nargout;
  const char_T *c36_identifier;
  emlrtMsgIdentifier c36_thisId;
  real_T c36_y;
  SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c36_nargout = sf_mex_dup(c36_mxArrayInData);
  c36_identifier = c36_varName;
  c36_thisId.fIdentifier = c36_identifier;
  c36_thisId.fParent = NULL;
  c36_y = c36_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c36_nargout),
    &c36_thisId);
  sf_mex_destroy(&c36_nargout);
  *(real_T *)c36_outData = c36_y;
  sf_mex_destroy(&c36_mxArrayInData);
}

const mxArray
  *sf_c36_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c36_nameCaptureInfo = NULL;
  c36_nameCaptureInfo = NULL;
  sf_mex_assign(&c36_nameCaptureInfo, sf_mex_createstruct("structure", 2, 10, 1),
                false);
  c36_info_helper(&c36_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c36_nameCaptureInfo);
  return c36_nameCaptureInfo;
}

static void c36_info_helper(const mxArray **c36_info)
{
  const mxArray *c36_rhs0 = NULL;
  const mxArray *c36_lhs0 = NULL;
  const mxArray *c36_rhs1 = NULL;
  const mxArray *c36_lhs1 = NULL;
  const mxArray *c36_rhs2 = NULL;
  const mxArray *c36_lhs2 = NULL;
  const mxArray *c36_rhs3 = NULL;
  const mxArray *c36_lhs3 = NULL;
  const mxArray *c36_rhs4 = NULL;
  const mxArray *c36_lhs4 = NULL;
  const mxArray *c36_rhs5 = NULL;
  const mxArray *c36_lhs5 = NULL;
  const mxArray *c36_rhs6 = NULL;
  const mxArray *c36_lhs6 = NULL;
  const mxArray *c36_rhs7 = NULL;
  const mxArray *c36_lhs7 = NULL;
  const mxArray *c36_rhs8 = NULL;
  const mxArray *c36_lhs8 = NULL;
  const mxArray *c36_rhs9 = NULL;
  const mxArray *c36_lhs9 = NULL;
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("mrdivide"), "name", "name",
                  0);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1388463696U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1370017086U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c36_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs0), "rhs", "rhs",
                  0);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs0), "lhs", "lhs",
                  0);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 1);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 1);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c36_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs1), "rhs", "rhs",
                  1);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs1), "lhs", "lhs",
                  1);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context",
                  "context", 2);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("rdivide"), "name", "name", 2);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1363717480U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c36_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs2), "rhs", "rhs",
                  2);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs2), "lhs", "lhs",
                  2);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 3);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c36_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs3), "rhs", "rhs",
                  3);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs3), "lhs", "lhs",
                  3);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 4);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 4);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1286825996U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c36_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs4), "rhs", "rhs",
                  4);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs4), "lhs", "lhs",
                  4);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("eml_div"), "name", "name", 5);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved",
                  "resolved", 5);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1375987888U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c36_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs5), "rhs", "rhs",
                  5);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs5), "lhs", "lhs",
                  5);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context",
                  "context", 6);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("coder.internal.div"), "name",
                  "name", 6);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                  "resolved", 6);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1389311520U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c36_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs6), "rhs", "rhs",
                  6);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs6), "lhs", "lhs",
                  6);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(""), "context", "context", 7);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("eml_mtimes_helper"), "name",
                  "name", 7);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 7);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                  "resolved", "resolved", 7);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1383880894U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c36_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs7), "rhs", "rhs",
                  7);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs7), "lhs", "lhs",
                  7);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                  "context", "context", 8);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 8);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c36_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs8), "rhs", "rhs",
                  8);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs8), "lhs", "lhs",
                  8);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                  "context", "context", 9);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 9);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut("single"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c36_info, c36_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(1363718156U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c36_info, c36_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c36_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c36_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_rhs9), "rhs", "rhs",
                  9);
  sf_mex_addfield(*c36_info, sf_mex_duplicatearraysafe(&c36_lhs9), "lhs", "lhs",
                  9);
  sf_mex_destroy(&c36_rhs0);
  sf_mex_destroy(&c36_lhs0);
  sf_mex_destroy(&c36_rhs1);
  sf_mex_destroy(&c36_lhs1);
  sf_mex_destroy(&c36_rhs2);
  sf_mex_destroy(&c36_lhs2);
  sf_mex_destroy(&c36_rhs3);
  sf_mex_destroy(&c36_lhs3);
  sf_mex_destroy(&c36_rhs4);
  sf_mex_destroy(&c36_lhs4);
  sf_mex_destroy(&c36_rhs5);
  sf_mex_destroy(&c36_lhs5);
  sf_mex_destroy(&c36_rhs6);
  sf_mex_destroy(&c36_lhs6);
  sf_mex_destroy(&c36_rhs7);
  sf_mex_destroy(&c36_lhs7);
  sf_mex_destroy(&c36_rhs8);
  sf_mex_destroy(&c36_lhs8);
  sf_mex_destroy(&c36_rhs9);
  sf_mex_destroy(&c36_lhs9);
}

static const mxArray *c36_emlrt_marshallOut(const char * c36_u)
{
  const mxArray *c36_y = NULL;
  c36_y = NULL;
  sf_mex_assign(&c36_y, sf_mex_create("y", c36_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c36_u)), false);
  return c36_y;
}

static const mxArray *c36_b_emlrt_marshallOut(const uint32_T c36_u)
{
  const mxArray *c36_y = NULL;
  c36_y = NULL;
  sf_mex_assign(&c36_y, sf_mex_create("y", &c36_u, 7, 0U, 0U, 0U, 0), false);
  return c36_y;
}

static const mxArray *c36_c_sf_marshallOut(void *chartInstanceVoid, void
  *c36_inData)
{
  const mxArray *c36_mxArrayOutData = NULL;
  int32_T c36_u;
  const mxArray *c36_y = NULL;
  SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c36_mxArrayOutData = NULL;
  c36_u = *(int32_T *)c36_inData;
  c36_y = NULL;
  sf_mex_assign(&c36_y, sf_mex_create("y", &c36_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c36_mxArrayOutData, c36_y, false);
  return c36_mxArrayOutData;
}

static int32_T c36_d_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId)
{
  int32_T c36_y;
  int32_T c36_i0;
  (void)chartInstance;
  sf_mex_import(c36_parentId, sf_mex_dup(c36_u), &c36_i0, 1, 6, 0U, 0, 0U, 0);
  c36_y = c36_i0;
  sf_mex_destroy(&c36_u);
  return c36_y;
}

static void c36_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c36_mxArrayInData, const char_T *c36_varName, void *c36_outData)
{
  const mxArray *c36_b_sfEvent;
  const char_T *c36_identifier;
  emlrtMsgIdentifier c36_thisId;
  int32_T c36_y;
  SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    chartInstanceVoid;
  c36_b_sfEvent = sf_mex_dup(c36_mxArrayInData);
  c36_identifier = c36_varName;
  c36_thisId.fIdentifier = c36_identifier;
  c36_thisId.fParent = NULL;
  c36_y = c36_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c36_b_sfEvent),
    &c36_thisId);
  sf_mex_destroy(&c36_b_sfEvent);
  *(int32_T *)c36_outData = c36_y;
  sf_mex_destroy(&c36_mxArrayInData);
}

static uint8_T c36_e_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_b_is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm,
   const char_T *c36_identifier)
{
  uint8_T c36_y;
  emlrtMsgIdentifier c36_thisId;
  c36_thisId.fIdentifier = c36_identifier;
  c36_thisId.fParent = NULL;
  c36_y = c36_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c36_b_is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm), &c36_thisId);
  sf_mex_destroy(&c36_b_is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm);
  return c36_y;
}

static uint8_T c36_f_emlrt_marshallIn
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance,
   const mxArray *c36_u, const emlrtMsgIdentifier *c36_parentId)
{
  uint8_T c36_y;
  uint8_T c36_u0;
  (void)chartInstance;
  sf_mex_import(c36_parentId, sf_mex_dup(c36_u), &c36_u0, 1, 3, 0U, 0, 0U, 0);
  c36_y = c36_u0;
  sf_mex_destroy(&c36_u);
  return c36_y;
}

static void init_dsm_address_info
  (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance)
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

void sf_c36_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2831255151U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1306787974U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3178402324U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1278475868U);
}

mxArray *sf_c36_six_plus_six_AcmsteeringV09_main_2lflm_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("EUm5aQ2sQgEG2d48g73NYG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

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

mxArray *sf_c36_six_plus_six_AcmsteeringV09_main_2lflm_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c36_six_plus_six_AcmsteeringV09_main_2lflm_updateBuildInfo_args_info
  (void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray
  *sf_get_sim_state_info_c36_six_plus_six_AcmsteeringV09_main_2lflm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"delta_Tsteer_max\",},{M[8],M[0],T\"is_active_c36_six_plus_six_AcmsteeringV09_main_2lflm\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c36_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _six_plus_six_AcmsteeringV09_main_2lflmMachineNumber_,
           36,
           1,
           1,
           0,
           7,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"umax");
          _SFD_SET_DATA_PROPS(1,2,0,1,"delta_Tsteer_max");
          _SFD_SET_DATA_PROPS(2,1,1,0,"G");
          _SFD_SET_DATA_PROPS(3,1,1,0,"L");
          _SFD_SET_DATA_PROPS(4,1,1,0,"B");
          _SFD_SET_DATA_PROPS(5,1,1,0,"Radius");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Rturn_min_xy");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,212);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c36_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c36_sf_marshallOut,(MexInFcnForType)c36_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c36_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c36_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c36_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c36_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c36_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real32_T *c36_umax;
          real32_T *c36_delta_Tsteer_max;
          real32_T *c36_G;
          real32_T *c36_L;
          real32_T *c36_B;
          real32_T *c36_Radius;
          real32_T *c36_Rturn_min_xy;
          c36_Rturn_min_xy = (real32_T *)ssGetInputPortSignal(chartInstance->S,
            5);
          c36_Radius = (real32_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c36_B = (real32_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c36_L = (real32_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c36_G = (real32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c36_delta_Tsteer_max = (real32_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          c36_umax = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c36_umax);
          _SFD_SET_DATA_VALUE_PTR(1U, c36_delta_Tsteer_max);
          _SFD_SET_DATA_VALUE_PTR(2U, c36_G);
          _SFD_SET_DATA_VALUE_PTR(3U, c36_L);
          _SFD_SET_DATA_VALUE_PTR(4U, c36_B);
          _SFD_SET_DATA_VALUE_PTR(5U, c36_Radius);
          _SFD_SET_DATA_VALUE_PTR(6U, c36_Rturn_min_xy);
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
  return "f5a7D8A0TVH2Ybr0ffdjrC";
}

static void sf_opaque_initialize_c36_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
  initialize_c36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c36_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  enable_c36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c36_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  disable_c36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c36_six_plus_six_AcmsteeringV09_main_2lflm(void
  *chartInstanceVar)
{
  sf_gateway_c36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c36_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
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

extern void sf_internal_set_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
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
    sf_get_sim_state_info_c36_six_plus_six_AcmsteeringV09_main_2lflm();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm(S);
}

static void sf_opaque_set_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm(S, st);
}

static void sf_opaque_terminate_c36_six_plus_six_AcmsteeringV09_main_2lflm(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    }

    finalize_c36_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
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
  initSimStructsc36_six_plus_six_AcmsteeringV09_main_2lflm
    ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c36_six_plus_six_AcmsteeringV09_main_2lflm
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
    initialize_params_c36_six_plus_six_AcmsteeringV09_main_2lflm
      ((SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c36_six_plus_six_AcmsteeringV09_main_2lflm
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_six_plus_six_AcmsteeringV09_main_2lflm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      36);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,36,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,36,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,36);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,36,6);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,36,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 6; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,36);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3910609163U));
  ssSetChecksum1(S,(2309160779U));
  ssSetChecksum2(S,(1205633689U));
  ssSetChecksum3(S,(2251448305U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c36_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c36_six_plus_six_AcmsteeringV09_main_2lflm(SimStruct *S)
{
  SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct *)
    utMalloc(sizeof(SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc36_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c36_six_plus_six_AcmsteeringV09_main_2lflm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c36_six_plus_six_AcmsteeringV09_main_2lflm;
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

void c36_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c36_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c36_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c36_six_plus_six_AcmsteeringV09_main_2lflm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c36_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}