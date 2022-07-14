/*
 * Code generated for Simulink model six_plus_six_AcmsteeringV09_main_1lf.
 *
 * FILE    : six_plus_six_AcmsteeringV09_main_1lf_private.h
 *
 * VERSION : 1.2717
 *
 * DATE    : Mon Nov 23 17:26:49 2020
 *
 * Copyright 2011-2017 ECUCoder. All Rights Reserved.
 */

#ifndef RTW_HEADER_six_plus_six_AcmsteeringV09_main_1lf_private_h_
#define RTW_HEADER_six_plus_six_AcmsteeringV09_main_1lf_private_h_
#include "rtwtypes.h"
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#endif                                 /* __RTWTYPES_H__ */

/* #define mydefine 100.0 */
extern real_T rt_roundd_snf(real_T u);
extern real32_T rt_roundf_snf(real32_T u);
extern real32_T look1_iflf_binlx(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern void six_plus_six_MATLABFunction(real_T rtu_data_1, real_T rtu_data_2,
  B_MATLABFunction_six_plus_six_T *localB);
extern void six_plus_six_Acms_HeartBeat(real32_T rtu_life_pre,
  B_HeartBeat_six_plus_six_Acms_T *localB);
extern void six_plus_s_MATLABFunction_a(real_T rtu_acc_y, real32_T rtu_ag_thr,
  B_MATLABFunction_six_plus_s_c_T *localB);
extern void six_plus_s_MATLABFunction_o(real32_T rtu_trq_dem_l, real32_T
  rtu_trq_dem_r, real_T rtu_trqlim_lf, real_T rtu_trqlim_lm, real_T
  rtu_trqlim_lr, real_T rtu_trqlim_rf, real_T rtu_trqlim_rm, real_T
  rtu_trqlim_rr, real_T rtu_guzhang_lf, real_T rtu_guzhang_lm, real_T
  rtu_guzhang_lr, real_T rtu_guzhang_rf, real_T rtu_guzhang_rm, real_T
  rtu_guzhang_rr, real32_T rtu_bra_pre_gz2, B_MATLABFunction_six_plus_s_p_T
  *localB);
extern void six_plus_si_MATLABFunction5(boolean_T rtu_RC_switch, real_T
  rtu_guzhang_lm, real_T rtu_guzhang_lr, real_T rtu_guzhang_rf, real_T
  rtu_guzhang_rm, real_T rtu_guzhang_rr, B_MATLABFunction5_six_plus_si_T *localB);
extern void six_plus_s_MATLABFunction_e(real_T rtu_trqlim_l, real_T
  rtu_trq_dem_l1, real_T rtu_trqlim_r, real_T rtu_trq_dem_r1, real32_T
  rtu_delta_T_dem, B_MATLABFunction_six_plus_s_i_T *localB);
extern void six_plus_six_AcmsteeringV_u(real32_T rtu_speed_act_lf, real32_T
  rtu_speed_act_lm, real32_T rtu_speed_act_lr, real32_T rtu_speed_act_rf,
  real32_T rtu_speed_act_rm, real32_T rtu_speed_act_rr);
extern void six_plus_s_MATLABFunction_g(real32_T rtu_s_act_lf, real32_T
  rtu_s_opt_zhuan, real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_lf_pre,
  B_MATLABFunction_six_plus_s_n_T *localB);
extern void six_plus_si_MATLABFunction1(real32_T rtu_s_act_lr, real32_T
  rtu_s_opt_zhuan, real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_lr_pre,
  B_MATLABFunction1_six_plus_si_T *localB);
extern void six_plus_si_MATLABFunction2(real32_T rtu_s_act_rf, real32_T
  rtu_s_opt_zhuan, real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_rf_pre,
  B_MATLABFunction2_six_plus_si_T *localB);
extern void six_plus_si_MATLABFunction3(real32_T rtu_s_act_rr, real32_T
  rtu_s_opt_zhuan, real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_rr_pre,
  B_MATLABFunction3_six_plus_si_T *localB);
extern void six_plus_si_MATLABFunction4(real32_T rtu_s_act_lm, real32_T
  rtu_s_opt_zhuan, real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_lm_pre,
  B_MATLABFunction4_six_plus_si_T *localB);
extern void six_plus_si_MATLABFunction6(real32_T rtu_s_act_rm, real32_T
  rtu_s_opt_zhuan, real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_rm_pre,
  B_MATLABFunction6_six_plus_si_T *localB);
extern void six_plus_six_Acmsteeri_MCU1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_MCU1_six_plus_six_Acmsteeri_T *localB);
extern void six_plus_six_Acmstee_BMS3_1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS3_1_six_plus_six_Acmstee_T *localB);
extern void six_plus_six_Acmstee_BMS4_1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS4_1_six_plus_six_Acmstee_T *localB);
extern void six_plus_six_Acmstee_BMS5_1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS5_1_six_plus_six_Acmstee_T *localB);
extern void six_plus_six_Acmstee_BMS2_2(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS2_2_six_plus_six_Acmstee_T *localB);
extern void six_plus_six_Acmsteeri_MCU2(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_MCU2_six_plus_six_Acmsteeri_T *localB);
extern void six_plus__MATLABFunction1_d(real_T rtu_current_in,
  B_MATLABFunction1_six_plus__e_T *localB);
extern void six_plus__MATLABFunction3_n(real_T rtu_speed,
  B_MATLABFunction3_six_plus__l_T *localB);
extern void six_plus_s_MATLABFunction_f(real_T rtu_data1, real_T rtu_data2,
  real_T rtu_data3, real_T rtu_data4, B_MATLABFunction_six_plus_s_o_T *localB);
extern void six_plus_s_MATLABFunction_p(real_T rtu_data1, real_T rtu_data2,
  real_T rtu_data3, real_T rtu_data4, B_MATLABFunction_six_plus__cj_T *localB);
extern void six_plus_six_AcmsteeringV09_main_1lf_step0(void);
extern void six_plus_six_AcmsteeringV09_main_1lf_step1(void);
extern void six_plus_six_AcmsteeringV09_main_1lf_step2(void);
extern void six_plus_six_AcmsteeringV09_main_1lf_step3(void);
extern void six_plus_six_AcmsteeringV09_main_1lf_step4(void);
extern void six_plus_six_AcmsteeringV09_main_1lf_step5(void);
extern void six_plus_six_AcmsteeringV09_main_1lf_step6(void);

#endif                                 /* RTW_HEADER_six_plus_six_AcmsteeringV09_main_1lf_private_h_ */

/* File trailer for ECUCoder generated file six_plus_six_AcmsteeringV09_main_1lf_private.h.
 *
 * [EOF]
 */
