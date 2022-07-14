/*
 * Code generated for Simulink model six_plus_six_AcmsteeringV09_main_2lflm.
 *
 * FILE    : six_plus_six_AcmsteeringV09_main_2lflm.c
 *
 * VERSION : 1.2728
 *
 * DATE    : Mon Nov 23 17:24:10 2020
 *
 * Copyright 2011-2017 ECUCoder. All Rights Reserved.
 */

#include "six_plus_six_AcmsteeringV09_main_2lflm.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_private.h"

/* #include "myinclude.h" */

/* Exported block parameters */
real_T guzhang_lr = 0.0;               /* Variable: guzhang_lr
                                        * Referenced by:
                                        *   '<S569>/ECCalVar2'
                                        *   '<S1024>/ECCalVar2'
                                        */
real_T guzhang_rf = 0.0;               /* Variable: guzhang_rf
                                        * Referenced by:
                                        *   '<S569>/ECCalVar3'
                                        *   '<S1024>/ECCalVar3'
                                        */
real_T guzhang_rm = 0.0;               /* Variable: guzhang_rm
                                        * Referenced by:
                                        *   '<S569>/ECCalVar4'
                                        *   '<S1024>/ECCalVar4'
                                        */
real_T guzhang_rr = 0.0;               /* Variable: guzhang_rr
                                        * Referenced by:
                                        *   '<S569>/ECCalVar5'
                                        *   '<S1024>/ECCalVar5'
                                        */
real_T kd1 = 0.0;                      /* Variable: kd1
                                        * Referenced by:
                                        *   '<S574>/Gain7'
                                        *   '<S1029>/Gain7'
                                        */
real_T ki1 = 1.0;                      /* Variable: ki1
                                        * Referenced by:
                                        *   '<S574>/Gain6'
                                        *   '<S1029>/Gain6'
                                        */
real_T kp1 = 500.0;                    /* Variable: kp1
                                        * Referenced by:
                                        *   '<S574>/Gain5'
                                        *   '<S1029>/Gain5'
                                        */
real32_T ESP_switch = 0.0F;            /* Variable: ESP_switch
                                        * Referenced by:
                                        *   '<S574>/Constant3'
                                        *   '<S1029>/Constant3'
                                        */
real32_T TCS_switch = 0.0F;            /* Variable: TCS_switch
                                        * Referenced by:
                                        *   '<S713>/Constant11'
                                        *   '<S1168>/Constant11'
                                        */
real32_T ag_thr = 0.981F;              /* Variable: ag_thr
                                        * Referenced by:
                                        *   '<S425>/Constant1'
                                        *   '<S880>/Constant1'
                                        *   '<S572>/Constant8'
                                        *   '<S574>/Constant'
                                        *   '<S1027>/Constant8'
                                        *   '<S1029>/Constant'
                                        */

/* Exported data definition */

/* Definition for custom storage class: Default */
real_T Altitude;
real_T BMS1_1SOC;
real_T BMS1_2SOC;
real_T BMS1_SOC;
real_T EastSpd;
real_T Heading;
real_T Latitude;
real_T Longitude;
real_T MCU0_1SpeedFdk;
real_T MCU0_2SpeedFdk;
real_T MCU0_3SpeedFdk;
real_T MCU0_4SpeedFdk;
real_T MCU0_5SpeedFdk;
real_T MCU0_SpeedFdk;
real_T NorthSpd;
real_T Pitching;
real_T Rolling;
real_T SkySpd;
int8_T TCS_mode;
real_T Xacceleration;
real_T Xangularrate;
real_T Yacceleration;
real_T Yangularrate;
real_T Zacceleration;
real_T Zangularrate;
real_T acc_y;
real32_T delta_Twending_dem;
real32_T flag_lf;
real32_T flag_lm;
real32_T flag_lr;
real32_T flag_rf;
real32_T flag_rm;
real32_T flag_rr;
int8_T mode_dem_out;
real32_T s_act_lf;
real32_T s_act_lm;
real32_T s_act_lr;
real32_T s_act_rf;
real32_T s_act_rm;
real32_T s_act_rr;
real32_T trq_adjust_l_forward;
real32_T trq_adjust_r_forward;
real32_T trq_dem_l_forward;
real32_T trq_dem_r_forward;
real32_T trq_out_l_forward;
real32_T trq_out_lf_forward;
real32_T trq_out_lm_forward;
real32_T trq_out_lr_forward;
real32_T trq_out_r_forward;
real32_T trq_out_rf_forward;
real32_T trq_out_rm_forward;
real32_T trq_out_rr_forward;
real32_T trq_pid_lf_adjust;
real32_T trq_pid_lm_adjust;
real32_T trq_pid_lr_adjust;
real32_T trq_pid_rf_adjust;
real32_T trq_pid_rm_adjust;
real32_T trq_pid_rr_adjust;

/* Block signals (auto storage) */
B_six_plus_six_AcmsteeringV09_T six_plus_six_AcmsteeringV09_m_B;

/* Block states (auto storage) */
DW_six_plus_six_AcmsteeringV0_T six_plus_six_AcmsteeringV09__DW;

/* Real-time model */
RT_MODEL_six_plus_six_Acmstee_T six_plus_six_AcmsteeringV09__M_;
RT_MODEL_six_plus_six_Acmstee_T *const six_plus_six_AcmsteeringV09__M =
  &six_plus_six_AcmsteeringV09__M_;
static void rate_monotonic_scheduler(void);
void ISR_PIT_CH3(void)
{
  PIT_0.TIMER[3].TFLG.R = 1;
  ECUCoderModelBaseCounter++;
  rate_monotonic_scheduler();
}

real32_T look1_iflf_binlx(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

void ISR_FlexCAN_2_MB0(void)
{
  /* Call the system: <S1201>/CCPReceive */
  {
    /* Output and update for function-call system: '<S1201>/CCPReceive' */

    /* S-Function (ec5744_canreceiveslb): '<S1217>/CANReceive' */

    /* Receive CAN message */
    {
      uint8 CAN2BUF0RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

      uint8 can2buf0looprx= 0;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o3= 256;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o5= 8;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o2= ec_can_receive(2,0,
        CAN2BUF0RX);
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[0]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[1]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[2]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[3]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[4]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[5]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[6]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
      six_plus_six_AcmsteeringV09_m_B.CANReceive_o4[7]=
        CAN2BUF0RX[can2buf0looprx];
      can2buf0looprx++;
    }

    /* Nothing to do for system: <S1217>/Nothing */
  }

  FLEXCAN(2).IFLAG1.B.BUF0I = 1;       /* Clear CAN interrupt flag by writing it to 1 */
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void six_plus_six_AcmsteeringV09_main_2lflm_SetEventsForThisBaseStep(boolean_T
  *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(six_plus_six_AcmsteeringV09__M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(six_plus_six_AcmsteeringV09__M, 2));
  eventFlags[3] = ((boolean_T)rtmStepTask(six_plus_six_AcmsteeringV09__M, 3));
  eventFlags[4] = ((boolean_T)rtmStepTask(six_plus_six_AcmsteeringV09__M, 4));
  eventFlags[5] = ((boolean_T)rtmStepTask(six_plus_six_AcmsteeringV09__M, 5));
  eventFlags[6] = ((boolean_T)rtmStepTask(six_plus_six_AcmsteeringV09__M, 6));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[1])++;
  if ((six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.001s, 0.0s] */
    six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[1] = 0;
  }

  (six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[2])++;
  if ((six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.005s, 0.0s] */
    six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[2] = 0;
  }

  (six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[3])++;
  if ((six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[3]) > 19) {/* Sample time: [0.01s, 0.0s] */
    six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[3] = 0;
  }

  (six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[4])++;
  if ((six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[4]) > 99) {/* Sample time: [0.05s, 0.0s] */
    six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[4] = 0;
  }

  (six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[5])++;
  if ((six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[5]) > 199) {/* Sample time: [0.1s, 0.0s] */
    six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[5] = 0;
  }

  (six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[6])++;
  if ((six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[6]) > 999) {/* Sample time: [0.5s, 0.0s] */
    six_plus_six_AcmsteeringV09__M->Timing.TaskCounters.TID[6] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S5>/MATLAB Function'
 *    '<S5>/MATLAB Function1'
 *    '<S5>/MATLAB Function2'
 *    '<S5>/MATLAB Function3'
 */
void six_plus_six_MATLABFunction(real_T rtu_data_1, real_T rtu_data_2,
  B_MATLABFunction_six_plus_six_T *localB)
{
  real_T position_3;
  real_T position_2;
  real_T position_1;
  real_T remainder1;
  remainder1 = rtu_data_2;

  /* MATLAB Function 'Subsystem/MATLAB Function': '<S1219>:1' */
  if (rtu_data_1 < 150.0) {
    /* '<S1219>:1:2' */
    if (rtu_data_1 - floor(rtu_data_1 / 6.0) * 6.0 < 3.0) {
      /* '<S1219>:1:3' */
      /* '<S1219>:1:4' */
      localB->data = 6.0;
    } else {
      /* '<S1219>:1:6' */
      localB->data = 7.0;
    }

    /* '<S1219>:1:8' */
    localB->zero = 0.0;

    /* '<S1219>:1:9' */
    position_1 = 0.0;

    /* '<S1219>:1:10' */
    position_2 = 0.0;

    /* '<S1219>:1:11' */
    position_3 = 0.0;

    /* '<S1219>:1:12' */
    remainder1 = 0.0;
  } else {
    if (rtu_data_1 - floor(rtu_data_1 / 2.0) * 2.0 == 0.0) {
      /* '<S1219>:1:14' */
      /* '<S1219>:1:15' */
      localB->data = 15.0;

      /* '<S1219>:1:16' */
      localB->zero = 0.0;
    } else {
      /* '<S1219>:1:18' */
      localB->zero = 0.0;

      /* '<S1219>:1:19' */
      localB->data = 95.0;
    }

    /* Negative numbers are represented with the Two's Complement */
    /* '<S1219>:1:22' */
    if (rtu_data_2 < 0.0) {
      /* '<S1219>:1:23' */
      /* '<S1219>:1:24' */
      remainder1 = 4.294967296E+9 + rtu_data_2;
    }

    /* Find the 4 bytes */
    /* '<S1219>:1:27' */
    position_1 = floor(remainder1 / 1.6777216E+7);

    /* '<S1219>:1:28' */
    remainder1 = floor(remainder1 - floor(remainder1 / 1.6777216E+7) *
                       1.6777216E+7);

    /* '<S1219>:1:29' */
    position_2 = floor(remainder1 / 65536.0);

    /* '<S1219>:1:30' */
    remainder1 -= floor(remainder1 / 65536.0) * 65536.0;

    /* '<S1219>:1:31' */
    position_3 = floor(remainder1 / 256.0);

    /* '<S1219>:1:32' */
    remainder1 -= floor(remainder1 / 256.0) * 256.0;
  }

  localB->position_4 = remainder1;
  localB->position_3 = position_3;
  localB->position_2 = position_2;
  localB->position_1 = position_1;
}

/*
 * Output and update for atomic system:
 *    '<S416>/HeartBeat'
 *    '<S416>/HeartBeat1'
 *    '<S416>/HeartBeat2'
 *    '<S416>/HeartBeat3'
 *    '<S416>/HeartBeat4'
 *    '<S416>/HeartBeat5'
 *    '<S1168>/HeartBeat'
 *    '<S1168>/HeartBeat1'
 *    '<S1168>/HeartBeat2'
 *    '<S1168>/HeartBeat3'
 *    ...
 */
void six_plus_six_Acms_HeartBeat(real32_T rtu_life_pre,
  B_HeartBeat_six_plus_six_Acms_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/Park/park/HeartBeat': '<S417>:1' */
  /* '<S417>:1:3' */
  localB->life = rtu_life_pre + 1.0F;
  if (localB->life > 255.0F) {
    /* '<S417>:1:4' */
    /* '<S417>:1:5' */
    localB->life = 0.0F;
  }
}

/*
 * Output and update for atomic system:
 *    '<S880>/MATLAB Function'
 *    '<S425>/MATLAB Function'
 */
void six_plus_s_MATLABFunction_a(real_T rtu_acc_y, real32_T rtu_ag_thr,
  B_MATLABFunction_six_plus_s_c_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/MATLAB Function': '<S1017>:1' */
  if (fabs(rtu_acc_y) >= rtu_ag_thr) {
    /* '<S1017>:1:3' */
    /* '<S1017>:1:4' */
    localB->y = 0;
  } else {
    /* '<S1017>:1:6' */
    localB->y = 1;
  }
}

/*
 * Output and update for atomic system:
 *    '<S1024>/MATLAB Function'
 *    '<S569>/MATLAB Function'
 */
void six_plus_s_MATLABFunction_o(real32_T rtu_trq_dem_l, real32_T rtu_trq_dem_r,
  real_T rtu_trqlim_lf, real_T rtu_trqlim_lm, real_T rtu_trqlim_lr, real_T
  rtu_trqlim_rf, real_T rtu_trqlim_rm, real_T rtu_trqlim_rr, real_T
  rtu_guzhang_lf, real_T rtu_guzhang_lm, real_T rtu_guzhang_lr, real_T
  rtu_guzhang_rf, real_T rtu_guzhang_rm, real_T rtu_guzhang_rr, real32_T
  rtu_bra_pre_gz2, B_MATLABFunction_six_plus_s_p_T *localB)
{
  real32_T trq_dem_lf;
  real32_T trq_dem_lm;
  real32_T trq_dem_lr;
  real32_T trq_dem_rf;
  real32_T trq_dem_rm;
  real32_T trq_dem_rr;
  real32_T bra_pre_l;
  real32_T bra_pre_r;

  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/容错控制/MATLAB Function': '<S1152>:1' */
  if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) && (rtu_guzhang_lr ==
       0.0) && (rtu_guzhang_rf == 0.0) && (rtu_guzhang_rm == 0.0) &&
      (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:3' */
    /* 0电机故障,平均分配 */
    /* '<S1152>:1:4' */
    trq_dem_lf = rtu_trq_dem_l / 3.0F;

    /* '<S1152>:1:5' */
    trq_dem_lm = rtu_trq_dem_l / 3.0F;

    /* '<S1152>:1:6' */
    trq_dem_lr = rtu_trq_dem_l / 3.0F;

    /* '<S1152>:1:7' */
    trq_dem_rf = rtu_trq_dem_r / 3.0F;

    /* '<S1152>:1:8' */
    trq_dem_rm = rtu_trq_dem_r / 3.0F;

    /* '<S1152>:1:9' */
    trq_dem_rr = rtu_trq_dem_r / 3.0F;

    /* '<S1152>:1:10' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:11' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:12' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:17' */
    /* 1电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前 */
    /* '<S1152>:1:18' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:19' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:20' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:21' */
    trq_dem_rf = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
      3.0F;

    /* '<S1152>:1:22' */
    trq_dem_rm = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
      3.0F;

    /* '<S1152>:1:23' */
    trq_dem_rr = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
      3.0F;

    /* '<S1152>:1:24' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:25' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:26' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:27' */
    /* 1电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。 左中 */
    /* '<S1152>:1:28' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:29' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:30' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:31' */
    trq_dem_rf = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
      3.0F;

    /* '<S1152>:1:32' */
    trq_dem_rm = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
      3.0F;

    /* '<S1152>:1:33' */
    trq_dem_rr = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
      3.0F;

    /* '<S1152>:1:34' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:35' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:36' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:37' */
    /* 1电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。 左后 */
    /* '<S1152>:1:38' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:39' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:40' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:41' */
    trq_dem_rf = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
      3.0F;

    /* '<S1152>:1:42' */
    trq_dem_rm = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
      3.0F;

    /* '<S1152>:1:43' */
    trq_dem_rr = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
      3.0F;

    /* '<S1152>:1:44' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:45' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:46' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:47' */
    /* 1电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前 */
    /* '<S1152>:1:48' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:49' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:50' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    /* '<S1152>:1:51' */
    trq_dem_lf = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
      3.0F;

    /* '<S1152>:1:52' */
    trq_dem_lm = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
      3.0F;

    /* '<S1152>:1:53' */
    trq_dem_lr = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
      3.0F;

    /* '<S1152>:1:54' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:55' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:56' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:57' */
    /* 1电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。 右中 */
    /* '<S1152>:1:58' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:59' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:60' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    /* '<S1152>:1:61' */
    trq_dem_lf = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
      3.0F;

    /* '<S1152>:1:62' */
    trq_dem_lm = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
      3.0F;

    /* '<S1152>:1:63' */
    trq_dem_lr = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
      3.0F;

    /* '<S1152>:1:64' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:65' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:66' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:67' */
    /* 1电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。 右后 */
    /* '<S1152>:1:68' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:69' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:70' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:71' */
    trq_dem_lf = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
      3.0F;

    /* '<S1152>:1:72' */
    trq_dem_lm = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
      3.0F;

    /* '<S1152>:1:73' */
    trq_dem_lr = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
      3.0F;

    /* '<S1152>:1:74' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:75' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:76' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:83' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前 左中   左侧 */
    /* '<S1152>:1:84' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:85' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:86' */
    if ((rtu_trq_dem_l > rtu_trqlim_lr) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = rtu_trq_dem_l;
    }

    /* '<S1152>:1:87' */
    trq_dem_rf = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 3.0F;

    /* '<S1152>:1:88' */
    trq_dem_rm = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 3.0F;

    /* '<S1152>:1:89' */
    trq_dem_rr = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 3.0F;

    /* '<S1152>:1:90' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:91' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:92' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:93' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前 左后 */
    /* '<S1152>:1:94' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:95' */
    if ((rtu_trq_dem_l > rtu_trqlim_lm) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = rtu_trq_dem_l;
    }

    /* '<S1152>:1:96' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:97' */
    trq_dem_rf = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 3.0F;

    /* '<S1152>:1:98' */
    trq_dem_rm = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 3.0F;

    /* '<S1152>:1:99' */
    trq_dem_rr = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 3.0F;

    /* '<S1152>:1:100' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:101' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:102' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:103' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中 左后 */
    /* '<S1152>:1:104' */
    if ((rtu_trq_dem_l > rtu_trqlim_lf) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = rtu_trq_dem_l;
    }

    /* '<S1152>:1:105' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:106' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:107' */
    trq_dem_rf = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 3.0F;

    /* '<S1152>:1:108' */
    trq_dem_rm = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 3.0F;

    /* '<S1152>:1:109' */
    trq_dem_rr = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 3.0F;

    /* '<S1152>:1:110' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:111' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:112' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:114' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前 右中   右侧 */
    /* '<S1152>:1:115' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:116' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:117' */
    if ((rtu_trq_dem_r > rtu_trqlim_rr) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = rtu_trq_dem_r;
    }

    /* '<S1152>:1:118' */
    trq_dem_lf = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 3.0F;

    /* '<S1152>:1:119' */
    trq_dem_lm = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 3.0F;

    /* '<S1152>:1:120' */
    trq_dem_lr = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 3.0F;

    /* '<S1152>:1:121' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:122' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:123' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:124' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前 右后 */
    /* '<S1152>:1:125' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:126' */
    if ((rtu_trq_dem_r > rtu_trqlim_rm) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = rtu_trq_dem_r;
    }

    /* '<S1152>:1:127' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:128' */
    trq_dem_lf = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 3.0F;

    /* '<S1152>:1:129' */
    trq_dem_lm = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 3.0F;

    /* '<S1152>:1:130' */
    trq_dem_lr = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 3.0F;

    /* '<S1152>:1:131' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:132' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:133' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:134' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右中 右后 */
    /* '<S1152>:1:135' */
    if ((rtu_trq_dem_r > rtu_trqlim_rf) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = rtu_trq_dem_r;
    }

    /* '<S1152>:1:136' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:137' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:138' */
    trq_dem_lf = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 3.0F;

    /* '<S1152>:1:139' */
    trq_dem_lm = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 3.0F;

    /* '<S1152>:1:140' */
    trq_dem_lr = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 3.0F;

    /* '<S1152>:1:141' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:142' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:143' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:145' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-右前 对侧 */
    /* '<S1152>:1:146' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:147' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:148' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:149' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:150' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:151' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rm)
        - trq_dem_rr) {
      /* '<S1152>:1:152' */
      /* '<S1152>:1:153' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }

      /* '<S1152>:1:154' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:156' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }

      /* '<S1152>:1:157' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:159' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:160' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:161' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:162' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-右中 */
    /* '<S1152>:1:163' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:164' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:165' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:166' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:167' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:168' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rf)
        - trq_dem_rr) {
      /* '<S1152>:1:169' */
      /* '<S1152>:1:170' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:171' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:173' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }

      /* '<S1152>:1:174' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:176' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:177' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:178' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:179' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-右后 */
    /* '<S1152>:1:180' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:181' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:182' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:183' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:184' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:185' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rf)
        - trq_dem_rm) {
      /* '<S1152>:1:186' */
      /* '<S1152>:1:187' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:188' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:190' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
        2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }

      /* '<S1152>:1:191' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
        2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:193' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:194' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:195' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:197' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-右前 */
    /* '<S1152>:1:198' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:199' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:200' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:201' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:202' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:203' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rm)
        - trq_dem_rr) {
      /* '<S1152>:1:204' */
      /* '<S1152>:1:205' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }

      /* '<S1152>:1:206' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:208' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:209' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:211' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:212' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:213' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:214' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-右中 */
    /* '<S1152>:1:215' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:216' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:217' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:218' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:219' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:220' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rf)
        - trq_dem_rr) {
      /* '<S1152>:1:221' */
      /* '<S1152>:1:222' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:223' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:225' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:226' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:228' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:229' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:230' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:231' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-右后 */
    /* '<S1152>:1:232' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:233' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:234' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:235' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    /* '<S1152>:1:236' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:237' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rf)
        - trq_dem_rm) {
      /* '<S1152>:1:238' */
      /* '<S1152>:1:239' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:240' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)) /
        2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:242' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
        2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:243' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
        2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:245' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:246' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:247' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:249' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左后-右前 */
    /* '<S1152>:1:250' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:251' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:252' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:253' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:254' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:255' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm >= (rtu_trq_dem_r - trq_dem_rm)
        - trq_dem_rr) {
      /* '<S1152>:1:256' */
      /* '<S1152>:1:257' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
        2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }

      /* '<S1152>:1:258' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
        2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:260' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:261' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:263' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:264' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:265' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:266' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左后-右中 */
    /* '<S1152>:1:267' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:268' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:269' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:270' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:271' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:272' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm >= (rtu_trq_dem_r - trq_dem_rf)
        - trq_dem_rr) {
      /* '<S1152>:1:273' */
      /* '<S1152>:1:274' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
        2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:275' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
        2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:277' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:278' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)) /
        2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:280' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:281' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:282' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:283' */
    /* 2电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左后-右后 */
    /* '<S1152>:1:284' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:285' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:286' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:287' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:288' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:289' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    if ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm >= (rtu_trq_dem_r - trq_dem_rf)
        - trq_dem_rm) {
      /* '<S1152>:1:290' */
      /* '<S1152>:1:291' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
        2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:292' */
      bra_pre_l = (rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)) /
        2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:294' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
        2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:295' */
      bra_pre_l = (rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)) /
        2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:297' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:298' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:299' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:309' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前 左中 左后   左侧 */
    /* '<S1152>:1:310' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:311' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:312' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:313' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:314' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:315' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:316' */
    bra_pre_l = rtu_bra_pre_gz2;

    /* '<S1152>:1:317' */
    bra_pre_r = rtu_bra_pre_gz2;

    /* '<S1152>:1:318' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:319' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前 右中 右后   右侧 */
    /* '<S1152>:1:320' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:321' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:322' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:323' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:324' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:325' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:326' */
    bra_pre_l = rtu_bra_pre_gz2;

    /* '<S1152>:1:327' */
    bra_pre_r = rtu_bra_pre_gz2;

    /* '<S1152>:1:328' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:330' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左中-右前 对侧 */
    /* '<S1152>:1:331' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:332' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:333' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:334' */
    if ((rtu_trq_dem_l > rtu_trqlim_lr) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = rtu_trq_dem_l;
    }

    /* '<S1152>:1:335' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:336' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)
    {
      /* '<S1152>:1:337' */
      /* '<S1152>:1:338' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }

      /* '<S1152>:1:339' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:341' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr);
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:343' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:344' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:345' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:346' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左中-右中 对侧 */
    /* '<S1152>:1:347' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:348' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:349' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:350' */
    if ((rtu_trq_dem_l > rtu_trqlim_lr) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = rtu_trq_dem_l;
    }

    /* '<S1152>:1:351' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:352' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)
    {
      /* '<S1152>:1:353' */
      /* '<S1152>:1:354' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:355' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:357' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr);
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:359' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:360' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:361' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:362' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左中-右后 对侧 */
    /* '<S1152>:1:363' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:364' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:365' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:366' */
    if ((rtu_trq_dem_l > rtu_trqlim_lr) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = rtu_trq_dem_l;
    }

    /* '<S1152>:1:367' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:368' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lr >= (rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)
    {
      /* '<S1152>:1:369' */
      /* '<S1152>:1:370' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:371' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr)) / 2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:373' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm);
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:375' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:376' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:377' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:379' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左后-右前 对侧 */
    /* '<S1152>:1:380' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:381' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:382' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:383' */
    if ((rtu_trq_dem_l > rtu_trqlim_lm) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = rtu_trq_dem_l;
    }

    /* '<S1152>:1:384' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:385' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lm >= (rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)
    {
      /* '<S1152>:1:386' */
      /* '<S1152>:1:387' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }

      /* '<S1152>:1:388' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:390' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr);
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:392' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:393' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:394' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:395' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左后-右中 对侧 */
    /* '<S1152>:1:396' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:397' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:398' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:399' */
    if ((rtu_trq_dem_l > rtu_trqlim_lm) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = rtu_trq_dem_l;
    }

    /* '<S1152>:1:400' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:401' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lm >= (rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)
    {
      /* '<S1152>:1:402' */
      /* '<S1152>:1:403' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:404' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:406' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr);
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:408' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:409' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:410' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:411' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左后-右后 对侧 */
    /* '<S1152>:1:412' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:413' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:414' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:415' */
    if ((rtu_trq_dem_l > rtu_trqlim_lm) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = rtu_trq_dem_l;
    }

    /* '<S1152>:1:416' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:417' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lm >= (rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)
    {
      /* '<S1152>:1:418' */
      /* '<S1152>:1:419' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:420' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm)) / 2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:422' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm);
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:424' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:425' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:426' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:428' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-左后-右前 对侧 */
    /* '<S1152>:1:429' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:430' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:431' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:432' */
    if ((rtu_trq_dem_l > rtu_trqlim_lf) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = rtu_trq_dem_l;
    }

    /* '<S1152>:1:433' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    /* '<S1152>:1:434' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lf >= (rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr)
    {
      /* '<S1152>:1:435' */
      /* '<S1152>:1:436' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }

      /* '<S1152>:1:437' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:439' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rm) - trq_dem_rr);
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }
    }

    /* '<S1152>:1:441' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:442' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:443' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:444' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-左后-右中 对侧 */
    /* '<S1152>:1:445' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:446' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:447' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:448' */
    if ((rtu_trq_dem_l > rtu_trqlim_lf) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = rtu_trq_dem_l;
    }

    /* '<S1152>:1:449' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:450' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lf >= (rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr)
    {
      /* '<S1152>:1:451' */
      /* '<S1152>:1:452' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:453' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 2.0F;
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:455' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rr);
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }
    }

    /* '<S1152>:1:457' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:458' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:459' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:460' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-左后-右后 对侧 */
    /* '<S1152>:1:461' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:462' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:463' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:464' */
    if ((rtu_trq_dem_l > rtu_trqlim_lf) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = rtu_trq_dem_l;
    }

    /* '<S1152>:1:465' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = bra_pre_l;
    }

    /* '<S1152>:1:466' */
    bra_pre_l = rtu_trq_dem_r / 2.0F;
    if ((bra_pre_l > rtu_trqlim_rm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = bra_pre_l;
    }

    if (rtu_trq_dem_l - trq_dem_lf >= (rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm)
    {
      /* '<S1152>:1:467' */
      /* '<S1152>:1:468' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 2.0F;
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }

      /* '<S1152>:1:469' */
      bra_pre_l = (rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf)) / 2.0F;
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:471' */
      bra_pre_l = rtu_trq_dem_l - ((rtu_trq_dem_r - trq_dem_rf) - trq_dem_rm);
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }
    }

    /* '<S1152>:1:473' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:474' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:475' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:477' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前-右中-左前 对侧 */
    /* '<S1152>:1:478' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:479' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:480' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:481' */
    if ((rtu_trq_dem_r > rtu_trqlim_rr) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = rtu_trq_dem_r;
    }

    /* '<S1152>:1:482' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:483' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rr >= (rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)
    {
      /* '<S1152>:1:484' */
      /* '<S1152>:1:485' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }

      /* '<S1152>:1:486' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    } else {
      /* '<S1152>:1:488' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr);
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    }

    /* '<S1152>:1:490' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:491' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:492' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:493' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前-右中-左中 对侧 */
    /* '<S1152>:1:494' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:495' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:496' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:497' */
    if ((rtu_trq_dem_r > rtu_trqlim_rr) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = rtu_trq_dem_r;
    }

    /* '<S1152>:1:498' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:499' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rr >= (rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)
    {
      /* '<S1152>:1:500' */
      /* '<S1152>:1:501' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:502' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    } else {
      /* '<S1152>:1:504' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr);
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    }

    /* '<S1152>:1:506' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:507' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:508' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:509' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前-右中-左后 对侧 */
    /* '<S1152>:1:510' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:511' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:512' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:513' */
    if ((rtu_trq_dem_r > rtu_trqlim_rr) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = rtu_trq_dem_r;
    }

    /* '<S1152>:1:514' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:515' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rr >= (rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)
    {
      /* '<S1152>:1:516' */
      /* '<S1152>:1:517' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:518' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr)) / 2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    } else {
      /* '<S1152>:1:520' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm);
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    }

    /* '<S1152>:1:522' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:523' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:524' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:526' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前-右后-左前 对侧 */
    /* '<S1152>:1:527' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:528' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:529' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:530' */
    if ((rtu_trq_dem_r > rtu_trqlim_rm) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = rtu_trq_dem_r;
    }

    /* '<S1152>:1:531' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:532' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rm >= (rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)
    {
      /* '<S1152>:1:533' */
      /* '<S1152>:1:534' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }

      /* '<S1152>:1:535' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    } else {
      /* '<S1152>:1:537' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr);
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    }

    /* '<S1152>:1:539' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:540' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:541' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:542' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前-右后-左中 对侧 */
    /* '<S1152>:1:543' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:544' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:545' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:546' */
    if ((rtu_trq_dem_r > rtu_trqlim_rm) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = rtu_trq_dem_r;
    }

    /* '<S1152>:1:547' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:548' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rm >= (rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)
    {
      /* '<S1152>:1:549' */
      /* '<S1152>:1:550' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:551' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    } else {
      /* '<S1152>:1:553' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr);
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    }

    /* '<S1152>:1:555' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:556' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:557' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:558' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前-右后-左后 对侧 */
    /* '<S1152>:1:559' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:560' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:561' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:562' */
    if ((rtu_trq_dem_r > rtu_trqlim_rm) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = rtu_trq_dem_r;
    }

    /* '<S1152>:1:563' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:564' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rm >= (rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)
    {
      /* '<S1152>:1:565' */
      /* '<S1152>:1:566' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:567' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm)) / 2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    } else {
      /* '<S1152>:1:569' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm);
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    }

    /* '<S1152>:1:571' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:572' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:573' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:575' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右中-右后-左前 对侧 */
    /* '<S1152>:1:576' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:577' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:578' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:579' */
    if ((rtu_trq_dem_r > rtu_trqlim_rf) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = rtu_trq_dem_r;
    }

    /* '<S1152>:1:580' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    /* '<S1152>:1:581' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rf >= (rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr)
    {
      /* '<S1152>:1:582' */
      /* '<S1152>:1:583' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }

      /* '<S1152>:1:584' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    } else {
      /* '<S1152>:1:586' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lm) - trq_dem_lr);
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }
    }

    /* '<S1152>:1:588' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:589' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:590' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:591' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右中-右后-左中 对侧 */
    /* '<S1152>:1:592' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:593' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:594' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:595' */
    if ((rtu_trq_dem_r > rtu_trqlim_rf) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = rtu_trq_dem_r;
    }

    /* '<S1152>:1:596' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:597' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lr) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rf >= (rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr)
    {
      /* '<S1152>:1:598' */
      /* '<S1152>:1:599' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:600' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 2.0F;
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    } else {
      /* '<S1152>:1:602' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lr);
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }
    }

    /* '<S1152>:1:604' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:605' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:606' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:607' */
    /* 3电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右中-右后-左后 对侧 */
    /* '<S1152>:1:608' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:609' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:610' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:611' */
    if ((rtu_trq_dem_r > rtu_trqlim_rf) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = rtu_trq_dem_r;
    }

    /* '<S1152>:1:612' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lf) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = bra_pre_l;
    }

    /* '<S1152>:1:613' */
    bra_pre_l = rtu_trq_dem_l / 2.0F;
    if ((bra_pre_l > rtu_trqlim_lm) || rtIsNaNF(bra_pre_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = bra_pre_l;
    }

    if (rtu_trq_dem_r - trq_dem_rf >= (rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm)
    {
      /* '<S1152>:1:614' */
      /* '<S1152>:1:615' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 2.0F;
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }

      /* '<S1152>:1:616' */
      bra_pre_l = (rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf)) / 2.0F;
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    } else {
      /* '<S1152>:1:618' */
      bra_pre_l = rtu_trq_dem_r - ((rtu_trq_dem_l - trq_dem_lf) - trq_dem_lm);
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }
    }

    /* '<S1152>:1:620' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:621' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:622' */
  } else if (((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 0.0)) ||
             ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) ||
             ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
              (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0))) {
    /* '<S1152>:1:637' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前 左中 左后 右前/右中/右后   左侧 */
    /* '<S1152>:1:638' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:639' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:640' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:641' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:642' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:643' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:644' */
    bra_pre_l = rtu_bra_pre_gz2;

    /* '<S1152>:1:645' */
    bra_pre_r = rtu_bra_pre_gz2;

    /* '<S1152>:1:646' */
  } else if (((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
              (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) ||
             ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) ||
             ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 0.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0))) {
    /* '<S1152>:1:647' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  右前 右中 右后 左前/左中/左后   右侧 */
    /* '<S1152>:1:648' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:649' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:650' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:651' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:652' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:653' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:654' */
    bra_pre_l = rtu_bra_pre_gz2;

    /* '<S1152>:1:655' */
    bra_pre_r = rtu_bra_pre_gz2;

    /* '<S1152>:1:656' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:658' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左中-右前-右中 对侧 */
    /* '<S1152>:1:659' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:660' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:661' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:662' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:663' */
    if ((rtu_trq_dem_l > rtu_trqlim_lr) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = rtu_trq_dem_l;
    }

    /* '<S1152>:1:664' */
    if ((rtu_trq_dem_r > rtu_trqlim_rr) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lr >= rtu_trq_dem_r - trq_dem_rr) {
      /* '<S1152>:1:665' */
      /* '<S1152>:1:666' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr);
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:668' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr);
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:670' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:671' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:672' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:673' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左中-右前-右后 对侧 */
    /* '<S1152>:1:674' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:675' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:676' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:677' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:678' */
    if ((rtu_trq_dem_l > rtu_trqlim_lr) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = rtu_trq_dem_l;
    }

    /* '<S1152>:1:679' */
    if ((rtu_trq_dem_r > rtu_trqlim_rm) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lr >= rtu_trq_dem_r - trq_dem_rm) {
      /* '<S1152>:1:680' */
      /* '<S1152>:1:681' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr);
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:683' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm);
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:685' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:686' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:687' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:688' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左中-右中-右后 对侧 */
    /* '<S1152>:1:689' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:690' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:691' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:692' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:693' */
    if ((rtu_trq_dem_l > rtu_trqlim_lr) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lr = (real32_T)rtu_trqlim_lr;
    } else {
      trq_dem_lr = rtu_trq_dem_l;
    }

    /* '<S1152>:1:694' */
    if ((rtu_trq_dem_r > rtu_trqlim_rf) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lr >= rtu_trq_dem_r - trq_dem_rf) {
      /* '<S1152>:1:695' */
      /* '<S1152>:1:696' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lr);
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }
    } else {
      /* '<S1152>:1:698' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf);
      if ((rtu_trqlim_lr > bra_pre_l) || rtIsNaN(rtu_trqlim_lr)) {
        trq_dem_lr = bra_pre_l;
      } else {
        trq_dem_lr = (real32_T)rtu_trqlim_lr;
      }
    }

    /* '<S1152>:1:700' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:701' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:702' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:704' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左后-右前-右中 对侧 */
    /* '<S1152>:1:705' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:706' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:707' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:708' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:709' */
    if ((rtu_trq_dem_l > rtu_trqlim_lm) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = rtu_trq_dem_l;
    }

    /* '<S1152>:1:710' */
    if ((rtu_trq_dem_r > rtu_trqlim_rr) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lm >= rtu_trq_dem_r - trq_dem_rr) {
      /* '<S1152>:1:711' */
      /* '<S1152>:1:712' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm);
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:714' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr);
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:716' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:717' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:718' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:719' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左后-右前-右后 对侧 */
    /* '<S1152>:1:720' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:721' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:722' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:723' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:724' */
    if ((rtu_trq_dem_l > rtu_trqlim_lm) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = rtu_trq_dem_l;
    }

    /* '<S1152>:1:725' */
    if ((rtu_trq_dem_r > rtu_trqlim_rm) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lm >= rtu_trq_dem_r - trq_dem_rm) {
      /* '<S1152>:1:726' */
      /* '<S1152>:1:727' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm);
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:729' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm);
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:731' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:732' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:733' */
  } else if ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:734' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前-左后-右中-右后 对侧 */
    /* '<S1152>:1:735' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:736' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:737' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:738' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:739' */
    if ((rtu_trq_dem_l > rtu_trqlim_lm) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lm = (real32_T)rtu_trqlim_lm;
    } else {
      trq_dem_lm = rtu_trq_dem_l;
    }

    /* '<S1152>:1:740' */
    if ((rtu_trq_dem_r > rtu_trqlim_rf) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lm >= rtu_trq_dem_r - trq_dem_rf) {
      /* '<S1152>:1:741' */
      /* '<S1152>:1:742' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lm);
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }
    } else {
      /* '<S1152>:1:744' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf);
      if ((rtu_trqlim_lm > bra_pre_l) || rtIsNaN(rtu_trqlim_lm)) {
        trq_dem_lm = bra_pre_l;
      } else {
        trq_dem_lm = (real32_T)rtu_trqlim_lm;
      }
    }

    /* '<S1152>:1:746' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:747' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:748' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0)) {
    /* '<S1152>:1:750' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-左后-右前-右中 对侧 */
    /* '<S1152>:1:751' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:752' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:753' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:754' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:755' */
    if ((rtu_trq_dem_l > rtu_trqlim_lf) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = rtu_trq_dem_l;
    }

    /* '<S1152>:1:756' */
    if ((rtu_trq_dem_r > rtu_trqlim_rr) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rr = (real32_T)rtu_trqlim_rr;
    } else {
      trq_dem_rr = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lf >= rtu_trq_dem_r - trq_dem_rr) {
      /* '<S1152>:1:757' */
      /* '<S1152>:1:758' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf);
      if ((rtu_trqlim_rr > bra_pre_l) || rtIsNaN(rtu_trqlim_rr)) {
        trq_dem_rr = bra_pre_l;
      } else {
        trq_dem_rr = (real32_T)rtu_trqlim_rr;
      }
    } else {
      /* '<S1152>:1:760' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rr);
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }
    }

    /* '<S1152>:1:762' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:763' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:764' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
             (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:765' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-左后-右前-右后 对侧 */
    /* '<S1152>:1:766' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:767' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:768' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:769' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:770' */
    if ((rtu_trq_dem_l > rtu_trqlim_lf) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = rtu_trq_dem_l;
    }

    /* '<S1152>:1:771' */
    if ((rtu_trq_dem_r > rtu_trqlim_rm) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rm = (real32_T)rtu_trqlim_rm;
    } else {
      trq_dem_rm = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lf >= rtu_trq_dem_r - trq_dem_rm) {
      /* '<S1152>:1:772' */
      /* '<S1152>:1:773' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf);
      if ((rtu_trqlim_rm > bra_pre_l) || rtIsNaN(rtu_trqlim_rm)) {
        trq_dem_rm = bra_pre_l;
      } else {
        trq_dem_rm = (real32_T)rtu_trqlim_rm;
      }
    } else {
      /* '<S1152>:1:775' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rm);
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }
    }

    /* '<S1152>:1:777' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:778' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:779' */
  } else if ((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
             (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
             (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) {
    /* '<S1152>:1:780' */
    /* 4电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左中-左后-右中-右后 对侧 */
    /* '<S1152>:1:781' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:782' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:783' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:784' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:785' */
    if ((rtu_trq_dem_l > rtu_trqlim_lf) || rtIsNaNF(rtu_trq_dem_l)) {
      trq_dem_lf = (real32_T)rtu_trqlim_lf;
    } else {
      trq_dem_lf = rtu_trq_dem_l;
    }

    /* '<S1152>:1:786' */
    if ((rtu_trq_dem_r > rtu_trqlim_rf) || rtIsNaNF(rtu_trq_dem_r)) {
      trq_dem_rf = (real32_T)rtu_trqlim_rf;
    } else {
      trq_dem_rf = rtu_trq_dem_r;
    }

    if (rtu_trq_dem_l - trq_dem_lf >= rtu_trq_dem_r - trq_dem_rf) {
      /* '<S1152>:1:787' */
      /* '<S1152>:1:788' */
      bra_pre_l = rtu_trq_dem_r - (rtu_trq_dem_l - trq_dem_lf);
      if ((rtu_trqlim_rf > bra_pre_l) || rtIsNaN(rtu_trqlim_rf)) {
        trq_dem_rf = bra_pre_l;
      } else {
        trq_dem_rf = (real32_T)rtu_trqlim_rf;
      }
    } else {
      /* '<S1152>:1:790' */
      bra_pre_l = rtu_trq_dem_l - (rtu_trq_dem_r - trq_dem_rf);
      if ((rtu_trqlim_lf > bra_pre_l) || rtIsNaN(rtu_trqlim_lf)) {
        trq_dem_lf = bra_pre_l;
      } else {
        trq_dem_lf = (real32_T)rtu_trqlim_lf;
      }
    }

    /* '<S1152>:1:792' */
    bra_pre_l = 0.0F;

    /* '<S1152>:1:793' */
    bra_pre_r = 0.0F;

    /* '<S1152>:1:794' */
  } else if (((rtu_guzhang_lf == 0.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) ||
             ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 0.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) ||
             ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 0.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) ||
             ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 0.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 1.0)) ||
             ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 0.0) && (rtu_guzhang_rr == 1.0)) ||
             ((rtu_guzhang_lf == 1.0) && (rtu_guzhang_lm == 1.0) &&
              (rtu_guzhang_lr == 1.0) && (rtu_guzhang_rf == 1.0) &&
              (rtu_guzhang_rm == 1.0) && (rtu_guzhang_rr == 0.0))) {
    /* '<S1152>:1:807' */
    /* 5电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前 左中 左后 右前/右中/右后   左侧 */
    /* '<S1152>:1:808' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:809' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:810' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:811' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:812' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:813' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:814' */
    bra_pre_l = rtu_bra_pre_gz2;

    /* '<S1152>:1:815' */
    bra_pre_r = rtu_bra_pre_gz2;

    /* '<S1152>:1:816' */
  } else {
    /* 6电机故障，同侧电机进行力矩转移，超过限值后，对侧亦降扭。  左前 左中 左后 右前/右中/右后   左侧 */
    /* '<S1152>:1:825' */
    trq_dem_lf = 0.0F;

    /* '<S1152>:1:826' */
    trq_dem_lm = 0.0F;

    /* '<S1152>:1:827' */
    trq_dem_lr = 0.0F;

    /* '<S1152>:1:828' */
    trq_dem_rf = 0.0F;

    /* '<S1152>:1:829' */
    trq_dem_rm = 0.0F;

    /* '<S1152>:1:830' */
    trq_dem_rr = 0.0F;

    /* '<S1152>:1:831' */
    bra_pre_l = rtu_bra_pre_gz2;

    /* '<S1152>:1:832' */
    bra_pre_r = rtu_bra_pre_gz2;

    /* '<S1152>:1:833' */
  }

  /*  trq_dem_lf=max(0,trq_dem_lf);%电机转矩不小于0，就是不能出现负值 */
  /*  trq_dem_lr=max(0,trq_dem_lr); */
  /*  trq_dem_rf=max(0,trq_dem_rf); */
  /*  trq_dem_rr=max(0,trq_dem_rr); */
  /* '<S1152>:1:846' */
  if (!((-rtu_trqlim_lf < trq_dem_lf) || rtIsNaN(-rtu_trqlim_lf))) {
    trq_dem_lf = (real32_T)-rtu_trqlim_lf;
  }

  /* 电机转矩可以出现负值，不超过负的外特性 */
  /* '<S1152>:1:847' */
  if (!((-rtu_trqlim_lm < trq_dem_lm) || rtIsNaN(-rtu_trqlim_lm))) {
    trq_dem_lm = (real32_T)-rtu_trqlim_lm;
  }

  /* '<S1152>:1:848' */
  if (!((-rtu_trqlim_lr < trq_dem_lr) || rtIsNaN(-rtu_trqlim_lr))) {
    trq_dem_lr = (real32_T)-rtu_trqlim_lr;
  }

  /* '<S1152>:1:849' */
  if (!((-rtu_trqlim_rf < trq_dem_rf) || rtIsNaN(-rtu_trqlim_rf))) {
    trq_dem_rf = (real32_T)-rtu_trqlim_rf;
  }

  /* '<S1152>:1:850' */
  if (!((-rtu_trqlim_rm < trq_dem_rm) || rtIsNaN(-rtu_trqlim_rm))) {
    trq_dem_rm = (real32_T)-rtu_trqlim_rm;
  }

  /* '<S1152>:1:851' */
  if (!((-rtu_trqlim_rr < trq_dem_rr) || rtIsNaN(-rtu_trqlim_rr))) {
    trq_dem_rr = (real32_T)-rtu_trqlim_rr;
  }

  /* '<S1152>:1:852' */
  /* '<S1152>:1:853' */
  localB->trq_dem_lf = trq_dem_lf;
  localB->trq_dem_lm = trq_dem_lm;
  localB->trq_dem_lr = trq_dem_lr;
  localB->trq_dem_rf = trq_dem_rf;
  localB->trq_dem_rm = trq_dem_rm;
  localB->trq_dem_rr = trq_dem_rr;
  localB->bra_pre_l = bra_pre_l;
  localB->bra_pre_r = bra_pre_r;
}

/*
 * Output and update for atomic system:
 *    '<S1024>/MATLAB Function5'
 *    '<S569>/MATLAB Function5'
 */
void six_plus_si_MATLABFunction5(boolean_T rtu_RC_switch, real_T rtu_guzhang_lr,
  real_T rtu_guzhang_rf, real_T rtu_guzhang_rm, real_T rtu_guzhang_rr,
  B_MATLABFunction5_six_plus_si_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/容错控制/MATLAB Function5': '<S1153>:1' */
  if (rtu_RC_switch == 0) {
    /* '<S1153>:1:3' */
    /* '<S1153>:1:4' */
    localB->guzhang_lf1 = 0.0F;

    /* '<S1153>:1:5' */
    localB->guzhang_lm1 = 0.0F;

    /* '<S1153>:1:6' */
    localB->guzhang_lr1 = 0.0F;

    /* '<S1153>:1:7' */
    localB->guzhang_rf1 = 0.0F;

    /* '<S1153>:1:8' */
    localB->guzhang_rm1 = 0.0F;

    /* '<S1153>:1:9' */
    localB->guzhang_rr1 = 0.0F;
  } else {
    /* '<S1153>:1:11' */
    localB->guzhang_lf1 = 1.0F;

    /* '<S1153>:1:12' */
    localB->guzhang_lm1 = 1.0F;

    /* '<S1153>:1:13' */
    localB->guzhang_lr1 = (real32_T)rtu_guzhang_lr;

    /* '<S1153>:1:14' */
    localB->guzhang_rf1 = (real32_T)rtu_guzhang_rf;

    /* '<S1153>:1:15' */
    localB->guzhang_rm1 = (real32_T)rtu_guzhang_rm;

    /* '<S1153>:1:16' */
    localB->guzhang_rr1 = (real32_T)rtu_guzhang_rr;
  }
}

/*
 * Output and update for atomic system:
 *    '<S1025>/MATLAB Function'
 *    '<S570>/MATLAB Function'
 */
void six_plus_s_MATLABFunction_e(real_T rtu_trqlim_l, real_T rtu_trq_dem_l1,
  real_T rtu_trqlim_r, real_T rtu_trq_dem_r1, real32_T rtu_delta_T_dem,
  B_MATLABFunction_six_plus_s_i_T *localB)
{
  real32_T trq_dem_l;
  real32_T trq_dem_r;

  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/左右侧电机分配及功率限制/MATLAB Function': '<S1154>:1' */
  if (rtu_trq_dem_l1 == rtu_trqlim_l) {
    /* '<S1154>:1:3' */
    /* '<S1154>:1:4' */
    trq_dem_l = (real32_T)rtu_trq_dem_l1;

    /* '<S1154>:1:5' */
    trq_dem_r = (real32_T)rtu_trq_dem_l1 + rtu_delta_T_dem;

    /* 这时候加的是负值 */
  } else if (rtu_trq_dem_r1 == rtu_trqlim_r) {
    /* '<S1154>:1:6' */
    /* '<S1154>:1:7' */
    trq_dem_l = (real32_T)rtu_trq_dem_r1 - rtu_delta_T_dem;

    /* '<S1154>:1:8' */
    trq_dem_r = (real32_T)rtu_trq_dem_r1;
  } else {
    /* '<S1154>:1:11' */
    trq_dem_l = (real32_T)rtu_trq_dem_l1;

    /* '<S1154>:1:12' */
    trq_dem_r = (real32_T)rtu_trq_dem_r1;
  }

  /*  trq_dem_l=single(max(0,trq_dem_l));%限一下最小值，不要小于0 */
  /*  trq_dem_r=single(max(0,trq_dem_r)); */
  /* '<S1154>:1:16' */
  if (!((-rtu_trqlim_l < trq_dem_l) || rtIsNaN(-rtu_trqlim_l))) {
    trq_dem_l = (real32_T)-rtu_trqlim_l;
  }

  /* 小转向半径下，内侧履带是可能输出负转矩的，从地面吸收功率，给外侧，所以不能限到0，限到最大电机外特性负值 */
  /* '<S1154>:1:17' */
  if (!((-rtu_trqlim_r < trq_dem_r) || rtIsNaN(-rtu_trqlim_r))) {
    trq_dem_r = (real32_T)-rtu_trqlim_r;
  }

  localB->trq_dem_l = trq_dem_l;
  localB->trq_dem_r = trq_dem_r;
}

/*
 * Output and update for atomic system:
 *    '<S880>/目标转向力矩确定模块'
 *    '<S425>/目标转向力矩确定模块'
 */
void six_plus_six_AcmsteeringV_u(real32_T rtu_speed_act_lf, real32_T
  rtu_speed_act_lm, real32_T rtu_speed_act_lr, real32_T rtu_speed_act_rf,
  real32_T rtu_speed_act_rm, real32_T rtu_speed_act_rr)
{
  /* Lookup_n-D: '<S1027>/mot_map' */
  look1_iflf_binlx(rtu_speed_act_lf, six_plus_six_Acmsteering_ConstP.pooled74,
                   six_plus_six_Acmsteering_ConstP.pooled73, 11U);

  /* Lookup_n-D: '<S1027>/mot_map2' */
  look1_iflf_binlx(rtu_speed_act_lm, six_plus_six_Acmsteering_ConstP.pooled74,
                   six_plus_six_Acmsteering_ConstP.pooled73, 11U);

  /* Lookup_n-D: '<S1027>/mot_map1' */
  look1_iflf_binlx(rtu_speed_act_lr, six_plus_six_Acmsteering_ConstP.pooled74,
                   six_plus_six_Acmsteering_ConstP.pooled73, 11U);

  /* Lookup_n-D: '<S1027>/mot_map3' */
  look1_iflf_binlx(rtu_speed_act_rf, six_plus_six_Acmsteering_ConstP.pooled74,
                   six_plus_six_Acmsteering_ConstP.pooled73, 11U);

  /* Lookup_n-D: '<S1027>/mot_map4' */
  look1_iflf_binlx(rtu_speed_act_rm, six_plus_six_Acmsteering_ConstP.pooled74,
                   six_plus_six_Acmsteering_ConstP.pooled73, 11U);

  /* Lookup_n-D: '<S1027>/mot_map5' */
  look1_iflf_binlx(rtu_speed_act_rr, six_plus_six_Acmsteering_ConstP.pooled74,
                   six_plus_six_Acmsteering_ConstP.pooled73, 11U);

  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/目标转向力矩确定模块/MATLAB Function': '<S1155>:1' */
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/目标转向力矩确定模块/MATLAB Function1': '<S1156>:1' */
  /* '<S1156>:1:4' */
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/目标转向力矩确定模块/MATLAB Function2': '<S1157>:1' */
  /* '<S1157>:1:4' */
  /* '<S1157>:1:5' */
}

/*
 * Output and update for atomic system:
 *    '<S1168>/MATLAB Function'
 *    '<S713>/MATLAB Function'
 */
void six_plus_s_MATLABFunction_g(real32_T rtu_s_act_lf, real32_T rtu_s_opt_zhuan,
  real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_lf_pre,
  B_MATLABFunction_six_plus_s_n_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function': '<S1175>:1' */
  if (rtu_s_act_lf > rtu_s_opt_zhuan + rtu_s_opt_zhuan_add) {
    /* '<S1175>:1:3' */
    /* '<S1175>:1:4' */
    localB->flag_lf_g = 1;
  } else if (rtu_s_act_lf < rtu_s_opt_zhuan) {
    /* '<S1175>:1:5' */
    /* '<S1175>:1:6' */
    localB->flag_lf_g = 0;
  } else {
    /* '<S1175>:1:8' */
    localB->flag_lf_g = rtu_flag_lf_pre;
  }
}

/*
 * Output and update for atomic system:
 *    '<S1168>/MATLAB Function1'
 *    '<S713>/MATLAB Function1'
 */
void six_plus_si_MATLABFunction1(real32_T rtu_s_act_lr, real32_T rtu_s_opt_zhuan,
  real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_lr_pre,
  B_MATLABFunction1_six_plus_si_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function1': '<S1176>:1' */
  if (rtu_s_act_lr > rtu_s_opt_zhuan + rtu_s_opt_zhuan_add) {
    /* '<S1176>:1:3' */
    /* '<S1176>:1:4' */
    localB->flag_lr_g = 1;
  } else if (rtu_s_act_lr < rtu_s_opt_zhuan) {
    /* '<S1176>:1:5' */
    /* '<S1176>:1:6' */
    localB->flag_lr_g = 0;
  } else {
    /* '<S1176>:1:8' */
    localB->flag_lr_g = rtu_flag_lr_pre;
  }
}

/*
 * Output and update for atomic system:
 *    '<S1168>/MATLAB Function2'
 *    '<S713>/MATLAB Function2'
 */
void six_plus_si_MATLABFunction2(real32_T rtu_s_act_rf, real32_T rtu_s_opt_zhuan,
  real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_rf_pre,
  B_MATLABFunction2_six_plus_si_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function2': '<S1177>:1' */
  if (rtu_s_act_rf > rtu_s_opt_zhuan + rtu_s_opt_zhuan_add) {
    /* '<S1177>:1:3' */
    /* '<S1177>:1:4' */
    localB->flag_rf_k = 1;
  } else if (rtu_s_act_rf < rtu_s_opt_zhuan) {
    /* '<S1177>:1:5' */
    /* '<S1177>:1:6' */
    localB->flag_rf_k = 0;
  } else {
    /* '<S1177>:1:8' */
    localB->flag_rf_k = rtu_flag_rf_pre;
  }
}

/*
 * Output and update for atomic system:
 *    '<S1168>/MATLAB Function3'
 *    '<S713>/MATLAB Function3'
 */
void six_plus_si_MATLABFunction3(real32_T rtu_s_act_rr, real32_T rtu_s_opt_zhuan,
  real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_rr_pre,
  B_MATLABFunction3_six_plus_si_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function3': '<S1178>:1' */
  if (rtu_s_act_rr > rtu_s_opt_zhuan + rtu_s_opt_zhuan_add) {
    /* '<S1178>:1:3' */
    /* '<S1178>:1:4' */
    localB->flag_rr_h = 1;
  } else if (rtu_s_act_rr < rtu_s_opt_zhuan) {
    /* '<S1178>:1:5' */
    /* '<S1178>:1:6' */
    localB->flag_rr_h = 0;
  } else {
    /* '<S1178>:1:8' */
    localB->flag_rr_h = rtu_flag_rr_pre;
  }
}

/*
 * Output and update for atomic system:
 *    '<S1168>/MATLAB Function4'
 *    '<S713>/MATLAB Function4'
 */
void six_plus_si_MATLABFunction4(real32_T rtu_s_act_lm, real32_T rtu_s_opt_zhuan,
  real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_lm_pre,
  B_MATLABFunction4_six_plus_si_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function4': '<S1179>:1' */
  if (rtu_s_act_lm > rtu_s_opt_zhuan + rtu_s_opt_zhuan_add) {
    /* '<S1179>:1:3' */
    /* '<S1179>:1:4' */
    localB->flag_lm_g = 1;
  } else if (rtu_s_act_lm < rtu_s_opt_zhuan) {
    /* '<S1179>:1:5' */
    /* '<S1179>:1:6' */
    localB->flag_lm_g = 0;
  } else {
    /* '<S1179>:1:8' */
    localB->flag_lm_g = rtu_flag_lm_pre;
  }
}

/*
 * Output and update for atomic system:
 *    '<S1168>/MATLAB Function6'
 *    '<S713>/MATLAB Function6'
 */
void six_plus_si_MATLABFunction6(real32_T rtu_s_act_rm, real32_T rtu_s_opt_zhuan,
  real32_T rtu_s_opt_zhuan_add, int8_T rtu_flag_rm_pre,
  B_MATLABFunction6_six_plus_si_T *localB)
{
  /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function6': '<S1181>:1' */
  if (rtu_s_act_rm > rtu_s_opt_zhuan + rtu_s_opt_zhuan_add) {
    /* '<S1181>:1:3' */
    /* '<S1181>:1:4' */
    localB->flag_rm_d = 1;
  } else if (rtu_s_act_rm < rtu_s_opt_zhuan) {
    /* '<S1181>:1:5' */
    /* '<S1181>:1:6' */
    localB->flag_rm_d = 0;
  } else {
    /* '<S1181>:1:8' */
    localB->flag_rm_d = rtu_flag_rm_pre;
  }
}

/*
 * Output and update for function-call system:
 *    '<S1>/MCU1'
 *    '<S1>/MCU1_1'
 *    '<S1>/MCU1_2'
 *    '<S1>/MCU1_3'
 *    '<S1>/MCU1_4'
 *    '<S1>/MCU1_5'
 */
void six_plus_six_Acmsteeri_MCU1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_MCU1_six_plus_six_Acmsteeri_T *localB)
{
  int32_T rtb_MCU1_Udc_L;
  real_T rtb_MCU1_Udc_Ad;

  /* Outputs for Enabled SubSystem: '<S41>/MCU1' incorporates:
   *  EnablePort: '<S226>/Enable'
   */
  if (rtu_In1 > 0) {
    /* DataTypeConversion: '<S226>/MCU1_ControlTemp_Convert' */
    rtb_MCU1_Udc_L = rtu_In2[7];

    /* DataTypeConversion: '<S226>/MCU1_ControlTempcv' */
    rtb_MCU1_Udc_Ad = rtb_MCU1_Udc_L;

    /* Sum: '<S226>/MCU1_ControlTemp_Ad' incorporates:
     *  Constant: '<S226>/MCU1_ControlTemp_O'
     */
    rtb_MCU1_Udc_Ad += -40.0;

    /* Saturate: '<S226>/MCU1_ControlTemp_sat' */
    localB->MCU1_ControlTemp_sat = rtb_MCU1_Udc_Ad;

    /* Product: '<S226>/MCU1_Idcinput3_P' incorporates:
     *  Constant: '<S226>/MCU1_Idcinput3_C'
     */
    rtb_MCU1_Udc_Ad = (real_T)rtu_In2[2] * 256.0;

    /* Sum: '<S226>/MCU1_Idcinput3_Ad' */
    rtb_MCU1_Udc_Ad += (real_T)rtu_In2[3];

    /* DataTypeConversion: '<S226>/MCU1_Idc_Convert' */
    rtb_MCU1_Udc_L = (int32_T)rtb_MCU1_Udc_Ad;

    /* DataTypeConversion: '<S226>/MCU1_Idccv' */
    rtb_MCU1_Udc_Ad = rtb_MCU1_Udc_L;

    /* Gain: '<S226>/MCU1_Idc_F' */
    rtb_MCU1_Udc_Ad *= 0.1;

    /* Sum: '<S226>/MCU1_Idc_Ad' incorporates:
     *  Constant: '<S226>/MCU1_Idc_O'
     */
    rtb_MCU1_Udc_Ad += -1600.0;

    /* Saturate: '<S226>/MCU1_Idc_sat' */
    if (rtb_MCU1_Udc_Ad > 1600.0) {
      localB->MCU1_Idc_sat = 1600.0;
    } else {
      localB->MCU1_Idc_sat = rtb_MCU1_Udc_Ad;
    }

    /* End of Saturate: '<S226>/MCU1_Idc_sat' */

    /* DataTypeConversion: '<S226>/MCU1_MotorTemp_Convert' */
    rtb_MCU1_Udc_L = rtu_In2[6];

    /* DataTypeConversion: '<S226>/MCU1_MotorTempcv' */
    rtb_MCU1_Udc_Ad = rtb_MCU1_Udc_L;

    /* Sum: '<S226>/MCU1_MotorTemp_Ad' incorporates:
     *  Constant: '<S226>/MCU1_MotorTemp_O'
     */
    rtb_MCU1_Udc_Ad += -40.0;

    /* Saturate: '<S226>/MCU1_MotorTemp_sat' */
    localB->MCU1_MotorTemp_sat = rtb_MCU1_Udc_Ad;

    /* Product: '<S226>/MCU1_PowerFdkinput5_P' incorporates:
     *  Constant: '<S226>/MCU1_PowerFdkinput5_C'
     */
    rtb_MCU1_Udc_Ad = (real_T)rtu_In2[4] * 256.0;

    /* Sum: '<S226>/MCU1_PowerFdkinput5_Ad' */
    rtb_MCU1_Udc_Ad += (real_T)rtu_In2[5];

    /* DataTypeConversion: '<S226>/MCU1_PowerFdk_Convert' */
    rtb_MCU1_Udc_L = (int32_T)rtb_MCU1_Udc_Ad;

    /* DataTypeConversion: '<S226>/MCU1_PowerFdkcv' */
    rtb_MCU1_Udc_Ad = rtb_MCU1_Udc_L;

    /* Saturate: '<S226>/MCU1_PowerFdk_sat' */
    localB->MCU1_PowerFdk_sat = rtb_MCU1_Udc_Ad;

    /* Product: '<S226>/MCU1_Udcinput1_P' incorporates:
     *  Constant: '<S226>/MCU1_Udcinput1_C'
     */
    rtb_MCU1_Udc_Ad = (real_T)rtu_In2[0] * 256.0;

    /* Sum: '<S226>/MCU1_Udcinput1_Ad' */
    rtb_MCU1_Udc_Ad += (real_T)rtu_In2[1];

    /* DataTypeConversion: '<S226>/MCU1_Udc_Convert' */
    rtb_MCU1_Udc_L = (int32_T)rtb_MCU1_Udc_Ad;

    /* DataTypeConversion: '<S226>/MCU1_Udccv' */
    rtb_MCU1_Udc_Ad = rtb_MCU1_Udc_L;

    /* Gain: '<S226>/MCU1_Udc_F' */
    rtb_MCU1_Udc_Ad *= 0.1;

    /* Saturate: '<S226>/MCU1_Udc_sat' */
    if (rtb_MCU1_Udc_Ad > 1000.0) {
      localB->MCU1_Udc_sat = 1000.0;
    } else {
      localB->MCU1_Udc_sat = rtb_MCU1_Udc_Ad;
    }

    /* End of Saturate: '<S226>/MCU1_Udc_sat' */
  }

  /* End of Outputs for SubSystem: '<S41>/MCU1' */
}

/*
 * Output and update for function-call system:
 *    '<S1>/BMS3_1'
 *    '<S1>/BMS3_2'
 *    '<S1>/BMS3'
 */
void six_plus_six_Acmstee_BMS3_1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS3_1_six_plus_six_Acmstee_T *localB)
{
  int32_T rtb_BMS3_LowTemperature_L;
  real_T u0;

  /* Outputs for Enabled SubSystem: '<S25>/BMS3' incorporates:
   *  EnablePort: '<S120>/Enable'
   */
  if (rtu_In1 > 0) {
    /* DataTypeConversion: '<S120>/BMS3_HighTemperature_Convert' */
    rtb_BMS3_LowTemperature_L = rtu_In2[0];

    /* Sum: '<S120>/BMS3_HighTemperature_Ad' incorporates:
     *  Constant: '<S120>/BMS3_HighTemperature_O'
     */
    rtb_BMS3_LowTemperature_L += -40;

    /* Saturate: '<S120>/BMS3_HighTemperature_sat' */
    u0 = rtb_BMS3_LowTemperature_L;
    if (u0 > 210.0) {
      localB->BMS3_HighTemperature_sat = 210.0;
    } else {
      localB->BMS3_HighTemperature_sat = u0;
    }

    /* End of Saturate: '<S120>/BMS3_HighTemperature_sat' */

    /* DataTypeConversion: '<S120>/BMS3_LowTemperature_Convert' */
    rtb_BMS3_LowTemperature_L = rtu_In2[2];

    /* Sum: '<S120>/BMS3_LowTemperature_Ad' incorporates:
     *  Constant: '<S120>/BMS3_LowTemperature_O'
     */
    rtb_BMS3_LowTemperature_L += -40;

    /* Saturate: '<S120>/BMS3_LowTemperature_sat' */
    u0 = rtb_BMS3_LowTemperature_L;
    if (u0 > 210.0) {
      localB->BMS3_LowTemperature_sat = 210.0;
    } else {
      localB->BMS3_LowTemperature_sat = u0;
    }

    /* End of Saturate: '<S120>/BMS3_LowTemperature_sat' */
  }

  /* End of Outputs for SubSystem: '<S25>/BMS3' */
}

/*
 * Output and update for function-call system:
 *    '<S1>/BMS4_1'
 *    '<S1>/BMS4_2'
 *    '<S1>/BMS4'
 */
void six_plus_six_Acmstee_BMS4_1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS4_1_six_plus_six_Acmstee_T *localB)
{
  real_T rtb_BMS4_Sys_Status3_Ad;
  int32_T rtb_BMS4_Sys_Status3_L;

  /* Outputs for Enabled SubSystem: '<S28>/BMS4' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  if (rtu_In1 > 0) {
    /* Product: '<S131>/BMS4_InputVolACCinput2_P' incorporates:
     *  Constant: '<S131>/BMS4_InputVolACCinput2_C'
     */
    rtb_BMS4_Sys_Status3_Ad = (real_T)rtu_In2[1] * 256.0;

    /* Sum: '<S131>/BMS4_InputVolACCinput2_Ad' */
    rtb_BMS4_Sys_Status3_Ad += (real_T)rtu_In2[2];

    /* DataTypeConversion: '<S131>/BMS4_InputVolACC_Convert' */
    rtb_BMS4_Sys_Status3_L = (int32_T)rtb_BMS4_Sys_Status3_Ad;

    /* DataTypeConversion: '<S131>/BMS4_InputVolACCcv' */
    rtb_BMS4_Sys_Status3_Ad = rtb_BMS4_Sys_Status3_L;

    /* Gain: '<S131>/BMS4_InputVolACC_F' */
    rtb_BMS4_Sys_Status3_Ad *= 0.1;

    /* Saturate: '<S131>/BMS4_InputVolACC_sat' */
    localB->BMS4_InputVolACC_sat = rtb_BMS4_Sys_Status3_Ad;

    /* Product: '<S131>/BMS4_InputVolCHGinput6_P' incorporates:
     *  Constant: '<S131>/BMS4_InputVolCHGinput6_C'
     */
    rtb_BMS4_Sys_Status3_Ad = (real_T)rtu_In2[5] * 256.0;

    /* Sum: '<S131>/BMS4_InputVolCHGinput6_Ad' */
    rtb_BMS4_Sys_Status3_Ad += (real_T)rtu_In2[6];

    /* DataTypeConversion: '<S131>/BMS4_InputVolCHG_Convert' */
    rtb_BMS4_Sys_Status3_L = (int32_T)rtb_BMS4_Sys_Status3_Ad;

    /* DataTypeConversion: '<S131>/BMS4_InputVolCHGcv' */
    rtb_BMS4_Sys_Status3_Ad = rtb_BMS4_Sys_Status3_L;

    /* Gain: '<S131>/BMS4_InputVolCHG_F' */
    rtb_BMS4_Sys_Status3_Ad *= 0.1;

    /* Saturate: '<S131>/BMS4_InputVolCHG_sat' */
    localB->BMS4_InputVolCHG_sat = rtb_BMS4_Sys_Status3_Ad;

    /* Product: '<S131>/BMS4_InputVolKEYONinput4_P' incorporates:
     *  Constant: '<S131>/BMS4_InputVolKEYONinput4_C'
     */
    rtb_BMS4_Sys_Status3_Ad = (real_T)rtu_In2[3] * 256.0;

    /* Sum: '<S131>/BMS4_InputVolKEYONinput4_Ad' */
    rtb_BMS4_Sys_Status3_Ad += (real_T)rtu_In2[4];

    /* DataTypeConversion: '<S131>/BMS4_InputVolKEYON_Convert' */
    rtb_BMS4_Sys_Status3_L = (int32_T)rtb_BMS4_Sys_Status3_Ad;

    /* DataTypeConversion: '<S131>/BMS4_InputVolKEYONcv' */
    rtb_BMS4_Sys_Status3_Ad = rtb_BMS4_Sys_Status3_L;

    /* Gain: '<S131>/BMS4_InputVolKEYON_F' */
    rtb_BMS4_Sys_Status3_Ad *= 0.1;

    /* Saturate: '<S131>/BMS4_InputVolKEYON_sat' */
    localB->BMS4_InputVolKEYON_sat = rtb_BMS4_Sys_Status3_Ad;

    /* DataTypeConversion: '<S131>/BMS4_Sys_Status3_Convert' */
    rtb_BMS4_Sys_Status3_L = rtu_In2[0];

    /* DataTypeConversion: '<S131>/BMS4_Sys_Status3cv' */
    rtb_BMS4_Sys_Status3_Ad = rtb_BMS4_Sys_Status3_L;

    /* Saturate: '<S131>/BMS4_Sys_Status3_sat' */
    localB->BMS4_Sys_Status3_sat = rtb_BMS4_Sys_Status3_Ad;
  }

  /* End of Outputs for SubSystem: '<S28>/BMS4' */
}

/*
 * Output and update for function-call system:
 *    '<S1>/BMS5_1'
 *    '<S1>/BMS5_2'
 *    '<S1>/BMS5'
 */
void six_plus_six_Acmstee_BMS5_1(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS5_1_six_plus_six_Acmstee_T *localB)
{
  real_T rtb_BMS5_UpDownRequest_Ad;
  int32_T rtb_BMS5_UpDownRequest_L;

  /* Outputs for Enabled SubSystem: '<S31>/BMS5' incorporates:
   *  EnablePort: '<S147>/Enable'
   */
  if (rtu_In1 > 0) {
    /* Product: '<S147>/BMS5_15s_InstanceDisPowerinput4_P' incorporates:
     *  Constant: '<S147>/BMS5_15s_InstanceDisPowerinput4_C'
     */
    rtb_BMS5_UpDownRequest_Ad = (real_T)rtu_In2[3] * 256.0;

    /* Sum: '<S147>/BMS5_15s_InstanceDisPowerinput4_Ad' */
    rtb_BMS5_UpDownRequest_Ad += (real_T)rtu_In2[4];

    /* DataTypeConversion: '<S147>/BMS5_15s_InstanceDisPower_Convert' */
    rtb_BMS5_UpDownRequest_L = (int32_T)rtb_BMS5_UpDownRequest_Ad;

    /* DataTypeConversion: '<S147>/BMS5_15s_InstanceDisPowercv' */
    rtb_BMS5_UpDownRequest_Ad = rtb_BMS5_UpDownRequest_L;

    /* Gain: '<S147>/BMS5_15s_InstanceDisPower_F' */
    rtb_BMS5_UpDownRequest_Ad *= 0.01;

    /* Saturate: '<S147>/BMS5_15s_InstanceDisPower_sat' */
    localB->BMS5_15s_InstanceDisPower_sat = rtb_BMS5_UpDownRequest_Ad;

    /* Product: '<S147>/BMS5_ContDischargePowerinput2_P' incorporates:
     *  Constant: '<S147>/BMS5_ContDischargePowerinput2_C'
     */
    rtb_BMS5_UpDownRequest_Ad = (real_T)rtu_In2[1] * 256.0;

    /* Sum: '<S147>/BMS5_ContDischargePowerinput2_Ad' */
    rtb_BMS5_UpDownRequest_Ad += (real_T)rtu_In2[2];

    /* DataTypeConversion: '<S147>/BMS5_ContDischargePower_Convert' */
    rtb_BMS5_UpDownRequest_L = (int32_T)rtb_BMS5_UpDownRequest_Ad;

    /* DataTypeConversion: '<S147>/BMS5_ContDischargePowercv' */
    rtb_BMS5_UpDownRequest_Ad = rtb_BMS5_UpDownRequest_L;

    /* Gain: '<S147>/BMS5_ContDischargePower_F' */
    rtb_BMS5_UpDownRequest_Ad *= 0.01;

    /* Saturate: '<S147>/BMS5_ContDischargePower_sat' */
    localB->BMS5_ContDischargePower_sat = rtb_BMS5_UpDownRequest_Ad;

    /* DataTypeConversion: '<S147>/BMS5_FailureLevel_Convert' */
    rtb_BMS5_UpDownRequest_L = rtu_In2[0];

    /* DataTypeConversion: '<S147>/BMS5_FailureLevelcv' */
    rtb_BMS5_UpDownRequest_Ad = rtb_BMS5_UpDownRequest_L;

    /* Saturate: '<S147>/BMS5_FailureLevel_sat' */
    localB->BMS5_FailureLevel_sat = rtb_BMS5_UpDownRequest_Ad;

    /* Product: '<S147>/BMS5_FeedbackPowerinput6_P' incorporates:
     *  Constant: '<S147>/BMS5_FeedbackPowerinput6_C'
     */
    rtb_BMS5_UpDownRequest_Ad = (real_T)rtu_In2[5] * 256.0;

    /* Sum: '<S147>/BMS5_FeedbackPowerinput6_Ad' */
    rtb_BMS5_UpDownRequest_Ad += (real_T)rtu_In2[6];

    /* DataTypeConversion: '<S147>/BMS5_FeedbackPower_Convert' */
    rtb_BMS5_UpDownRequest_L = (int32_T)rtb_BMS5_UpDownRequest_Ad;

    /* DataTypeConversion: '<S147>/BMS5_FeedbackPowercv' */
    rtb_BMS5_UpDownRequest_Ad = rtb_BMS5_UpDownRequest_L;

    /* Gain: '<S147>/BMS5_FeedbackPower_F' */
    rtb_BMS5_UpDownRequest_Ad *= 0.01;

    /* Saturate: '<S147>/BMS5_FeedbackPower_sat' */
    localB->BMS5_FeedbackPower_sat = rtb_BMS5_UpDownRequest_Ad;

    /* DataTypeConversion: '<S147>/BMS5_UpDownRequest_Convert' */
    rtb_BMS5_UpDownRequest_L = rtu_In2[7];

    /* DataTypeConversion: '<S147>/BMS5_UpDownRequestcv' */
    rtb_BMS5_UpDownRequest_Ad = rtb_BMS5_UpDownRequest_L;

    /* Saturate: '<S147>/BMS5_UpDownRequest_sat' */
    localB->BMS5_UpDownRequest_sat = rtb_BMS5_UpDownRequest_Ad;
  }

  /* End of Outputs for SubSystem: '<S31>/BMS5' */
}

/*
 * Output and update for function-call system:
 *    '<S1>/BMS2_2'
 *    '<S1>/BMS2'
 *    '<S1>/BMS2_1'
 */
void six_plus_six_Acmstee_BMS2_2(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_BMS2_2_six_plus_six_Acmstee_T *localB)
{
  int32_T rtb_BMS2_LowSingleVol_Ad;
  real_T u0;

  /* Outputs for Enabled SubSystem: '<S23>/BMS2' incorporates:
   *  EnablePort: '<S114>/Enable'
   */
  if (rtu_In1 > 0) {
    /* Product: '<S114>/BMS2_HighSingleVolinput1_P' incorporates:
     *  Constant: '<S114>/BMS2_HighSingleVolinput1_C'
     */
    rtb_BMS2_LowSingleVol_Ad = rtu_In2[0] << 8;

    /* Sum: '<S114>/BMS2_HighSingleVolinput1_Ad' */
    rtb_BMS2_LowSingleVol_Ad += rtu_In2[1];

    /* Saturate: '<S114>/BMS2_HighSingleVol_sat' */
    u0 = rtb_BMS2_LowSingleVol_Ad;
    if (u0 > 10.0) {
      localB->BMS2_HighSingleVol_sat = 10.0;
    } else {
      localB->BMS2_HighSingleVol_sat = u0;
    }

    /* End of Saturate: '<S114>/BMS2_HighSingleVol_sat' */

    /* Product: '<S114>/BMS2_LowSingleVolinput3_P' incorporates:
     *  Constant: '<S114>/BMS2_LowSingleVolinput3_C'
     */
    rtb_BMS2_LowSingleVol_Ad = rtu_In2[2] << 8;

    /* Sum: '<S114>/BMS2_LowSingleVolinput3_Ad' */
    rtb_BMS2_LowSingleVol_Ad += rtu_In2[3];

    /* Saturate: '<S114>/BMS2_LowSingleVol_sat' */
    u0 = rtb_BMS2_LowSingleVol_Ad;
    localB->BMS2_LowSingleVol_sat = u0;
  }

  /* End of Outputs for SubSystem: '<S23>/BMS2' */
}

/*
 * Output and update for function-call system:
 *    '<S1>/MCU2'
 *    '<S1>/MCU2_1'
 *    '<S1>/MCU2_2'
 *    '<S1>/MCU2_3'
 *    '<S1>/MCU2_4'
 *    '<S1>/MCU2_5'
 */
void six_plus_six_Acmsteeri_MCU2(uint8_T rtu_In1, const uint8_T rtu_In2[8],
  B_MCU2_six_plus_six_Acmsteeri_T *localB)
{
  int32_T rtb_MCU2_UnderVoltage_L;
  real_T u0;

  /* Outputs for Enabled SubSystem: '<S47>/MCU2' incorporates:
   *  EnablePort: '<S262>/Enable'
   */
  if (rtu_In1 > 0) {
    /* DataTypeConversion: '<S262>/MCU2_ActieDischargingFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[4];

    /* S-Function (sfix_bitop): '<S262>/MCU2_ActieDischargingFault_L' */
    rtb_MCU2_UnderVoltage_L &= 12U;

    /* ArithShift: '<S262>/MCU2_ActieDischargingFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 2);

    /* Saturate: '<S262>/MCU2_ActieDischargingFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_ActieDischargingFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_CanCommunicationFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[2];

    /* S-Function (sfix_bitop): '<S262>/MCU2_CanCommunicationFault_L' */
    rtb_MCU2_UnderVoltage_L &= 12U;

    /* ArithShift: '<S262>/MCU2_CanCommunicationFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 2);

    /* Saturate: '<S262>/MCU2_CanCommunicationFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_CanCommunicationFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_ControllerOverTemp_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[1];

    /* S-Function (sfix_bitop): '<S262>/MCU2_ControllerOverTemp_L' */
    rtb_MCU2_UnderVoltage_L &= 48U;

    /* ArithShift: '<S262>/MCU2_ControllerOverTemp_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 4);

    /* Saturate: '<S262>/MCU2_ControllerOverTemp_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_ControllerOverTemp_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_ControllerOverload_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[0];

    /* S-Function (sfix_bitop): '<S262>/MCU2_ControllerOverload_L' */
    rtb_MCU2_UnderVoltage_L &= 3U;

    /* Saturate: '<S262>/MCU2_ControllerOverload_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_ControllerOverload_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_DownratingFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[2];

    /* S-Function (sfix_bitop): '<S262>/MCU2_DownratingFault_L' */
    rtb_MCU2_UnderVoltage_L &= 192U;

    /* ArithShift: '<S262>/MCU2_DownratingFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 6);

    /* Saturate: '<S262>/MCU2_DownratingFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_DownratingFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_FaultLevel_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[3];

    /* S-Function (sfix_bitop): '<S262>/MCU2_FaultLevel_L' */
    rtb_MCU2_UnderVoltage_L &= 192U;

    /* ArithShift: '<S262>/MCU2_FaultLevel_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 6);

    /* Saturate: '<S262>/MCU2_FaultLevel_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_FaultLevel_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_IGBTFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[1];

    /* S-Function (sfix_bitop): '<S262>/MCU2_IGBTFault_L' */
    rtb_MCU2_UnderVoltage_L &= 3U;

    /* Saturate: '<S262>/MCU2_IGBTFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_IGBTFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_IdcSensorFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[3];

    /* S-Function (sfix_bitop): '<S262>/MCU2_IdcSensorFault_L' */
    rtb_MCU2_UnderVoltage_L &= 3U;

    /* Saturate: '<S262>/MCU2_IdcSensorFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_IdcSensorFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_IuSensorFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[3];

    /* S-Function (sfix_bitop): '<S262>/MCU2_IuSensorFault_L' */
    rtb_MCU2_UnderVoltage_L &= 12U;

    /* ArithShift: '<S262>/MCU2_IuSensorFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 2);

    /* Saturate: '<S262>/MCU2_IuSensorFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_IuSensorFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_IvSensorFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[3];

    /* S-Function (sfix_bitop): '<S262>/MCU2_IvSensorFault_L' */
    rtb_MCU2_UnderVoltage_L &= 48U;

    /* ArithShift: '<S262>/MCU2_IvSensorFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 4);

    /* Saturate: '<S262>/MCU2_IvSensorFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_IvSensorFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_MemoryFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[2];

    /* S-Function (sfix_bitop): '<S262>/MCU2_MemoryFault_L' */
    rtb_MCU2_UnderVoltage_L &= 48U;

    /* ArithShift: '<S262>/MCU2_MemoryFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 4);

    /* Saturate: '<S262>/MCU2_MemoryFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_MemoryFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_MotorOverLoad_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[2];

    /* S-Function (sfix_bitop): '<S262>/MCU2_MotorOverLoad_L' */
    rtb_MCU2_UnderVoltage_L &= 3U;

    /* Saturate: '<S262>/MCU2_MotorOverLoad_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_MotorOverLoad_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_MotorOverSpeed_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[1];

    /* S-Function (sfix_bitop): '<S262>/MCU2_MotorOverSpeed_L' */
    rtb_MCU2_UnderVoltage_L &= 192U;

    /* ArithShift: '<S262>/MCU2_MotorOverSpeed_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 6);

    /* Saturate: '<S262>/MCU2_MotorOverSpeed_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_MotorOverSpeed_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_MotorOverTemp_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[1];

    /* S-Function (sfix_bitop): '<S262>/MCU2_MotorOverTemp_L' */
    rtb_MCU2_UnderVoltage_L &= 12U;

    /* ArithShift: '<S262>/MCU2_MotorOverTemp_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 2);

    /* Saturate: '<S262>/MCU2_MotorOverTemp_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_MotorOverTemp_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_MotorStallingFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[5];

    /* S-Function (sfix_bitop): '<S262>/MCU2_MotorStallingFault_L' */
    rtb_MCU2_UnderVoltage_L &= 12U;

    /* ArithShift: '<S262>/MCU2_MotorStallingFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 2);

    /* Saturate: '<S262>/MCU2_MotorStallingFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_MotorStallingFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_OverVoltage_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[0];

    /* S-Function (sfix_bitop): '<S262>/MCU2_OverVoltage_L' */
    rtb_MCU2_UnderVoltage_L &= 12U;

    /* ArithShift: '<S262>/MCU2_OverVoltage_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 2);

    /* Saturate: '<S262>/MCU2_OverVoltage_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_OverVoltage_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_RotaryInverterFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[0];

    /* S-Function (sfix_bitop): '<S262>/MCU2_RotaryInverterFault_L' */
    rtb_MCU2_UnderVoltage_L &= 192U;

    /* ArithShift: '<S262>/MCU2_RotaryInverterFault_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 6);

    /* Saturate: '<S262>/MCU2_RotaryInverterFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_RotaryInverterFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_TempSensorFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[4];

    /* S-Function (sfix_bitop): '<S262>/MCU2_TempSensorFault_L' */
    rtb_MCU2_UnderVoltage_L &= 3U;

    /* Saturate: '<S262>/MCU2_TempSensorFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_TempSensorFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_UdcDetectionFault_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[5];

    /* S-Function (sfix_bitop): '<S262>/MCU2_UdcDetectionFault_L' */
    rtb_MCU2_UnderVoltage_L &= 3U;

    /* Saturate: '<S262>/MCU2_UdcDetectionFault_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_UdcDetectionFault_sat = u0;

    /* DataTypeConversion: '<S262>/MCU2_UnderVoltage_Convert' */
    rtb_MCU2_UnderVoltage_L = rtu_In2[0];

    /* S-Function (sfix_bitop): '<S262>/MCU2_UnderVoltage_L' */
    rtb_MCU2_UnderVoltage_L &= 48U;

    /* ArithShift: '<S262>/MCU2_UnderVoltage_S' */
    rtb_MCU2_UnderVoltage_L = (int32_T)((uint32_T)rtb_MCU2_UnderVoltage_L >> 4);

    /* Saturate: '<S262>/MCU2_UnderVoltage_sat' */
    u0 = rtb_MCU2_UnderVoltage_L;
    localB->MCU2_UnderVoltage_sat = u0;
  }

  /* End of Outputs for SubSystem: '<S47>/MCU2' */
}

/*
 * Output and update for atomic system:
 *    '<S63>/MATLAB Function1'
 *    '<S55>/MATLAB Function1'
 *    '<S69>/MATLAB Function1'
 *    '<S66>/MATLAB Function1'
 */
void six_plus__MATLABFunction1_d(real_T rtu_current_in,
  B_MATLABFunction1_six_plus__e_T *localB)
{
  /* MATLAB Function 'Data_input/181/Enabled Subsystem/MATLAB Function1': '<S64>:1' */
  if (rtu_current_in > 32768.0) {
    /* '<S64>:1:2' */
    /* '<S64>:1:3' */
    localB->current_out = rtu_current_in - 65535.0;
  } else {
    /* '<S64>:1:5' */
    localB->current_out = rtu_current_in;
  }
}

/*
 * Output and update for atomic system:
 *    '<S63>/MATLAB Function3'
 *    '<S55>/MATLAB Function3'
 *    '<S69>/MATLAB Function3'
 *    '<S66>/MATLAB Function3'
 */
void six_plus__MATLABFunction3_n(real_T rtu_speed,
  B_MATLABFunction3_six_plus__l_T *localB)
{
  /* MATLAB Function 'Data_input/181/Enabled Subsystem/MATLAB Function3': '<S65>:1' */
  if (rtu_speed > 32768.0) {
    /* '<S65>:1:2' */
    /* '<S65>:1:3' */
    localB->speed_out = rtu_speed - 65535.0;
  } else {
    /* '<S65>:1:4' */
    localB->speed_out = rtu_speed;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Output and update for atomic system:
 *    '<S72>/MATLAB Function'
 *    '<S72>/MATLAB Function1'
 *    '<S75>/MATLAB Function'
 *    '<S75>/MATLAB Function1'
 *    '<S78>/MATLAB Function'
 *    '<S78>/MATLAB Function1'
 *    '<S81>/MATLAB Function'
 *    '<S81>/MATLAB Function1'
 *    '<S84>/MATLAB Function'
 *    '<S84>/MATLAB Function1'
 *    ...
 */
void six_plus_s_MATLABFunction_f(real_T rtu_data1, real_T rtu_data2, real_T
  rtu_data3, real_T rtu_data4, B_MATLABFunction_six_plus_s_o_T *localB)
{
  real32_T y;
  uint32_T x;
  real_T tmp;

  /* MATLAB Function 'Data_input/4/Enabled Subsystem/MATLAB Function': '<S73>:1' */
  /* '<S73>:1:3' */
  /* '<S73>:1:4' */
  tmp = rt_roundd_snf(((rtu_data4 * 1.6777216E+7 + rtu_data3 * 65536.0) +
                       rtu_data2 * 256.0) + rtu_data1);
  if (tmp < 4.294967296E+9) {
    if (tmp >= 0.0) {
      x = (uint32_T)tmp;
    } else {
      x = 0U;
    }
  } else {
    x = MAX_uint32_T;
  }

  memcpy(&y, &x, 4U);

  /*  y = u; */
  localB->y = y;
}

/*
 * Output and update for atomic system:
 *    '<S87>/MATLAB Function'
 *    '<S87>/MATLAB Function1'
 */
void six_plus_s_MATLABFunction_p(real_T rtu_data1, real_T rtu_data2, real_T
  rtu_data3, real_T rtu_data4, B_MATLABFunction_six_plus__cj_T *localB)
{
  /* MATLAB Function 'Data_input/9/Enabled Subsystem/MATLAB Function': '<S88>:1' */
  /* '<S88>:1:3' */
  /*  y=typecast(uint32(y1),'single'); */
  /* '<S88>:1:5' */
  localB->y = (real32_T)((((rtu_data4 * 1.6777216E+7 + rtu_data3 * 65536.0) +
    rtu_data2 * 256.0) + rtu_data1) * 1.0E-7);

  /*  y = u; */
}

real32_T rt_roundf_snf(real32_T u)
{
  real32_T y;
  if ((real32_T)fabs(u) < 8.388608E+6F) {
    if (u >= 0.5F) {
      y = (real32_T)floor(u + 0.5F);
    } else if (u > -0.5F) {
      y = u * 0.0F;
    } else {
      y = (real32_T)ceil(u - 0.5F);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function for TID0 */
void six_plus_six_AcmsteeringV09_main_2lflm_step0(void) /* Sample time: [0.0005s, 0.0s] */
{
  {                                    /* Sample time: [0.0005s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void six_plus_six_AcmsteeringV09_main_2lflm_step1(void) /* Sample time: [0.001s, 0.0s] */
{
  /* S-Function (fcncallgen): '<S1201>/Function-Call Generator' incorporates:
   *  SubSystem: '<S1201>/CCPBackground'
   */

  /* S-Function (ec5744_ccpslb): '<S1216>/CCPBackground' */
  ccpBackground();
}

/* Model step function for TID2 */
void six_plus_six_AcmsteeringV09_main_2lflm_step2(void) /* Sample time: [0.005s, 0.0s] */
{
  /* S-Function (fcncallgen): '<S1199>/5ms' incorporates:
   *  SubSystem: '<S1199>/daq5ms'
   */

  /* S-Function (ec5744_ccpslb1): '<S1214>/CCPDAQ' */
  ccpDaq(0);
}

/* Model step function for TID3 */
void six_plus_six_AcmsteeringV09_main_2lflm_step3(void) /* Sample time: [0.01s, 0.0s] */
{
  /* S-Function (fcncallgen): '<S1199>/10ms' incorporates:
   *  SubSystem: '<S1199>/daq10ms'
   */

  /* S-Function (ec5744_ccpslb1): '<S1211>/CCPDAQ' */
  ccpDaq(1);
}

/* Model step function for TID4 */
void six_plus_six_AcmsteeringV09_main_2lflm_step4(void) /* Sample time: [0.05s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_Gain;
  real_T rtb_MinMax6;
  real_T rtb_MinMax7;
  real_T rtb_MinMax5;
  real_T rtb_Add3;
  real_T rtb_MinMax1;
  real_T rtb_MinMax4;
  real_T rtb_MinMax8;
  real_T rtb_MinMax3;
  real_T rtb_Add2;
  real_T rtb_MinMax2;
  real_T rtb_guzhang_lf;
  real_T rtb_guzhang_lm;
  real_T rtb_guzhang_lr;
  real_T rtb_guzhang_rf;
  real_T rtb_guzhang_rm;
  real_T rtb_guzhang_rr;
  real_T rtb_Gain_a;
  real_T rtb_MinMax6_b;
  real_T rtb_MinMax7_p;
  real_T rtb_MinMax5_l;
  real_T rtb_Add3_h;
  real_T rtb_MinMax1_n;
  real_T rtb_MinMax4_c;
  real_T rtb_MinMax8_h;
  real_T rtb_MinMax3_d;
  real_T rtb_Add2_h;
  real_T rtb_MinMax2_a;
  real_T rtb_guzhang_lf_m;
  real_T rtb_guzhang_lm_o;
  real_T rtb_guzhang_lr_g;
  real_T rtb_guzhang_rf_j;
  real_T rtb_guzhang_rm_i;
  real_T rtb_guzhang_rr_p;
  real_T rtb_Sum1_h;
  real_T rtb_DataTypeConversion_g;
  real_T rtb_Sum2;
  real_T rtb_DataTypeConversion25;
  real_T rtb_Sum5;
  real_T rtb_DataTypeConversion26;
  real_T rtb_Sum7;
  real_T rtb_DataTypeConversion27;
  real32_T rtb_Memory;
  real32_T rtb_Memory4_l;
  real32_T rtb_Memory1;
  real32_T rtb_Memory2;
  real32_T rtb_Memory6;
  real32_T rtb_Memory3_h;
  real32_T rtb_Memory_l;
  real32_T rtb_Memory4_m;
  real32_T rtb_Memory1_f;
  real32_T rtb_Memory3_a;
  real32_T rtb_Memory6_e;
  real32_T rtb_Memory2_i;
  real32_T rtb_Abs1_n;
  real32_T rtb_Abs10;
  real32_T rtb_Abs11;
  real32_T rtb_Abs12;
  real32_T rtb_Abs13;
  real32_T rtb_Abs14;
  real32_T rtb_Abs15;
  real32_T rtb_Abs16;
  real32_T rtb_Abs17;
  real32_T rtb_Abs18;
  real32_T rtb_Abs19;
  real32_T rtb_Abs2_m;
  real32_T rtb_Abs3_n;
  real32_T rtb_Abs4_b;
  real32_T rtb_Abs5_f;
  real32_T rtb_Memory4_i;
  real32_T rtb_Memory5;
  real32_T rtb_Memory1_n;
  real32_T rtb_Memory3_e;
  real32_T rtb_Memory2_e;
  real32_T rtb_Memory6_i;
  real32_T rtb_mot_map;
  real32_T rtb_mot_map4;
  real32_T rtb_mot_map1;
  real32_T rtb_mot_map2;
  real32_T rtb_mot_map5;
  real32_T rtb_mot_map3;
  real32_T rtb_Abs15_i;
  real32_T rtb_Abs16_h;
  real32_T rtb_Abs17_d;
  real32_T rtb_Abs18_j;
  real32_T rtb_Abs21;
  real32_T rtb_Abs22;
  real32_T rtb_MultiportSwitch;
  real32_T rtb_DLookupTable;
  real32_T rtb_Saturation;
  real32_T rtb_Saturation1;
  real32_T rtb_Saturation2;
  real32_T rtb_Saturation3;
  real32_T rtb_Saturation4;
  real32_T rtb_Saturation5;
  real32_T rtb_Memory4_k;
  real32_T rtb_Memory5_i;
  real32_T rtb_Memory1_g;
  real32_T rtb_Memory2_c;
  real32_T rtb_Memory3_l;
  real32_T rtb_Memory6_l;
  real32_T rtb_Memory_a;
  real32_T rtb_Memory4_mt;
  real32_T rtb_Memory1_j;
  real32_T rtb_Memory2_d;
  real32_T rtb_Memory6_h;
  real32_T rtb_Memory3_eg;
  real32_T rtb_Abs1_p;
  real32_T rtb_Abs10_p;
  real32_T rtb_Abs11_e;
  real32_T rtb_Abs12_f;
  real32_T rtb_Abs13_m;
  real32_T rtb_Abs14_l;
  real32_T rtb_Abs15_h;
  real32_T rtb_Abs16_o;
  real32_T rtb_Abs17_c;
  real32_T rtb_Abs18_b;
  real32_T rtb_Abs19_a;
  real32_T rtb_Abs2_p;
  real32_T rtb_Abs3_l;
  real32_T rtb_Abs4_i;
  real32_T rtb_Abs5_fi;
  real32_T rtb_Memory4_a;
  real32_T rtb_Memory5_b;
  real32_T rtb_Memory1_fu;
  real32_T rtb_Memory3_i;
  real32_T rtb_Memory2_f;
  real32_T rtb_Memory6_h1;
  real32_T rtb_mot_map_g;
  real32_T rtb_mot_map4_p;
  real32_T rtb_mot_map1_o;
  real32_T rtb_mot_map2_n;
  real32_T rtb_mot_map5_b;
  real32_T rtb_mot_map3_o;
  real32_T rtb_Abs15_g;
  real32_T rtb_Abs16_n;
  real32_T rtb_Abs17_g;
  real32_T rtb_Abs18_p;
  real32_T rtb_Abs21_a;
  real32_T rtb_Abs22_m;
  real32_T rtb_MultiportSwitch_o;
  real32_T rtb_DLookupTable_h;
  real32_T rtb_Saturation_a;
  real32_T rtb_Saturation1_j;
  real32_T rtb_Saturation2_p;
  real32_T rtb_Saturation3_l;
  real32_T rtb_Saturation4_m;
  real32_T rtb_Saturation5_e;
  real32_T rtb_Memory4_a2;
  real32_T rtb_Memory5_f;
  real32_T rtb_Memory1_a;
  real32_T rtb_Memory2_h;
  real32_T rtb_Memory3_iu;
  real32_T rtb_Memory6_j;
  real32_T rtb_Memory_n;
  real32_T rtb_Memory4_h;
  real32_T rtb_Memory1_c;
  real32_T rtb_Memory2_h4;
  real32_T rtb_Memory6_p;
  real32_T rtb_Memory3_p;
  int8_T rtb_Memory_hc;
  int8_T rtb_Memory10;
  int8_T rtb_Memory7;
  int8_T rtb_Memory8_i;
  int8_T rtb_Memory11;
  int8_T rtb_Memory9;
  int8_T rtb_Memory_nt;
  int8_T rtb_Memory10_a;
  int8_T rtb_Memory7_a;
  int8_T rtb_Memory8_e;
  int8_T rtb_Memory11_p;
  int8_T rtb_Memory9_c;
  boolean_T rtb_LogicalOperator_g;
  boolean_T rtb_LogicalOperator_a;
  boolean_T rtb_LogicalOperator_n;
  boolean_T rtb_LogicalOperator_p5;
  boolean_T rtb_LogicalOperator_ag;
  boolean_T rtb_LogicalOperator_f;
  boolean_T rtb_LogicalOperator_an;
  boolean_T rtb_LogicalOperator_gi;
  boolean_T rtb_LogicalOperator_j;
  boolean_T rtb_LogicalOperator_c;
  boolean_T rtb_LogicalOperator_jr;
  boolean_T rtb_LogicalOperator_pj;
  real_T rtb_y;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_ak;
  int8_T rtb_Memory_cn;
  int8_T rtAction;
  uint32_T rtb_VCU1_LifeCnt_L;
  uint8_T rtb_VCU1_EnableReq_Convert;
  uint8_T rtb_VCU1_CtrlModel_Convert;
  uint8_T rtb_VCU1_LifeCnt_Convert;
  real32_T rtb_acc_dem;
  real32_T rtb_steer_dem;
  real32_T rtb_brake_dem;
  real32_T rtb_Saturation2_fh;
  real32_T rtb_Saturation3_m;
  int8_T rtb_y_o;
  real32_T rtb_Abs;
  real32_T rtb_Abs4;
  real32_T rtb_Abs5;
  real_T rtb_Gain1_j;
  real32_T rtb_Gain5_d;
  real_T rtb_Add;
  boolean_T rtb_Compare_i3;
  boolean_T rtb_Compare_gb;
  boolean_T rtb_Compare_hb;
  boolean_T rtb_Compare_fd;
  boolean_T rtb_Compare_mr;
  boolean_T rtb_Compare_op;
  boolean_T rtb_Compare_h1;
  boolean_T rtb_Compare_b4;
  boolean_T rtb_Compare_pb;
  boolean_T rtb_Compare_kt;
  boolean_T rtb_Compare_jl;
  boolean_T rtb_Compare_kd;
  boolean_T rtb_Compare_d1;
  boolean_T rtb_Compare_kf2;
  boolean_T rtb_Compare_c;
  boolean_T rtb_Compare_ci;
  real_T rtb_Memory4_e;
  real_T rtb_Subtract1_j;
  real32_T rtb_Add2_c;
  real_T rtb_Sum_i;
  real32_T rtb_Gain6_f;
  real32_T rtb_Abs19_l4;
  real32_T rtb_Abs13_a;
  real32_T rtb_Abs12_e;
  real32_T rtb_Abs20_g;
  real_T rtb_MinMax2_b;
  real32_T rtb_Abs14_m;
  real32_T rtb_Abs4_f;
  real32_T rtb_Abs5_j;
  real32_T rtb_Abs6_i;
  real32_T rtb_Abs7_j;
  real32_T rtb_Abs8_m;
  real32_T rtb_Abs9_p;
  real32_T rtb_Gain3_o;
  real32_T rtb_Product_m;
  boolean_T Compare;
  boolean_T Compare_p;
  boolean_T Compare_m;
  real32_T MultiportSwitch[40];
  real32_T acc_dem;
  real32_T brake_dem;
  real_T u0;

  /* S-Function (fcncallgen): '<Root>/Function-Call Generator5' incorporates:
   *  SubSystem: '<Root>/Data_input'
   */

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive36' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF44RX[6]= { 0, 0, 0, 0, 0, 0 };

    uint8 can1buf44looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o3= 387;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o5= 6;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o2= ec_can_receive(1,44,
      CAN1BUF44RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[0]=
      CAN1BUF44RX[can1buf44looprx];
    can1buf44looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[1]=
      CAN1BUF44RX[can1buf44looprx];
    can1buf44looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[2]=
      CAN1BUF44RX[can1buf44looprx];
    can1buf44looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[3]=
      CAN1BUF44RX[can1buf44looprx];
    can1buf44looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[4]=
      CAN1BUF44RX[can1buf44looprx];
    can1buf44looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[5]=
      CAN1BUF44RX[can1buf44looprx];
    can1buf44looprx++;
  }

  /* Call the system: <S1>/1 */

  /* Output and update for function-call system: '<S1>/1' */
  {
    /* local block i/o variables */
    real_T rtb_Sum1_n;
    real_T rtb_Sum_g;
    real_T rtb_Add;

    /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S55>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive36_o2 > 0) {
      /* Product: '<S55>/Product2' incorporates:
       *  Constant: '<S55>/Constant3'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4
        [5];

      /* Sum: '<S55>/Sum1' */
      rtb_Sum1_n = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[4] +
        rtb_Add;

      /* MATLAB Function: '<S55>/MATLAB Function1' */
      six_plus__MATLABFunction1_d(rtb_Sum1_n,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_f);

      /* Product: '<S55>/Product' incorporates:
       *  Constant: '<S55>/Constant'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4
        [3];

      /* Sum: '<S55>/Sum' */
      rtb_Sum_g = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive36_o4[2] +
        rtb_Add;

      /* MATLAB Function: '<S55>/MATLAB Function3' */
      six_plus__MATLABFunction3_n(rtb_Sum_g,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_d);

      /* Memory: '<S55>/Memory' */
      rtb_Add = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_k;

      /* Sum: '<S55>/Add' incorporates:
       *  Constant: '<S55>/Constant1'
       */
      rtb_Add++;

      /* Saturate: '<S55>/Saturation' */
      if (rtb_Add > 5.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation_h = 5.0;
      } else if (rtb_Add < 0.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation_h = 0.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.Saturation_h = rtb_Add;
      }

      /* End of Saturate: '<S55>/Saturation' */

      /* Update for Memory: '<S55>/Memory' */
      six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_k =
        six_plus_six_AcmsteeringV09_m_B.Saturation_h;
    }

    /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive47' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF53RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf53looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o3= 262;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o2= ec_can_receive(1,53,
      CAN1BUF53RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[0]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[1]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[2]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[3]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[4]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[5]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[6]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[7]=
      CAN1BUF53RX[can1buf53looprx];
    can1buf53looprx++;
  }

  /* Call the system: <S1>/10 */

  /* Output and update for function-call system: '<S1>/10' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion_a;
    real_T rtb_DataTypeConversion1_kn;
    real_T rtb_DataTypeConversion2_n;
    real_T rtb_DataTypeConversion3_ng;
    real_T rtb_DataTypeConversion4_n;
    real_T rtb_DataTypeConversion5_o;
    real_T rtb_DataTypeConversion6_ng;
    real_T rtb_DataTypeConversion7_d;

    /* Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S58>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive47_o2 > 0) {
      /* DataTypeConversion: '<S58>/Data Type Conversion' */
      rtb_DataTypeConversion_a =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[4];

      /* DataTypeConversion: '<S58>/Data Type Conversion1' */
      rtb_DataTypeConversion1_kn =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[5];

      /* DataTypeConversion: '<S58>/Data Type Conversion2' */
      rtb_DataTypeConversion2_n =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[6];

      /* DataTypeConversion: '<S58>/Data Type Conversion3' */
      rtb_DataTypeConversion3_ng =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[7];

      /* DataTypeConversion: '<S58>/Data Type Conversion4' */
      rtb_DataTypeConversion4_n =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[0];

      /* DataTypeConversion: '<S58>/Data Type Conversion5' */
      rtb_DataTypeConversion5_o =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[1];

      /* DataTypeConversion: '<S58>/Data Type Conversion6' */
      rtb_DataTypeConversion6_ng =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[2];

      /* DataTypeConversion: '<S58>/Data Type Conversion7' */
      rtb_DataTypeConversion7_d =
        six_plus_six_AcmsteeringV09_m_B.CANReceive47_o4[3];

      /* MATLAB Function: '<S58>/MATLAB Function' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion4_n,
        rtb_DataTypeConversion5_o, rtb_DataTypeConversion6_ng,
        rtb_DataTypeConversion7_d,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_n);

      /* MATLAB Function: '<S58>/MATLAB Function1' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion_a,
        rtb_DataTypeConversion1_kn, rtb_DataTypeConversion2_n,
        rtb_DataTypeConversion3_ng,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_cg);
    }

    /* End of Outputs for SubSystem: '<S7>/Enabled Subsystem' */

    /* DataTypeConversion: '<S7>/Data Type Conversion' */
    Rolling = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_n.y;

    /* DataTypeConversion: '<S7>/Data Type Conversion1' */
    Heading = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_cg.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive48' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF54RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf54looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o3= 263;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o2= ec_can_receive(1,54,
      CAN1BUF54RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[0]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[1]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[2]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[3]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[4]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[5]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[6]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[7]=
      CAN1BUF54RX[can1buf54looprx];
    can1buf54looprx++;
  }

  /* Call the system: <S1>/11 */

  /* Output and update for function-call system: '<S1>/11' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion_d;
    real_T rtb_DataTypeConversion1_k1;
    real_T rtb_DataTypeConversion2_hk;
    real_T rtb_DataTypeConversion3_d;

    /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S61>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive48_o2 > 0) {
      /* DataTypeConversion: '<S61>/Data Type Conversion' */
      rtb_DataTypeConversion_d =
        six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[0];

      /* DataTypeConversion: '<S61>/Data Type Conversion1' */
      rtb_DataTypeConversion1_k1 =
        six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[1];

      /* DataTypeConversion: '<S61>/Data Type Conversion2' */
      rtb_DataTypeConversion2_hk =
        six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[2];

      /* DataTypeConversion: '<S61>/Data Type Conversion3' */
      rtb_DataTypeConversion3_d =
        six_plus_six_AcmsteeringV09_m_B.CANReceive48_o4[3];

      /* MATLAB Function: '<S61>/MATLAB Function' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion_d,
        rtb_DataTypeConversion1_k1, rtb_DataTypeConversion2_hk,
        rtb_DataTypeConversion3_d,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_l);
    }

    /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */

    /* DataTypeConversion: '<S8>/Data Type Conversion' */
    Pitching = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_l.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive35' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF43RX[6]= { 0, 0, 0, 0, 0, 0 };

    uint8 can1buf43looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o3= 386;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o5= 6;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o2= ec_can_receive(1,43,
      CAN1BUF43RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[0]=
      CAN1BUF43RX[can1buf43looprx];
    can1buf43looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[1]=
      CAN1BUF43RX[can1buf43looprx];
    can1buf43looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[2]=
      CAN1BUF43RX[can1buf43looprx];
    can1buf43looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[3]=
      CAN1BUF43RX[can1buf43looprx];
    can1buf43looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[4]=
      CAN1BUF43RX[can1buf43looprx];
    can1buf43looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[5]=
      CAN1BUF43RX[can1buf43looprx];
    can1buf43looprx++;
  }

  /* Call the system: <S1>/181 */

  /* Output and update for function-call system: '<S1>/181' */
  {
    /* local block i/o variables */
    real_T rtb_Sum1;
    real_T rtb_Sum;
    real_T rtb_Add;

    /* Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S63>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive35_o2 > 0) {
      /* Product: '<S63>/Product2' incorporates:
       *  Constant: '<S63>/Constant3'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4
        [5];

      /* Sum: '<S63>/Sum1' */
      rtb_Sum1 = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[4] +
        rtb_Add;

      /* MATLAB Function: '<S63>/MATLAB Function1' */
      six_plus__MATLABFunction1_d(rtb_Sum1,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_dy);

      /* Product: '<S63>/Product' incorporates:
       *  Constant: '<S63>/Constant'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4
        [3];

      /* Sum: '<S63>/Sum' */
      rtb_Sum = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive35_o4[2] +
        rtb_Add;

      /* MATLAB Function: '<S63>/MATLAB Function3' */
      six_plus__MATLABFunction3_n(rtb_Sum,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_n);

      /* Memory: '<S63>/Memory' */
      rtb_Add = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_j;

      /* Sum: '<S63>/Add' incorporates:
       *  Constant: '<S63>/Constant1'
       */
      rtb_Add++;

      /* Saturate: '<S63>/Saturation' */
      if (rtb_Add > 5.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation_hu = 5.0;
      } else if (rtb_Add < 0.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation_hu = 0.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.Saturation_hu = rtb_Add;
      }

      /* End of Saturate: '<S63>/Saturation' */

      /* Update for Memory: '<S63>/Memory' */
      six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_j =
        six_plus_six_AcmsteeringV09_m_B.Saturation_hu;
    }

    /* End of Outputs for SubSystem: '<S9>/Enabled Subsystem' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive38' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF46RX[6]= { 0, 0, 0, 0, 0, 0 };

    uint8 can1buf46looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o3= 385;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o5= 6;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o2= ec_can_receive(1,46,
      CAN1BUF46RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[0]=
      CAN1BUF46RX[can1buf46looprx];
    can1buf46looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[1]=
      CAN1BUF46RX[can1buf46looprx];
    can1buf46looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[2]=
      CAN1BUF46RX[can1buf46looprx];
    can1buf46looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[3]=
      CAN1BUF46RX[can1buf46looprx];
    can1buf46looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[4]=
      CAN1BUF46RX[can1buf46looprx];
    can1buf46looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[5]=
      CAN1BUF46RX[can1buf46looprx];
    can1buf46looprx++;
  }

  /* Call the system: <S1>/2 */

  /* Output and update for function-call system: '<S1>/2' */
  {
    /* local block i/o variables */
    real_T rtb_Sum1_k;
    real_T rtb_Sum_b;
    real_T rtb_Add;

    /* Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S66>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive38_o2 > 0) {
      /* Product: '<S66>/Product2' incorporates:
       *  Constant: '<S66>/Constant3'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4
        [5];

      /* Sum: '<S66>/Sum1' */
      rtb_Sum1_k = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[4] +
        rtb_Add;

      /* MATLAB Function: '<S66>/MATLAB Function1' */
      six_plus__MATLABFunction1_d(rtb_Sum1_k,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_jm);

      /* Product: '<S66>/Product' incorporates:
       *  Constant: '<S66>/Constant'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4
        [3];

      /* Sum: '<S66>/Sum' */
      rtb_Sum_b = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive38_o4[2] +
        rtb_Add;

      /* MATLAB Function: '<S66>/MATLAB Function3' */
      six_plus__MATLABFunction3_n(rtb_Sum_b,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_h);

      /* Memory: '<S66>/Memory' */
      rtb_Add = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput;

      /* Sum: '<S66>/Add' incorporates:
       *  Constant: '<S66>/Constant1'
       */
      rtb_Add++;

      /* Saturate: '<S66>/Saturation' */
      if (rtb_Add > 5.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation = 5.0;
      } else if (rtb_Add < 0.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation = 0.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.Saturation = rtb_Add;
      }

      /* End of Saturate: '<S66>/Saturation' */

      /* Update for Memory: '<S66>/Memory' */
      six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput =
        six_plus_six_AcmsteeringV09_m_B.Saturation;
    }

    /* End of Outputs for SubSystem: '<S10>/Enabled Subsystem' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive37' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF45RX[6]= { 0, 0, 0, 0, 0, 0 };

    uint8 can1buf45looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o3= 388;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o5= 6;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o2= ec_can_receive(1,45,
      CAN1BUF45RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[0]=
      CAN1BUF45RX[can1buf45looprx];
    can1buf45looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[1]=
      CAN1BUF45RX[can1buf45looprx];
    can1buf45looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[2]=
      CAN1BUF45RX[can1buf45looprx];
    can1buf45looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[3]=
      CAN1BUF45RX[can1buf45looprx];
    can1buf45looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[4]=
      CAN1BUF45RX[can1buf45looprx];
    can1buf45looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[5]=
      CAN1BUF45RX[can1buf45looprx];
    can1buf45looprx++;
  }

  /* Call the system: <S1>/3 */

  /* Output and update for function-call system: '<S1>/3' */
  {
    /* local block i/o variables */
    real_T rtb_Sum1_nj;
    real_T rtb_Sum_k;
    real_T rtb_Add;

    /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S69>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive37_o2 > 0) {
      /* Product: '<S69>/Product2' incorporates:
       *  Constant: '<S69>/Constant3'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4
        [5];

      /* Sum: '<S69>/Sum1' */
      rtb_Sum1_nj = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[4] +
        rtb_Add;

      /* MATLAB Function: '<S69>/MATLAB Function1' */
      six_plus__MATLABFunction1_d(rtb_Sum1_nj,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_h);

      /* Product: '<S69>/Product' incorporates:
       *  Constant: '<S69>/Constant'
       */
      rtb_Add = 256.0 * (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4
        [3];

      /* Sum: '<S69>/Sum' */
      rtb_Sum_k = (real_T)six_plus_six_AcmsteeringV09_m_B.CANReceive37_o4[2] +
        rtb_Add;

      /* MATLAB Function: '<S69>/MATLAB Function3' */
      six_plus__MATLABFunction3_n(rtb_Sum_k,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_i);

      /* Memory: '<S69>/Memory' */
      rtb_Add = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_c;

      /* Sum: '<S69>/Add' incorporates:
       *  Constant: '<S69>/Constant1'
       */
      rtb_Add++;

      /* Saturate: '<S69>/Saturation' */
      if (rtb_Add > 5.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation_k = 5.0;
      } else if (rtb_Add < 0.0) {
        six_plus_six_AcmsteeringV09_m_B.Saturation_k = 0.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.Saturation_k = rtb_Add;
      }

      /* End of Saturate: '<S69>/Saturation' */

      /* Update for Memory: '<S69>/Memory' */
      six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_c =
        six_plus_six_AcmsteeringV09_m_B.Saturation_k;
    }

    /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive40' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF47RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf47looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o3= 256;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o2= ec_can_receive(1,47,
      CAN1BUF47RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[0]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[1]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[2]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[3]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[4]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[5]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[6]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[7]=
      CAN1BUF47RX[can1buf47looprx];
    can1buf47looprx++;
  }

  /* Call the system: <S1>/4 */

  /* Output and update for function-call system: '<S1>/4' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion;
    real_T rtb_DataTypeConversion1_p;
    real_T rtb_DataTypeConversion2;
    real_T rtb_DataTypeConversion3;
    real_T rtb_DataTypeConversion4;
    real_T rtb_DataTypeConversion5;
    real_T rtb_DataTypeConversion6;
    real_T rtb_DataTypeConversion7;

    /* Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S72>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive40_o2 > 0) {
      /* DataTypeConversion: '<S72>/Data Type Conversion' */
      rtb_DataTypeConversion = six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[0];

      /* DataTypeConversion: '<S72>/Data Type Conversion1' */
      rtb_DataTypeConversion1_p =
        six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4[1];

      /* DataTypeConversion: '<S72>/Data Type Conversion2' */
      rtb_DataTypeConversion2 = six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4
        [2];

      /* DataTypeConversion: '<S72>/Data Type Conversion3' */
      rtb_DataTypeConversion3 = six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4
        [3];

      /* DataTypeConversion: '<S72>/Data Type Conversion4' */
      rtb_DataTypeConversion4 = six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4
        [4];

      /* DataTypeConversion: '<S72>/Data Type Conversion5' */
      rtb_DataTypeConversion5 = six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4
        [5];

      /* DataTypeConversion: '<S72>/Data Type Conversion6' */
      rtb_DataTypeConversion6 = six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4
        [6];

      /* DataTypeConversion: '<S72>/Data Type Conversion7' */
      rtb_DataTypeConversion7 = six_plus_six_AcmsteeringV09_m_B.CANReceive40_o4
        [7];

      /* MATLAB Function: '<S72>/MATLAB Function' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion,
        rtb_DataTypeConversion1_p, rtb_DataTypeConversion2,
        rtb_DataTypeConversion3,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_f);

      /* MATLAB Function: '<S72>/MATLAB Function1' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion4,
        rtb_DataTypeConversion5, rtb_DataTypeConversion6,
        rtb_DataTypeConversion7,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_i);
    }

    /* End of Outputs for SubSystem: '<S12>/Enabled Subsystem' */

    /* DataTypeConversion: '<S12>/Data Type Conversion' */
    Xangularrate = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_f.y;

    /* DataTypeConversion: '<S12>/Data Type Conversion1' */
    Yangularrate = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_i.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive42' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF48RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf48looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o3= 257;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o2= ec_can_receive(1,48,
      CAN1BUF48RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[0]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[1]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[2]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[3]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[4]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[5]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[6]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[7]=
      CAN1BUF48RX[can1buf48looprx];
    can1buf48looprx++;
  }

  /* Call the system: <S1>/5 */

  /* Output and update for function-call system: '<S1>/5' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion_f;
    real_T rtb_DataTypeConversion1_k;
    real_T rtb_DataTypeConversion2_p;
    real_T rtb_DataTypeConversion3_n;
    real_T rtb_DataTypeConversion4_a;
    real_T rtb_DataTypeConversion5_d;
    real_T rtb_DataTypeConversion6_j;
    real_T rtb_DataTypeConversion7_h;

    /* Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S75>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive42_o2 > 0) {
      /* DataTypeConversion: '<S75>/Data Type Conversion' */
      rtb_DataTypeConversion_f =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[0];

      /* DataTypeConversion: '<S75>/Data Type Conversion1' */
      rtb_DataTypeConversion1_k =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[1];

      /* DataTypeConversion: '<S75>/Data Type Conversion2' */
      rtb_DataTypeConversion2_p =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[2];

      /* DataTypeConversion: '<S75>/Data Type Conversion3' */
      rtb_DataTypeConversion3_n =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[3];

      /* DataTypeConversion: '<S75>/Data Type Conversion4' */
      rtb_DataTypeConversion4_a =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[4];

      /* DataTypeConversion: '<S75>/Data Type Conversion5' */
      rtb_DataTypeConversion5_d =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[5];

      /* DataTypeConversion: '<S75>/Data Type Conversion6' */
      rtb_DataTypeConversion6_j =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[6];

      /* DataTypeConversion: '<S75>/Data Type Conversion7' */
      rtb_DataTypeConversion7_h =
        six_plus_six_AcmsteeringV09_m_B.CANReceive42_o4[7];

      /* MATLAB Function: '<S75>/MATLAB Function' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion_f,
        rtb_DataTypeConversion1_k, rtb_DataTypeConversion2_p,
        rtb_DataTypeConversion3_n,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_kf);

      /* MATLAB Function: '<S75>/MATLAB Function1' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion4_a,
        rtb_DataTypeConversion5_d, rtb_DataTypeConversion6_j,
        rtb_DataTypeConversion7_h,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_c);
    }

    /* End of Outputs for SubSystem: '<S13>/Enabled Subsystem' */

    /* DataTypeConversion: '<S13>/Data Type Conversion' */
    Zangularrate = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_kf.y;

    /* DataTypeConversion: '<S13>/Data Type Conversion1' */
    Xacceleration = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_c.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive43' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF49RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf49looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o3= 258;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o2= ec_can_receive(1,49,
      CAN1BUF49RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[0]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[1]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[2]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[3]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[4]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[5]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[6]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[7]=
      CAN1BUF49RX[can1buf49looprx];
    can1buf49looprx++;
  }

  /* Call the system: <S1>/6 */

  /* Output and update for function-call system: '<S1>/6' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion_i;
    real_T rtb_DataTypeConversion1_h;
    real_T rtb_DataTypeConversion2_j;
    real_T rtb_DataTypeConversion3_h;
    real_T rtb_DataTypeConversion4_p;
    real_T rtb_DataTypeConversion5_i;
    real_T rtb_DataTypeConversion6_k;
    real_T rtb_DataTypeConversion7_a;

    /* Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S78>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive43_o2 > 0) {
      /* DataTypeConversion: '<S78>/Data Type Conversion' */
      rtb_DataTypeConversion_i =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[0];

      /* DataTypeConversion: '<S78>/Data Type Conversion1' */
      rtb_DataTypeConversion1_h =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[1];

      /* DataTypeConversion: '<S78>/Data Type Conversion2' */
      rtb_DataTypeConversion2_j =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[2];

      /* DataTypeConversion: '<S78>/Data Type Conversion3' */
      rtb_DataTypeConversion3_h =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[3];

      /* DataTypeConversion: '<S78>/Data Type Conversion4' */
      rtb_DataTypeConversion4_p =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[4];

      /* DataTypeConversion: '<S78>/Data Type Conversion5' */
      rtb_DataTypeConversion5_i =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[5];

      /* DataTypeConversion: '<S78>/Data Type Conversion6' */
      rtb_DataTypeConversion6_k =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[6];

      /* DataTypeConversion: '<S78>/Data Type Conversion7' */
      rtb_DataTypeConversion7_a =
        six_plus_six_AcmsteeringV09_m_B.CANReceive43_o4[7];

      /* MATLAB Function: '<S78>/MATLAB Function' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion_i,
        rtb_DataTypeConversion1_h, rtb_DataTypeConversion2_j,
        rtb_DataTypeConversion3_h,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_mx);

      /* MATLAB Function: '<S78>/MATLAB Function1' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion4_p,
        rtb_DataTypeConversion5_i, rtb_DataTypeConversion6_k,
        rtb_DataTypeConversion7_a,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_a);
    }

    /* End of Outputs for SubSystem: '<S14>/Enabled Subsystem' */

    /* DataTypeConversion: '<S14>/Data Type Conversion' */
    Yacceleration = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_mx.y;

    /* DataTypeConversion: '<S14>/Data Type Conversion1' */
    Zacceleration = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_a.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive44' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF50RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf50looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o3= 259;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o2= ec_can_receive(1,50,
      CAN1BUF50RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[0]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[1]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[2]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[3]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[4]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[5]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[6]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[7]=
      CAN1BUF50RX[can1buf50looprx];
    can1buf50looprx++;
  }

  /* Call the system: <S1>/7 */

  /* Output and update for function-call system: '<S1>/7' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion_h;
    real_T rtb_DataTypeConversion1_hc;
    real_T rtb_DataTypeConversion2_h;
    real_T rtb_DataTypeConversion3_hc;
    real_T rtb_DataTypeConversion4_g;
    real_T rtb_DataTypeConversion5_h;
    real_T rtb_DataTypeConversion6_m;
    real_T rtb_DataTypeConversion7_m;

    /* Outputs for Enabled SubSystem: '<S15>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S81>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive44_o2 > 0) {
      /* DataTypeConversion: '<S81>/Data Type Conversion' */
      rtb_DataTypeConversion_h =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[0];

      /* DataTypeConversion: '<S81>/Data Type Conversion1' */
      rtb_DataTypeConversion1_hc =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[1];

      /* DataTypeConversion: '<S81>/Data Type Conversion2' */
      rtb_DataTypeConversion2_h =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[2];

      /* DataTypeConversion: '<S81>/Data Type Conversion3' */
      rtb_DataTypeConversion3_hc =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[3];

      /* DataTypeConversion: '<S81>/Data Type Conversion4' */
      rtb_DataTypeConversion4_g =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[4];

      /* DataTypeConversion: '<S81>/Data Type Conversion5' */
      rtb_DataTypeConversion5_h =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[5];

      /* DataTypeConversion: '<S81>/Data Type Conversion6' */
      rtb_DataTypeConversion6_m =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[6];

      /* DataTypeConversion: '<S81>/Data Type Conversion7' */
      rtb_DataTypeConversion7_m =
        six_plus_six_AcmsteeringV09_m_B.CANReceive44_o4[7];

      /* MATLAB Function: '<S81>/MATLAB Function' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion_h,
        rtb_DataTypeConversion1_hc, rtb_DataTypeConversion2_h,
        rtb_DataTypeConversion3_hc,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o4);

      /* MATLAB Function: '<S81>/MATLAB Function1' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion4_g,
        rtb_DataTypeConversion5_h, rtb_DataTypeConversion6_m,
        rtb_DataTypeConversion7_m,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_n);
    }

    /* End of Outputs for SubSystem: '<S15>/Enabled Subsystem' */

    /* DataTypeConversion: '<S15>/Data Type Conversion' */
    NorthSpd = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o4.y;

    /* DataTypeConversion: '<S15>/Data Type Conversion1' */
    SkySpd = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_n.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive45' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF51RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf51looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o3= 260;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o2= ec_can_receive(1,51,
      CAN1BUF51RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[0]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[1]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[2]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[3]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[4]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[5]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[6]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[7]=
      CAN1BUF51RX[can1buf51looprx];
    can1buf51looprx++;
  }

  /* Call the system: <S1>/8 */

  /* Output and update for function-call system: '<S1>/8' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion_l;
    real_T rtb_DataTypeConversion1_kx;
    real_T rtb_DataTypeConversion2_je;
    real_T rtb_DataTypeConversion3_b;
    real_T rtb_DataTypeConversion4_m;
    real_T rtb_DataTypeConversion5_n;
    real_T rtb_DataTypeConversion6_n;
    real_T rtb_DataTypeConversion7_i;

    /* Outputs for Enabled SubSystem: '<S16>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S84>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive45_o2 > 0) {
      /* DataTypeConversion: '<S84>/Data Type Conversion' */
      rtb_DataTypeConversion_l =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[0];

      /* DataTypeConversion: '<S84>/Data Type Conversion1' */
      rtb_DataTypeConversion1_kx =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[1];

      /* DataTypeConversion: '<S84>/Data Type Conversion2' */
      rtb_DataTypeConversion2_je =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[2];

      /* DataTypeConversion: '<S84>/Data Type Conversion3' */
      rtb_DataTypeConversion3_b =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[3];

      /* DataTypeConversion: '<S84>/Data Type Conversion4' */
      rtb_DataTypeConversion4_m =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[4];

      /* DataTypeConversion: '<S84>/Data Type Conversion5' */
      rtb_DataTypeConversion5_n =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[5];

      /* DataTypeConversion: '<S84>/Data Type Conversion6' */
      rtb_DataTypeConversion6_n =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[6];

      /* DataTypeConversion: '<S84>/Data Type Conversion7' */
      rtb_DataTypeConversion7_i =
        six_plus_six_AcmsteeringV09_m_B.CANReceive45_o4[7];

      /* MATLAB Function: '<S84>/MATLAB Function' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion_l,
        rtb_DataTypeConversion1_kx, rtb_DataTypeConversion2_je,
        rtb_DataTypeConversion3_b,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_p);

      /* MATLAB Function: '<S84>/MATLAB Function1' */
      six_plus_s_MATLABFunction_f(rtb_DataTypeConversion4_m,
        rtb_DataTypeConversion5_n, rtb_DataTypeConversion6_n,
        rtb_DataTypeConversion7_i,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_nl);
    }

    /* End of Outputs for SubSystem: '<S16>/Enabled Subsystem' */

    /* DataTypeConversion: '<S16>/Data Type Conversion' */
    EastSpd = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_p.y;

    /* DataTypeConversion: '<S16>/Data Type Conversion1' */
    Altitude = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_nl.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive46' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF52RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf52looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o3= 261;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o2= ec_can_receive(1,52,
      CAN1BUF52RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[0]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[1]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[2]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[3]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[4]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[5]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[6]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[7]=
      CAN1BUF52RX[can1buf52looprx];
    can1buf52looprx++;
  }

  /* Call the system: <S1>/9 */

  /* Output and update for function-call system: '<S1>/9' */
  {
    /* local block i/o variables */
    real_T rtb_DataTypeConversion_p;
    real_T rtb_DataTypeConversion1_c;
    real_T rtb_DataTypeConversion2_je3;
    real_T rtb_DataTypeConversion3_a;
    real_T rtb_DataTypeConversion4_f;
    real_T rtb_DataTypeConversion5_i5;
    real_T rtb_DataTypeConversion6_b;
    real_T rtb_DataTypeConversion7_p;

    /* Outputs for Enabled SubSystem: '<S17>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S87>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive46_o2 > 0) {
      /* DataTypeConversion: '<S87>/Data Type Conversion' */
      rtb_DataTypeConversion_p =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[0];

      /* DataTypeConversion: '<S87>/Data Type Conversion1' */
      rtb_DataTypeConversion1_c =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[1];

      /* DataTypeConversion: '<S87>/Data Type Conversion2' */
      rtb_DataTypeConversion2_je3 =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[2];

      /* DataTypeConversion: '<S87>/Data Type Conversion3' */
      rtb_DataTypeConversion3_a =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[3];

      /* DataTypeConversion: '<S87>/Data Type Conversion4' */
      rtb_DataTypeConversion4_f =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[4];

      /* DataTypeConversion: '<S87>/Data Type Conversion5' */
      rtb_DataTypeConversion5_i5 =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[5];

      /* DataTypeConversion: '<S87>/Data Type Conversion6' */
      rtb_DataTypeConversion6_b =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[6];

      /* DataTypeConversion: '<S87>/Data Type Conversion7' */
      rtb_DataTypeConversion7_p =
        six_plus_six_AcmsteeringV09_m_B.CANReceive46_o4[7];

      /* MATLAB Function: '<S87>/MATLAB Function' */
      six_plus_s_MATLABFunction_p(rtb_DataTypeConversion_p,
        rtb_DataTypeConversion1_c, rtb_DataTypeConversion2_je3,
        rtb_DataTypeConversion3_a,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_pa);

      /* MATLAB Function: '<S87>/MATLAB Function1' */
      six_plus_s_MATLABFunction_p(rtb_DataTypeConversion4_f,
        rtb_DataTypeConversion5_i5, rtb_DataTypeConversion6_b,
        rtb_DataTypeConversion7_p,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_kz);
    }

    /* End of Outputs for SubSystem: '<S17>/Enabled Subsystem' */

    /* DataTypeConversion: '<S17>/Data Type Conversion' */
    Longitude = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_pa.y;

    /* DataTypeConversion: '<S17>/Data Type Conversion1' */
    Latitude = six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_kz.y;
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive3' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF0RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf0looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o3= 33;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o2= ec_can_receive(1,0,
      CAN1BUF0RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[0]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[1]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[2]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[3]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[4]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[5]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[6]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[7]= CAN1BUF0RX[can1buf0looprx];
    can1buf0looprx++;
  }

  /* Call the system: <S1>/BMS1 */

  /* Output and update for function-call system: '<S1>/BMS1' */
  {
    real_T rtb_BMS1_TotalVol_Ad;
    int32_T rtb_BMS1_TotalVol_L;

    /* Outputs for Enabled SubSystem: '<S18>/BMS1' incorporates:
     *  EnablePort: '<S90>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive3_o2 > 0) {
      /* Product: '<S90>/BMS1_SOCinput5_P' incorporates:
       *  Constant: '<S90>/BMS1_SOCinput5_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[4] * 256.0;

      /* Sum: '<S90>/BMS1_SOCinput5_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[5];

      /* DataTypeConversion: '<S90>/BMS1_SOC_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S90>/BMS1_SOCcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S90>/BMS1_SOC_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Saturate: '<S90>/BMS1_SOC_sat' */
      if (rtb_BMS1_TotalVol_Ad > 1000.0) {
        BMS1_SOC = 1000.0;
      } else {
        BMS1_SOC = rtb_BMS1_TotalVol_Ad;
      }

      /* End of Saturate: '<S90>/BMS1_SOC_sat' */

      /* DataTypeConversion: '<S90>/BMS1_Sys_Status1_Convert' */
      rtb_BMS1_TotalVol_L = six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[6];

      /* DataTypeConversion: '<S90>/BMS1_Sys_Status1cv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Saturate: '<S90>/BMS1_Sys_Status1_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status1_sat_h =
        rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S90>/BMS1_Sys_Status2_Convert' */
      rtb_BMS1_TotalVol_L = six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[7];

      /* DataTypeConversion: '<S90>/BMS1_Sys_Status2cv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Saturate: '<S90>/BMS1_Sys_Status2_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status2_sat_p =
        rtb_BMS1_TotalVol_Ad;

      /* Product: '<S90>/BMS1_TotalCurrentinput3_P' incorporates:
       *  Constant: '<S90>/BMS1_TotalCurrentinput3_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[2] * 256.0;

      /* Sum: '<S90>/BMS1_TotalCurrentinput3_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[3];

      /* DataTypeConversion: '<S90>/BMS1_TotalCurrent_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S90>/BMS1_TotalCurrentcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S90>/BMS1_TotalCurrent_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Sum: '<S90>/BMS1_TotalCurrent_Ad' incorporates:
       *  Constant: '<S90>/BMS1_TotalCurrent_O'
       */
      rtb_BMS1_TotalVol_Ad += -32000.0;

      /* Saturate: '<S90>/BMS1_TotalCurrent_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_TotalCurrent_sat_c =
        rtb_BMS1_TotalVol_Ad;

      /* Product: '<S90>/BMS1_TotalVolinput1_P' incorporates:
       *  Constant: '<S90>/BMS1_TotalVolinput1_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[0] * 256.0;

      /* Sum: '<S90>/BMS1_TotalVolinput1_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive3_o4[1];

      /* DataTypeConversion: '<S90>/BMS1_TotalVol_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S90>/BMS1_TotalVolcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S90>/BMS1_TotalVol_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Saturate: '<S90>/BMS1_TotalVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_TotalVol_sat_h = rtb_BMS1_TotalVol_Ad;
    }

    /* End of Outputs for SubSystem: '<S18>/BMS1' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive13' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF18RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf18looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o3= 35;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o2= ec_can_receive(1,18,
      CAN1BUF18RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[0]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[1]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[2]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[3]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[4]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[5]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[6]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[7]=
      CAN1BUF18RX[can1buf18looprx];
    can1buf18looprx++;
  }

  /* Call the system: <S1>/BMS1-2 */

  /* Output and update for function-call system: '<S1>/BMS1-2' */
  {
    real_T rtb_BMS1_TotalVol_Ad;
    int32_T rtb_BMS1_TotalVol_L;

    /* Outputs for Enabled SubSystem: '<S19>/BMS1' incorporates:
     *  EnablePort: '<S96>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive13_o2 > 0) {
      /* Product: '<S96>/BMS1_SOCinput5_P' incorporates:
       *  Constant: '<S96>/BMS1_SOCinput5_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[4] * 256.0;

      /* Sum: '<S96>/BMS1_SOCinput5_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[5];

      /* DataTypeConversion: '<S96>/BMS1_SOC_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S96>/BMS1_SOCcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S96>/BMS1_SOC_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Saturate: '<S96>/BMS1_SOC_sat' */
      if (rtb_BMS1_TotalVol_Ad > 1000.0) {
        BMS1_2SOC = 1000.0;
      } else {
        BMS1_2SOC = rtb_BMS1_TotalVol_Ad;
      }

      /* End of Saturate: '<S96>/BMS1_SOC_sat' */

      /* DataTypeConversion: '<S96>/BMS1_Sys_Status1_Convert' */
      rtb_BMS1_TotalVol_L = six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[6];

      /* DataTypeConversion: '<S96>/BMS1_Sys_Status1cv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Saturate: '<S96>/BMS1_Sys_Status1_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status1_sat_o =
        rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S96>/BMS1_Sys_Status2_Convert' */
      rtb_BMS1_TotalVol_L = six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[7];

      /* DataTypeConversion: '<S96>/BMS1_Sys_Status2cv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Saturate: '<S96>/BMS1_Sys_Status2_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status2_sat_h =
        rtb_BMS1_TotalVol_Ad;

      /* Product: '<S96>/BMS1_TotalCurrentinput3_P' incorporates:
       *  Constant: '<S96>/BMS1_TotalCurrentinput3_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[2] * 256.0;

      /* Sum: '<S96>/BMS1_TotalCurrentinput3_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[3];

      /* DataTypeConversion: '<S96>/BMS1_TotalCurrent_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S96>/BMS1_TotalCurrentcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S96>/BMS1_TotalCurrent_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Sum: '<S96>/BMS1_TotalCurrent_Ad' incorporates:
       *  Constant: '<S96>/BMS1_TotalCurrent_O'
       */
      rtb_BMS1_TotalVol_Ad += -32000.0;

      /* Saturate: '<S96>/BMS1_TotalCurrent_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_TotalCurrent_sat_n =
        rtb_BMS1_TotalVol_Ad;

      /* Product: '<S96>/BMS1_TotalVolinput1_P' incorporates:
       *  Constant: '<S96>/BMS1_TotalVolinput1_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[0] * 256.0;

      /* Sum: '<S96>/BMS1_TotalVolinput1_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive13_o4[1];

      /* DataTypeConversion: '<S96>/BMS1_TotalVol_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S96>/BMS1_TotalVolcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S96>/BMS1_TotalVol_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Saturate: '<S96>/BMS1_TotalVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_TotalVol_sat_d = rtb_BMS1_TotalVol_Ad;
    }

    /* End of Outputs for SubSystem: '<S19>/BMS1' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive8' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF5RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf5looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o3= 34;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o2= ec_can_receive(1,5,
      CAN1BUF5RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[0]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[1]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[2]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[3]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[4]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[5]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[6]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[7]= CAN1BUF5RX[can1buf5looprx];
    can1buf5looprx++;
  }

  /* Call the system: <S1>/BMS1_1 */

  /* Output and update for function-call system: '<S1>/BMS1_1' */
  {
    real_T rtb_BMS1_TotalVol_Ad;
    int32_T rtb_BMS1_TotalVol_L;

    /* Outputs for Enabled SubSystem: '<S20>/BMS1' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive8_o2 > 0) {
      /* Product: '<S102>/BMS1_SOCinput5_P' incorporates:
       *  Constant: '<S102>/BMS1_SOCinput5_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[4] * 256.0;

      /* Sum: '<S102>/BMS1_SOCinput5_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[5];

      /* DataTypeConversion: '<S102>/BMS1_SOC_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S102>/BMS1_SOCcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S102>/BMS1_SOC_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Saturate: '<S102>/BMS1_SOC_sat' */
      if (rtb_BMS1_TotalVol_Ad > 1000.0) {
        BMS1_1SOC = 1000.0;
      } else {
        BMS1_1SOC = rtb_BMS1_TotalVol_Ad;
      }

      /* End of Saturate: '<S102>/BMS1_SOC_sat' */

      /* DataTypeConversion: '<S102>/BMS1_Sys_Status1_Convert' */
      rtb_BMS1_TotalVol_L = six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[6];

      /* DataTypeConversion: '<S102>/BMS1_Sys_Status1cv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Saturate: '<S102>/BMS1_Sys_Status1_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status1_sat =
        rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S102>/BMS1_Sys_Status2_Convert' */
      rtb_BMS1_TotalVol_L = six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[7];

      /* DataTypeConversion: '<S102>/BMS1_Sys_Status2cv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Saturate: '<S102>/BMS1_Sys_Status2_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status2_sat =
        rtb_BMS1_TotalVol_Ad;

      /* Product: '<S102>/BMS1_TotalCurrentinput3_P' incorporates:
       *  Constant: '<S102>/BMS1_TotalCurrentinput3_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[2] * 256.0;

      /* Sum: '<S102>/BMS1_TotalCurrentinput3_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[3];

      /* DataTypeConversion: '<S102>/BMS1_TotalCurrent_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S102>/BMS1_TotalCurrentcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S102>/BMS1_TotalCurrent_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Sum: '<S102>/BMS1_TotalCurrent_Ad' incorporates:
       *  Constant: '<S102>/BMS1_TotalCurrent_O'
       */
      rtb_BMS1_TotalVol_Ad += -32000.0;

      /* Saturate: '<S102>/BMS1_TotalCurrent_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_TotalCurrent_sat =
        rtb_BMS1_TotalVol_Ad;

      /* Product: '<S102>/BMS1_TotalVolinput1_P' incorporates:
       *  Constant: '<S102>/BMS1_TotalVolinput1_C'
       */
      rtb_BMS1_TotalVol_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[0] * 256.0;

      /* Sum: '<S102>/BMS1_TotalVolinput1_Ad' */
      rtb_BMS1_TotalVol_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive8_o4[1];

      /* DataTypeConversion: '<S102>/BMS1_TotalVol_Convert' */
      rtb_BMS1_TotalVol_L = (int32_T)rtb_BMS1_TotalVol_Ad;

      /* DataTypeConversion: '<S102>/BMS1_TotalVolcv' */
      rtb_BMS1_TotalVol_Ad = rtb_BMS1_TotalVol_L;

      /* Gain: '<S102>/BMS1_TotalVol_F' */
      rtb_BMS1_TotalVol_Ad *= 0.1;

      /* Saturate: '<S102>/BMS1_TotalVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.BMS1_TotalVol_sat = rtb_BMS1_TotalVol_Ad;
    }

    /* End of Outputs for SubSystem: '<S20>/BMS1' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive4' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF1RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf1looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o3= 49;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o2= ec_can_receive(1,1,
      CAN1BUF1RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[0]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[1]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[2]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[3]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[4]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[5]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[6]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4[7]= CAN1BUF1RX[can1buf1looprx];
    can1buf1looprx++;
  }

  /* Call the system: <S1>/BMS2 */
  six_plus_six_Acmstee_BMS2_2(six_plus_six_AcmsteeringV09_m_B.CANReceive4_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive4_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive9' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF6RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf6looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o3= 50;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o2= ec_can_receive(1,6,
      CAN1BUF6RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[0]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[1]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[2]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[3]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[4]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[5]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[6]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4[7]= CAN1BUF6RX[can1buf6looprx];
    can1buf6looprx++;
  }

  /* Call the system: <S1>/BMS2_1 */
  six_plus_six_Acmstee_BMS2_2(six_plus_six_AcmsteeringV09_m_B.CANReceive9_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive9_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS2_1);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive14' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF19RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf19looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o3= 51;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o2= ec_can_receive(1,19,
      CAN1BUF19RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[0]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[1]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[2]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[3]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[4]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[5]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[6]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4[7]=
      CAN1BUF19RX[can1buf19looprx];
    can1buf19looprx++;
  }

  /* Call the system: <S1>/BMS2_2 */
  six_plus_six_Acmstee_BMS2_2(six_plus_six_AcmsteeringV09_m_B.CANReceive14_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive14_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS2_2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive5' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF2RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf2looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o3= 65;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o2= ec_can_receive(1,2,
      CAN1BUF2RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[0]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[1]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[2]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[3]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[4]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[5]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[6]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4[7]= CAN1BUF2RX[can1buf2looprx];
    can1buf2looprx++;
  }

  /* Call the system: <S1>/BMS3 */
  six_plus_six_Acmstee_BMS3_1(six_plus_six_AcmsteeringV09_m_B.CANReceive5_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive5_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS3);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive10' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF7RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf7looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o3= 66;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o2= ec_can_receive(1,7,
      CAN1BUF7RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[0]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[1]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[2]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[3]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[4]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[5]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[6]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4[7]=
      CAN1BUF7RX[can1buf7looprx];
    can1buf7looprx++;
  }

  /* Call the system: <S1>/BMS3_1 */
  six_plus_six_Acmstee_BMS3_1(six_plus_six_AcmsteeringV09_m_B.CANReceive10_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive10_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS3_1);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive15' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF20RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf20looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o3= 67;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o2= ec_can_receive(1,20,
      CAN1BUF20RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[0]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[1]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[2]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[3]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[4]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[5]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[6]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4[7]=
      CAN1BUF20RX[can1buf20looprx];
    can1buf20looprx++;
  }

  /* Call the system: <S1>/BMS3_2 */
  six_plus_six_Acmstee_BMS3_1(six_plus_six_AcmsteeringV09_m_B.CANReceive15_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive15_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS3_2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive6' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF3RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf3looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o3= 81;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o2= ec_can_receive(1,3,
      CAN1BUF3RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[0]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[1]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[2]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[3]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[4]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[5]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[6]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4[7]= CAN1BUF3RX[can1buf3looprx];
    can1buf3looprx++;
  }

  /* Call the system: <S1>/BMS4 */
  six_plus_six_Acmstee_BMS4_1(six_plus_six_AcmsteeringV09_m_B.CANReceive6_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive6_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS4);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive11' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF16RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf16looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o3= 82;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o2= ec_can_receive(1,16,
      CAN1BUF16RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[0]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[1]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[2]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[3]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[4]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[5]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[6]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4[7]=
      CAN1BUF16RX[can1buf16looprx];
    can1buf16looprx++;
  }

  /* Call the system: <S1>/BMS4_1 */
  six_plus_six_Acmstee_BMS4_1(six_plus_six_AcmsteeringV09_m_B.CANReceive11_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive11_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS4_1);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive16' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF21RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf21looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o3= 83;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o2= ec_can_receive(1,21,
      CAN1BUF21RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[0]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[1]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[2]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[3]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[4]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[5]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[6]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4[7]=
      CAN1BUF21RX[can1buf21looprx];
    can1buf21looprx++;
  }

  /* Call the system: <S1>/BMS4_2 */
  six_plus_six_Acmstee_BMS4_1(six_plus_six_AcmsteeringV09_m_B.CANReceive16_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive16_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS4_2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive7' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF4RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf4looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o3= 97;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o2= ec_can_receive(1,4,
      CAN1BUF4RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[0]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[1]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[2]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[3]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[4]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[5]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[6]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4[7]= CAN1BUF4RX[can1buf4looprx];
    can1buf4looprx++;
  }

  /* Call the system: <S1>/BMS5 */
  six_plus_six_Acmstee_BMS5_1(six_plus_six_AcmsteeringV09_m_B.CANReceive7_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive7_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS5);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive12' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF17RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf17looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o3= 98;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o2= ec_can_receive(1,17,
      CAN1BUF17RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[0]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[1]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[2]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[3]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[4]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[5]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[6]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4[7]=
      CAN1BUF17RX[can1buf17looprx];
    can1buf17looprx++;
  }

  /* Call the system: <S1>/BMS5_1 */
  six_plus_six_Acmstee_BMS5_1(six_plus_six_AcmsteeringV09_m_B.CANReceive12_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive12_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS5_1);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive17' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF22RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf22looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o3= 99;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o2= ec_can_receive(1,22,
      CAN1BUF22RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[0]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[1]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[2]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[3]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[4]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[5]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[6]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4[7]=
      CAN1BUF22RX[can1buf22looprx];
    can1buf22looprx++;
  }

  /* Call the system: <S1>/BMS5_2 */
  six_plus_six_Acmstee_BMS5_1(six_plus_six_AcmsteeringV09_m_B.CANReceive17_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive17_o4,
    &six_plus_six_AcmsteeringV09_m_B.BMS5_2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF23RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf23looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o3_o= 217710831;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o5_m= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o2_l= ec_can_receive(0,23,
      CAN0BUF23RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[0]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[1]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[2]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[3]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[4]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[5]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[6]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[7]=
      CAN0BUF23RX[can0buf23looprx];
    can0buf23looprx++;
  }

  /* Call the system: <S1>/MCU0 */

  /* Output and update for function-call system: '<S1>/MCU0' */
  {
    int32_T rtb_MCU0_WorkStatus_L;
    real_T rtb_MCU0_WorkStatus_Ad;

    /* Outputs for Enabled SubSystem: '<S35>/MCU0' incorporates:
     *  EnablePort: '<S160>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive_o2_l > 0) {
      /* DataTypeConversion: '<S160>/MCU0_ControlMode_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[0];

      /* S-Function (sfix_bitop): '<S160>/MCU0_ControlMode_L' */
      rtb_MCU0_WorkStatus_L &= 4U;

      /* ArithShift: '<S160>/MCU0_ControlMode_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 2);

      /* DataTypeConversion: '<S160>/MCU0_ControlModecv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S160>/MCU0_ControlMode_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_gj =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_EmergShutDown_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[0];

      /* S-Function (sfix_bitop): '<S160>/MCU0_EmergShutDown_L' */
      rtb_MCU0_WorkStatus_L &= 128U;

      /* ArithShift: '<S160>/MCU0_EmergShutDown_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 7);

      /* DataTypeConversion: '<S160>/MCU0_EmergShutDowncv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S160>/MCU0_EmergShutDown_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_m =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_GearStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[0];

      /* S-Function (sfix_bitop): '<S160>/MCU0_GearStatus_L' */
      rtb_MCU0_WorkStatus_L &= 24U;

      /* ArithShift: '<S160>/MCU0_GearStatus_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 3);

      /* DataTypeConversion: '<S160>/MCU0_GearStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S160>/MCU0_GearStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_oy =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_HighVol_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[0];

      /* S-Function (sfix_bitop): '<S160>/MCU0_HighVol_L' */
      rtb_MCU0_WorkStatus_L &= 32U;

      /* ArithShift: '<S160>/MCU0_HighVol_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 5);

      /* DataTypeConversion: '<S160>/MCU0_HighVolcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S160>/MCU0_HighVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_a =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_LiftCnt_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[7];

      /* DataTypeConversion: '<S160>/MCU0_LiftCntcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S160>/MCU0_LiftCnt_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_ch =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_ShutDowAllow_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[0];

      /* S-Function (sfix_bitop): '<S160>/MCU0_ShutDowAllow_L' */
      rtb_MCU0_WorkStatus_L &= 64U;

      /* ArithShift: '<S160>/MCU0_ShutDowAllow_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 6);

      /* DataTypeConversion: '<S160>/MCU0_ShutDowAllowcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S160>/MCU0_ShutDowAllow_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_n =
        rtb_MCU0_WorkStatus_Ad;

      /* Product: '<S160>/MCU0_SpeedFdkinput2_P' incorporates:
       *  Constant: '<S160>/MCU0_SpeedFdkinput2_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[1] * 256.0;

      /* Sum: '<S160>/MCU0_SpeedFdkinput2_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[2];

      /* DataTypeConversion: '<S160>/MCU0_SpeedFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_SpeedFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Sum: '<S160>/MCU0_SpeedFdk_Ad' incorporates:
       *  Constant: '<S160>/MCU0_SpeedFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -10000.0;

      /* Saturate: '<S160>/MCU0_SpeedFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 10000.0) {
        MCU0_SpeedFdk = 10000.0;
      } else {
        MCU0_SpeedFdk = rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S160>/MCU0_SpeedFdk_sat' */

      /* Product: '<S160>/MCU0_TorqueFdkinput4_P' incorporates:
       *  Constant: '<S160>/MCU0_TorqueFdkinput4_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[3] * 256.0;

      /* Sum: '<S160>/MCU0_TorqueFdkinput4_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[4];

      /* DataTypeConversion: '<S160>/MCU0_TorqueFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_TorqueFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S160>/MCU0_TorqueFdk_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S160>/MCU0_TorqueFdk_Ad' incorporates:
       *  Constant: '<S160>/MCU0_TorqueFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S160>/MCU0_TorqueFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_hg = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_hg =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S160>/MCU0_TorqueFdk_sat' */

      /* Product: '<S160>/MCU0_TorqueMaxinput6_P' incorporates:
       *  Constant: '<S160>/MCU0_TorqueMaxinput6_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[5] * 256.0;

      /* Sum: '<S160>/MCU0_TorqueMaxinput6_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[6];

      /* DataTypeConversion: '<S160>/MCU0_TorqueMax_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S160>/MCU0_TorqueMaxcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S160>/MCU0_TorqueMax_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S160>/MCU0_TorqueMax_Ad' incorporates:
       *  Constant: '<S160>/MCU0_TorqueMax_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S160>/MCU0_TorqueMax_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_m = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_m =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S160>/MCU0_TorqueMax_sat' */

      /* DataTypeConversion: '<S160>/MCU0_WorkStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_i[0];

      /* S-Function (sfix_bitop): '<S160>/MCU0_WorkStatus_L' */
      rtb_MCU0_WorkStatus_L &= 3U;

      /* DataTypeConversion: '<S160>/MCU0_WorkStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S160>/MCU0_WorkStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_dn =
        rtb_MCU0_WorkStatus_Ad;
    }

    /* End of Outputs for SubSystem: '<S35>/MCU0' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive1' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF24RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf24looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o3= 217711087;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o2= ec_can_receive(0,24,
      CAN0BUF24RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[0]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[1]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[2]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[3]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[4]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[5]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[6]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4[7]=
      CAN0BUF24RX[can0buf24looprx];
    can0buf24looprx++;
  }

  /* Call the system: <S1>/MCU1 */
  six_plus_six_Acmsteeri_MCU1(six_plus_six_AcmsteeringV09_m_B.CANReceive1_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive1_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU1);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive18' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF26RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf26looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o3= 217710832;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o2= ec_can_receive(0,26,
      CAN0BUF26RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[0]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[1]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[2]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[3]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[4]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[5]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[6]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[7]=
      CAN0BUF26RX[can0buf26looprx];
    can0buf26looprx++;
  }

  /* Call the system: <S1>/MCU0_1 */

  /* Output and update for function-call system: '<S1>/MCU0_1' */
  {
    int32_T rtb_MCU0_WorkStatus_L;
    real_T rtb_MCU0_WorkStatus_Ad;

    /* Outputs for Enabled SubSystem: '<S36>/MCU0' incorporates:
     *  EnablePort: '<S171>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive18_o2 > 0) {
      /* DataTypeConversion: '<S171>/MCU0_ControlMode_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[0];

      /* S-Function (sfix_bitop): '<S171>/MCU0_ControlMode_L' */
      rtb_MCU0_WorkStatus_L &= 4U;

      /* ArithShift: '<S171>/MCU0_ControlMode_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 2);

      /* DataTypeConversion: '<S171>/MCU0_ControlModecv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S171>/MCU0_ControlMode_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_k =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_EmergShutDown_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[0];

      /* S-Function (sfix_bitop): '<S171>/MCU0_EmergShutDown_L' */
      rtb_MCU0_WorkStatus_L &= 128U;

      /* ArithShift: '<S171>/MCU0_EmergShutDown_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 7);

      /* DataTypeConversion: '<S171>/MCU0_EmergShutDowncv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S171>/MCU0_EmergShutDown_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_gg =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_GearStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[0];

      /* S-Function (sfix_bitop): '<S171>/MCU0_GearStatus_L' */
      rtb_MCU0_WorkStatus_L &= 24U;

      /* ArithShift: '<S171>/MCU0_GearStatus_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 3);

      /* DataTypeConversion: '<S171>/MCU0_GearStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S171>/MCU0_GearStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_d =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_HighVol_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[0];

      /* S-Function (sfix_bitop): '<S171>/MCU0_HighVol_L' */
      rtb_MCU0_WorkStatus_L &= 32U;

      /* ArithShift: '<S171>/MCU0_HighVol_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 5);

      /* DataTypeConversion: '<S171>/MCU0_HighVolcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S171>/MCU0_HighVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_g =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_LiftCnt_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[7];

      /* DataTypeConversion: '<S171>/MCU0_LiftCntcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S171>/MCU0_LiftCnt_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_c =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_ShutDowAllow_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[0];

      /* S-Function (sfix_bitop): '<S171>/MCU0_ShutDowAllow_L' */
      rtb_MCU0_WorkStatus_L &= 64U;

      /* ArithShift: '<S171>/MCU0_ShutDowAllow_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 6);

      /* DataTypeConversion: '<S171>/MCU0_ShutDowAllowcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S171>/MCU0_ShutDowAllow_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_d =
        rtb_MCU0_WorkStatus_Ad;

      /* Product: '<S171>/MCU0_SpeedFdkinput2_P' incorporates:
       *  Constant: '<S171>/MCU0_SpeedFdkinput2_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[1] * 256.0;

      /* Sum: '<S171>/MCU0_SpeedFdkinput2_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[2];

      /* DataTypeConversion: '<S171>/MCU0_SpeedFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_SpeedFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Sum: '<S171>/MCU0_SpeedFdk_Ad' incorporates:
       *  Constant: '<S171>/MCU0_SpeedFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -10000.0;

      /* Saturate: '<S171>/MCU0_SpeedFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 10000.0) {
        MCU0_1SpeedFdk = 10000.0;
      } else {
        MCU0_1SpeedFdk = rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S171>/MCU0_SpeedFdk_sat' */

      /* Product: '<S171>/MCU0_TorqueFdkinput4_P' incorporates:
       *  Constant: '<S171>/MCU0_TorqueFdkinput4_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[3] * 256.0;

      /* Sum: '<S171>/MCU0_TorqueFdkinput4_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[4];

      /* DataTypeConversion: '<S171>/MCU0_TorqueFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_TorqueFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S171>/MCU0_TorqueFdk_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S171>/MCU0_TorqueFdk_Ad' incorporates:
       *  Constant: '<S171>/MCU0_TorqueFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S171>/MCU0_TorqueFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_h = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_h =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S171>/MCU0_TorqueFdk_sat' */

      /* Product: '<S171>/MCU0_TorqueMaxinput6_P' incorporates:
       *  Constant: '<S171>/MCU0_TorqueMaxinput6_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[5] * 256.0;

      /* Sum: '<S171>/MCU0_TorqueMaxinput6_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[6];

      /* DataTypeConversion: '<S171>/MCU0_TorqueMax_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S171>/MCU0_TorqueMaxcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S171>/MCU0_TorqueMax_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S171>/MCU0_TorqueMax_Ad' incorporates:
       *  Constant: '<S171>/MCU0_TorqueMax_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S171>/MCU0_TorqueMax_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_h = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_h =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S171>/MCU0_TorqueMax_sat' */

      /* DataTypeConversion: '<S171>/MCU0_WorkStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive18_o4[0];

      /* S-Function (sfix_bitop): '<S171>/MCU0_WorkStatus_L' */
      rtb_MCU0_WorkStatus_L &= 3U;

      /* DataTypeConversion: '<S171>/MCU0_WorkStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S171>/MCU0_WorkStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_e =
        rtb_MCU0_WorkStatus_Ad;
    }

    /* End of Outputs for SubSystem: '<S36>/MCU0' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive19' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF27RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf27looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o3= 217711088;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o2= ec_can_receive(0,27,
      CAN0BUF27RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[0]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[1]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[2]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[3]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[4]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[5]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[6]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4[7]=
      CAN0BUF27RX[can0buf27looprx];
    can0buf27looprx++;
  }

  /* Call the system: <S1>/MCU1_1 */
  six_plus_six_Acmsteeri_MCU1(six_plus_six_AcmsteeringV09_m_B.CANReceive19_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive19_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU1_1);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive2' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF25RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf25looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o3= 419037935;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o2= ec_can_receive(0,25,
      CAN0BUF25RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[0]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[1]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[2]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[3]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[4]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[5]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[6]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4[7]=
      CAN0BUF25RX[can0buf25looprx];
    can0buf25looprx++;
  }

  /* Call the system: <S1>/MCU2 */
  six_plus_six_Acmsteeri_MCU2(six_plus_six_AcmsteeringV09_m_B.CANReceive2_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive2_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive20' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF28RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf28looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o3= 419037936;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o2= ec_can_receive(0,28,
      CAN0BUF28RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[0]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[1]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[2]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[3]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[4]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[5]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[6]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4[7]=
      CAN0BUF28RX[can0buf28looprx];
    can0buf28looprx++;
  }

  /* Call the system: <S1>/MCU2_1 */
  six_plus_six_Acmsteeri_MCU2(six_plus_six_AcmsteeringV09_m_B.CANReceive20_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive20_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU2_1);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive21' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF29RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf29looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o3= 217710833;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o2= ec_can_receive(0,29,
      CAN0BUF29RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[0]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[1]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[2]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[3]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[4]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[5]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[6]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[7]=
      CAN0BUF29RX[can0buf29looprx];
    can0buf29looprx++;
  }

  /* Call the system: <S1>/MCU0_2 */

  /* Output and update for function-call system: '<S1>/MCU0_2' */
  {
    int32_T rtb_MCU0_WorkStatus_L;
    real_T rtb_MCU0_WorkStatus_Ad;

    /* Outputs for Enabled SubSystem: '<S37>/MCU0' incorporates:
     *  EnablePort: '<S182>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive21_o2 > 0) {
      /* DataTypeConversion: '<S182>/MCU0_ControlMode_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[0];

      /* S-Function (sfix_bitop): '<S182>/MCU0_ControlMode_L' */
      rtb_MCU0_WorkStatus_L &= 4U;

      /* ArithShift: '<S182>/MCU0_ControlMode_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 2);

      /* DataTypeConversion: '<S182>/MCU0_ControlModecv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S182>/MCU0_ControlMode_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_c =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_EmergShutDown_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[0];

      /* S-Function (sfix_bitop): '<S182>/MCU0_EmergShutDown_L' */
      rtb_MCU0_WorkStatus_L &= 128U;

      /* ArithShift: '<S182>/MCU0_EmergShutDown_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 7);

      /* DataTypeConversion: '<S182>/MCU0_EmergShutDowncv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S182>/MCU0_EmergShutDown_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_h =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_GearStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[0];

      /* S-Function (sfix_bitop): '<S182>/MCU0_GearStatus_L' */
      rtb_MCU0_WorkStatus_L &= 24U;

      /* ArithShift: '<S182>/MCU0_GearStatus_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 3);

      /* DataTypeConversion: '<S182>/MCU0_GearStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S182>/MCU0_GearStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_n =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_HighVol_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[0];

      /* S-Function (sfix_bitop): '<S182>/MCU0_HighVol_L' */
      rtb_MCU0_WorkStatus_L &= 32U;

      /* ArithShift: '<S182>/MCU0_HighVol_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 5);

      /* DataTypeConversion: '<S182>/MCU0_HighVolcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S182>/MCU0_HighVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_n =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_LiftCnt_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[7];

      /* DataTypeConversion: '<S182>/MCU0_LiftCntcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S182>/MCU0_LiftCnt_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_e =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_ShutDowAllow_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[0];

      /* S-Function (sfix_bitop): '<S182>/MCU0_ShutDowAllow_L' */
      rtb_MCU0_WorkStatus_L &= 64U;

      /* ArithShift: '<S182>/MCU0_ShutDowAllow_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 6);

      /* DataTypeConversion: '<S182>/MCU0_ShutDowAllowcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S182>/MCU0_ShutDowAllow_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_a =
        rtb_MCU0_WorkStatus_Ad;

      /* Product: '<S182>/MCU0_SpeedFdkinput2_P' incorporates:
       *  Constant: '<S182>/MCU0_SpeedFdkinput2_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[1] * 256.0;

      /* Sum: '<S182>/MCU0_SpeedFdkinput2_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[2];

      /* DataTypeConversion: '<S182>/MCU0_SpeedFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_SpeedFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Sum: '<S182>/MCU0_SpeedFdk_Ad' incorporates:
       *  Constant: '<S182>/MCU0_SpeedFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -10000.0;

      /* Saturate: '<S182>/MCU0_SpeedFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 10000.0) {
        MCU0_2SpeedFdk = 10000.0;
      } else {
        MCU0_2SpeedFdk = rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S182>/MCU0_SpeedFdk_sat' */

      /* Product: '<S182>/MCU0_TorqueFdkinput4_P' incorporates:
       *  Constant: '<S182>/MCU0_TorqueFdkinput4_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[3] * 256.0;

      /* Sum: '<S182>/MCU0_TorqueFdkinput4_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[4];

      /* DataTypeConversion: '<S182>/MCU0_TorqueFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_TorqueFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S182>/MCU0_TorqueFdk_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S182>/MCU0_TorqueFdk_Ad' incorporates:
       *  Constant: '<S182>/MCU0_TorqueFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S182>/MCU0_TorqueFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_e3 = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_e3 =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S182>/MCU0_TorqueFdk_sat' */

      /* Product: '<S182>/MCU0_TorqueMaxinput6_P' incorporates:
       *  Constant: '<S182>/MCU0_TorqueMaxinput6_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[5] * 256.0;

      /* Sum: '<S182>/MCU0_TorqueMaxinput6_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[6];

      /* DataTypeConversion: '<S182>/MCU0_TorqueMax_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S182>/MCU0_TorqueMaxcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S182>/MCU0_TorqueMax_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S182>/MCU0_TorqueMax_Ad' incorporates:
       *  Constant: '<S182>/MCU0_TorqueMax_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S182>/MCU0_TorqueMax_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_e = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_e =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S182>/MCU0_TorqueMax_sat' */

      /* DataTypeConversion: '<S182>/MCU0_WorkStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive21_o4[0];

      /* S-Function (sfix_bitop): '<S182>/MCU0_WorkStatus_L' */
      rtb_MCU0_WorkStatus_L &= 3U;

      /* DataTypeConversion: '<S182>/MCU0_WorkStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S182>/MCU0_WorkStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_a =
        rtb_MCU0_WorkStatus_Ad;
    }

    /* End of Outputs for SubSystem: '<S37>/MCU0' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive22' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF30RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf30looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o3= 217711089;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o2= ec_can_receive(0,30,
      CAN0BUF30RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[0]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[1]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[2]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[3]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[4]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[5]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[6]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4[7]=
      CAN0BUF30RX[can0buf30looprx];
    can0buf30looprx++;
  }

  /* Call the system: <S1>/MCU1_2 */
  six_plus_six_Acmsteeri_MCU1(six_plus_six_AcmsteeringV09_m_B.CANReceive22_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive22_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU1_2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive23' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF31RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf31looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o3= 419037937;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o2= ec_can_receive(0,31,
      CAN0BUF31RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[0]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[1]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[2]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[3]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[4]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[5]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[6]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4[7]=
      CAN0BUF31RX[can0buf31looprx];
    can0buf31looprx++;
  }

  /* Call the system: <S1>/MCU2_2 */
  six_plus_six_Acmsteeri_MCU2(six_plus_six_AcmsteeringV09_m_B.CANReceive23_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive23_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU2_2);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive24' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF32RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf32looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o3= 217710834;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o2= ec_can_receive(0,32,
      CAN0BUF32RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[0]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[1]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[2]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[3]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[4]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[5]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[6]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[7]=
      CAN0BUF32RX[can0buf32looprx];
    can0buf32looprx++;
  }

  /* Call the system: <S1>/MCU0_3 */

  /* Output and update for function-call system: '<S1>/MCU0_3' */
  {
    int32_T rtb_MCU0_WorkStatus_L;
    real_T rtb_MCU0_WorkStatus_Ad;

    /* Outputs for Enabled SubSystem: '<S38>/MCU0' incorporates:
     *  EnablePort: '<S193>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive24_o2 > 0) {
      /* DataTypeConversion: '<S193>/MCU0_ControlMode_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[0];

      /* S-Function (sfix_bitop): '<S193>/MCU0_ControlMode_L' */
      rtb_MCU0_WorkStatus_L &= 4U;

      /* ArithShift: '<S193>/MCU0_ControlMode_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 2);

      /* DataTypeConversion: '<S193>/MCU0_ControlModecv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S193>/MCU0_ControlMode_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_g =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_EmergShutDown_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[0];

      /* S-Function (sfix_bitop): '<S193>/MCU0_EmergShutDown_L' */
      rtb_MCU0_WorkStatus_L &= 128U;

      /* ArithShift: '<S193>/MCU0_EmergShutDown_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 7);

      /* DataTypeConversion: '<S193>/MCU0_EmergShutDowncv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S193>/MCU0_EmergShutDown_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_g =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_GearStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[0];

      /* S-Function (sfix_bitop): '<S193>/MCU0_GearStatus_L' */
      rtb_MCU0_WorkStatus_L &= 24U;

      /* ArithShift: '<S193>/MCU0_GearStatus_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 3);

      /* DataTypeConversion: '<S193>/MCU0_GearStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S193>/MCU0_GearStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_o =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_HighVol_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[0];

      /* S-Function (sfix_bitop): '<S193>/MCU0_HighVol_L' */
      rtb_MCU0_WorkStatus_L &= 32U;

      /* ArithShift: '<S193>/MCU0_HighVol_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 5);

      /* DataTypeConversion: '<S193>/MCU0_HighVolcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S193>/MCU0_HighVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_e =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_LiftCnt_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[7];

      /* DataTypeConversion: '<S193>/MCU0_LiftCntcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S193>/MCU0_LiftCnt_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_p =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_ShutDowAllow_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[0];

      /* S-Function (sfix_bitop): '<S193>/MCU0_ShutDowAllow_L' */
      rtb_MCU0_WorkStatus_L &= 64U;

      /* ArithShift: '<S193>/MCU0_ShutDowAllow_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 6);

      /* DataTypeConversion: '<S193>/MCU0_ShutDowAllowcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S193>/MCU0_ShutDowAllow_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_p =
        rtb_MCU0_WorkStatus_Ad;

      /* Product: '<S193>/MCU0_SpeedFdkinput2_P' incorporates:
       *  Constant: '<S193>/MCU0_SpeedFdkinput2_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[1] * 256.0;

      /* Sum: '<S193>/MCU0_SpeedFdkinput2_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[2];

      /* DataTypeConversion: '<S193>/MCU0_SpeedFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_SpeedFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Sum: '<S193>/MCU0_SpeedFdk_Ad' incorporates:
       *  Constant: '<S193>/MCU0_SpeedFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -10000.0;

      /* Saturate: '<S193>/MCU0_SpeedFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 10000.0) {
        MCU0_3SpeedFdk = 10000.0;
      } else {
        MCU0_3SpeedFdk = rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S193>/MCU0_SpeedFdk_sat' */

      /* Product: '<S193>/MCU0_TorqueFdkinput4_P' incorporates:
       *  Constant: '<S193>/MCU0_TorqueFdkinput4_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[3] * 256.0;

      /* Sum: '<S193>/MCU0_TorqueFdkinput4_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[4];

      /* DataTypeConversion: '<S193>/MCU0_TorqueFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_TorqueFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S193>/MCU0_TorqueFdk_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S193>/MCU0_TorqueFdk_Ad' incorporates:
       *  Constant: '<S193>/MCU0_TorqueFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S193>/MCU0_TorqueFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_a = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_a =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S193>/MCU0_TorqueFdk_sat' */

      /* Product: '<S193>/MCU0_TorqueMaxinput6_P' incorporates:
       *  Constant: '<S193>/MCU0_TorqueMaxinput6_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[5] * 256.0;

      /* Sum: '<S193>/MCU0_TorqueMaxinput6_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[6];

      /* DataTypeConversion: '<S193>/MCU0_TorqueMax_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S193>/MCU0_TorqueMaxcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S193>/MCU0_TorqueMax_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S193>/MCU0_TorqueMax_Ad' incorporates:
       *  Constant: '<S193>/MCU0_TorqueMax_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S193>/MCU0_TorqueMax_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_i = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_i =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S193>/MCU0_TorqueMax_sat' */

      /* DataTypeConversion: '<S193>/MCU0_WorkStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive24_o4[0];

      /* S-Function (sfix_bitop): '<S193>/MCU0_WorkStatus_L' */
      rtb_MCU0_WorkStatus_L &= 3U;

      /* DataTypeConversion: '<S193>/MCU0_WorkStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S193>/MCU0_WorkStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_d =
        rtb_MCU0_WorkStatus_Ad;
    }

    /* End of Outputs for SubSystem: '<S38>/MCU0' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive25' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF33RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf33looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o3= 217711090;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o2= ec_can_receive(0,33,
      CAN0BUF33RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[0]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[1]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[2]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[3]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[4]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[5]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[6]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4[7]=
      CAN0BUF33RX[can0buf33looprx];
    can0buf33looprx++;
  }

  /* Call the system: <S1>/MCU1_3 */
  six_plus_six_Acmsteeri_MCU1(six_plus_six_AcmsteeringV09_m_B.CANReceive25_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive25_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU1_3);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive26' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF34RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf34looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o3= 419037938;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o2= ec_can_receive(0,34,
      CAN0BUF34RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[0]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[1]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[2]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[3]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[4]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[5]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[6]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4[7]=
      CAN0BUF34RX[can0buf34looprx];
    can0buf34looprx++;
  }

  /* Call the system: <S1>/MCU2_3 */
  six_plus_six_Acmsteeri_MCU2(six_plus_six_AcmsteeringV09_m_B.CANReceive26_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive26_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU2_3);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive27' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF35RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf35looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o3= 217710835;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o2= ec_can_receive(0,35,
      CAN0BUF35RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[0]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[1]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[2]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[3]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[4]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[5]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[6]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[7]=
      CAN0BUF35RX[can0buf35looprx];
    can0buf35looprx++;
  }

  /* Call the system: <S1>/MCU0_4 */

  /* Output and update for function-call system: '<S1>/MCU0_4' */
  {
    int32_T rtb_MCU0_WorkStatus_L;
    real_T rtb_MCU0_WorkStatus_Ad;

    /* Outputs for Enabled SubSystem: '<S39>/MCU0' incorporates:
     *  EnablePort: '<S204>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive27_o2 > 0) {
      /* DataTypeConversion: '<S204>/MCU0_ControlMode_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[0];

      /* S-Function (sfix_bitop): '<S204>/MCU0_ControlMode_L' */
      rtb_MCU0_WorkStatus_L &= 4U;

      /* ArithShift: '<S204>/MCU0_ControlMode_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 2);

      /* DataTypeConversion: '<S204>/MCU0_ControlModecv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S204>/MCU0_ControlMode_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_o =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_EmergShutDown_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[0];

      /* S-Function (sfix_bitop): '<S204>/MCU0_EmergShutDown_L' */
      rtb_MCU0_WorkStatus_L &= 128U;

      /* ArithShift: '<S204>/MCU0_EmergShutDown_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 7);

      /* DataTypeConversion: '<S204>/MCU0_EmergShutDowncv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S204>/MCU0_EmergShutDown_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_p =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_GearStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[0];

      /* S-Function (sfix_bitop): '<S204>/MCU0_GearStatus_L' */
      rtb_MCU0_WorkStatus_L &= 24U;

      /* ArithShift: '<S204>/MCU0_GearStatus_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 3);

      /* DataTypeConversion: '<S204>/MCU0_GearStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S204>/MCU0_GearStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_a =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_HighVol_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[0];

      /* S-Function (sfix_bitop): '<S204>/MCU0_HighVol_L' */
      rtb_MCU0_WorkStatus_L &= 32U;

      /* ArithShift: '<S204>/MCU0_HighVol_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 5);

      /* DataTypeConversion: '<S204>/MCU0_HighVolcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S204>/MCU0_HighVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_k =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_LiftCnt_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[7];

      /* DataTypeConversion: '<S204>/MCU0_LiftCntcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S204>/MCU0_LiftCnt_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_n =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_ShutDowAllow_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[0];

      /* S-Function (sfix_bitop): '<S204>/MCU0_ShutDowAllow_L' */
      rtb_MCU0_WorkStatus_L &= 64U;

      /* ArithShift: '<S204>/MCU0_ShutDowAllow_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 6);

      /* DataTypeConversion: '<S204>/MCU0_ShutDowAllowcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S204>/MCU0_ShutDowAllow_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_k =
        rtb_MCU0_WorkStatus_Ad;

      /* Product: '<S204>/MCU0_SpeedFdkinput2_P' incorporates:
       *  Constant: '<S204>/MCU0_SpeedFdkinput2_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[1] * 256.0;

      /* Sum: '<S204>/MCU0_SpeedFdkinput2_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[2];

      /* DataTypeConversion: '<S204>/MCU0_SpeedFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_SpeedFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Sum: '<S204>/MCU0_SpeedFdk_Ad' incorporates:
       *  Constant: '<S204>/MCU0_SpeedFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -10000.0;

      /* Saturate: '<S204>/MCU0_SpeedFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 10000.0) {
        MCU0_4SpeedFdk = 10000.0;
      } else {
        MCU0_4SpeedFdk = rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S204>/MCU0_SpeedFdk_sat' */

      /* Product: '<S204>/MCU0_TorqueFdkinput4_P' incorporates:
       *  Constant: '<S204>/MCU0_TorqueFdkinput4_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[3] * 256.0;

      /* Sum: '<S204>/MCU0_TorqueFdkinput4_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[4];

      /* DataTypeConversion: '<S204>/MCU0_TorqueFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_TorqueFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S204>/MCU0_TorqueFdk_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S204>/MCU0_TorqueFdk_Ad' incorporates:
       *  Constant: '<S204>/MCU0_TorqueFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S204>/MCU0_TorqueFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_e = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_e =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S204>/MCU0_TorqueFdk_sat' */

      /* Product: '<S204>/MCU0_TorqueMaxinput6_P' incorporates:
       *  Constant: '<S204>/MCU0_TorqueMaxinput6_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[5] * 256.0;

      /* Sum: '<S204>/MCU0_TorqueMaxinput6_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[6];

      /* DataTypeConversion: '<S204>/MCU0_TorqueMax_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S204>/MCU0_TorqueMaxcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S204>/MCU0_TorqueMax_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S204>/MCU0_TorqueMax_Ad' incorporates:
       *  Constant: '<S204>/MCU0_TorqueMax_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S204>/MCU0_TorqueMax_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_g = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_g =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S204>/MCU0_TorqueMax_sat' */

      /* DataTypeConversion: '<S204>/MCU0_WorkStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive27_o4[0];

      /* S-Function (sfix_bitop): '<S204>/MCU0_WorkStatus_L' */
      rtb_MCU0_WorkStatus_L &= 3U;

      /* DataTypeConversion: '<S204>/MCU0_WorkStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S204>/MCU0_WorkStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_c =
        rtb_MCU0_WorkStatus_Ad;
    }

    /* End of Outputs for SubSystem: '<S39>/MCU0' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive28' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF36RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf36looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o3= 217711091;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o2= ec_can_receive(0,36,
      CAN0BUF36RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[0]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[1]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[2]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[3]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[4]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[5]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[6]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4[7]=
      CAN0BUF36RX[can0buf36looprx];
    can0buf36looprx++;
  }

  /* Call the system: <S1>/MCU1_4 */
  six_plus_six_Acmsteeri_MCU1(six_plus_six_AcmsteeringV09_m_B.CANReceive28_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive28_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU1_4);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive29' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF37RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf37looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o3= 419037939;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o2= ec_can_receive(0,37,
      CAN0BUF37RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[0]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[1]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[2]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[3]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[4]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[5]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[6]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4[7]=
      CAN0BUF37RX[can0buf37looprx];
    can0buf37looprx++;
  }

  /* Call the system: <S1>/MCU2_4 */
  six_plus_six_Acmsteeri_MCU2(six_plus_six_AcmsteeringV09_m_B.CANReceive29_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive29_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU2_4);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive30' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF38RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf38looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o3= 217710836;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o2= ec_can_receive(0,38,
      CAN0BUF38RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[0]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[1]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[2]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[3]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[4]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[5]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[6]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[7]=
      CAN0BUF38RX[can0buf38looprx];
    can0buf38looprx++;
  }

  /* Call the system: <S1>/MCU0_5 */

  /* Output and update for function-call system: '<S1>/MCU0_5' */
  {
    int32_T rtb_MCU0_WorkStatus_L;
    real_T rtb_MCU0_WorkStatus_Ad;

    /* Outputs for Enabled SubSystem: '<S40>/MCU0' incorporates:
     *  EnablePort: '<S215>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive30_o2 > 0) {
      /* DataTypeConversion: '<S215>/MCU0_ControlMode_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[0];

      /* S-Function (sfix_bitop): '<S215>/MCU0_ControlMode_L' */
      rtb_MCU0_WorkStatus_L &= 4U;

      /* ArithShift: '<S215>/MCU0_ControlMode_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 2);

      /* DataTypeConversion: '<S215>/MCU0_ControlModecv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S215>/MCU0_ControlMode_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_EmergShutDown_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[0];

      /* S-Function (sfix_bitop): '<S215>/MCU0_EmergShutDown_L' */
      rtb_MCU0_WorkStatus_L &= 128U;

      /* ArithShift: '<S215>/MCU0_EmergShutDown_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 7);

      /* DataTypeConversion: '<S215>/MCU0_EmergShutDowncv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S215>/MCU0_EmergShutDown_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_GearStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[0];

      /* S-Function (sfix_bitop): '<S215>/MCU0_GearStatus_L' */
      rtb_MCU0_WorkStatus_L &= 24U;

      /* ArithShift: '<S215>/MCU0_GearStatus_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 3);

      /* DataTypeConversion: '<S215>/MCU0_GearStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S215>/MCU0_GearStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat =
        rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_HighVol_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[0];

      /* S-Function (sfix_bitop): '<S215>/MCU0_HighVol_L' */
      rtb_MCU0_WorkStatus_L &= 32U;

      /* ArithShift: '<S215>/MCU0_HighVol_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 5);

      /* DataTypeConversion: '<S215>/MCU0_HighVolcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S215>/MCU0_HighVol_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat = rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_LiftCnt_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[7];

      /* DataTypeConversion: '<S215>/MCU0_LiftCntcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S215>/MCU0_LiftCnt_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat = rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_ShutDowAllow_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[0];

      /* S-Function (sfix_bitop): '<S215>/MCU0_ShutDowAllow_L' */
      rtb_MCU0_WorkStatus_L &= 64U;

      /* ArithShift: '<S215>/MCU0_ShutDowAllow_S' */
      rtb_MCU0_WorkStatus_L = (int32_T)((uint32_T)rtb_MCU0_WorkStatus_L >> 6);

      /* DataTypeConversion: '<S215>/MCU0_ShutDowAllowcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S215>/MCU0_ShutDowAllow_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat =
        rtb_MCU0_WorkStatus_Ad;

      /* Product: '<S215>/MCU0_SpeedFdkinput2_P' incorporates:
       *  Constant: '<S215>/MCU0_SpeedFdkinput2_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[1] * 256.0;

      /* Sum: '<S215>/MCU0_SpeedFdkinput2_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[2];

      /* DataTypeConversion: '<S215>/MCU0_SpeedFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_SpeedFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Sum: '<S215>/MCU0_SpeedFdk_Ad' incorporates:
       *  Constant: '<S215>/MCU0_SpeedFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -10000.0;

      /* Saturate: '<S215>/MCU0_SpeedFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 10000.0) {
        MCU0_5SpeedFdk = 10000.0;
      } else {
        MCU0_5SpeedFdk = rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S215>/MCU0_SpeedFdk_sat' */

      /* Product: '<S215>/MCU0_TorqueFdkinput4_P' incorporates:
       *  Constant: '<S215>/MCU0_TorqueFdkinput4_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[3] * 256.0;

      /* Sum: '<S215>/MCU0_TorqueFdkinput4_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[4];

      /* DataTypeConversion: '<S215>/MCU0_TorqueFdk_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_TorqueFdkcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S215>/MCU0_TorqueFdk_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S215>/MCU0_TorqueFdk_Ad' incorporates:
       *  Constant: '<S215>/MCU0_TorqueFdk_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S215>/MCU0_TorqueFdk_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S215>/MCU0_TorqueFdk_sat' */

      /* Product: '<S215>/MCU0_TorqueMaxinput6_P' incorporates:
       *  Constant: '<S215>/MCU0_TorqueMaxinput6_C'
       */
      rtb_MCU0_WorkStatus_Ad = (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[5] * 256.0;

      /* Sum: '<S215>/MCU0_TorqueMaxinput6_Ad' */
      rtb_MCU0_WorkStatus_Ad += (real_T)
        six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[6];

      /* DataTypeConversion: '<S215>/MCU0_TorqueMax_Convert' */
      rtb_MCU0_WorkStatus_L = (int32_T)rtb_MCU0_WorkStatus_Ad;

      /* DataTypeConversion: '<S215>/MCU0_TorqueMaxcv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Gain: '<S215>/MCU0_TorqueMax_F' */
      rtb_MCU0_WorkStatus_Ad *= 0.1;

      /* Sum: '<S215>/MCU0_TorqueMax_Ad' incorporates:
       *  Constant: '<S215>/MCU0_TorqueMax_O'
       */
      rtb_MCU0_WorkStatus_Ad += -1000.0;

      /* Saturate: '<S215>/MCU0_TorqueMax_sat' */
      if (rtb_MCU0_WorkStatus_Ad > 1000.0) {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat = 1000.0;
      } else {
        six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat =
          rtb_MCU0_WorkStatus_Ad;
      }

      /* End of Saturate: '<S215>/MCU0_TorqueMax_sat' */

      /* DataTypeConversion: '<S215>/MCU0_WorkStatus_Convert' */
      rtb_MCU0_WorkStatus_L = six_plus_six_AcmsteeringV09_m_B.CANReceive30_o4[0];

      /* S-Function (sfix_bitop): '<S215>/MCU0_WorkStatus_L' */
      rtb_MCU0_WorkStatus_L &= 3U;

      /* DataTypeConversion: '<S215>/MCU0_WorkStatuscv' */
      rtb_MCU0_WorkStatus_Ad = rtb_MCU0_WorkStatus_L;

      /* Saturate: '<S215>/MCU0_WorkStatus_sat' */
      six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat =
        rtb_MCU0_WorkStatus_Ad;
    }

    /* End of Outputs for SubSystem: '<S40>/MCU0' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive31' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF39RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf39looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o3= 217711092;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o2= ec_can_receive(0,39,
      CAN0BUF39RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[0]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[1]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[2]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[3]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[4]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[5]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[6]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4[7]=
      CAN0BUF39RX[can0buf39looprx];
    can0buf39looprx++;
  }

  /* Call the system: <S1>/MCU1_5 */
  six_plus_six_Acmsteeri_MCU1(six_plus_six_AcmsteeringV09_m_B.CANReceive31_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive31_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU1_5);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive32' */

  /* Receive CAN message */
  {
    uint8 CAN0BUF40RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can0buf40looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o3= 419037940;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o2= ec_can_receive(0,40,
      CAN0BUF40RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[0]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[1]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[2]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[3]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[4]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[5]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[6]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4[7]=
      CAN0BUF40RX[can0buf40looprx];
    can0buf40looprx++;
  }

  /* Call the system: <S1>/MCU2_5 */
  six_plus_six_Acmsteeri_MCU2(six_plus_six_AcmsteeringV09_m_B.CANReceive32_o2,
    six_plus_six_AcmsteeringV09_m_B.CANReceive32_o4,
    &six_plus_six_AcmsteeringV09_m_B.MCU2_5);

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive33' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF42RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf42looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o3= 17;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o2= ec_can_receive(1,42,
      CAN1BUF42RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[0]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[1]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[2]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[3]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[4]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[5]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[6]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[7]=
      CAN1BUF42RX[can1buf42looprx];
    can1buf42looprx++;
  }

  /* Call the system: <S1>/RemoteControl1 */

  /* Output and update for function-call system: '<S1>/RemoteControl1' */
  {
    int32_T rtb_SH_L;
    real_T u0;

    /* Outputs for Enabled SubSystem: '<S53>/Yaokong2' incorporates:
     *  EnablePort: '<S388>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive33_o2 > 0) {
      /* DataTypeConversion: '<S388>/LIFEspan_Convert' */
      rtb_SH_L = six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[4];

      /* Saturate: '<S388>/LIFEspan_sat' */
      u0 = rtb_SH_L;
      six_plus_six_AcmsteeringV09_m_B.LIFEspan_sat = u0;

      /* DataTypeConversion: '<S388>/SA_Convert' */
      rtb_SH_L = six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[3];

      /* Saturate: '<S388>/SA_sat' */
      u0 = rtb_SH_L;
      six_plus_six_AcmsteeringV09_m_B.SA_sat = u0;

      /* DataTypeConversion: '<S388>/SD_Convert' */
      rtb_SH_L = six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[2];

      /* Saturate: '<S388>/SD_sat' */
      u0 = rtb_SH_L;
      six_plus_six_AcmsteeringV09_m_B.SD_sat = u0;

      /* DataTypeConversion: '<S388>/SE_Convert' */
      rtb_SH_L = six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[1];

      /* Saturate: '<S388>/SE_sat' */
      u0 = rtb_SH_L;
      six_plus_six_AcmsteeringV09_m_B.SE_sat = u0;

      /* DataTypeConversion: '<S388>/SH_Convert' */
      rtb_SH_L = six_plus_six_AcmsteeringV09_m_B.CANReceive33_o4[0];

      /* Saturate: '<S388>/SH_sat' */
      u0 = rtb_SH_L;
      six_plus_six_AcmsteeringV09_m_B.SH_sat = u0;
    }

    /* End of Outputs for SubSystem: '<S53>/Yaokong2' */
  }

  /* S-Function (ec5744_canreceiveslb): '<S1>/CANReceive34' */

  /* Receive CAN message */
  {
    uint8 CAN1BUF41RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can1buf41looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o3= 18;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o5= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o2= ec_can_receive(1,41,
      CAN1BUF41RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[0]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[1]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[2]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[3]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[4]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[5]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[6]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[7]=
      CAN1BUF41RX[can1buf41looprx];
    can1buf41looprx++;
  }

  /* Call the system: <S1>/RemoteControl2 */

  /* Output and update for function-call system: '<S1>/RemoteControl2' */
  {
    int32_T rtb_Leftstick_updowninput3_Ad;
    int32_T rtb_DataTypeConversion1;
    int32_T rtb_Rightstick_updown_Ad;
    real_T u0;

    /* Outputs for Enabled SubSystem: '<S54>/Yaokong1' incorporates:
     *  EnablePort: '<S394>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive34_o2 > 0) {
      /* DataTypeConversion: '<S394>/Data Type Conversion' */
      rtb_Leftstick_updowninput3_Ad =
        six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[2];

      /* DataTypeConversion: '<S394>/Data Type Conversion1' */
      rtb_DataTypeConversion1 = six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4
        [3];

      /* Product: '<S394>/Leftstick_leftrightinput1_P' incorporates:
       *  Constant: '<S394>/Leftstick_leftrightinput1_C'
       */
      rtb_Rightstick_updown_Ad =
        six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[0] << 8;

      /* Sum: '<S394>/Leftstick_leftrightinput1_Ad' */
      rtb_Rightstick_updown_Ad +=
        six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[1];

      /* Saturate: '<S394>/Leftstick_leftright_sat' */
      u0 = rtb_Rightstick_updown_Ad;
      six_plus_six_AcmsteeringV09_m_B.Leftstick_leftright_sat = u0;

      /* Product: '<S394>/Leftstick_updowninput3_P' incorporates:
       *  Constant: '<S394>/Leftstick_updowninput3_C'
       */
      rtb_Leftstick_updowninput3_Ad <<= 8;

      /* Sum: '<S394>/Leftstick_updowninput3_Ad' */
      rtb_Leftstick_updowninput3_Ad += rtb_DataTypeConversion1;

      /* DataTypeConversion: '<S394>/Leftstick_updown_Convert' */
      rtb_Rightstick_updown_Ad = rtb_Leftstick_updowninput3_Ad;

      /* Saturate: '<S394>/Leftstick_updown_sat' */
      u0 = rtb_Rightstick_updown_Ad;
      six_plus_six_AcmsteeringV09_m_B.Leftstick_updown_sat = u0;

      /* Product: '<S394>/Rightstick_updowninput7_P' incorporates:
       *  Constant: '<S394>/Rightstick_updowninput7_C'
       */
      rtb_Rightstick_updown_Ad =
        six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[6] << 8;

      /* Sum: '<S394>/Rightstick_updowninput7_Ad' */
      rtb_Rightstick_updown_Ad +=
        six_plus_six_AcmsteeringV09_m_B.CANReceive34_o4[7];

      /* Saturate: '<S394>/Rightstick_updown_sat' */
      u0 = rtb_Rightstick_updown_Ad;
      six_plus_six_AcmsteeringV09_m_B.Rightstick_updown_sat = u0;
    }

    /* End of Outputs for SubSystem: '<S54>/Yaokong1' */
  }

  /* MATLAB Function: '<S1>/MATLAB Function' */
  /* MATLAB Function 'Data_input/MATLAB Function': '<S34>:1' */
  if ((six_plus_six_AcmsteeringV09_m_B.Saturation == 0.0) ||
      (six_plus_six_AcmsteeringV09_m_B.Saturation_k == 0.0) ||
      (six_plus_six_AcmsteeringV09_m_B.Saturation_h == 0.0) ||
      (six_plus_six_AcmsteeringV09_m_B.Saturation_hu == 0.0)) {
    /* '<S34>:1:2' */
    /* '<S34>:1:3' */
    rtb_y = 1.0;
  } else {
    /* '<S34>:1:5' */
    rtb_y = 0.0;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function' */

  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S33>/Enable'
   */
  if (rtb_y > 0.0) {
    /* DataTypeConversion: '<S159>/Data Type Conversion3' incorporates:
     *  Constant: '<S159>/Constant3'
     */
    six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3_k = 1U;

    /* DataTypeConversion: '<S159>/Data Type Conversion8' incorporates:
     *  Constant: '<S159>/Constant2'
     */
    six_plus_six_AcmsteeringV09_m_B.DataTypeConversion8 = 0U;

    /* S-Function (ec5744_cantransmitslb): '<S159>/CANTransmit' */

    /*Transmit CAN message*/
    {
      uint8 CAN1BUF59TX[2];
      uint8 can1buf59looptx= 0;
      CAN1BUF59TX[can1buf59looptx]=
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3_k;
      can1buf59looptx++;
      CAN1BUF59TX[can1buf59looptx]=
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion8;
      can1buf59looptx++;
      six_plus_six_AcmsteeringV09_m_B.CANTransmit_d= ec_can_transmit(1, 59, 0,
        0U, 2, CAN1BUF59TX);
    }
  }

  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */

  /* S-Function (fcncallgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/InputSignalProcess'
   */
  /* Inport: '<S2>/Signals' */
  six_plus_six_AcmsteeringV09_m_B.Signals[0] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_TotalVol_sat_h;
  six_plus_six_AcmsteeringV09_m_B.Signals[1] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_TotalCurrent_sat_c;
  six_plus_six_AcmsteeringV09_m_B.Signals[2] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status2_sat_p;
  six_plus_six_AcmsteeringV09_m_B.Signals[3] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status1_sat_h;
  six_plus_six_AcmsteeringV09_m_B.Signals[4] = BMS1_SOC;
  six_plus_six_AcmsteeringV09_m_B.Signals[5] =
    six_plus_six_AcmsteeringV09_m_B.BMS2.BMS2_LowSingleVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[6] =
    six_plus_six_AcmsteeringV09_m_B.BMS2.BMS2_HighSingleVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[7] =
    six_plus_six_AcmsteeringV09_m_B.BMS3.BMS3_LowTemperature_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[8] =
    six_plus_six_AcmsteeringV09_m_B.BMS3.BMS3_HighTemperature_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[9] =
    six_plus_six_AcmsteeringV09_m_B.BMS4.BMS4_Sys_Status3_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[10] =
    six_plus_six_AcmsteeringV09_m_B.BMS4.BMS4_InputVolKEYON_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[11] =
    six_plus_six_AcmsteeringV09_m_B.BMS4.BMS4_InputVolCHG_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[12] =
    six_plus_six_AcmsteeringV09_m_B.BMS4.BMS4_InputVolACC_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[13] =
    six_plus_six_AcmsteeringV09_m_B.BMS5.BMS5_UpDownRequest_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[14] =
    six_plus_six_AcmsteeringV09_m_B.BMS5.BMS5_FeedbackPower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[15] =
    six_plus_six_AcmsteeringV09_m_B.BMS5.BMS5_FailureLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[16] =
    six_plus_six_AcmsteeringV09_m_B.BMS5.BMS5_ContDischargePower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[17] =
    six_plus_six_AcmsteeringV09_m_B.BMS5.BMS5_15s_InstanceDisPower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[18] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_TotalVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[19] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_TotalCurrent_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[20] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status2_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[21] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status1_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[22] = BMS1_1SOC;
  six_plus_six_AcmsteeringV09_m_B.Signals[23] =
    six_plus_six_AcmsteeringV09_m_B.BMS2_1.BMS2_LowSingleVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[24] =
    six_plus_six_AcmsteeringV09_m_B.BMS2_1.BMS2_HighSingleVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[25] =
    six_plus_six_AcmsteeringV09_m_B.BMS3_1.BMS3_LowTemperature_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[26] =
    six_plus_six_AcmsteeringV09_m_B.BMS3_1.BMS3_HighTemperature_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[27] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_1.BMS4_Sys_Status3_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[28] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_1.BMS4_InputVolKEYON_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[29] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_1.BMS4_InputVolCHG_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[30] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_1.BMS4_InputVolACC_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[31] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_1.BMS5_UpDownRequest_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[32] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_1.BMS5_FeedbackPower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[33] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_1.BMS5_FailureLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[34] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_1.BMS5_ContDischargePower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[35] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_1.BMS5_15s_InstanceDisPower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[36] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_TotalVol_sat_d;
  six_plus_six_AcmsteeringV09_m_B.Signals[37] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_TotalCurrent_sat_n;
  six_plus_six_AcmsteeringV09_m_B.Signals[38] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status2_sat_h;
  six_plus_six_AcmsteeringV09_m_B.Signals[39] =
    six_plus_six_AcmsteeringV09_m_B.BMS1_Sys_Status1_sat_o;
  six_plus_six_AcmsteeringV09_m_B.Signals[40] = BMS1_2SOC;
  six_plus_six_AcmsteeringV09_m_B.Signals[41] =
    six_plus_six_AcmsteeringV09_m_B.BMS2_2.BMS2_LowSingleVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[42] =
    six_plus_six_AcmsteeringV09_m_B.BMS2_2.BMS2_HighSingleVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[43] =
    six_plus_six_AcmsteeringV09_m_B.BMS3_2.BMS3_LowTemperature_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[44] =
    six_plus_six_AcmsteeringV09_m_B.BMS3_2.BMS3_HighTemperature_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[45] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_2.BMS4_Sys_Status3_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[46] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_2.BMS4_InputVolKEYON_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[47] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_2.BMS4_InputVolCHG_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[48] =
    six_plus_six_AcmsteeringV09_m_B.BMS4_2.BMS4_InputVolACC_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[49] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_2.BMS5_UpDownRequest_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[50] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_2.BMS5_FeedbackPower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[51] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_2.BMS5_FailureLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[52] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_2.BMS5_ContDischargePower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[53] =
    six_plus_six_AcmsteeringV09_m_B.BMS5_2.BMS5_15s_InstanceDisPower_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[54] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[55] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[56] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[57] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[58] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[59] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[60] = MCU0_5SpeedFdk;
  six_plus_six_AcmsteeringV09_m_B.Signals[61] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[62] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[63] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[64] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_5.MCU1_ControlTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[65] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_5.MCU1_MotorTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[66] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_5.MCU1_PowerFdk_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[67] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_5.MCU1_Idc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[68] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_5.MCU1_Udc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[69] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_MotorStallingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[70] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_UdcDetectionFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[71] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_TempSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[72] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_ActieDischargingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[73] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_IdcSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[74] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_IuSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[75] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_IvSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[76] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_FaultLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[77] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_ControllerOverload_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[78] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_CanCommunicationFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[79] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_MemoryFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[80] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_DownratingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[81] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_IGBTFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[82] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_MotorOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[83] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_ControllerOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[84] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_MotorOverSpeed_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[85] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_RotaryInverterFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[86] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_UnderVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[87] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_OverVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[88] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_5.MCU2_MotorOverLoad_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[89] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_g;
  six_plus_six_AcmsteeringV09_m_B.Signals[90] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_p;
  six_plus_six_AcmsteeringV09_m_B.Signals[91] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_k;
  six_plus_six_AcmsteeringV09_m_B.Signals[92] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_k;
  six_plus_six_AcmsteeringV09_m_B.Signals[93] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_n;
  six_plus_six_AcmsteeringV09_m_B.Signals[94] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_e;
  six_plus_six_AcmsteeringV09_m_B.Signals[95] = MCU0_4SpeedFdk;
  six_plus_six_AcmsteeringV09_m_B.Signals[96] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_a;
  six_plus_six_AcmsteeringV09_m_B.Signals[97] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_o;
  six_plus_six_AcmsteeringV09_m_B.Signals[98] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_c;
  six_plus_six_AcmsteeringV09_m_B.Signals[99] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_4.MCU1_ControlTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[100] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_4.MCU1_MotorTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[101] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_4.MCU1_PowerFdk_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[102] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_4.MCU1_Idc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[103] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_4.MCU1_Udc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[104] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_MotorStallingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[105] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_UdcDetectionFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[106] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_TempSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[107] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_ActieDischargingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[108] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_IdcSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[109] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_IuSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[110] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_IvSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[111] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_FaultLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[112] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_ControllerOverload_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[113] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_CanCommunicationFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[114] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_MemoryFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[115] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_DownratingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[116] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_IGBTFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[117] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_MotorOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[118] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_ControllerOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[119] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_MotorOverSpeed_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[120] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_RotaryInverterFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[121] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_UnderVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[122] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_OverVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[123] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_4.MCU2_MotorOverLoad_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[124] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_i;
  six_plus_six_AcmsteeringV09_m_B.Signals[125] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_g;
  six_plus_six_AcmsteeringV09_m_B.Signals[126] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_p;
  six_plus_six_AcmsteeringV09_m_B.Signals[127] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_e;
  six_plus_six_AcmsteeringV09_m_B.Signals[128] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_p;
  six_plus_six_AcmsteeringV09_m_B.Signals[129] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_a;
  six_plus_six_AcmsteeringV09_m_B.Signals[130] = MCU0_3SpeedFdk;
  six_plus_six_AcmsteeringV09_m_B.Signals[131] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_o;
  six_plus_six_AcmsteeringV09_m_B.Signals[132] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_g;
  six_plus_six_AcmsteeringV09_m_B.Signals[133] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_d;
  six_plus_six_AcmsteeringV09_m_B.Signals[134] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_3.MCU1_ControlTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[135] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_3.MCU1_MotorTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[136] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_3.MCU1_PowerFdk_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[137] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_3.MCU1_Idc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[138] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_3.MCU1_Udc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[139] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_MotorStallingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[140] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_UdcDetectionFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[141] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_TempSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[142] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_ActieDischargingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[143] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_IdcSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[144] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_IuSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[145] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_IvSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[146] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_FaultLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[147] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_ControllerOverload_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[148] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_CanCommunicationFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[149] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_MemoryFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[150] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_DownratingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[151] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_IGBTFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[152] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_MotorOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[153] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_ControllerOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[154] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_MotorOverSpeed_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[155] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_RotaryInverterFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[156] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_UnderVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[157] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_OverVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[158] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_3.MCU2_MotorOverLoad_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[159] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_e;
  six_plus_six_AcmsteeringV09_m_B.Signals[160] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_h;
  six_plus_six_AcmsteeringV09_m_B.Signals[161] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_a;
  six_plus_six_AcmsteeringV09_m_B.Signals[162] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_n;
  six_plus_six_AcmsteeringV09_m_B.Signals[163] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_e;
  six_plus_six_AcmsteeringV09_m_B.Signals[164] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_e3;
  six_plus_six_AcmsteeringV09_m_B.Signals[165] = MCU0_2SpeedFdk;
  six_plus_six_AcmsteeringV09_m_B.Signals[166] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_n;
  six_plus_six_AcmsteeringV09_m_B.Signals[167] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_c;
  six_plus_six_AcmsteeringV09_m_B.Signals[168] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_a;
  six_plus_six_AcmsteeringV09_m_B.Signals[169] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_2.MCU1_ControlTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[170] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_2.MCU1_MotorTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[171] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_2.MCU1_PowerFdk_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[172] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_2.MCU1_Idc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[173] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_2.MCU1_Udc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[174] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_MotorStallingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[175] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_UdcDetectionFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[176] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_TempSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[177] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_ActieDischargingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[178] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_IdcSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[179] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_IuSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[180] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_IvSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[181] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_FaultLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[182] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_ControllerOverload_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[183] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_CanCommunicationFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[184] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_MemoryFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[185] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_DownratingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[186] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_IGBTFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[187] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_MotorOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[188] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_ControllerOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[189] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_MotorOverSpeed_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[190] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_RotaryInverterFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[191] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_UnderVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[192] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_OverVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[193] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_2.MCU2_MotorOverLoad_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[194] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_h;
  six_plus_six_AcmsteeringV09_m_B.Signals[195] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_gg;
  six_plus_six_AcmsteeringV09_m_B.Signals[196] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_d;
  six_plus_six_AcmsteeringV09_m_B.Signals[197] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_g;
  six_plus_six_AcmsteeringV09_m_B.Signals[198] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_c;
  six_plus_six_AcmsteeringV09_m_B.Signals[199] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_h;
  six_plus_six_AcmsteeringV09_m_B.Signals[200] = MCU0_1SpeedFdk;
  six_plus_six_AcmsteeringV09_m_B.Signals[201] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_d;
  six_plus_six_AcmsteeringV09_m_B.Signals[202] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_k;
  six_plus_six_AcmsteeringV09_m_B.Signals[203] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_e;
  six_plus_six_AcmsteeringV09_m_B.Signals[204] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_1.MCU1_ControlTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[205] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_1.MCU1_MotorTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[206] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_1.MCU1_PowerFdk_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[207] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_1.MCU1_Idc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[208] =
    six_plus_six_AcmsteeringV09_m_B.MCU1_1.MCU1_Udc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[209] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_MotorStallingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[210] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_UdcDetectionFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[211] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_TempSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[212] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_ActieDischargingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[213] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_IdcSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[214] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_IuSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[215] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_IvSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[216] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_FaultLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[217] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_ControllerOverload_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[218] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_CanCommunicationFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[219] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_MemoryFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[220] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_DownratingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[221] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_IGBTFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[222] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_MotorOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[223] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_ControllerOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[224] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_MotorOverSpeed_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[225] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_RotaryInverterFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[226] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_UnderVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[227] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_OverVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[228] =
    six_plus_six_AcmsteeringV09_m_B.MCU2_1.MCU2_MotorOverLoad_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[229] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueMax_sat_m;
  six_plus_six_AcmsteeringV09_m_B.Signals[230] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_EmergShutDown_sat_m;
  six_plus_six_AcmsteeringV09_m_B.Signals[231] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ShutDowAllow_sat_n;
  six_plus_six_AcmsteeringV09_m_B.Signals[232] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_HighVol_sat_a;
  six_plus_six_AcmsteeringV09_m_B.Signals[233] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_LiftCnt_sat_ch;
  six_plus_six_AcmsteeringV09_m_B.Signals[234] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_TorqueFdk_sat_hg;
  six_plus_six_AcmsteeringV09_m_B.Signals[235] = MCU0_SpeedFdk;
  six_plus_six_AcmsteeringV09_m_B.Signals[236] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_GearStatus_sat_oy;
  six_plus_six_AcmsteeringV09_m_B.Signals[237] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_ControlMode_sat_gj;
  six_plus_six_AcmsteeringV09_m_B.Signals[238] =
    six_plus_six_AcmsteeringV09_m_B.MCU0_WorkStatus_sat_dn;
  six_plus_six_AcmsteeringV09_m_B.Signals[239] =
    six_plus_six_AcmsteeringV09_m_B.MCU1.MCU1_ControlTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[240] =
    six_plus_six_AcmsteeringV09_m_B.MCU1.MCU1_MotorTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[241] =
    six_plus_six_AcmsteeringV09_m_B.MCU1.MCU1_PowerFdk_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[242] =
    six_plus_six_AcmsteeringV09_m_B.MCU1.MCU1_Idc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[243] =
    six_plus_six_AcmsteeringV09_m_B.MCU1.MCU1_Udc_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[244] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_MotorStallingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[245] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_UdcDetectionFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[246] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_TempSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[247] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_ActieDischargingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[248] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_IdcSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[249] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_IuSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[250] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_IvSensorFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[251] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_FaultLevel_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[252] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_ControllerOverload_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[253] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_CanCommunicationFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[254] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_MemoryFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[255] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_DownratingFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[256] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_IGBTFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[257] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_MotorOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[258] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_ControllerOverTemp_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[259] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_MotorOverSpeed_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[260] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_RotaryInverterFault_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[261] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_UnderVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[262] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_OverVoltage_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[263] =
    six_plus_six_AcmsteeringV09_m_B.MCU2.MCU2_MotorOverLoad_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[264] =
    six_plus_six_AcmsteeringV09_m_B.SH_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[265] =
    six_plus_six_AcmsteeringV09_m_B.SE_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[266] =
    six_plus_six_AcmsteeringV09_m_B.LIFEspan_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[267] =
    six_plus_six_AcmsteeringV09_m_B.Rightstick_updown_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[268] =
    six_plus_six_AcmsteeringV09_m_B.Leftstick_leftright_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[269] =
    six_plus_six_AcmsteeringV09_m_B.Leftstick_updown_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[270] =
    six_plus_six_AcmsteeringV09_m_B.SD_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[271] =
    six_plus_six_AcmsteeringV09_m_B.SA_sat;
  six_plus_six_AcmsteeringV09_m_B.Signals[272] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_n.speed_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[273] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_dy.current_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[274] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_d.speed_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[275] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_f.current_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[276] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_i.speed_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[277] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_h.current_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[278] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_h.speed_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[279] =
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_jm.current_out;
  six_plus_six_AcmsteeringV09_m_B.Signals[280] = Xangularrate;
  six_plus_six_AcmsteeringV09_m_B.Signals[281] = Yangularrate;
  six_plus_six_AcmsteeringV09_m_B.Signals[282] = Zangularrate;
  six_plus_six_AcmsteeringV09_m_B.Signals[283] = Xacceleration;
  six_plus_six_AcmsteeringV09_m_B.Signals[284] = Yacceleration;
  six_plus_six_AcmsteeringV09_m_B.Signals[285] = Zacceleration;
  six_plus_six_AcmsteeringV09_m_B.Signals[286] = NorthSpd;
  six_plus_six_AcmsteeringV09_m_B.Signals[287] = SkySpd;
  six_plus_six_AcmsteeringV09_m_B.Signals[288] = EastSpd;
  six_plus_six_AcmsteeringV09_m_B.Signals[289] = Altitude;
  six_plus_six_AcmsteeringV09_m_B.Signals[290] = Longitude;
  six_plus_six_AcmsteeringV09_m_B.Signals[291] = Latitude;
  six_plus_six_AcmsteeringV09_m_B.Signals[292] = Rolling;
  six_plus_six_AcmsteeringV09_m_B.Signals[293] = Heading;
  six_plus_six_AcmsteeringV09_m_B.Signals[294] = Pitching;

  /* RelationalOperator: '<S399>/Compare' incorporates:
   *  Constant: '<S399>/Constant'
   */
  rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[265] == 7.0);

  /* RelationalOperator: '<S400>/Compare' incorporates:
   *  Constant: '<S400>/Constant'
   */
  Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[265] == 5.0);

  /* RelationalOperator: '<S401>/Compare' incorporates:
   *  Constant: '<S401>/Constant'
   */
  six_plus_six_AcmsteeringV09_m_B.Compare_g =
    (six_plus_six_AcmsteeringV09_m_B.Signals[271] == 8.0);

  /* RelationalOperator: '<S403>/Compare' incorporates:
   *  Constant: '<S403>/Constant'
   */
  rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[265] == 0.0);

  /* RelationalOperator: '<S405>/Compare' incorporates:
   *  Constant: '<S405>/Constant'
   */
  Compare_m = (six_plus_six_AcmsteeringV09_m_B.Signals[270] == 8.0);

  /* MATLAB Function: '<S2>/MATLAB Function1' */
  /* MATLAB Function 'InputSignalProcess/MATLAB Function1': '<S407>:1' */
  /* '<S407>:1:3' */
  /* '<S407>:1:4' */
  /* '<S407>:1:5' */
  /* '<S407>:1:6' */
  /* '<S407>:1:7' */
  rtb_y = -six_plus_six_AcmsteeringV09_m_B.Signals[285];

  /* DataTypeConversion: '<S2>/Data Type Conversion4' */
  /* '<S407>:1:8' */
  /* '<S407>:1:9' */
  /* '<S407>:1:10' */
  /* '<S407>:1:11' */
  /* '<S407>:1:12' */
  /* '<S407>:1:13' */
  /* '<S407>:1:14' */
  /* '<S407>:1:15' */
  /* '<S407>:1:16' */
  /* '<S407>:1:17' */
  /* '<S407>:1:18' */
  /* '<S407>:1:19' */
  /*  y = u; */
  acc_y = rtb_y;

  /* MATLAB Function: '<S2>/MATLAB Function' */
  /* MATLAB Function 'InputSignalProcess/MATLAB Function': '<S406>:1' */
  if (six_plus_six_AcmsteeringV09_m_B.Signals[269] <= 1512.0) {
    /* '<S406>:1:3' */
    /* '<S406>:1:4' */
    rtb_acc_dem = (real32_T)((six_plus_six_AcmsteeringV09_m_B.Signals[269] -
      1512.0) / -418.0 * 100.0);
  } else {
    /* '<S406>:1:6' */
    rtb_acc_dem = (real32_T)-((six_plus_six_AcmsteeringV09_m_B.Signals[269] -
      1512.0) / 422.0 * 100.0);
  }

  if ((six_plus_six_AcmsteeringV09_m_B.Signals[268] < 500.0) ||
      (six_plus_six_AcmsteeringV09_m_B.Signals[268] > 2500.0)) {
    /* '<S406>:1:9' */
    /* '<S406>:1:10' */
    rtb_steer_dem = 0.0F;
  } else if (six_plus_six_AcmsteeringV09_m_B.Signals[268] <= 1503.0) {
    /* '<S406>:1:11' */
    /* '<S406>:1:12' */
    rtb_steer_dem = (real32_T)((six_plus_six_AcmsteeringV09_m_B.Signals[268] -
      1503.0) / -419.0 * 100.0);
  } else {
    /* '<S406>:1:14' */
    rtb_steer_dem = (real32_T)-((six_plus_six_AcmsteeringV09_m_B.Signals[268] -
      1503.0) / 420.0 * 100.0);
  }

  /* '<S406>:1:17' */
  rtb_brake_dem = (real32_T)((six_plus_six_AcmsteeringV09_m_B.Signals[267] -
    1094.0) / 840.0 * 100.0);

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* DeadZone: '<S2>/Dead Zone' */
  if (rtb_acc_dem > 1.0F) {
    acc_dem = rtb_acc_dem - 1.0F;
  } else if (rtb_acc_dem >= -1.0F) {
    acc_dem = 0.0F;
  } else {
    acc_dem = rtb_acc_dem - -1.0F;
  }

  /* End of DeadZone: '<S2>/Dead Zone' */

  /* DeadZone: '<S2>/Dead Zone1' */
  if (rtb_steer_dem > 1.0F) {
    six_plus_six_AcmsteeringV09_m_B.steer_dem = rtb_steer_dem - 1.0F;
  } else if (rtb_steer_dem >= -1.0F) {
    six_plus_six_AcmsteeringV09_m_B.steer_dem = 0.0F;
  } else {
    six_plus_six_AcmsteeringV09_m_B.steer_dem = rtb_steer_dem - -1.0F;
  }

  /* End of DeadZone: '<S2>/Dead Zone1' */

  /* DeadZone: '<S2>/Dead Zone2' */
  if (rtb_brake_dem > 3.0F) {
    brake_dem = rtb_brake_dem - 3.0F;
  } else if (rtb_brake_dem >= 0.0F) {
    brake_dem = 0.0F;
  } else {
    brake_dem = rtb_brake_dem;
  }

  /* End of DeadZone: '<S2>/Dead Zone2' */

  /* Logic: '<S2>/Logical Operator' */
  rtb_Compare = (rtb_Compare || rtb_Compare_ak);

  /* S-Function (fcncallgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/MainControl'
   */
  /* Abs: '<S409>/Abs' */
  rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
  if (rtb_y < 0.0) {
    rtb_Abs = (real32_T)-rtb_y;
  } else {
    rtb_Abs = (real32_T)rtb_y;
  }

  /* End of Abs: '<S409>/Abs' */

  /* Abs: '<S409>/Abs1' */
  rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
  if (rtb_y < 0.0) {
    rtb_acc_dem = (real32_T)-rtb_y;
  } else {
    rtb_acc_dem = (real32_T)rtb_y;
  }

  /* End of Abs: '<S409>/Abs1' */

  /* Abs: '<S409>/Abs2' */
  rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
  if (rtb_y < 0.0) {
    rtb_steer_dem = (real32_T)-rtb_y;
  } else {
    rtb_steer_dem = (real32_T)rtb_y;
  }

  /* End of Abs: '<S409>/Abs2' */

  /* Abs: '<S409>/Abs3' */
  rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
  if (rtb_y < 0.0) {
    rtb_brake_dem = (real32_T)-rtb_y;
  } else {
    rtb_brake_dem = (real32_T)rtb_y;
  }

  /* End of Abs: '<S409>/Abs3' */

  /* Abs: '<S409>/Abs4' */
  rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
  if (rtb_y < 0.0) {
    rtb_Abs4 = (real32_T)-rtb_y;
  } else {
    rtb_Abs4 = (real32_T)rtb_y;
  }

  /* End of Abs: '<S409>/Abs4' */

  /* Abs: '<S409>/Abs5' */
  rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
  if (rtb_y < 0.0) {
    rtb_Abs5 = (real32_T)-rtb_y;
  } else {
    rtb_Abs5 = (real32_T)rtb_y;
  }

  /* End of Abs: '<S409>/Abs5' */

  /* Memory: '<S409>/Memory' */
  rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_o;

  /* MATLAB Function: '<S409>/mode_switch' incorporates:
   *  Constant: '<S409>/Constant2'
   */
  /* MATLAB Function 'MainControl/mode_switch/mode_switch': '<S1197>:1' */
  /* '<S1197>:1:3' */
  mode_dem_out = rtb_Memory_cn;
  if ((Compare == 1) && (rtb_Abs <= 464.14389F) && (rtb_acc_dem <= 464.14389F) &&
      (rtb_steer_dem <= 464.14389F) && (rtb_brake_dem <= 464.14389F) &&
      (rtb_Abs4 <= 464.14389F) && (rtb_Abs5 <= 464.14389F) && (rtb_Compare == 0))
  {
    /* '<S1197>:1:5' */
    /* '<S1197>:1:6' */
    mode_dem_out = 0;
  } else if ((acc_dem > 0.0F) && (rtb_Abs >= 0.0F) && (rtb_acc_dem >= 0.0F) &&
             (rtb_steer_dem >= 0.0F) && (rtb_brake_dem >= 0.0F) && (rtb_Abs4 >=
              0.0F) && (rtb_Abs5 >= 0.0F) && (rtb_Compare == 0) && (Compare == 0)
             && (six_plus_six_AcmsteeringV09_m_B.Compare_g == 0)) {
    /* '<S1197>:1:7' */
    /* '<S1197>:1:8' */
    mode_dem_out = 1;
  } else if ((acc_dem == 0.0F) && (rtb_Compare == 0) && (Compare == 0) &&
             (six_plus_six_AcmsteeringV09_m_B.Compare_g == 0)) {
    /* '<S1197>:1:9' */
    /* '<S1197>:1:10' */
    mode_dem_out = 2;
  } else if ((acc_dem < 0.0F) && (rtb_Abs >= 0.0F) && (rtb_acc_dem >= 0.0F) &&
             (rtb_steer_dem >= 0.0F) && (rtb_brake_dem >= 0.0F) && (rtb_Abs4 >=
              0.0F) && (rtb_Abs5 >= 0.0F) && (rtb_Compare == 0) && (Compare == 0)
             && (six_plus_six_AcmsteeringV09_m_B.Compare_g == 0)) {
    /* '<S1197>:1:11' */
    /* '<S1197>:1:12' */
    mode_dem_out = 3;
  } else if ((six_plus_six_AcmsteeringV09_m_B.Compare_g == 1) && (rtb_Compare ==
              0) && (Compare == 0)) {
    /* '<S1197>:1:13' */
    /* '<S1197>:1:14' */
    mode_dem_out = 1;
  } else {
    if (rtb_Compare == 1) {
      /* '<S1197>:1:15' */
      /* '<S1197>:1:16' */
      mode_dem_out = 5;

      /*  else */
      /*      mode_dem_out=int8(5); */
    }
  }

  /* End of MATLAB Function: '<S409>/mode_switch' */

  /* SwitchCase: '<S408>/Switch Case' */
  rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.SwitchCase_ActiveSubsystem;
  rtAction = -1;
  switch (mode_dem_out) {
   case 0:
    rtAction = 0;
    break;

   case 1:
    rtAction = 1;
    break;

   case 2:
    rtAction = 2;
    break;

   case 3:
    rtAction = 3;
    break;

   case 4:
    rtAction = 4;
    break;

   case 5:
    rtAction = 5;
    break;
  }

  six_plus_six_AcmsteeringV09__DW.SwitchCase_ActiveSubsystem = rtAction;
  if (rtb_Memory_cn != rtAction) {
    switch (rtb_Memory_cn) {
     case 0:
     case 2:
     case 4:
     case 5:
      break;

     case 1:
      /* Disable for SwitchCase: '<S878>/Switch Case1' */
      if (six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem_g == 0) {
        /* Disable for Atomic SubSystem: '<S1031>/直行TCS' */
        /* Disable for Atomic SubSystem: '<S1159>/直行' */
        /* Disable for If: '<S1183>/If' */
        six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem_a = -1;

        /* Disable for If: '<S1183>/If4' */
        six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem_b = -1;

        /* Disable for If: '<S1183>/If1' */
        six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem_c = -1;

        /* Disable for If: '<S1183>/If2' */
        six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem_b = -1;

        /* Disable for If: '<S1183>/If5' */
        six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem_k = -1;

        /* Disable for If: '<S1183>/If3' */
        six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem_c = -1;

        /* End of Disable for SubSystem: '<S1159>/直行' */
        /* End of Disable for SubSystem: '<S1031>/直行TCS' */
      }

      six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem_g = -1;

      /* End of Disable for SwitchCase: '<S878>/Switch Case1' */
      break;

     case 3:
      /* Disable for SwitchCase: '<S423>/Switch Case1' */
      if (six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem == 0) {
        /* Disable for Atomic SubSystem: '<S576>/直行TCS' */
        /* Disable for Atomic SubSystem: '<S704>/直行' */
        /* Disable for If: '<S728>/If' */
        six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem = -1;

        /* Disable for If: '<S728>/If4' */
        six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem = -1;

        /* Disable for If: '<S728>/If1' */
        six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem = -1;

        /* Disable for If: '<S728>/If2' */
        six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem = -1;

        /* Disable for If: '<S728>/If5' */
        six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem = -1;

        /* Disable for If: '<S728>/If3' */
        six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem = -1;

        /* End of Disable for SubSystem: '<S704>/直行' */
        /* End of Disable for SubSystem: '<S576>/直行TCS' */
      }

      six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem = -1;

      /* End of Disable for SwitchCase: '<S423>/Switch Case1' */
      break;
    }
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S408>/Park' incorporates:
     *  ActionPort: '<S410>/Action Port'
     */
    /* Memory: '<S416>/Memory' */
    rtb_Memory_n = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_n;

    /* MATLAB Function: '<S416>/HeartBeat' */
    six_plus_six_Acms_HeartBeat(rtb_Memory_n,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat);

    /* Memory: '<S416>/Memory4' */
    rtb_Memory4_h = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_mk;

    /* MATLAB Function: '<S416>/HeartBeat3' */
    six_plus_six_Acms_HeartBeat(rtb_Memory4_h,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3);

    /* Memory: '<S416>/Memory1' */
    rtb_Memory1_c = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_d;

    /* MATLAB Function: '<S416>/HeartBeat1' */
    six_plus_six_Acms_HeartBeat(rtb_Memory1_c,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1);

    /* Memory: '<S416>/Memory2' */
    rtb_Memory2_h4 = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_m4;

    /* MATLAB Function: '<S416>/HeartBeat2' */
    six_plus_six_Acms_HeartBeat(rtb_Memory2_h4,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2);

    /* Memory: '<S416>/Memory6' */
    rtb_Memory6_p = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_c;

    /* MATLAB Function: '<S416>/HeartBeat4' */
    six_plus_six_Acms_HeartBeat(rtb_Memory6_p,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4);

    /* Memory: '<S416>/Memory3' */
    rtb_Memory3_p = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_gx;

    /* MATLAB Function: '<S416>/HeartBeat5' */
    six_plus_six_Acms_HeartBeat(rtb_Memory3_p,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5);

    /* Lookup_n-D: '<S416>/1-D Lookup Table1' */
    rtb_Saturation2_fh = look1_iflf_binlx
      (six_plus_six_AcmsteeringV09_m_B.steer_dem,
       six_plus_six_Acmsteering_ConstP.pooled41,
       six_plus_six_Acmsteering_ConstP.pooled40, 2U);

    /* Saturate: '<S416>/Saturation' */
    if (rtb_Saturation2_fh > 400000.0F) {
      rtb_acc_dem = 400000.0F;
    } else if (rtb_Saturation2_fh < -400000.0F) {
      rtb_acc_dem = -400000.0F;
    } else {
      rtb_acc_dem = rtb_Saturation2_fh;
    }

    /* End of Saturate: '<S416>/Saturation' */

    /* Gain: '<S416>/Gain' */
    rtb_steer_dem = 0.5F * rtb_Saturation2_fh;

    /* Saturate: '<S416>/Saturation1' */
    if (rtb_steer_dem > 400000.0F) {
      rtb_steer_dem = 400000.0F;
    } else {
      if (rtb_steer_dem < -400000.0F) {
        rtb_steer_dem = -400000.0F;
      }
    }

    /* End of Saturate: '<S416>/Saturation1' */

    /* Gain: '<S416>/Gain1' */
    rtb_Saturation2_fh = -rtb_Saturation2_fh;

    /* Saturate: '<S416>/Saturation2' */
    if (rtb_Saturation2_fh > 400000.0F) {
      rtb_Saturation2_fh = 400000.0F;
    } else {
      if (rtb_Saturation2_fh < -400000.0F) {
        rtb_Saturation2_fh = -400000.0F;
      }
    }

    /* End of Saturate: '<S416>/Saturation2' */

    /* Lookup_n-D: '<S416>/1-D Lookup Table2' */
    rtb_Saturation3_m = look1_iflf_binlx(brake_dem,
      six_plus_six_Acmsteering_ConstP.pooled46,
      six_plus_six_Acmsteering_ConstP.pooled45, 1U);

    /* Sum: '<S416>/Add' incorporates:
     *  Constant: '<S416>/Constant1'
     */
    rtb_Saturation3_m += 100000.0F;

    /* Saturate: '<S416>/Saturation3' */
    if (rtb_Saturation3_m > 750000.0F) {
      rtb_Saturation3_m = 750000.0F;
    } else {
      if (rtb_Saturation3_m < -140000.0F) {
        rtb_Saturation3_m = -140000.0F;
      }
    }

    /* End of Saturate: '<S416>/Saturation3' */

    /* SignalConversion: '<S410>/OutportBufferForpark_dem' incorporates:
     *  Constant: '<S416>/SpdSet_dem'
     *  Constant: '<S416>/SpdSet_dem1'
     *  Constant: '<S416>/SpdSet_dem2'
     *  Constant: '<S416>/SpdSet_dem3'
     *  Constant: '<S416>/SpdSet_dem4'
     *  Constant: '<S416>/SpdSet_dem5'
     *  Constant: '<S416>/TrqSet_dem'
     *  Constant: '<S416>/TrqSet_dem1'
     *  Constant: '<S416>/TrqSet_dem2'
     *  Constant: '<S416>/TrqSet_dem3'
     *  Constant: '<S416>/TrqSet_dem4'
     *  Constant: '<S416>/TrqSet_dem5'
     *  Constant: '<S416>/mot_enable'
     *  Constant: '<S416>/mot_enable1'
     *  Constant: '<S416>/mot_enable2'
     *  Constant: '<S416>/mot_enable3'
     *  Constant: '<S416>/mot_enable4'
     *  Constant: '<S416>/mot_enable5'
     *  Constant: '<S416>/mot_gear'
     *  Constant: '<S416>/mot_gear1'
     *  Constant: '<S416>/mot_gear2'
     *  Constant: '<S416>/mot_gear3'
     *  Constant: '<S416>/mot_gear4'
     *  Constant: '<S416>/mot_gear5'
     *  Constant: '<S416>/mot_mode'
     *  Constant: '<S416>/mot_mode1'
     *  Constant: '<S416>/mot_mode2'
     *  Constant: '<S416>/mot_mode3'
     *  Constant: '<S416>/mot_mode4'
     *  Constant: '<S416>/mot_mode5'
     */
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[0] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[1] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[2] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[3] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[4] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[5] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[6] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[7] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[8] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[9] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[10] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[11] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[12] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[13] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[14] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[15] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[16] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[17] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[18] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[19] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[20] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[21] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[22] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[23] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[24] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[25] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[26] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[27] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[28] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[29] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[30] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[31] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[32] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[33] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[34] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[35] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[36] = rtb_acc_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[37] = rtb_steer_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[38] =
      rtb_Saturation2_fh;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[39] =
      rtb_Saturation3_m;

    /* Update for Memory: '<S416>/Memory' */
    six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_n =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat.life;

    /* Update for Memory: '<S416>/Memory4' */
    six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_mk =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3.life;

    /* Update for Memory: '<S416>/Memory1' */
    six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_d =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1.life;

    /* Update for Memory: '<S416>/Memory2' */
    six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_m4 =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2.life;

    /* Update for Memory: '<S416>/Memory6' */
    six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_c =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4.life;

    /* Update for Memory: '<S416>/Memory3' */
    six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_gx =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5.life;

    /* End of Outputs for SubSystem: '<S408>/Park' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S408>/forward' incorporates:
     *  ActionPort: '<S414>/Action Port'
     */
    /* MATLAB Function: '<S878>/MATLAB Function' */
    /* MATLAB Function 'MainControl/mode_control/forward/forward/MATLAB Function': '<S881>:1' */
    if (brake_dem == 0.0F) {
      /* '<S881>:1:10' */
      /* '<S881>:1:11' */
      rtb_y_o = 0;
    } else {
      /* '<S881>:1:13' */
      rtb_y_o = 1;
    }

    /* End of MATLAB Function: '<S878>/MATLAB Function' */

    /* SwitchCase: '<S878>/Switch Case1' incorporates:
     *  Constant: '<S1028>/Constant'
     *  Constant: '<S1028>/Constant1'
     */
    rtb_Memory_cn =
      six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem_g;
    rtAction = -1;
    switch (rtb_y_o) {
     case 0:
      rtAction = 0;
      break;

     case 1:
      rtAction = 1;
      break;
    }

    six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem_g = rtAction;
    if ((rtb_Memory_cn != rtAction) && (rtb_Memory_cn == 0)) {
      /* Disable for Atomic SubSystem: '<S1031>/直行TCS' */
      /* Disable for Atomic SubSystem: '<S1159>/直行' */
      /* Disable for If: '<S1183>/If' */
      six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem_a = -1;

      /* Disable for If: '<S1183>/If4' */
      six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem_b = -1;

      /* Disable for If: '<S1183>/If1' */
      six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem_c = -1;

      /* Disable for If: '<S1183>/If2' */
      six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem_b = -1;

      /* Disable for If: '<S1183>/If5' */
      six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem_k = -1;

      /* Disable for If: '<S1183>/If3' */
      six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem_c = -1;

      /* End of Disable for SubSystem: '<S1159>/直行' */
      /* End of Disable for SubSystem: '<S1031>/直行TCS' */
    }

    switch (rtAction) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S878>/Drive' incorporates:
       *  ActionPort: '<S880>/Action Port'
       */
      /* Abs: '<S880>/Abs' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Saturation3_m = (real32_T)-rtb_y;
      } else {
        rtb_Saturation3_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs' */

      /* Abs: '<S880>/Abs1' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_acc_dem = (real32_T)-rtb_y;
      } else {
        rtb_acc_dem = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs1' */

      /* Abs: '<S880>/Abs10' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_steer_dem = (real32_T)-rtb_y;
      } else {
        rtb_steer_dem = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs10' */

      /* Abs: '<S880>/Abs11' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_brake_dem = (real32_T)-rtb_y;
      } else {
        rtb_brake_dem = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs11' */

      /* Abs: '<S880>/Abs12' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs = (real32_T)-rtb_y;
      } else {
        rtb_Abs = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs12' */

      /* Abs: '<S880>/Abs13' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs4 = (real32_T)-rtb_y;
      } else {
        rtb_Abs4 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs13' */

      /* Abs: '<S880>/Abs14' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs5 = (real32_T)-rtb_y;
      } else {
        rtb_Abs5 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs14' */

      /* Abs: '<S880>/Abs15' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Abs15_g = (real32_T)-rtb_y;
      } else {
        rtb_Abs15_g = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs15' */

      /* Abs: '<S880>/Abs16' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs16_n = (real32_T)-rtb_y;
      } else {
        rtb_Abs16_n = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs16' */

      /* Abs: '<S880>/Abs17' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs17_g = (real32_T)-rtb_y;
      } else {
        rtb_Abs17_g = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs17' */

      /* Abs: '<S880>/Abs18' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs18_p = (real32_T)-rtb_y;
      } else {
        rtb_Abs18_p = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs18' */

      /* Abs: '<S880>/Abs19' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs20_g = (real32_T)-rtb_y;
      } else {
        rtb_Abs20_g = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs19' */

      /* Abs: '<S880>/Abs2' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs19_l4 = (real32_T)-rtb_y;
      } else {
        rtb_Abs19_l4 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs2' */

      /* Abs: '<S880>/Abs20' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs14_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs14_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs20' */

      /* Abs: '<S880>/Abs21' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs21_a = (real32_T)-rtb_y;
      } else {
        rtb_Abs21_a = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs21' */

      /* Abs: '<S880>/Abs22' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs22_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs22_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs22' */

      /* Abs: '<S880>/Abs24' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs13_a = (real32_T)-rtb_y;
      } else {
        rtb_Abs13_a = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs24' */

      /* Abs: '<S880>/Abs3' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs12_e = (real32_T)-rtb_y;
      } else {
        rtb_Abs12_e = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs3' */

      /* Abs: '<S880>/Abs4' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Abs4_f = (real32_T)-rtb_y;
      } else {
        rtb_Abs4_f = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs4' */

      /* Abs: '<S880>/Abs5' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs5_j = (real32_T)-rtb_y;
      } else {
        rtb_Abs5_j = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs5' */

      /* Abs: '<S880>/Abs6' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs6_i = (real32_T)-rtb_y;
      } else {
        rtb_Abs6_i = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs6' */

      /* Abs: '<S880>/Abs7' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs7_j = (real32_T)-rtb_y;
      } else {
        rtb_Abs7_j = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs7' */

      /* Abs: '<S880>/Abs8' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs8_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs8_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs8' */

      /* Abs: '<S880>/Abs9' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs9_p = (real32_T)-rtb_y;
      } else {
        rtb_Abs9_p = (real32_T)rtb_y;
      }

      /* End of Abs: '<S880>/Abs9' */

      /* MATLAB Function: '<S880>/MATLAB Function' incorporates:
       *  Constant: '<S880>/Constant1'
       */
      six_plus_s_MATLABFunction_a(acc_y, ag_thr,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_a);

      /* SwitchCase: '<S880>/Switch Case' incorporates:
       *  Constant: '<S1030>/Constant4'
       */
      switch (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_a.y) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S880>/车辆稳定性控制' incorporates:
         *  ActionPort: '<S1029>/Action Port'
         */
        /* Abs: '<S1029>/Abs' */
        rtb_y = fabs(acc_y);

        /* Sum: '<S1029>/Sum' incorporates:
         *  Constant: '<S1029>/Constant'
         */
        rtb_Sum_i = ag_thr - rtb_y;

        /* Memory: '<S1029>/Memory4' */
        rtb_Memory4_e = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_b;

        /* Gain: '<S1029>/Gain20' */
        rtb_y = 2.0 * rtb_Memory4_e;

        /* Memory: '<S1029>/Memory5' */
        rtb_Subtract1_j =
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_i;

        /* Sum: '<S1029>/Add10' */
        rtb_y = (rtb_Sum_i - rtb_y) + rtb_Subtract1_j;

        /* Memory: '<S1029>/Memory3' */
        rtb_Subtract1_j =
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_l;

        /* Sum: '<S1029>/Subtract1' */
        rtb_Subtract1_j = rtb_Sum_i - rtb_Subtract1_j;

        /* Gain: '<S1029>/Gain5' */
        rtb_Add2_c = (real32_T)(kp1 * rtb_Subtract1_j);

        /* Gain: '<S1029>/Gain6' */
        rtb_Gain6_f = (real32_T)(ki1 * rtb_Sum_i);

        /* Gain: '<S1029>/Gain7' */
        rtb_Saturation2_fh = (real32_T)(kd1 * rtb_y);

        /* Sum: '<S1029>/Add2' */
        rtb_Add2_c = (rtb_Add2_c + rtb_Gain6_f) + rtb_Saturation2_fh;

        /* Memory: '<S1029>/Memory13' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_h;

        /* Sum: '<S1029>/Subtract5' */
        rtb_Saturation2_fh += rtb_Add2_c;

        /* Switch: '<S1029>/Switch1' incorporates:
         *  Constant: '<S1029>/Constant3'
         *  Constant: '<S1029>/Constant4'
         */
        if (ESP_switch > 0.5F) {
          /* Switch: '<S1029>/Switch' incorporates:
           *  Constant: '<S1029>/Constant1'
           *  Constant: '<S1029>/Constant2'
           */
          if (acc_y >= 0.0) {
            rtb_Memory_cn = 1;
          } else {
            rtb_Memory_cn = -1;
          }

          /* End of Switch: '<S1029>/Switch' */

          /* Product: '<S1029>/Product' */
          rtb_Product_m = rtb_Saturation2_fh * (real32_T)rtb_Memory_cn;

          /* Gain: '<S1029>/Gain3' */
          rtb_Gain3_o = 0.125F * rtb_Product_m;
          delta_Twending_dem = rtb_Gain3_o;
        } else {
          delta_Twending_dem = 0.0F;
        }

        /* End of Switch: '<S1029>/Switch1' */

        /* Update for Memory: '<S1029>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_b = rtb_Sum_i;

        /* Update for Memory: '<S1029>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_i = rtb_Memory4_e;

        /* Update for Memory: '<S1029>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_l = rtb_Sum_i;

        /* Update for Memory: '<S1029>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_h =
          rtb_Saturation2_fh;

        /* End of Outputs for SubSystem: '<S880>/车辆稳定性控制' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S880>/车辆稳定性控制1' incorporates:
         *  ActionPort: '<S1030>/Action Port'
         */
        six_plus_six_AcmsteeringV09_m_B.Constant4_p = 0.0F;

        /* End of Outputs for SubSystem: '<S880>/车辆稳定性控制1' */
        break;
      }

      /* End of SwitchCase: '<S880>/Switch Case' */

      /* MultiPortSwitch: '<S880>/Multiport Switch' */
      if (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_a.y == 0) {
        rtb_MultiportSwitch_o = delta_Twending_dem;
      } else {
        rtb_MultiportSwitch_o = six_plus_six_AcmsteeringV09_m_B.Constant4_p;
      }

      /* End of MultiPortSwitch: '<S880>/Multiport Switch' */

      /* Lookup_n-D: '<S1025>/mot_map' */
      rtb_Gain5_d = look1_iflf_binlx(rtb_Saturation3_m,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1025>/MinMax6' */
      u0 = rtb_Gain5_d;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[229];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax6_b = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax6' */

      /* Lookup_n-D: '<S1025>/mot_map4' */
      rtb_Gain5_d = look1_iflf_binlx(rtb_acc_dem,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1025>/MinMax7' */
      u0 = rtb_Gain5_d;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[159];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax7_p = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax7' */

      /* Lookup_n-D: '<S1025>/mot_map1' */
      rtb_Gain5_d = look1_iflf_binlx(rtb_steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1025>/MinMax5' */
      u0 = rtb_Gain5_d;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[89];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax5_l = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax5' */

      /* Sum: '<S1025>/Add3' */
      rtb_Add3_h = (rtb_MinMax6_b + rtb_MinMax7_p) + rtb_MinMax5_l;

      /* Sum: '<S1025>/Add4' */
      rtb_y = (six_plus_six_AcmsteeringV09_m_B.Signals[17] +
               six_plus_six_AcmsteeringV09_m_B.Signals[35]) +
        six_plus_six_AcmsteeringV09_m_B.Signals[53];

      /* Sum: '<S1025>/Add1' */
      rtb_Saturation3_m = ((((rtb_Saturation3_m + rtb_acc_dem) + rtb_steer_dem)
                            + rtb_Abs19_l4) + rtb_Abs13_a) + rtb_Abs12_e;

      /* Gain: '<S1025>/Gain' */
      rtb_Saturation3_m *= 0.166666672F;

      /* Product: '<S1025>/Divide' */
      rtb_Gain1_j = 9549.0 * rtb_y / rtb_Saturation3_m;

      /* Gain: '<S1026>/Gain' */
      rtb_Gain5_d = 0.01F * acc_dem;

      /* Lookup_n-D: '<S1026>/mot_map' */
      rtb_brake_dem = look1_iflf_binlx(rtb_brake_dem,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1026>/MinMax' */
      u0 = rtb_brake_dem;
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[229];
      if ((u0 <= rtb_y) || rtIsNaN(rtb_y)) {
        rtb_y = u0;
      }

      /* End of MinMax: '<S1026>/MinMax' */

      /* Lookup_n-D: '<S1026>/mot_map1' */
      rtb_Abs = look1_iflf_binlx(rtb_Abs,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1026>/MinMax1' */
      u0 = rtb_Abs;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[159];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      /* End of MinMax: '<S1026>/MinMax1' */

      /* Lookup_n-D: '<S1026>/mot_map4' */
      rtb_Abs4 = look1_iflf_binlx(rtb_Abs4,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1026>/MinMax4' */
      u0 = rtb_Abs4;
      rtb_Memory4_e = six_plus_six_AcmsteeringV09_m_B.Signals[89];
      if ((u0 <= rtb_Memory4_e) || rtIsNaN(rtb_Memory4_e)) {
        rtb_Memory4_e = u0;
      }

      /* End of MinMax: '<S1026>/MinMax4' */

      /* Lookup_n-D: '<S1026>/mot_map5' */
      rtb_Abs5 = look1_iflf_binlx(rtb_Abs5,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1026>/MinMax5' */
      u0 = rtb_Abs5;
      rtb_Subtract1_j = six_plus_six_AcmsteeringV09_m_B.Signals[194];
      if ((u0 <= rtb_Subtract1_j) || rtIsNaN(rtb_Subtract1_j)) {
        rtb_Subtract1_j = u0;
      }

      /* End of MinMax: '<S1026>/MinMax5' */

      /* Lookup_n-D: '<S1026>/mot_map2' */
      rtb_Abs20_g = look1_iflf_binlx(rtb_Abs20_g,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1026>/MinMax2' */
      u0 = rtb_Abs20_g;
      rtb_MinMax2_b = six_plus_six_AcmsteeringV09_m_B.Signals[124];
      if ((u0 <= rtb_MinMax2_b) || rtIsNaN(rtb_MinMax2_b)) {
        rtb_MinMax2_b = u0;
      }

      /* End of MinMax: '<S1026>/MinMax2' */

      /* Lookup_n-D: '<S1026>/mot_map3' */
      rtb_Abs14_m = look1_iflf_binlx(rtb_Abs14_m,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1026>/MinMax3' */
      u0 = rtb_Abs14_m;
      rtb_Add = six_plus_six_AcmsteeringV09_m_B.Signals[54];
      if ((u0 <= rtb_Add) || rtIsNaN(rtb_Add)) {
        rtb_Add = u0;
      }

      /* End of MinMax: '<S1026>/MinMax3' */

      /* Sum: '<S1026>/Add' */
      rtb_y = ((((rtb_y + rtb_Sum_i) + rtb_Memory4_e) + rtb_Subtract1_j) +
               rtb_MinMax2_b) + rtb_Add;

      /* Product: '<S1026>/Product' */
      rtb_Add = rtb_Gain5_d * rtb_y;

      /* MinMax: '<S1025>/MinMax' */
      if (!((rtb_Gain1_j <= rtb_Add) || rtIsNaN(rtb_Add))) {
        rtb_Gain1_j = rtb_Add;
      }

      /* End of MinMax: '<S1025>/MinMax' */

      /* Gain: '<S1025>/Gain1' */
      rtb_Gain1_j *= 0.5;

      /* Gain: '<S1025>/Gain4' */
      rtb_Gain5_d = 0.5F * rtb_MultiportSwitch_o;

      /* Sum: '<S1025>/Subtract' */
      rtb_Add = rtb_Gain1_j - rtb_Gain5_d;

      /* MinMax: '<S1025>/MinMax1' */
      rtb_Sum_i = rtb_Add3_h;
      if (!((rtb_Sum_i <= rtb_Add) || rtIsNaN(rtb_Add))) {
        rtb_Sum_i = rtb_Add;
      }

      rtb_MinMax1_n = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax1' */

      /* Lookup_n-D: '<S1025>/mot_map2' */
      rtb_Abs19_l4 = look1_iflf_binlx(rtb_Abs19_l4,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1025>/MinMax4' */
      u0 = rtb_Abs19_l4;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[194];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax4_c = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax4' */

      /* Lookup_n-D: '<S1025>/mot_map5' */
      rtb_Abs13_a = look1_iflf_binlx(rtb_Abs13_a,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1025>/MinMax8' */
      u0 = rtb_Abs13_a;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[124];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax8_h = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax8' */

      /* Lookup_n-D: '<S1025>/mot_map3' */
      rtb_Abs12_e = look1_iflf_binlx(rtb_Abs12_e,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S1025>/MinMax3' */
      u0 = rtb_Abs12_e;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[54];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax3_d = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax3' */

      /* Sum: '<S1025>/Add2' */
      rtb_Add2_h = (rtb_MinMax4_c + rtb_MinMax8_h) + rtb_MinMax3_d;

      /* Sum: '<S1025>/Add' */
      rtb_Add = rtb_Gain1_j + rtb_Gain5_d;

      /* MinMax: '<S1025>/MinMax2' */
      rtb_Sum_i = rtb_Add2_h;
      if (!((rtb_Sum_i <= rtb_Add) || rtIsNaN(rtb_Add))) {
        rtb_Sum_i = rtb_Add;
      }

      rtb_MinMax2_a = rtb_Sum_i;

      /* End of MinMax: '<S1025>/MinMax2' */

      /* MATLAB Function: '<S1025>/MATLAB Function' */
      six_plus_s_MATLABFunction_e(rtb_Add3_h, rtb_MinMax1_n, rtb_Add2_h,
        rtb_MinMax2_a, rtb_MultiportSwitch_o,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_e);

      /* MATLAB Function: '<S1024>/MATLAB Function5' incorporates:
       *  Constant: '<S1024>/ECCalVar2'
       *  Constant: '<S1024>/ECCalVar3'
       *  Constant: '<S1024>/ECCalVar4'
       *  Constant: '<S1024>/ECCalVar5'
       */
      six_plus_si_MATLABFunction5(six_plus_six_AcmsteeringV09_m_B.Compare_g,
        guzhang_lr, guzhang_rf, guzhang_rm, guzhang_rr,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5);

      /* DataTypeConversion: '<S1024>/Data Type Conversion' */
      rtb_guzhang_lf_m =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5.guzhang_lf1;

      /* DataTypeConversion: '<S1024>/Data Type Conversion1' */
      rtb_guzhang_lm_o =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5.guzhang_lm1;

      /* DataTypeConversion: '<S1024>/Data Type Conversion2' */
      rtb_guzhang_lr_g =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5.guzhang_lr1;

      /* DataTypeConversion: '<S1024>/Data Type Conversion3' */
      rtb_guzhang_rf_j =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5.guzhang_rf1;

      /* DataTypeConversion: '<S1024>/Data Type Conversion4' */
      rtb_guzhang_rm_i =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5.guzhang_rm1;

      /* DataTypeConversion: '<S1024>/Data Type Conversion5' */
      rtb_guzhang_rr_p =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5.guzhang_rr1;

      /* MATLAB Function: '<S1024>/MATLAB Function' incorporates:
       *  Constant: '<S1024>/Constant'
       */
      six_plus_s_MATLABFunction_o
        (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_e.trq_dem_l,
         six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_e.trq_dem_r,
         rtb_MinMax6_b, rtb_MinMax7_p, rtb_MinMax5_l, rtb_MinMax4_c,
         rtb_MinMax8_h, rtb_MinMax3_d, rtb_guzhang_lf_m, rtb_guzhang_lm_o,
         rtb_guzhang_lr_g, rtb_guzhang_rf_j, rtb_guzhang_rm_i, rtb_guzhang_rr_p,
         33.3333321F, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o);

      /* Abs: '<S1028>/Abs11' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Gain5_d = (real32_T)-rtb_y;
      } else {
        rtb_Gain5_d = (real32_T)rtb_y;
      }

      /* End of Abs: '<S1028>/Abs11' */

      /* Abs: '<S1028>/Abs12' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs12_e = (real32_T)-rtb_y;
      } else {
        rtb_Abs12_e = (real32_T)rtb_y;
      }

      /* End of Abs: '<S1028>/Abs12' */

      /* Abs: '<S1028>/Abs13' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs13_a = (real32_T)-rtb_y;
      } else {
        rtb_Abs13_a = (real32_T)rtb_y;
      }

      /* End of Abs: '<S1028>/Abs13' */

      /* Abs: '<S1028>/Abs14' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs14_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs14_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S1028>/Abs14' */

      /* Abs: '<S1028>/Abs19' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs19_l4 = (real32_T)-rtb_y;
      } else {
        rtb_Abs19_l4 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S1028>/Abs19' */

      /* Abs: '<S1028>/Abs20' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs20_g = (real32_T)-rtb_y;
      } else {
        rtb_Abs20_g = (real32_T)rtb_y;
      }

      /* End of Abs: '<S1028>/Abs20' */

      /* MinMax: '<S1028>/MinMax' */
      if ((rtb_Gain5_d <= rtb_Abs12_e) || rtIsNaNF(rtb_Abs12_e)) {
        rtb_Saturation3_m = rtb_Gain5_d;
      } else {
        rtb_Saturation3_m = rtb_Abs12_e;
      }

      if (!((rtb_Saturation3_m <= rtb_Abs13_a) || rtIsNaNF(rtb_Abs13_a))) {
        rtb_Saturation3_m = rtb_Abs13_a;
      }

      if (!((rtb_Saturation3_m <= rtb_Abs14_m) || rtIsNaNF(rtb_Abs14_m))) {
        rtb_Saturation3_m = rtb_Abs14_m;
      }

      if (!((rtb_Saturation3_m <= rtb_Abs19_l4) || rtIsNaNF(rtb_Abs19_l4))) {
        rtb_Saturation3_m = rtb_Abs19_l4;
      }

      if ((rtb_Saturation3_m <= rtb_Abs20_g) || rtIsNaNF(rtb_Abs20_g)) {
        rtb_Gain5_d = rtb_Saturation3_m;
      } else {
        rtb_Gain5_d = rtb_Abs20_g;
      }

      /* End of MinMax: '<S1028>/MinMax' */

      /* Gain: '<S1028>/Gain1' */
      rtb_Gain5_d *= 0.125F;

      /* Gain: '<S1028>/Gain2' */
      rtb_Gain5_d *= 0.104719758F;

      /* Gain: '<S1028>/Gain3' */
      rtb_Gain5_d *= 0.2286F;

      /* Gain: '<S1028>/Gain4' */
      rtb_Gain5_d *= 3.6F;

      /* Gain: '<S1028>/Gain5' */
      rtb_Gain5_d *= 0.9F;

      /* Lookup_n-D: '<S1028>/1-D Lookup Table' */
      rtb_DLookupTable_h = look1_iflf_binlx(rtb_Gain5_d,
        six_plus_six_Acmsteering_ConstP.pooled68,
        six_plus_six_Acmsteering_ConstP.pooled67, 3U);

      /* Outputs for Atomic SubSystem: '<S1031>/直行TCS' */
      /* Gain: '<S1160>/Gain3' */
      rtb_Product_m = 0.125F * rtb_Abs4_f;

      /* Gain: '<S1160>/Gain' */
      rtb_Product_m *= 0.104719758F;

      /* Gain: '<S1160>/Gain1' */
      rtb_Product_m *= 0.2286F;

      /* MinMax: '<S1166>/MinMax' */
      if ((rtb_Abs4_f <= rtb_Abs5_j) || rtIsNaNF(rtb_Abs5_j)) {
        rtb_Saturation3_m = rtb_Abs4_f;
      } else {
        rtb_Saturation3_m = rtb_Abs5_j;
      }

      if ((rtb_Saturation3_m <= rtb_Abs6_i) || rtIsNaNF(rtb_Abs6_i)) {
        rtb_acc_dem = rtb_Saturation3_m;
      } else {
        rtb_acc_dem = rtb_Abs6_i;
      }

      /* End of MinMax: '<S1166>/MinMax' */

      /* Gain: '<S1166>/Gain' */
      rtb_acc_dem *= 0.125F;

      /* Gain: '<S1166>/Gain1' */
      rtb_acc_dem *= 0.104719758F;

      /* Gain: '<S1166>/Gain2' */
      rtb_acc_dem *= 0.2286F;

      /* Gain: '<S1166>/Gain3' */
      rtb_acc_dem *= 3.6F;

      /* Gain: '<S1166>/Gain4' */
      rtb_acc_dem *= 0.9F;

      /* Gain: '<S1160>/Gain2' */
      rtb_steer_dem = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S1160>/Subtract' */
      rtb_steer_dem = rtb_Product_m - rtb_steer_dem;

      /* Sum: '<S1160>/Add' incorporates:
       *  Constant: '<S1160>/Constant'
       */
      rtb_Product_m += 2.22044605E-16F;

      /* Product: '<S1160>/Divide' */
      s_act_lf = rtb_steer_dem / rtb_Product_m;

      /* Saturate: '<S1159>/Saturation' */
      rtb_Gain5_d = s_act_lf;
      if (rtb_Gain5_d > 2.0F) {
        rtb_Saturation_a = 2.0F;
      } else if (rtb_Gain5_d < 0.0F) {
        rtb_Saturation_a = 0.0F;
      } else {
        rtb_Saturation_a = rtb_Gain5_d;
      }

      /* End of Saturate: '<S1159>/Saturation' */

      /* Gain: '<S1161>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs5_j;

      /* Gain: '<S1161>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S1161>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S1161>/Gain2' */
      rtb_Product_m = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S1161>/Subtract' */
      rtb_Product_m = rtb_steer_dem - rtb_Product_m;

      /* Sum: '<S1161>/Add' incorporates:
       *  Constant: '<S1161>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S1161>/Divide' */
      s_act_lm = rtb_Product_m / rtb_steer_dem;

      /* Saturate: '<S1159>/Saturation1' */
      rtb_Gain5_d = s_act_lm;
      if (rtb_Gain5_d > 2.0F) {
        rtb_Saturation1_j = 2.0F;
      } else if (rtb_Gain5_d < 0.0F) {
        rtb_Saturation1_j = 0.0F;
      } else {
        rtb_Saturation1_j = rtb_Gain5_d;
      }

      /* End of Saturate: '<S1159>/Saturation1' */

      /* Gain: '<S1162>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs6_i;

      /* Gain: '<S1162>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S1162>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S1162>/Gain2' */
      rtb_acc_dem *= 0.277777791F;

      /* Sum: '<S1162>/Subtract' */
      rtb_acc_dem = rtb_steer_dem - rtb_acc_dem;

      /* Sum: '<S1162>/Add' incorporates:
       *  Constant: '<S1162>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S1162>/Divide' */
      s_act_lr = rtb_acc_dem / rtb_steer_dem;

      /* Saturate: '<S1159>/Saturation2' */
      rtb_Gain5_d = s_act_lr;
      if (rtb_Gain5_d > 2.0F) {
        rtb_Saturation2_p = 2.0F;
      } else if (rtb_Gain5_d < 0.0F) {
        rtb_Saturation2_p = 0.0F;
      } else {
        rtb_Saturation2_p = rtb_Gain5_d;
      }

      /* End of Saturate: '<S1159>/Saturation2' */

      /* Gain: '<S1163>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs7_j;

      /* Gain: '<S1163>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S1163>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* MinMax: '<S1167>/MinMax' */
      if ((rtb_Abs7_j <= rtb_Abs8_m) || rtIsNaNF(rtb_Abs8_m)) {
        rtb_Saturation3_m = rtb_Abs7_j;
      } else {
        rtb_Saturation3_m = rtb_Abs8_m;
      }

      if ((rtb_Saturation3_m <= rtb_Abs9_p) || rtIsNaNF(rtb_Abs9_p)) {
        rtb_acc_dem = rtb_Saturation3_m;
      } else {
        rtb_acc_dem = rtb_Abs9_p;
      }

      /* End of MinMax: '<S1167>/MinMax' */

      /* Gain: '<S1167>/Gain' */
      rtb_acc_dem *= 0.125F;

      /* Gain: '<S1167>/Gain1' */
      rtb_acc_dem *= 0.104719758F;

      /* Gain: '<S1167>/Gain2' */
      rtb_acc_dem *= 0.2286F;

      /* Gain: '<S1167>/Gain3' */
      rtb_acc_dem *= 3.6F;

      /* Gain: '<S1167>/Gain4' */
      rtb_acc_dem *= 0.9F;

      /* Gain: '<S1163>/Gain2' */
      rtb_Product_m = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S1163>/Subtract' */
      rtb_Product_m = rtb_steer_dem - rtb_Product_m;

      /* Sum: '<S1163>/Add' incorporates:
       *  Constant: '<S1163>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S1163>/Divide' */
      s_act_rf = rtb_Product_m / rtb_steer_dem;

      /* Saturate: '<S1159>/Saturation3' */
      rtb_Gain5_d = s_act_rf;
      if (rtb_Gain5_d > 2.0F) {
        rtb_Saturation3_l = 2.0F;
      } else if (rtb_Gain5_d < 0.0F) {
        rtb_Saturation3_l = 0.0F;
      } else {
        rtb_Saturation3_l = rtb_Gain5_d;
      }

      /* End of Saturate: '<S1159>/Saturation3' */

      /* Gain: '<S1164>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs8_m;

      /* Gain: '<S1164>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S1164>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S1164>/Gain2' */
      rtb_Product_m = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S1164>/Subtract' */
      rtb_Product_m = rtb_steer_dem - rtb_Product_m;

      /* Sum: '<S1164>/Add' incorporates:
       *  Constant: '<S1164>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S1164>/Divide' */
      s_act_rm = rtb_Product_m / rtb_steer_dem;

      /* Saturate: '<S1159>/Saturation4' */
      rtb_Gain5_d = s_act_rm;
      if (rtb_Gain5_d > 2.0F) {
        rtb_Saturation4_m = 2.0F;
      } else if (rtb_Gain5_d < 0.0F) {
        rtb_Saturation4_m = 0.0F;
      } else {
        rtb_Saturation4_m = rtb_Gain5_d;
      }

      /* End of Saturate: '<S1159>/Saturation4' */

      /* Gain: '<S1165>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs9_p;

      /* Gain: '<S1165>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S1165>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S1165>/Gain2' */
      rtb_acc_dem *= 0.277777791F;

      /* Sum: '<S1165>/Subtract' */
      rtb_acc_dem = rtb_steer_dem - rtb_acc_dem;

      /* Sum: '<S1165>/Add' incorporates:
       *  Constant: '<S1165>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S1165>/Divide' */
      s_act_rr = rtb_acc_dem / rtb_steer_dem;

      /* Saturate: '<S1159>/Saturation5' */
      rtb_Gain5_d = s_act_rr;
      if (rtb_Gain5_d > 2.0F) {
        rtb_Saturation5_e = 2.0F;
      } else if (rtb_Gain5_d < 0.0F) {
        rtb_Saturation5_e = 0.0F;
      } else {
        rtb_Saturation5_e = rtb_Gain5_d;
      }

      /* End of Saturate: '<S1159>/Saturation5' */

      /* Outputs for Atomic SubSystem: '<S1159>/直行' */
      /* Lookup_n-D: '<S1168>/1-D Lookup Table' */
      rtb_Gain5_d = look1_iflf_binlx(six_plus_six_AcmsteeringV09_m_B.steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled41,
        six_plus_six_Acmsteering_ConstP.pooled40, 2U);

      /* Memory: '<S1168>/Memory' */
      rtb_Memory_nt = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_nq;

      /* MATLAB Function: '<S1168>/MATLAB Function' incorporates:
       *  Constant: '<S1168>/Constant7'
       */
      six_plus_s_MATLABFunction_g(rtb_Saturation_a, rtb_DLookupTable_h, 0.05F,
        rtb_Memory_nt, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_g);

      /* Memory: '<S1168>/Memory10' */
      rtb_Memory10_a = six_plus_six_AcmsteeringV09__DW.Memory10_PreviousInput_m;

      /* MATLAB Function: '<S1168>/MATLAB Function4' incorporates:
       *  Constant: '<S1168>/Constant12'
       */
      six_plus_si_MATLABFunction4(rtb_Saturation1_j, rtb_DLookupTable_h, 0.05F,
        rtb_Memory10_a, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction4);

      /* Memory: '<S1168>/Memory7' */
      rtb_Memory7_a = six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput_i;

      /* MATLAB Function: '<S1168>/MATLAB Function1' incorporates:
       *  Constant: '<S1168>/Constant8'
       */
      six_plus_si_MATLABFunction1(rtb_Saturation2_p, rtb_DLookupTable_h, 0.05F,
        rtb_Memory7_a, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_k);

      /* Memory: '<S1168>/Memory8' */
      rtb_Memory8_e = six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput_d;

      /* MATLAB Function: '<S1168>/MATLAB Function2' incorporates:
       *  Constant: '<S1168>/Constant9'
       */
      six_plus_si_MATLABFunction2(rtb_Saturation3_l, rtb_DLookupTable_h, 0.05F,
        rtb_Memory8_e, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2_l);

      /* Memory: '<S1168>/Memory11' */
      rtb_Memory11_p = six_plus_six_AcmsteeringV09__DW.Memory11_PreviousInput_d;

      /* MATLAB Function: '<S1168>/MATLAB Function6' incorporates:
       *  Constant: '<S1168>/Constant13'
       */
      six_plus_si_MATLABFunction6(rtb_Saturation4_m, rtb_DLookupTable_h, 0.05F,
        rtb_Memory11_p, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction6);

      /* Memory: '<S1168>/Memory9' */
      rtb_Memory9_c = six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput_p;

      /* MATLAB Function: '<S1168>/MATLAB Function3' incorporates:
       *  Constant: '<S1168>/Constant10'
       */
      six_plus_si_MATLABFunction3(rtb_Saturation5_e, rtb_DLookupTable_h, 0.05F,
        rtb_Memory9_c, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_k);

      /* MATLAB Function: '<S1168>/MATLAB Function5' incorporates:
       *  Constant: '<S1168>/Constant11'
       */
      /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function5': '<S1180>:1' */
      if (TCS_switch == 0.0F) {
        /* '<S1180>:1:3' */
        /* '<S1180>:1:4' */
        flag_lf = 0.0F;

        /* '<S1180>:1:5' */
        flag_lm = 0.0F;

        /* '<S1180>:1:6' */
        flag_lr = 0.0F;

        /* '<S1180>:1:7' */
        flag_rf = 0.0F;

        /* '<S1180>:1:8' */
        flag_rm = 0.0F;

        /* '<S1180>:1:9' */
        flag_rr = 0.0F;
      } else {
        /* '<S1180>:1:11' */
        flag_lf = (real32_T)
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_g.flag_lf_g;

        /* '<S1180>:1:12' */
        flag_lm = (real32_T)
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction4.flag_lm_g;

        /* '<S1180>:1:13' */
        flag_lr = (real32_T)
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_k.flag_lr_g;

        /* '<S1180>:1:14' */
        flag_rf = (real32_T)
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2_l.flag_rf_k;

        /* '<S1180>:1:15' */
        flag_rm = (real32_T)
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction6.flag_rm_d;

        /* '<S1180>:1:16' */
        flag_rr = (real32_T)
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_k.flag_rr_h;
      }

      /* End of MATLAB Function: '<S1168>/MATLAB Function5' */

      /* If: '<S1183>/If' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem_a;
      rtAction = -1;
      if (flag_lf > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem_a = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S1183>/Subsystem' incorporates:
           *  InitializeConditions for ActionPort: '<S1184>/Action Port'
           */
          /* InitializeConditions for If: '<S1183>/If' incorporates:
           *  InitializeConditions for Memory: '<S1184>/Memory13'
           *  InitializeConditions for Memory: '<S1184>/Memory3'
           *  InitializeConditions for Memory: '<S1184>/Memory4'
           *  InitializeConditions for Memory: '<S1184>/Memory5'
           */
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_j = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_ny = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_o = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_i = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S1183>/Subsystem' */
        }

        /* Outputs for IfAction SubSystem: '<S1183>/Subsystem' incorporates:
         *  ActionPort: '<S1184>/Action Port'
         */
        /* Sum: '<S1184>/Sum' */
        rtb_steer_dem = rtb_DLookupTable_h - rtb_Saturation_a;

        /* Memory: '<S1184>/Memory4' */
        rtb_Product_m = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_j;

        /* Gain: '<S1184>/Gain20' */
        rtb_acc_dem = 2.0F * rtb_Product_m;

        /* Memory: '<S1184>/Memory5' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_ny;

        /* Sum: '<S1184>/Add10' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Saturation2_fh;

        /* Memory: '<S1184>/Memory3' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_o;

        /* Sum: '<S1184>/Subtract1' */
        rtb_Saturation2_fh = rtb_steer_dem - rtb_Saturation2_fh;

        /* Gain: '<S1184>/Gain1' */
        rtb_Saturation2_fh *= 300.0F;

        /* Gain: '<S1184>/Gain3' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S1184>/Add2' */
        rtb_Saturation2_fh = (rtb_Saturation2_fh + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S1184>/Memory13' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_i;

        /* Sum: '<S1184>/Subtract5' */
        rtb_acc_dem += rtb_Saturation2_fh;

        /* Gain: '<S1184>/Gain' */
        trq_pid_lf_adjust = 0.125F * rtb_acc_dem;

        /* Sum: '<S1184>/Add3' */
        rtb_Saturation2_fh = trq_pid_lf_adjust +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* Saturate: '<S1184>/Saturation' */
        if (rtb_Saturation2_fh <= 0.0F) {
          rtb_Saturation2_fh = 0.0F;
        }

        /* End of Saturate: '<S1184>/Saturation' */

        /* DataTypeConversion: '<S1184>/Data Type Conversion' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_oe =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S1184>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_j = rtb_steer_dem;

        /* Update for Memory: '<S1184>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_ny = rtb_Product_m;

        /* Update for Memory: '<S1184>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_o = rtb_steer_dem;

        /* Update for Memory: '<S1184>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_i = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S1183>/Subsystem' */
      }

      /* End of If: '<S1183>/If' */

      /* Switch: '<S1183>/Switch' */
      if (flag_lf > 0.5F) {
        rtb_Gain6_f = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_oe;
      } else {
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;
      }

      /* End of Switch: '<S1183>/Switch' */

      /* If: '<S1183>/If4' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem_b;
      rtAction = -1;
      if (flag_lm > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem_b = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S1183>/Subsystem4' incorporates:
           *  InitializeConditions for ActionPort: '<S1188>/Action Port'
           */
          /* InitializeConditions for If: '<S1183>/If4' incorporates:
           *  InitializeConditions for Memory: '<S1188>/Memory13'
           *  InitializeConditions for Memory: '<S1188>/Memory3'
           *  InitializeConditions for Memory: '<S1188>/Memory4'
           *  InitializeConditions for Memory: '<S1188>/Memory5'
           */
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_dl = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_c = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_h = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_oa = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S1183>/Subsystem4' */
        }

        /* Outputs for IfAction SubSystem: '<S1183>/Subsystem4' incorporates:
         *  ActionPort: '<S1188>/Action Port'
         */
        /* Sum: '<S1188>/Sum' */
        rtb_steer_dem = rtb_DLookupTable_h - rtb_Saturation1_j;

        /* Memory: '<S1188>/Memory4' */
        rtb_Product_m = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_dl;

        /* Gain: '<S1188>/Gain20' */
        rtb_acc_dem = 2.0F * rtb_Product_m;

        /* Memory: '<S1188>/Memory5' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_c;

        /* Sum: '<S1188>/Add10' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Saturation2_fh;

        /* Memory: '<S1188>/Memory3' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_h;

        /* Sum: '<S1188>/Subtract1' */
        rtb_Saturation2_fh = rtb_steer_dem - rtb_Saturation2_fh;

        /* Gain: '<S1188>/Gain1' */
        rtb_Saturation2_fh *= 300.0F;

        /* Gain: '<S1188>/Gain3' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S1188>/Add2' */
        rtb_Saturation2_fh = (rtb_Saturation2_fh + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S1188>/Memory13' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_oa;

        /* Sum: '<S1188>/Subtract5' */
        rtb_acc_dem += rtb_Saturation2_fh;

        /* Gain: '<S1188>/Gain' */
        trq_pid_lm_adjust = 0.125F * rtb_acc_dem;

        /* Sum: '<S1188>/Add3' */
        rtb_Saturation2_fh = trq_pid_lm_adjust +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* Saturate: '<S1188>/Saturation' */
        if (rtb_Saturation2_fh <= 0.0F) {
          rtb_Saturation2_fh = 0.0F;
        }

        /* End of Saturate: '<S1188>/Saturation' */

        /* DataTypeConversion: '<S1188>/Data Type Conversion' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_o =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S1188>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_dl = rtb_steer_dem;

        /* Update for Memory: '<S1188>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_c = rtb_Product_m;

        /* Update for Memory: '<S1188>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_h = rtb_steer_dem;

        /* Update for Memory: '<S1188>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_oa = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S1183>/Subsystem4' */
      }

      /* End of If: '<S1183>/If4' */

      /* Switch: '<S1183>/Switch4' */
      if (flag_lm > 0.5F) {
        rtb_Add2_c = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_o;
      } else {
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;
      }

      /* End of Switch: '<S1183>/Switch4' */

      /* If: '<S1183>/If1' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem_c;
      rtAction = -1;
      if (flag_lr > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem_c = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S1183>/Subsystem1' incorporates:
           *  InitializeConditions for ActionPort: '<S1185>/Action Port'
           */
          /* InitializeConditions for If: '<S1183>/If1' incorporates:
           *  InitializeConditions for Memory: '<S1185>/Memory13'
           *  InitializeConditions for Memory: '<S1185>/Memory3'
           *  InitializeConditions for Memory: '<S1185>/Memory4'
           *  InitializeConditions for Memory: '<S1185>/Memory5'
           */
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_m = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_cd = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_g2 = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_ol = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S1183>/Subsystem1' */
        }

        /* Outputs for IfAction SubSystem: '<S1183>/Subsystem1' incorporates:
         *  ActionPort: '<S1185>/Action Port'
         */
        /* Sum: '<S1185>/Sum' */
        rtb_steer_dem = rtb_DLookupTable_h - rtb_Saturation2_p;

        /* Memory: '<S1185>/Memory4' */
        rtb_Product_m = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_m;

        /* Gain: '<S1185>/Gain20' */
        rtb_acc_dem = 2.0F * rtb_Product_m;

        /* Memory: '<S1185>/Memory5' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_cd;

        /* Sum: '<S1185>/Add10' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Saturation2_fh;

        /* Memory: '<S1185>/Memory3' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_g2;

        /* Sum: '<S1185>/Subtract1' */
        rtb_Saturation2_fh = rtb_steer_dem - rtb_Saturation2_fh;

        /* Gain: '<S1185>/Gain1' */
        rtb_Saturation2_fh *= 300.0F;

        /* Gain: '<S1185>/Gain3' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S1185>/Add2' */
        rtb_Saturation2_fh = (rtb_Saturation2_fh + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S1185>/Memory13' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_ol;

        /* Sum: '<S1185>/Subtract5' */
        rtb_acc_dem += rtb_Saturation2_fh;

        /* Gain: '<S1185>/Gain' */
        trq_pid_lr_adjust = 0.125F * rtb_acc_dem;

        /* Sum: '<S1185>/Add3' */
        rtb_Saturation2_fh = trq_pid_lr_adjust +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* Saturate: '<S1185>/Saturation' */
        if (rtb_Saturation2_fh <= 0.0F) {
          rtb_Saturation2_fh = 0.0F;
        }

        /* End of Saturate: '<S1185>/Saturation' */

        /* DataTypeConversion: '<S1185>/Data Type Conversion' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_n =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S1185>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_m = rtb_steer_dem;

        /* Update for Memory: '<S1185>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_cd = rtb_Product_m;

        /* Update for Memory: '<S1185>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_g2 = rtb_steer_dem;

        /* Update for Memory: '<S1185>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_ol = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S1183>/Subsystem1' */
      }

      /* End of If: '<S1183>/If1' */

      /* Switch: '<S1183>/Switch1' */
      if (flag_lr > 0.5F) {
        rtb_Abs5 = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_n;
      } else {
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;
      }

      /* End of Switch: '<S1183>/Switch1' */

      /* If: '<S1183>/If2' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem_b;
      rtAction = -1;
      if (flag_rf > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem_b = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S1183>/Subsystem2' incorporates:
           *  InitializeConditions for ActionPort: '<S1186>/Action Port'
           */
          /* InitializeConditions for If: '<S1183>/If2' incorporates:
           *  InitializeConditions for Memory: '<S1186>/Memory1'
           *  InitializeConditions for Memory: '<S1186>/Memory15'
           *  InitializeConditions for Memory: '<S1186>/Memory2'
           *  InitializeConditions for Memory: '<S1186>/Memory6'
           */
          six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_mg = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_l = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_h = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_m = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S1183>/Subsystem2' */
        }

        /* Outputs for IfAction SubSystem: '<S1183>/Subsystem2' incorporates:
         *  ActionPort: '<S1186>/Action Port'
         */
        /* Sum: '<S1186>/Sum3' */
        rtb_Product_m = rtb_DLookupTable_h - rtb_Saturation3_l;

        /* Memory: '<S1186>/Memory1' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_mg;

        /* Sum: '<S1186>/Subtract2' */
        rtb_acc_dem = rtb_Product_m - rtb_acc_dem;

        /* Gain: '<S1186>/Gain16' */
        rtb_acc_dem *= 300.0F;

        /* Memory: '<S1186>/Memory2' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_l;

        /* Gain: '<S1186>/Gain18' */
        rtb_steer_dem = 2.0F * rtb_Saturation2_fh;

        /* Memory: '<S1186>/Memory6' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_h;

        /* Sum: '<S1186>/Add9' */
        rtb_steer_dem = (rtb_Product_m - rtb_steer_dem) + rtb_Saturation3_m;

        /* Gain: '<S1186>/Gain19' */
        rtb_steer_dem *= 0.0F;

        /* Sum: '<S1186>/Add11' */
        rtb_acc_dem = (rtb_acc_dem + rtb_Product_m) + rtb_steer_dem;

        /* Memory: '<S1186>/Memory15' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_m;

        /* Sum: '<S1186>/Subtract7' */
        rtb_acc_dem += rtb_Saturation3_m;

        /* Gain: '<S1186>/Gain14' */
        trq_pid_rf_adjust = 0.125F * rtb_acc_dem;

        /* Sum: '<S1186>/Add8' */
        rtb_Saturation3_m = trq_pid_rf_adjust +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* Saturate: '<S1186>/Saturation' */
        if (rtb_Saturation3_m <= 0.0F) {
          rtb_Saturation3_m = 0.0F;
        }

        /* End of Saturate: '<S1186>/Saturation' */

        /* DataTypeConversion: '<S1186>/Data Type Conversion2' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_m =
          rtb_Saturation3_m;

        /* Update for Memory: '<S1186>/Memory1' */
        six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_mg = rtb_Product_m;

        /* Update for Memory: '<S1186>/Memory2' */
        six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_l = rtb_Product_m;

        /* Update for Memory: '<S1186>/Memory6' */
        six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_h =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S1186>/Memory15' */
        six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_m = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S1183>/Subsystem2' */
      }

      /* End of If: '<S1183>/If2' */

      /* Switch: '<S1183>/Switch3' */
      if (flag_rf > 0.5F) {
        rtb_Abs4 = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_m;
      } else {
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;
      }

      /* End of Switch: '<S1183>/Switch3' */

      /* If: '<S1183>/If5' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem_k;
      rtAction = -1;
      if (flag_rm > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem_k = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S1183>/Subsystem5' incorporates:
           *  InitializeConditions for ActionPort: '<S1189>/Action Port'
           */
          /* InitializeConditions for If: '<S1183>/If5' incorporates:
           *  InitializeConditions for Memory: '<S1189>/Memory1'
           *  InitializeConditions for Memory: '<S1189>/Memory15'
           *  InitializeConditions for Memory: '<S1189>/Memory2'
           *  InitializeConditions for Memory: '<S1189>/Memory6'
           */
          six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_o5 = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_nz = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_pi = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_i = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S1183>/Subsystem5' */
        }

        /* Outputs for IfAction SubSystem: '<S1183>/Subsystem5' incorporates:
         *  ActionPort: '<S1189>/Action Port'
         */
        /* Sum: '<S1189>/Sum3' */
        rtb_Saturation2_fh = rtb_DLookupTable_h - rtb_Saturation4_m;

        /* Memory: '<S1189>/Memory1' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_o5;

        /* Sum: '<S1189>/Subtract2' */
        rtb_acc_dem = rtb_Saturation2_fh - rtb_acc_dem;

        /* Gain: '<S1189>/Gain16' */
        rtb_acc_dem *= 300.0F;

        /* Memory: '<S1189>/Memory2' */
        rtb_Gain3_o = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_nz;

        /* Gain: '<S1189>/Gain18' */
        rtb_steer_dem = 2.0F * rtb_Gain3_o;

        /* Memory: '<S1189>/Memory6' */
        rtb_brake_dem = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_pi;

        /* Sum: '<S1189>/Add9' */
        rtb_steer_dem = (rtb_Saturation2_fh - rtb_steer_dem) + rtb_brake_dem;

        /* Gain: '<S1189>/Gain19' */
        rtb_steer_dem *= 0.0F;

        /* Sum: '<S1189>/Add11' */
        rtb_acc_dem = (rtb_acc_dem + rtb_Saturation2_fh) + rtb_steer_dem;

        /* Memory: '<S1189>/Memory15' */
        rtb_brake_dem = six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_i;

        /* Sum: '<S1189>/Subtract7' */
        rtb_acc_dem += rtb_brake_dem;

        /* Gain: '<S1189>/Gain14' */
        trq_pid_rm_adjust = 0.125F * rtb_acc_dem;

        /* Sum: '<S1189>/Add8' */
        rtb_brake_dem = trq_pid_rm_adjust +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* Saturate: '<S1189>/Saturation' */
        if (rtb_brake_dem <= 0.0F) {
          rtb_brake_dem = 0.0F;
        }

        /* End of Saturate: '<S1189>/Saturation' */

        /* DataTypeConversion: '<S1189>/Data Type Conversion2' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_p = rtb_brake_dem;

        /* Update for Memory: '<S1189>/Memory1' */
        six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_o5 =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S1189>/Memory2' */
        six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_nz =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S1189>/Memory6' */
        six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_pi = rtb_Gain3_o;

        /* Update for Memory: '<S1189>/Memory15' */
        six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_i = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S1183>/Subsystem5' */
      }

      /* End of If: '<S1183>/If5' */

      /* Switch: '<S1183>/Switch5' */
      if (flag_rm > 0.5F) {
        rtb_Product_m = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_p;
      } else {
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;
      }

      /* End of Switch: '<S1183>/Switch5' */

      /* If: '<S1183>/If3' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem_c;
      rtAction = -1;
      if (flag_rr > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem_c = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S1183>/Subsystem3' incorporates:
           *  InitializeConditions for ActionPort: '<S1187>/Action Port'
           */
          /* InitializeConditions for If: '<S1183>/If3' incorporates:
           *  InitializeConditions for Memory: '<S1187>/Memory16'
           *  InitializeConditions for Memory: '<S1187>/Memory7'
           *  InitializeConditions for Memory: '<S1187>/Memory8'
           *  InitializeConditions for Memory: '<S1187>/Memory9'
           */
          six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput_a = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput_i = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput_n = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory16_PreviousInput_b = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S1183>/Subsystem3' */
        }

        /* Outputs for IfAction SubSystem: '<S1183>/Subsystem3' incorporates:
         *  ActionPort: '<S1187>/Action Port'
         */
        /* Sum: '<S1187>/Sum2' */
        rtb_steer_dem = rtb_DLookupTable_h - rtb_Saturation5_e;

        /* Memory: '<S1187>/Memory8' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput_a;

        /* Gain: '<S1187>/Gain23' */
        rtb_acc_dem = 2.0F * rtb_Saturation2_fh;

        /* Memory: '<S1187>/Memory9' */
        rtb_Abs = six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput_i;

        /* Sum: '<S1187>/Add12' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Abs;

        /* Memory: '<S1187>/Memory7' */
        rtb_Abs = six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput_n;

        /* Sum: '<S1187>/Subtract3' */
        rtb_Abs = rtb_steer_dem - rtb_Abs;

        /* Gain: '<S1187>/Gain21' */
        rtb_Abs *= 300.0F;

        /* Gain: '<S1187>/Gain24' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S1187>/Add13' */
        rtb_Abs = (rtb_Abs + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S1187>/Memory16' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory16_PreviousInput_b;

        /* Sum: '<S1187>/Subtract8' */
        rtb_acc_dem += rtb_Abs;

        /* Gain: '<S1187>/Gain15' */
        trq_pid_rr_adjust = 0.125F * rtb_acc_dem;

        /* Sum: '<S1187>/Add6' */
        rtb_Abs = trq_pid_rr_adjust +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* Saturate: '<S1187>/Saturation' */
        if (rtb_Abs <= 0.0F) {
          rtb_Abs = 0.0F;
        }

        /* End of Saturate: '<S1187>/Saturation' */

        /* DataTypeConversion: '<S1187>/Data Type Conversion3' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3_a = rtb_Abs;

        /* Update for Memory: '<S1187>/Memory8' */
        six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput_a = rtb_steer_dem;

        /* Update for Memory: '<S1187>/Memory9' */
        six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput_i =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S1187>/Memory7' */
        six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput_n = rtb_steer_dem;

        /* Update for Memory: '<S1187>/Memory16' */
        six_plus_six_AcmsteeringV09__DW.Memory16_PreviousInput_b = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S1183>/Subsystem3' */
      }

      /* End of If: '<S1183>/If3' */

      /* Switch: '<S1183>/Switch2' */
      if (flag_rr > 0.5F) {
        rtb_steer_dem = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3_a;
      } else {
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;
      }

      /* End of Switch: '<S1183>/Switch2' */

      /* MATLAB Function: '<S1168>/MATLAB Function7' */
      /* MATLAB Function 'MainControl/mode_control/forward/forward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function7': '<S1182>:1' */
      if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
          (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:3' */
        /*  0电机滑转===============================================0电机滑转 */
        /* '<S1182>:1:4' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:5' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:6' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:7' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:8' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:9' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:10' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:11' */
        /* '<S1182>:1:12' */
        TCS_mode = 1;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:22' */
        /* 左前轮滑转===================================================1电机滑转 */
        /* '<S1182>:1:23' */
        /* '<S1182>:1:24' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:25' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:26' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:27' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:28' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:29' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:30' */
        /* '<S1182>:1:31' */
        TCS_mode = 2;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:32' */
        /* 左中轮滑转 */
        /* '<S1182>:1:33' */
        /* '<S1182>:1:34' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:35' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:36' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:37' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:38' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:39' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:40' */
        /* '<S1182>:1:41' */
        TCS_mode = 3;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:42' */
        /* 左后轮滑转 */
        /* '<S1182>:1:43' */
        /* '<S1182>:1:44' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:45' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:46' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:47' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:48' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:49' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:50' */
        /* '<S1182>:1:51' */
        TCS_mode = 4;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:53' */
        /* 右前轮滑转 */
        /* '<S1182>:1:54' */
        /* '<S1182>:1:55' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:56' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:57' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:58' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:59' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:60' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:61' */
        /* '<S1182>:1:62' */
        TCS_mode = 5;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:63' */
        /* 右中轮滑转 */
        /* '<S1182>:1:64' */
        /* '<S1182>:1:65' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:66' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:67' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:68' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:69' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:70' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:71' */
        /* '<S1182>:1:72' */
        TCS_mode = 6;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:73' */
        /* 右后轮滑转 */
        /* '<S1182>:1:74' */
        /* '<S1182>:1:75' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:76' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:77' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:78' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:79' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:80' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:81' */
        /* '<S1182>:1:82' */
        TCS_mode = 7;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:93' */
        /* 左前-左中 轮滑转===================================================2电机滑转    左侧 */
        /* '<S1182>:1:94' */
        /* '<S1182>:1:95' */
        /* '<S1182>:1:96' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c);

        /* '<S1182>:1:97' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:98' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:99' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:100' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:101' */
        /* '<S1182>:1:102' */
        TCS_mode = 8;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:103' */
        /* 左前-左后 轮滑转 */
        /* '<S1182>:1:104' */
        /* '<S1182>:1:105' */
        /* '<S1182>:1:106' */
        rtb_Add2_c =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:107' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:108' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:109' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:110' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:111' */
        /* '<S1182>:1:112' */
        TCS_mode = 9;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:113' */
        /* 左中-左后 轮滑转 */
        /* '<S1182>:1:114' */
        /* '<S1182>:1:115' */
        /* '<S1182>:1:116' */
        rtb_Gain6_f =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:117' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:118' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:119' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:120' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:121' */
        /* '<S1182>:1:122' */
        TCS_mode = 10;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:124' */
        /* 右前-右中 轮滑转                        右侧 */
        /* '<S1182>:1:125' */
        /* '<S1182>:1:126' */
        /* '<S1182>:1:127' */
        rtb_steer_dem =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m);

        /* '<S1182>:1:128' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:129' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:130' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:131' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:132' */
        /* '<S1182>:1:133' */
        TCS_mode = 11;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:134' */
        /* 右前-右后 轮滑转 */
        /* '<S1182>:1:135' */
        /* '<S1182>:1:136' */
        /* '<S1182>:1:137' */
        rtb_Product_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:138' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:139' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:140' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:141' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:142' */
        /* '<S1182>:1:143' */
        TCS_mode = 12;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:144' */
        /* 右中-右后 轮滑转 */
        /* '<S1182>:1:145' */
        /* '<S1182>:1:146' */
        /* '<S1182>:1:147' */
        rtb_Abs4 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:148' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:149' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:150' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:151' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:152' */
        /* '<S1182>:1:153' */
        TCS_mode = 13;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:155' */
        /* 左前-右前 轮滑转                 对侧 */
        /* '<S1182>:1:156' */
        /* '<S1182>:1:157' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:158' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:159' */
        /* '<S1182>:1:160' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:161' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:162' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:163' */
        /* '<S1182>:1:164' */
        TCS_mode = 14;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:165' */
        /* 左前-右中 轮滑转 */
        /* '<S1182>:1:166' */
        /* '<S1182>:1:167' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:168' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:169' */
        /* '<S1182>:1:170' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:171' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:172' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:173' */
        /* '<S1182>:1:174' */
        TCS_mode = 15;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:175' */
        /* 左前-右后 轮滑转 */
        /* '<S1182>:1:176' */
        /* '<S1182>:1:177' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:178' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:179' */
        /* '<S1182>:1:180' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:181' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:182' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:183' */
        /* '<S1182>:1:184' */
        TCS_mode = 16;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:186' */
        /* 左中-右前 轮滑转                 对侧 */
        /* '<S1182>:1:187' */
        /* '<S1182>:1:188' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:189' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:190' */
        /* '<S1182>:1:191' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:192' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:193' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:194' */
        /* '<S1182>:1:195' */
        TCS_mode = 17;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:196' */
        /* 左中-右中 轮滑转 */
        /* '<S1182>:1:197' */
        /* '<S1182>:1:198' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:199' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:200' */
        /* '<S1182>:1:201' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:202' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:203' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:204' */
        /* '<S1182>:1:205' */
        TCS_mode = 18;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:206' */
        /* 左中-右后 轮滑转 */
        /* '<S1182>:1:207' */
        /* '<S1182>:1:208' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:209' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:210' */
        /* '<S1182>:1:211' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:212' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:213' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:214' */
        /* '<S1182>:1:215' */
        TCS_mode = 19;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:216' */
        /* 左后-右前 轮滑转                 对侧 */
        /* '<S1182>:1:217' */
        /* '<S1182>:1:218' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:219' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:220' */
        /* '<S1182>:1:221' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:222' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:223' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:224' */
        /* '<S1182>:1:225' */
        TCS_mode = 20;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:226' */
        /* 左后-右中 轮滑转 */
        /* '<S1182>:1:227' */
        /* '<S1182>:1:228' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:229' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:230' */
        /* '<S1182>:1:231' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:232' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:233' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:234' */
        /* '<S1182>:1:235' */
        TCS_mode = 21;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:236' */
        /* 左后-右后 轮滑转 */
        /* '<S1182>:1:237' */
        /* '<S1182>:1:238' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:239' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:240' */
        /* '<S1182>:1:241' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:242' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:243' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:244' */
        /* '<S1182>:1:245' */
        TCS_mode = 22;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:268' */
        /* 左前-左中-左后 轮滑转===================================================3电机滑转    左侧 */
        /* '<S1182>:1:269' */
        /* '<S1182>:1:270' */
        /* '<S1182>:1:271' */
        /* '<S1182>:1:272' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
             rtb_Gain6_f) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
             rtb_Add2_c)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
            rtb_Abs5)) / 3.0F;

        /* '<S1182>:1:273' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
             rtb_Gain6_f) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
             rtb_Add2_c)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
            rtb_Abs5)) / 3.0F;

        /* '<S1182>:1:274' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
             rtb_Gain6_f) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
             rtb_Add2_c)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
            rtb_Abs5)) / 3.0F;

        /* '<S1182>:1:275' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:276' */
        /* '<S1182>:1:277' */
        TCS_mode = 23;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:278' */
        /* 右前-右中-右后 轮滑转                      右侧 */
        /* '<S1182>:1:279' */
        /* '<S1182>:1:280' */
        /* '<S1182>:1:281' */
        /* '<S1182>:1:282' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
             rtb_Abs4) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
             rtb_Product_m)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
            rtb_steer_dem)) / 3.0F;

        /* '<S1182>:1:283' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
             rtb_Abs4) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
             rtb_Product_m)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
            rtb_steer_dem)) / 3.0F;

        /* '<S1182>:1:284' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
             rtb_Abs4) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
             rtb_Product_m)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
            rtb_steer_dem)) / 3.0F;

        /* '<S1182>:1:285' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:286' */
        /* '<S1182>:1:287' */
        TCS_mode = 24;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:289' */
        /* 左前-左中-右前 轮滑转 */
        /* '<S1182>:1:290' */
        /* '<S1182>:1:291' */
        /* '<S1182>:1:292' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c);

        /* '<S1182>:1:293' */
        /* '<S1182>:1:294' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:295' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:296' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:297' */
        /* '<S1182>:1:298' */
        TCS_mode = 25;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:299' */
        /* 左前-左中-右中 轮滑转 */
        /* '<S1182>:1:300' */
        /* '<S1182>:1:301' */
        /* '<S1182>:1:302' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c);

        /* '<S1182>:1:303' */
        /* '<S1182>:1:304' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:305' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:306' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:307' */
        /* '<S1182>:1:308' */
        TCS_mode = 26;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:309' */
        /* 左前-左中-右后 轮滑转 */
        /* '<S1182>:1:310' */
        /* '<S1182>:1:311' */
        /* '<S1182>:1:312' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c);

        /* '<S1182>:1:313' */
        /* '<S1182>:1:314' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:315' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:316' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:317' */
        /* '<S1182>:1:318' */
        TCS_mode = 27;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:320' */
        /* 左前-左后-右前 轮滑转 */
        /* '<S1182>:1:321' */
        /* '<S1182>:1:322' */
        /* '<S1182>:1:323' */
        rtb_Add2_c =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:324' */
        /* '<S1182>:1:325' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:326' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:327' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:328' */
        /* '<S1182>:1:329' */
        TCS_mode = 28;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:330' */
        /* 左前-左后-右中 轮滑转 */
        /* '<S1182>:1:331' */
        /* '<S1182>:1:332' */
        /* '<S1182>:1:333' */
        rtb_Add2_c =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:334' */
        /* '<S1182>:1:335' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:336' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:337' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:338' */
        /* '<S1182>:1:339' */
        TCS_mode = 29;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:340' */
        /* 左前-左后-右后 轮滑转 */
        /* '<S1182>:1:341' */
        /* '<S1182>:1:342' */
        /* '<S1182>:1:343' */
        rtb_Add2_c =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:344' */
        /* '<S1182>:1:345' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:346' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:347' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:348' */
        /* '<S1182>:1:349' */
        TCS_mode = 30;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:351' */
        /* 左中-左后-右前 轮滑转 */
        /* '<S1182>:1:352' */
        /* '<S1182>:1:353' */
        /* '<S1182>:1:354' */
        rtb_Gain6_f =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:355' */
        /* '<S1182>:1:356' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:357' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
           rtb_Abs4) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:358' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:359' */
        /* '<S1182>:1:360' */
        TCS_mode = 31;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:361' */
        /* 左中-左后-右中 轮滑转 */
        /* '<S1182>:1:362' */
        /* '<S1182>:1:363' */
        /* '<S1182>:1:364' */
        rtb_Gain6_f =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:365' */
        /* '<S1182>:1:366' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:367' */
        rtb_steer_dem =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

        /* '<S1182>:1:368' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:369' */
        /* '<S1182>:1:370' */
        TCS_mode = 32;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:371' */
        /* 左中-左后-右后 轮滑转 */
        /* '<S1182>:1:372' */
        /* '<S1182>:1:373' */
        /* '<S1182>:1:374' */
        rtb_Gain6_f =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:375' */
        /* '<S1182>:1:376' */
        rtb_Abs4 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf;

        /* '<S1182>:1:377' */
        rtb_Product_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm;

        /* '<S1182>:1:378' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:379' */
        /* '<S1182>:1:380' */
        TCS_mode = 33;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:382' */
        /* 右前-右中-左前 轮滑转 */
        /* '<S1182>:1:383' */
        /* '<S1182>:1:384' */
        /* '<S1182>:1:385' */
        rtb_steer_dem =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m);

        /* '<S1182>:1:386' */
        /* '<S1182>:1:387' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:388' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:389' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:390' */
        /* '<S1182>:1:391' */
        TCS_mode = 34;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:392' */
        /* 右前-右中-左中 轮滑转 */
        /* '<S1182>:1:393' */
        /* '<S1182>:1:394' */
        /* '<S1182>:1:395' */
        rtb_steer_dem =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m);

        /* '<S1182>:1:396' */
        /* '<S1182>:1:397' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:398' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:399' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:400' */
        /* '<S1182>:1:401' */
        TCS_mode = 35;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:402' */
        /* 右前-右中-左后 轮滑转 */
        /* '<S1182>:1:403' */
        /* '<S1182>:1:404' */
        /* '<S1182>:1:405' */
        rtb_steer_dem =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m);

        /* '<S1182>:1:406' */
        /* '<S1182>:1:407' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:408' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:409' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:410' */
        /* '<S1182>:1:411' */
        TCS_mode = 36;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:413' */
        /* 右前-右后-左前 轮滑转 */
        /* '<S1182>:1:414' */
        /* '<S1182>:1:415' */
        /* '<S1182>:1:416' */
        rtb_Product_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:417' */
        /* '<S1182>:1:418' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:419' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:420' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:421' */
        /* '<S1182>:1:422' */
        TCS_mode = 37;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:423' */
        /* 右前-右后-左中 轮滑转 */
        /* '<S1182>:1:424' */
        /* '<S1182>:1:425' */
        /* '<S1182>:1:426' */
        rtb_Product_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:427' */
        /* '<S1182>:1:428' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:429' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:430' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:431' */
        /* '<S1182>:1:432' */
        TCS_mode = 38;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:433' */
        /* 右前-右后-左后 轮滑转 */
        /* '<S1182>:1:434' */
        /* '<S1182>:1:435' */
        /* '<S1182>:1:436' */
        rtb_Product_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:437' */
        /* '<S1182>:1:438' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:439' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:440' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:441' */
        /* '<S1182>:1:442' */
        TCS_mode = 39;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:444' */
        /* 右中-右后-左前 轮滑转 */
        /* '<S1182>:1:445' */
        /* '<S1182>:1:446' */
        /* '<S1182>:1:447' */
        rtb_Abs4 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:448' */
        /* '<S1182>:1:449' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:450' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
           rtb_Gain6_f) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:451' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:452' */
        /* '<S1182>:1:453' */
        TCS_mode = 40;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:454' */
        /* 右中-右后-左中 轮滑转 */
        /* '<S1182>:1:455' */
        /* '<S1182>:1:456' */
        /* '<S1182>:1:457' */
        rtb_Abs4 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:458' */
        /* '<S1182>:1:459' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:460' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

        /* '<S1182>:1:461' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:462' */
        /* '<S1182>:1:463' */
        TCS_mode = 41;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:464' */
        /* 右中-右后-左后 轮滑转 */
        /* '<S1182>:1:465' */
        /* '<S1182>:1:466' */
        /* '<S1182>:1:467' */
        rtb_Abs4 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:468' */
        /* '<S1182>:1:469' */
        rtb_Gain6_f =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf;

        /* '<S1182>:1:470' */
        rtb_Add2_c =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm;

        /* '<S1182>:1:471' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:472' */
        /* '<S1182>:1:473' */
        TCS_mode = 42;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:495' */
        /* 左前-左中-左后 右前 轮滑转===================================================4电机滑转 */
        /* '<S1182>:1:496' */
        /* '<S1182>:1:497' */
        /* '<S1182>:1:498' */
        /* '<S1182>:1:499' */
        /* '<S1182>:1:500' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
              rtb_Gain6_f) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
              rtb_Add2_c)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
             rtb_Abs5)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4)) / 2.0F;

        /* '<S1182>:1:501' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
              rtb_Gain6_f) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
              rtb_Add2_c)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
             rtb_Abs5)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4)) / 2.0F;

        /* '<S1182>:1:502' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:503' */
        /* '<S1182>:1:504' */
        TCS_mode = 43;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:505' */
        /* 左前-左中-左后 右中 轮滑转 */
        /* '<S1182>:1:506' */
        /* '<S1182>:1:507' */
        /* '<S1182>:1:508' */
        /* '<S1182>:1:509' */
        /* '<S1182>:1:510' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
              rtb_Gain6_f) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
              rtb_Add2_c)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
             rtb_Abs5)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m)) / 2.0F;

        /* '<S1182>:1:511' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
              rtb_Gain6_f) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
              rtb_Add2_c)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
             rtb_Abs5)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m)) / 2.0F;

        /* '<S1182>:1:512' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:513' */
        /* '<S1182>:1:514' */
        TCS_mode = 44;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:515' */
        /* 左前-左中-左后 右后 轮滑转 */
        /* '<S1182>:1:516' */
        /* '<S1182>:1:517' */
        /* '<S1182>:1:518' */
        /* '<S1182>:1:519' */
        /* '<S1182>:1:520' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
              rtb_Gain6_f) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
              rtb_Add2_c)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
             rtb_Abs5)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
            rtb_steer_dem)) / 2.0F;

        /* '<S1182>:1:521' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
              rtb_Gain6_f) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
              rtb_Add2_c)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
             rtb_Abs5)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
            rtb_steer_dem)) / 2.0F;

        /* '<S1182>:1:522' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:523' */
        /* '<S1182>:1:524' */
        TCS_mode = 45;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:526' */
        /* 右前-右中-右后 左前 轮滑转 */
        /* '<S1182>:1:527' */
        /* '<S1182>:1:528' */
        /* '<S1182>:1:529' */
        /* '<S1182>:1:530' */
        /* '<S1182>:1:531' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
              rtb_Abs4) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
              rtb_Product_m)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
             rtb_steer_dem)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f)) / 2.0F;

        /* '<S1182>:1:532' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
              rtb_Abs4) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
              rtb_Product_m)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
             rtb_steer_dem)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f)) / 2.0F;

        /* '<S1182>:1:533' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:534' */
        /* '<S1182>:1:535' */
        TCS_mode = 46;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:536' */
        /* 右前-右中-右后 左中 轮滑转 */
        /* '<S1182>:1:537' */
        /* '<S1182>:1:538' */
        /* '<S1182>:1:539' */
        /* '<S1182>:1:540' */
        /* '<S1182>:1:541' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
              rtb_Abs4) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
              rtb_Product_m)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
             rtb_steer_dem)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c)) / 2.0F;

        /* '<S1182>:1:542' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
              rtb_Abs4) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
              rtb_Product_m)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
             rtb_steer_dem)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c)) / 2.0F;

        /* '<S1182>:1:543' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:544' */
        /* '<S1182>:1:545' */
        TCS_mode = 47;
      } else if ((flag_lf == 0.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:546' */
        /* 右前-右中-右后 左后 轮滑转 */
        /* '<S1182>:1:547' */
        /* '<S1182>:1:548' */
        /* '<S1182>:1:549' */
        /* '<S1182>:1:550' */
        /* '<S1182>:1:551' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
              rtb_Abs4) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
              rtb_Product_m)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
             rtb_steer_dem)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
            rtb_Abs5)) / 2.0F;

        /* '<S1182>:1:552' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
              rtb_Abs4) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
              rtb_Product_m)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
             rtb_steer_dem)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
            rtb_Abs5)) / 2.0F;

        /* '<S1182>:1:553' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:554' */
        /* '<S1182>:1:555' */
        TCS_mode = 48;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:557' */
        /* 左前-左中 右前-右中 轮滑转 */
        /* '<S1182>:1:558' */
        /* '<S1182>:1:559' */
        /* '<S1182>:1:560' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c);

        /* '<S1182>:1:561' */
        /* '<S1182>:1:562' */
        /* '<S1182>:1:563' */
        rtb_steer_dem =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m);

        /* '<S1182>:1:564' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:565' */
        /* '<S1182>:1:566' */
        TCS_mode = 49;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:567' */
        /* 左前-左中 右前-右后 轮滑转 */
        /* '<S1182>:1:568' */
        /* '<S1182>:1:569' */
        /* '<S1182>:1:570' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c);

        /* '<S1182>:1:571' */
        /* '<S1182>:1:572' */
        /* '<S1182>:1:573' */
        rtb_Product_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:574' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:575' */
        /* '<S1182>:1:576' */
        TCS_mode = 50;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:577' */
        /* 左前-左中 右中-右后 轮滑转 */
        /* '<S1182>:1:578' */
        /* '<S1182>:1:579' */
        /* '<S1182>:1:580' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
           rtb_Add2_c);

        /* '<S1182>:1:581' */
        /* '<S1182>:1:582' */
        /* '<S1182>:1:583' */
        rtb_Abs4 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:584' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:585' */
        /* '<S1182>:1:586' */
        TCS_mode = 51;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:588' */
        /* 左前-左后 右前-右中 轮滑转 */
        /* '<S1182>:1:589' */
        /* '<S1182>:1:590' */
        /* '<S1182>:1:591' */
        rtb_Add2_c =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:592' */
        /* '<S1182>:1:593' */
        /* '<S1182>:1:594' */
        rtb_steer_dem =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m);

        /* '<S1182>:1:595' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:596' */
        /* '<S1182>:1:597' */
        TCS_mode = 52;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:598' */
        /* 左前-左后 右前-右后 轮滑转 */
        /* '<S1182>:1:599' */
        /* '<S1182>:1:600' */
        /* '<S1182>:1:601' */
        rtb_Add2_c =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:602' */
        /* '<S1182>:1:603' */
        /* '<S1182>:1:604' */
        rtb_Product_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:605' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:606' */
        /* '<S1182>:1:607' */
        TCS_mode = 53;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:608' */
        /* 左前-左后 右中-右后 轮滑转 */
        /* '<S1182>:1:609' */
        /* '<S1182>:1:610' */
        /* '<S1182>:1:611' */
        rtb_Add2_c =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
            rtb_Gain6_f) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:612' */
        /* '<S1182>:1:613' */
        /* '<S1182>:1:614' */
        rtb_Abs4 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:615' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:616' */
        /* '<S1182>:1:617' */
        TCS_mode = 54;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:619' */
        /* 左中-左后 右前-右中 轮滑转 */
        /* '<S1182>:1:620' */
        /* '<S1182>:1:621' */
        /* '<S1182>:1:622' */
        rtb_Gain6_f =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:623' */
        /* '<S1182>:1:624' */
        /* '<S1182>:1:625' */
        rtb_steer_dem =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
           rtb_Product_m);

        /* '<S1182>:1:626' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:627' */
        /* '<S1182>:1:628' */
        TCS_mode = 55;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:629' */
        /* 左中-左后 右前-右后 轮滑转 */
        /* '<S1182>:1:630' */
        /* '<S1182>:1:631' */
        /* '<S1182>:1:632' */
        rtb_Gain6_f =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:633' */
        /* '<S1182>:1:634' */
        /* '<S1182>:1:635' */
        rtb_Product_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
            rtb_Abs4) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:636' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:637' */
        /* '<S1182>:1:638' */
        TCS_mode = 56;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:639' */
        /* 左中-左后 右中-右后 轮滑转 */
        /* '<S1182>:1:640' */
        /* '<S1182>:1:641' */
        /* '<S1182>:1:642' */
        rtb_Gain6_f =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
           rtb_Abs5);

        /* '<S1182>:1:643' */
        /* '<S1182>:1:644' */
        /* '<S1182>:1:645' */
        rtb_Abs4 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);

        /* '<S1182>:1:646' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:647' */
        /* '<S1182>:1:648' */
        TCS_mode = 57;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 0.0F)) {
        /* '<S1182>:1:666' */
        /* 右后轮不划转===================================================5电机滑转 */
        /* '<S1182>:1:667' */
        /* '<S1182>:1:668' */
        /* '<S1182>:1:669' */
        /* '<S1182>:1:670' */
        /* '<S1182>:1:671' */
        /* '<S1182>:1:672' */
        rtb_steer_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
               rtb_Gain6_f) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
               rtb_Add2_c)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
              rtb_Abs5)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
             rtb_Abs4)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m));

        /* '<S1182>:1:673' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:674' */
        /* '<S1182>:1:675' */
        TCS_mode = 58;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 0.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:676' */
        /* 右中轮不划转 */
        /* '<S1182>:1:677' */
        /* '<S1182>:1:678' */
        /* '<S1182>:1:679' */
        /* '<S1182>:1:680' */
        /* '<S1182>:1:681' */
        /* '<S1182>:1:682' */
        rtb_Product_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
               rtb_Gain6_f) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
               rtb_Add2_c)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
              rtb_Abs5)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
             rtb_Abs4)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
            rtb_steer_dem));

        /* '<S1182>:1:683' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:684' */
        /* '<S1182>:1:685' */
        TCS_mode = 59;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 0.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:686' */
        /* 右前轮不划转 */
        /* '<S1182>:1:687' */
        /* '<S1182>:1:688' */
        /* '<S1182>:1:689' */
        /* '<S1182>:1:690' */
        /* '<S1182>:1:691' */
        /* '<S1182>:1:692' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
               rtb_Gain6_f) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
               rtb_Add2_c)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
              rtb_Abs5)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
             rtb_Product_m)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
            rtb_steer_dem));

        /* '<S1182>:1:693' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:694' */
        /* '<S1182>:1:695' */
        TCS_mode = 60;
      } else if ((flag_lf == 1.0F) && (flag_lm == 1.0F) && (flag_lr == 0.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:696' */
        /* 左后轮不划转===================================================5电机滑转 */
        /* '<S1182>:1:697' */
        /* '<S1182>:1:698' */
        /* '<S1182>:1:699' */
        /* '<S1182>:1:700' */
        /* '<S1182>:1:701' */
        /* '<S1182>:1:702' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
               rtb_Abs4) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
               rtb_Product_m)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
              rtb_steer_dem)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
             rtb_Gain6_f)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
            rtb_Add2_c));

        /* '<S1182>:1:703' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:704' */
        /* '<S1182>:1:705' */
        TCS_mode = 61;
      } else if ((flag_lf == 1.0F) && (flag_lm == 0.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:706' */
        /* 左中轮不划转 */
        /* '<S1182>:1:707' */
        /* '<S1182>:1:708' */
        /* '<S1182>:1:709' */
        /* '<S1182>:1:710' */
        /* '<S1182>:1:711' */
        /* '<S1182>:1:712' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
               rtb_Abs4) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
               rtb_Product_m)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
              rtb_steer_dem)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
             rtb_Gain6_f)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
            rtb_Abs5));

        /* '<S1182>:1:713' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:714' */
        /* '<S1182>:1:715' */
        TCS_mode = 62;
      } else if ((flag_lf == 0.0F) && (flag_lm == 1.0F) && (flag_lr == 1.0F) &&
                 (flag_rf == 1.0F) && (flag_rm == 1.0F) && (flag_rr == 1.0F)) {
        /* '<S1182>:1:716' */
        /* 左前轮不划转 */
        /* '<S1182>:1:717' */
        /* '<S1182>:1:718' */
        /* '<S1182>:1:719' */
        /* '<S1182>:1:720' */
        /* '<S1182>:1:721' */
        /* '<S1182>:1:722' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
               rtb_Abs4) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
               rtb_Product_m)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
              rtb_steer_dem)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
             rtb_Add2_c)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
            rtb_Abs5));

        /* '<S1182>:1:723' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:724' */
        /* '<S1182>:1:725' */
        TCS_mode = 63;
      } else {
        /*      flag_lf==1 && flag_lm==1 && flag_lr==1 && flag_rf==1 && flag_rm==1 && flag_rr==1 %===================================================6电机滑转 */
        /* '<S1182>:1:741' */
        /* '<S1182>:1:742' */
        /* '<S1182>:1:743' */
        /* '<S1182>:1:744' */
        /* '<S1182>:1:745' */
        /* '<S1182>:1:746' */
        /* '<S1182>:1:747' */
        rtb_acc_dem =
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf -
               rtb_Gain6_f) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm -
               rtb_Add2_c)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr -
              rtb_Abs5)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf -
             rtb_Abs4)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm -
            rtb_Product_m)) -
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr -
           rtb_steer_dem);
        if (rtb_acc_dem >= 0.0F) {
          /* '<S1182>:1:748' */
          /* '<S1182>:1:749' */
          rtb_Abs4 -= rtb_acc_dem / 3.0F;

          /* '<S1182>:1:750' */
          rtb_Product_m -= rtb_acc_dem / 3.0F;

          /* '<S1182>:1:751' */
          rtb_steer_dem -= rtb_acc_dem / 3.0F;
        } else {
          /* '<S1182>:1:753' */
          rtb_Gain6_f += rtb_acc_dem / 3.0F;

          /* '<S1182>:1:754' */
          rtb_Add2_c += rtb_acc_dem / 3.0F;

          /* '<S1182>:1:755' */
          rtb_Abs5 += rtb_acc_dem / 3.0F;
        }

        /* '<S1182>:1:757' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.bra_pre_l +
          brake_dem;

        /* '<S1182>:1:758' */
        /* '<S1182>:1:759' */
        TCS_mode = 64;
      }

      /* '<S1182>:1:764' */
      /* '<S1182>:1:765' */
      /* '<S1182>:1:766' */
      /* '<S1182>:1:767' */
      /* '<S1182>:1:768' */
      /* '<S1182>:1:769' */
      /* '<S1182>:1:770' */
      /* '<S1182>:1:771' */
      trq_out_lf_forward = rtb_Gain6_f;
      trq_out_lm_forward = rtb_Add2_c;
      trq_out_lr_forward = rtb_Abs5;
      trq_out_rf_forward = rtb_Abs4;
      trq_out_rm_forward = rtb_Product_m;
      trq_out_rr_forward = rtb_steer_dem;

      /* End of MATLAB Function: '<S1168>/MATLAB Function7' */

      /* Saturate: '<S1168>/Saturation4' */
      if (rtb_acc_dem > 100.0F) {
        rtb_steer_dem = 100.0F;
      } else if (rtb_acc_dem < 0.0F) {
        rtb_steer_dem = 0.0F;
      } else {
        rtb_steer_dem = rtb_acc_dem;
      }

      /* End of Saturate: '<S1168>/Saturation4' */

      /* Lookup_n-D: '<S1168>/1-D Lookup Table1' */
      rtb_steer_dem = look1_iflf_binlx(rtb_steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled46,
        six_plus_six_Acmsteering_ConstP.pooled45, 1U);

      /* Sum: '<S1168>/Add' */
      trq_out_l_forward = (trq_out_lf_forward + trq_out_lm_forward) +
        trq_out_lr_forward;

      /* Sum: '<S1168>/Add1' */
      trq_out_r_forward = (trq_out_rf_forward + trq_out_rm_forward) +
        trq_out_rr_forward;

      /* Sum: '<S1168>/Add2' */
      trq_dem_l_forward =
        (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lf +
         six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lm) +
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_lr;

      /* Sum: '<S1168>/Add3' */
      trq_dem_r_forward =
        (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rf +
         six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rm) +
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_o.trq_dem_rr;

      /* Gain: '<S1168>/Gain' */
      rtb_Abs = 0.5F * rtb_Gain5_d;

      /* Gain: '<S1168>/Gain1' */
      rtb_acc_dem = -rtb_Gain5_d;

      /* Memory: '<S1168>/Memory4' */
      rtb_Memory4_a2 = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_bw;

      /* MATLAB Function: '<S1168>/HeartBeat' */
      six_plus_six_Acms_HeartBeat(rtb_Memory4_a2,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_l);

      /* Memory: '<S1168>/Memory5' */
      rtb_Memory5_f = six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_fg;

      /* MATLAB Function: '<S1168>/HeartBeat1' */
      six_plus_six_Acms_HeartBeat(rtb_Memory5_f,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_c);

      /* Memory: '<S1168>/Memory1' */
      rtb_Memory1_a = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_m;

      /* MATLAB Function: '<S1168>/HeartBeat2' */
      six_plus_six_Acms_HeartBeat(rtb_Memory1_a,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_k);

      /* Memory: '<S1168>/Memory2' */
      rtb_Memory2_h = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_b;

      /* MATLAB Function: '<S1168>/HeartBeat3' */
      six_plus_six_Acms_HeartBeat(rtb_Memory2_h,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_h);

      /* Memory: '<S1168>/Memory3' */
      rtb_Memory3_iu = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_b;

      /* MATLAB Function: '<S1168>/HeartBeat4' */
      six_plus_six_Acms_HeartBeat(rtb_Memory3_iu,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_m);

      /* Memory: '<S1168>/Memory6' */
      rtb_Memory6_j = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_ll;

      /* MATLAB Function: '<S1168>/HeartBeat5' */
      six_plus_six_Acms_HeartBeat(rtb_Memory6_j,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_p);

      /* Saturate: '<S1168>/Saturation' */
      rtb_Add2_c = trq_out_lf_forward;
      if (rtb_Add2_c > 70.5F) {
        rtb_Add2_c = 70.5F;
      } else {
        if (rtb_Add2_c < -70.5F) {
          rtb_Add2_c = -70.5F;
        }
      }

      /* End of Saturate: '<S1168>/Saturation' */

      /* Saturate: '<S1168>/Saturation1' */
      rtb_Gain6_f = trq_out_lr_forward;
      if (rtb_Gain6_f > 70.5F) {
        rtb_Gain6_f = 70.5F;
      } else {
        if (rtb_Gain6_f < -70.5F) {
          rtb_Gain6_f = -70.5F;
        }
      }

      /* End of Saturate: '<S1168>/Saturation1' */

      /* Saturate: '<S1168>/Saturation10' */
      if (rtb_acc_dem > 400000.0F) {
        rtb_Abs4 = 400000.0F;
      } else if (rtb_acc_dem < -400000.0F) {
        rtb_Abs4 = -400000.0F;
      } else {
        rtb_Abs4 = rtb_acc_dem;
      }

      /* End of Saturate: '<S1168>/Saturation10' */

      /* Saturate: '<S1168>/Saturation11' */
      if (rtb_steer_dem > 750000.0F) {
        rtb_Saturation2_fh = 750000.0F;
      } else if (rtb_steer_dem < -140000.0F) {
        rtb_Saturation2_fh = -140000.0F;
      } else {
        rtb_Saturation2_fh = rtb_steer_dem;
      }

      /* End of Saturate: '<S1168>/Saturation11' */

      /* Saturate: '<S1168>/Saturation2' */
      rtb_Saturation3_m = trq_out_rf_forward;
      if (rtb_Saturation3_m > 70.5F) {
        rtb_Saturation3_m = 70.5F;
      } else {
        if (rtb_Saturation3_m < -70.5F) {
          rtb_Saturation3_m = -70.5F;
        }
      }

      /* End of Saturate: '<S1168>/Saturation2' */

      /* Saturate: '<S1168>/Saturation3' */
      rtb_Product_m = trq_out_rr_forward;
      if (rtb_Product_m > 70.5F) {
        rtb_Product_m = 70.5F;
      } else {
        if (rtb_Product_m < -70.5F) {
          rtb_Product_m = -70.5F;
        }
      }

      /* End of Saturate: '<S1168>/Saturation3' */

      /* Saturate: '<S1168>/Saturation6' */
      rtb_Gain3_o = trq_out_lm_forward;
      if (rtb_Gain3_o > 70.5F) {
        rtb_Gain3_o = 70.5F;
      } else {
        if (rtb_Gain3_o < -70.5F) {
          rtb_Gain3_o = -70.5F;
        }
      }

      /* End of Saturate: '<S1168>/Saturation6' */

      /* Saturate: '<S1168>/Saturation7' */
      rtb_brake_dem = trq_out_rm_forward;
      if (rtb_brake_dem > 70.5F) {
        rtb_brake_dem = 70.5F;
      } else {
        if (rtb_brake_dem < -70.5F) {
          rtb_brake_dem = -70.5F;
        }
      }

      /* End of Saturate: '<S1168>/Saturation7' */

      /* Saturate: '<S1168>/Saturation8' */
      if (rtb_Gain5_d > 400000.0F) {
        rtb_steer_dem = 400000.0F;
      } else if (rtb_Gain5_d < -400000.0F) {
        rtb_steer_dem = -400000.0F;
      } else {
        rtb_steer_dem = rtb_Gain5_d;
      }

      /* End of Saturate: '<S1168>/Saturation8' */

      /* Saturate: '<S1168>/Saturation9' */
      if (rtb_Abs > 400000.0F) {
        rtb_acc_dem = 400000.0F;
      } else if (rtb_Abs < -400000.0F) {
        rtb_acc_dem = -400000.0F;
      } else {
        rtb_acc_dem = rtb_Abs;
      }

      /* End of Saturate: '<S1168>/Saturation9' */

      /* Sum: '<S1168>/Subtract' */
      trq_adjust_l_forward = trq_dem_l_forward - trq_out_l_forward;

      /* Sum: '<S1168>/Subtract1' */
      trq_adjust_r_forward = trq_dem_r_forward - trq_out_r_forward;

      /* Update for Memory: '<S1168>/Memory' */
      six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_nq =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_g.flag_lf_g;

      /* Update for Memory: '<S1168>/Memory10' */
      six_plus_six_AcmsteeringV09__DW.Memory10_PreviousInput_m =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction4.flag_lm_g;

      /* Update for Memory: '<S1168>/Memory7' */
      six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput_i =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_k.flag_lr_g;

      /* Update for Memory: '<S1168>/Memory8' */
      six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput_d =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2_l.flag_rf_k;

      /* Update for Memory: '<S1168>/Memory11' */
      six_plus_six_AcmsteeringV09__DW.Memory11_PreviousInput_d =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction6.flag_rm_d;

      /* Update for Memory: '<S1168>/Memory9' */
      six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput_p =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_k.flag_rr_h;

      /* Update for Memory: '<S1168>/Memory4' */
      six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_bw =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_l.life;

      /* Update for Memory: '<S1168>/Memory5' */
      six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_fg =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_c.life;

      /* Update for Memory: '<S1168>/Memory1' */
      six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_m =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_k.life;

      /* Update for Memory: '<S1168>/Memory2' */
      six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_b =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_h.life;

      /* Update for Memory: '<S1168>/Memory3' */
      six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_b =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_m.life;

      /* Update for Memory: '<S1168>/Memory6' */
      six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_ll =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_p.life;

      /* End of Outputs for SubSystem: '<S1159>/直行' */
      /* End of Outputs for SubSystem: '<S1031>/直行TCS' */

      /* SignalConversion: '<S880>/OutportBufferForforward_dem' incorporates:
       *  Constant: '<S1168>/SpdSet_dem'
       *  Constant: '<S1168>/SpdSet_dem1'
       *  Constant: '<S1168>/SpdSet_dem2'
       *  Constant: '<S1168>/SpdSet_dem3'
       *  Constant: '<S1168>/SpdSet_dem4'
       *  Constant: '<S1168>/SpdSet_dem5'
       *  Constant: '<S1168>/mot_enable1'
       *  Constant: '<S1168>/mot_enable2'
       *  Constant: '<S1168>/mot_enable3'
       *  Constant: '<S1168>/mot_enable4'
       *  Constant: '<S1168>/mot_enable5'
       *  Constant: '<S1168>/mot_enable6'
       *  Constant: '<S1168>/mot_gear'
       *  Constant: '<S1168>/mot_gear1'
       *  Constant: '<S1168>/mot_gear2'
       *  Constant: '<S1168>/mot_gear3'
       *  Constant: '<S1168>/mot_gear4'
       *  Constant: '<S1168>/mot_gear5'
       *  Constant: '<S1168>/mot_mode'
       *  Constant: '<S1168>/mot_mode1'
       *  Constant: '<S1168>/mot_mode2'
       *  Constant: '<S1168>/mot_mode3'
       *  Constant: '<S1168>/mot_mode4'
       *  Constant: '<S1168>/mot_mode5'
       */
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[0] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[1] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[2] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[3] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[4] =
        rtb_Add2_c;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[5] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_l.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[6] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[7] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[8] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[9] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[10] =
        rtb_Gain3_o;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[11] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_h.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[12] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[13] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[14] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[15] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[16] =
        rtb_Gain6_f;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[17] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_c.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[18] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[19] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[20] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[21] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[22] =
        rtb_Saturation3_m;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[23] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_k.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[24] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[25] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[26] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[27] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[28] =
        rtb_brake_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[29] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_m.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[30] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[31] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[32] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[33] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[34] =
        rtb_Product_m;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[35] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_p.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[36] =
        rtb_steer_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[37] =
        rtb_acc_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[38] =
        rtb_Abs4;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[39] =
        rtb_Saturation2_fh;

      /* Outputs for Atomic SubSystem: '<S880>/目标转向力矩确定模块' */
      six_plus_six_AcmsteeringV_u(rtb_Abs15_g, rtb_Abs16_n, rtb_Abs17_g,
        rtb_Abs18_p, rtb_Abs21_a, rtb_Abs22_m);

      /* End of Outputs for SubSystem: '<S880>/目标转向力矩确定模块' */

      /* End of Outputs for SubSystem: '<S878>/Drive' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S878>/Brake' incorporates:
       *  ActionPort: '<S879>/Action Port'
       */
      /* Lookup_n-D: '<S879>/1-D Lookup Table1' */
      rtb_Add2_c = look1_iflf_binlx(six_plus_six_AcmsteeringV09_m_B.steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled41,
        six_plus_six_Acmsteering_ConstP.pooled40, 2U);

      /* Lookup_n-D: '<S879>/1-D Lookup Table2' */
      rtb_Gain6_f = look1_iflf_binlx(brake_dem,
        six_plus_six_Acmsteering_ConstP.pooled46,
        six_plus_six_Acmsteering_ConstP.pooled45, 1U);

      /* Abs: '<S879>/Abs1' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[32];
      if (rtb_y < 0.0) {
        rtb_Abs1_p = (real32_T)-rtb_y;
      } else {
        rtb_Abs1_p = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs1' */

      /* Abs: '<S879>/Abs10' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[89];
      if (rtb_y < 0.0) {
        rtb_Abs10_p = (real32_T)-rtb_y;
      } else {
        rtb_Abs10_p = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs10' */

      /* Abs: '<S879>/Abs11' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[194];
      if (rtb_y < 0.0) {
        rtb_Abs11_e = (real32_T)-rtb_y;
      } else {
        rtb_Abs11_e = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs11' */

      /* Abs: '<S879>/Abs12' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[124];
      if (rtb_y < 0.0) {
        rtb_Abs12_f = (real32_T)-rtb_y;
      } else {
        rtb_Abs12_f = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs12' */

      /* Abs: '<S879>/Abs13' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[54];
      if (rtb_y < 0.0) {
        rtb_Abs13_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs13_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs13' */

      /* Abs: '<S879>/Abs14' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Abs14_l = (real32_T)-rtb_y;
      } else {
        rtb_Abs14_l = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs14' */

      /* Abs: '<S879>/Abs15' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs15_h = (real32_T)-rtb_y;
      } else {
        rtb_Abs15_h = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs15' */

      /* Abs: '<S879>/Abs16' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs16_o = (real32_T)-rtb_y;
      } else {
        rtb_Abs16_o = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs16' */

      /* Abs: '<S879>/Abs17' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs17_c = (real32_T)-rtb_y;
      } else {
        rtb_Abs17_c = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs17' */

      /* Abs: '<S879>/Abs18' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs18_b = (real32_T)-rtb_y;
      } else {
        rtb_Abs18_b = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs18' */

      /* Abs: '<S879>/Abs19' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs19_a = (real32_T)-rtb_y;
      } else {
        rtb_Abs19_a = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs19' */

      /* Abs: '<S879>/Abs2' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[50];
      if (rtb_y < 0.0) {
        rtb_Abs2_p = (real32_T)-rtb_y;
      } else {
        rtb_Abs2_p = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs2' */

      /* Abs: '<S879>/Abs3' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[229];
      if (rtb_y < 0.0) {
        rtb_Abs3_l = (real32_T)-rtb_y;
      } else {
        rtb_Abs3_l = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs3' */

      /* Abs: '<S879>/Abs4' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[159];
      if (rtb_y < 0.0) {
        rtb_Abs4_i = (real32_T)-rtb_y;
      } else {
        rtb_Abs4_i = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs4' */

      /* Abs: '<S879>/Abs5' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[14];
      if (rtb_y < 0.0) {
        rtb_Abs5_fi = (real32_T)-rtb_y;
      } else {
        rtb_Abs5_fi = (real32_T)rtb_y;
      }

      /* End of Abs: '<S879>/Abs5' */

      /* Gain: '<S879>/Gain2' */
      rtb_acc_dem = 0.01F * brake_dem;

      /* Product: '<S879>/Product' incorporates:
       *  Constant: '<S879>/Constant4'
       */
      rtb_acc_dem *= 5020.0F;

      /* DataTypeConversion: '<S879>/Data Type Conversion1' */
      rtb_y = rtb_acc_dem;

      /* Gain: '<S879>/Gain' */
      rtb_Gain_a = 0.16666666666666666 * rtb_y;

      /* Gain: '<S879>/Gain1' */
      rtb_acc_dem = 0.5F * rtb_Add2_c;

      /* Gain: '<S879>/Gain3' */
      rtb_steer_dem = -rtb_Add2_c;

      /* Memory: '<S879>/Memory4' */
      rtb_Memory4_a = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_bi;

      /* MATLAB Function: '<S879>/HeartBeat' */
      six_plus_six_Acms_HeartBeat(rtb_Memory4_a,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_p);

      /* Memory: '<S879>/Memory5' */
      rtb_Memory5_b = six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_ia;

      /* MATLAB Function: '<S879>/HeartBeat1' */
      six_plus_six_Acms_HeartBeat(rtb_Memory5_b,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_o);

      /* Memory: '<S879>/Memory1' */
      rtb_Memory1_fu = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_o0;

      /* MATLAB Function: '<S879>/HeartBeat2' */
      six_plus_six_Acms_HeartBeat(rtb_Memory1_fu,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_o);

      /* Memory: '<S879>/Memory3' */
      rtb_Memory3_i = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_aa;

      /* MATLAB Function: '<S879>/HeartBeat3' */
      six_plus_six_Acms_HeartBeat(rtb_Memory3_i,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_c);

      /* Memory: '<S879>/Memory2' */
      rtb_Memory2_f = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_f;

      /* MATLAB Function: '<S879>/HeartBeat4' */
      six_plus_six_Acms_HeartBeat(rtb_Memory2_f,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_l);

      /* Memory: '<S879>/Memory6' */
      rtb_Memory6_h1 = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_o;

      /* MATLAB Function: '<S879>/HeartBeat5' */
      six_plus_six_Acms_HeartBeat(rtb_Memory6_h1,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_k);

      /* Saturate: '<S879>/Saturation8' */
      if (rtb_Add2_c > 400000.0F) {
        rtb_Add2_c = 400000.0F;
      } else {
        if (rtb_Add2_c < -400000.0F) {
          rtb_Add2_c = -400000.0F;
        }
      }

      /* End of Saturate: '<S879>/Saturation8' */

      /* Saturate: '<S879>/Saturation9' */
      if (rtb_acc_dem > 400000.0F) {
        rtb_acc_dem = 400000.0F;
      } else {
        if (rtb_acc_dem < -400000.0F) {
          rtb_acc_dem = -400000.0F;
        }
      }

      /* End of Saturate: '<S879>/Saturation9' */

      /* Saturate: '<S879>/Saturation10' */
      if (rtb_steer_dem > 400000.0F) {
        rtb_steer_dem = 400000.0F;
      } else {
        if (rtb_steer_dem < -400000.0F) {
          rtb_steer_dem = -400000.0F;
        }
      }

      /* End of Saturate: '<S879>/Saturation10' */

      /* Saturate: '<S879>/Saturation11' */
      if (rtb_Gain6_f > 750000.0F) {
        rtb_Gain6_f = 750000.0F;
      } else {
        if (rtb_Gain6_f < -140000.0F) {
          rtb_Gain6_f = -140000.0F;
        }
      }

      /* End of Saturate: '<S879>/Saturation11' */

      /* SignalConversion: '<S879>/OutportBufferForforward_dem' incorporates:
       *  Constant: '<S879>/SpdSet_dem'
       *  Constant: '<S879>/SpdSet_dem1'
       *  Constant: '<S879>/SpdSet_dem2'
       *  Constant: '<S879>/SpdSet_dem3'
       *  Constant: '<S879>/SpdSet_dem4'
       *  Constant: '<S879>/SpdSet_dem5'
       *  Constant: '<S879>/mot_enable1'
       *  Constant: '<S879>/mot_enable2'
       *  Constant: '<S879>/mot_enable3'
       *  Constant: '<S879>/mot_enable4'
       *  Constant: '<S879>/mot_enable5'
       *  Constant: '<S879>/mot_enable6'
       *  Constant: '<S879>/mot_gear'
       *  Constant: '<S879>/mot_gear1'
       *  Constant: '<S879>/mot_gear2'
       *  Constant: '<S879>/mot_gear3'
       *  Constant: '<S879>/mot_gear4'
       *  Constant: '<S879>/mot_gear5'
       *  Constant: '<S879>/mot_mode'
       *  Constant: '<S879>/mot_mode1'
       *  Constant: '<S879>/mot_mode2'
       *  Constant: '<S879>/mot_mode3'
       *  Constant: '<S879>/mot_mode4'
       *  Constant: '<S879>/mot_mode5'
       */
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[0] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[1] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[2] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[3] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[4] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[5] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_p.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[6] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[7] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[8] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[9] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[10] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[11] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_c.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[12] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[13] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[14] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[15] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[16] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[17] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_o.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[18] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[19] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[20] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[21] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[22] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[23] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_o.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[24] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[25] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[26] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[27] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[28] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[29] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_l.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[30] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[31] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[32] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[33] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[34] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[35] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_k.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[36] =
        rtb_Add2_c;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[37] =
        rtb_acc_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[38] =
        rtb_steer_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[39] =
        rtb_Gain6_f;

      /* RelationalOperator: '<S896>/Compare' incorporates:
       *  Constant: '<S896>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[244] == 1.0);

      /* RelationalOperator: '<S897>/Compare' incorporates:
       *  Constant: '<S897>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[245] == 1.0);

      /* RelationalOperator: '<S898>/Compare' incorporates:
       *  Constant: '<S898>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[254] == 1.0);

      /* RelationalOperator: '<S899>/Compare' incorporates:
       *  Constant: '<S899>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[255] == 1.0);

      /* RelationalOperator: '<S900>/Compare' incorporates:
       *  Constant: '<S900>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[256] == 1.0);

      /* RelationalOperator: '<S901>/Compare' incorporates:
       *  Constant: '<S901>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[257] == 1.0);

      /* RelationalOperator: '<S902>/Compare' incorporates:
       *  Constant: '<S902>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[258] == 1.0);

      /* RelationalOperator: '<S903>/Compare' incorporates:
       *  Constant: '<S903>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[259] == 1.0);

      /* RelationalOperator: '<S904>/Compare' incorporates:
       *  Constant: '<S904>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[260] == 1.0);

      /* RelationalOperator: '<S905>/Compare' incorporates:
       *  Constant: '<S905>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[261] == 1.0);

      /* RelationalOperator: '<S906>/Compare' incorporates:
       *  Constant: '<S906>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[262] == 1.0);

      /* RelationalOperator: '<S907>/Compare' incorporates:
       *  Constant: '<S907>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[263] == 1.0);

      /* RelationalOperator: '<S908>/Compare' incorporates:
       *  Constant: '<S908>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[246] == 1.0);

      /* RelationalOperator: '<S909>/Compare' incorporates:
       *  Constant: '<S909>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[247] == 1.0);

      /* RelationalOperator: '<S910>/Compare' incorporates:
       *  Constant: '<S910>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[248] == 1.0);

      /* RelationalOperator: '<S911>/Compare' incorporates:
       *  Constant: '<S911>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[249] == 1.0);

      /* RelationalOperator: '<S912>/Compare' incorporates:
       *  Constant: '<S912>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[250] == 1.0);

      /* RelationalOperator: '<S913>/Compare' incorporates:
       *  Constant: '<S913>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[251] == 1.0);

      /* RelationalOperator: '<S914>/Compare' incorporates:
       *  Constant: '<S914>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[252] == 1.0);

      /* RelationalOperator: '<S915>/Compare' incorporates:
       *  Constant: '<S915>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[253] == 1.0);

      /* Logic: '<S888>/Logical Operator' */
      rtb_LogicalOperator_an = (rtb_Compare || rtb_Compare_ak || rtb_Compare_pb ||
        rtb_Compare_kt || rtb_Compare_jl || rtb_Compare_kd || rtb_Compare_d1 ||
        rtb_Compare_kf2 || rtb_Compare_c || rtb_Compare_ci || Compare ||
        Compare_p || rtb_Compare_i3 || rtb_Compare_gb || rtb_Compare_hb ||
        rtb_Compare_fd || rtb_Compare_mr || rtb_Compare_op || rtb_Compare_h1 ||
        rtb_Compare_b4);

      /* Lookup_n-D: '<S889>/mot_map' */
      rtb_mot_map_g = look1_iflf_binlx(rtb_Abs14_l,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S889>/mot_map4' */
      rtb_mot_map4_p = look1_iflf_binlx(rtb_Abs15_h,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S889>/mot_map1' */
      rtb_mot_map1_o = look1_iflf_binlx(rtb_Abs16_o,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S889>/mot_map2' */
      rtb_mot_map2_n = look1_iflf_binlx(rtb_Abs17_c,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S889>/mot_map5' */
      rtb_mot_map5_b = look1_iflf_binlx(rtb_Abs18_b,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S889>/mot_map3' */
      rtb_mot_map3_o = look1_iflf_binlx(rtb_Abs19_a,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* RelationalOperator: '<S916>/Compare' incorporates:
       *  Constant: '<S916>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[174] == 1.0);

      /* RelationalOperator: '<S917>/Compare' incorporates:
       *  Constant: '<S917>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[175] == 1.0);

      /* RelationalOperator: '<S918>/Compare' incorporates:
       *  Constant: '<S918>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[184] == 1.0);

      /* RelationalOperator: '<S919>/Compare' incorporates:
       *  Constant: '<S919>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[185] == 1.0);

      /* RelationalOperator: '<S920>/Compare' incorporates:
       *  Constant: '<S920>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[186] == 1.0);

      /* RelationalOperator: '<S921>/Compare' incorporates:
       *  Constant: '<S921>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[187] == 1.0);

      /* RelationalOperator: '<S922>/Compare' incorporates:
       *  Constant: '<S922>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[188] == 1.0);

      /* RelationalOperator: '<S923>/Compare' incorporates:
       *  Constant: '<S923>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[189] == 1.0);

      /* RelationalOperator: '<S924>/Compare' incorporates:
       *  Constant: '<S924>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[190] == 1.0);

      /* RelationalOperator: '<S925>/Compare' incorporates:
       *  Constant: '<S925>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[191] == 1.0);

      /* RelationalOperator: '<S926>/Compare' incorporates:
       *  Constant: '<S926>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[192] == 1.0);

      /* RelationalOperator: '<S927>/Compare' incorporates:
       *  Constant: '<S927>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[193] == 1.0);

      /* RelationalOperator: '<S928>/Compare' incorporates:
       *  Constant: '<S928>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[176] == 1.0);

      /* RelationalOperator: '<S929>/Compare' incorporates:
       *  Constant: '<S929>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[177] == 1.0);

      /* RelationalOperator: '<S930>/Compare' incorporates:
       *  Constant: '<S930>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[178] == 1.0);

      /* RelationalOperator: '<S931>/Compare' incorporates:
       *  Constant: '<S931>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[179] == 1.0);

      /* RelationalOperator: '<S932>/Compare' incorporates:
       *  Constant: '<S932>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[180] == 1.0);

      /* RelationalOperator: '<S933>/Compare' incorporates:
       *  Constant: '<S933>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[181] == 1.0);

      /* RelationalOperator: '<S934>/Compare' incorporates:
       *  Constant: '<S934>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[182] == 1.0);

      /* RelationalOperator: '<S935>/Compare' incorporates:
       *  Constant: '<S935>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[183] == 1.0);

      /* Logic: '<S890>/Logical Operator' */
      rtb_LogicalOperator_gi = (rtb_Compare_ci || rtb_Compare_c ||
        rtb_Compare_fd || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 ||
        Compare_p || Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2
        || rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S936>/Compare' incorporates:
       *  Constant: '<S936>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[104] == 1.0);

      /* RelationalOperator: '<S937>/Compare' incorporates:
       *  Constant: '<S937>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[105] == 1.0);

      /* RelationalOperator: '<S938>/Compare' incorporates:
       *  Constant: '<S938>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[114] == 1.0);

      /* RelationalOperator: '<S939>/Compare' incorporates:
       *  Constant: '<S939>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[115] == 1.0);

      /* RelationalOperator: '<S940>/Compare' incorporates:
       *  Constant: '<S940>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[116] == 1.0);

      /* RelationalOperator: '<S941>/Compare' incorporates:
       *  Constant: '<S941>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[117] == 1.0);

      /* RelationalOperator: '<S942>/Compare' incorporates:
       *  Constant: '<S942>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[118] == 1.0);

      /* RelationalOperator: '<S943>/Compare' incorporates:
       *  Constant: '<S943>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[119] == 1.0);

      /* RelationalOperator: '<S944>/Compare' incorporates:
       *  Constant: '<S944>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[120] == 1.0);

      /* RelationalOperator: '<S945>/Compare' incorporates:
       *  Constant: '<S945>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[121] == 1.0);

      /* RelationalOperator: '<S946>/Compare' incorporates:
       *  Constant: '<S946>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[122] == 1.0);

      /* RelationalOperator: '<S947>/Compare' incorporates:
       *  Constant: '<S947>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[123] == 1.0);

      /* RelationalOperator: '<S948>/Compare' incorporates:
       *  Constant: '<S948>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[106] == 1.0);

      /* RelationalOperator: '<S949>/Compare' incorporates:
       *  Constant: '<S949>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[107] == 1.0);

      /* RelationalOperator: '<S950>/Compare' incorporates:
       *  Constant: '<S950>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[108] == 1.0);

      /* RelationalOperator: '<S951>/Compare' incorporates:
       *  Constant: '<S951>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[109] == 1.0);

      /* RelationalOperator: '<S952>/Compare' incorporates:
       *  Constant: '<S952>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[110] == 1.0);

      /* RelationalOperator: '<S953>/Compare' incorporates:
       *  Constant: '<S953>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[111] == 1.0);

      /* RelationalOperator: '<S954>/Compare' incorporates:
       *  Constant: '<S954>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[112] == 1.0);

      /* RelationalOperator: '<S955>/Compare' incorporates:
       *  Constant: '<S955>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[113] == 1.0);

      /* Logic: '<S891>/Logical Operator' */
      rtb_LogicalOperator_j = (rtb_Compare_ci || rtb_Compare_c || rtb_Compare_fd
        || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 || Compare_p ||
        Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2 ||
        rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S956>/Compare' incorporates:
       *  Constant: '<S956>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[209] == 1.0);

      /* RelationalOperator: '<S957>/Compare' incorporates:
       *  Constant: '<S957>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[210] == 1.0);

      /* RelationalOperator: '<S958>/Compare' incorporates:
       *  Constant: '<S958>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[219] == 1.0);

      /* RelationalOperator: '<S959>/Compare' incorporates:
       *  Constant: '<S959>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[220] == 1.0);

      /* RelationalOperator: '<S960>/Compare' incorporates:
       *  Constant: '<S960>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[221] == 1.0);

      /* RelationalOperator: '<S961>/Compare' incorporates:
       *  Constant: '<S961>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[222] == 1.0);

      /* RelationalOperator: '<S962>/Compare' incorporates:
       *  Constant: '<S962>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[223] == 1.0);

      /* RelationalOperator: '<S963>/Compare' incorporates:
       *  Constant: '<S963>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[224] == 1.0);

      /* RelationalOperator: '<S964>/Compare' incorporates:
       *  Constant: '<S964>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[225] == 1.0);

      /* RelationalOperator: '<S965>/Compare' incorporates:
       *  Constant: '<S965>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[226] == 1.0);

      /* RelationalOperator: '<S966>/Compare' incorporates:
       *  Constant: '<S966>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[227] == 1.0);

      /* RelationalOperator: '<S967>/Compare' incorporates:
       *  Constant: '<S967>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[228] == 1.0);

      /* RelationalOperator: '<S968>/Compare' incorporates:
       *  Constant: '<S968>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[211] == 1.0);

      /* RelationalOperator: '<S969>/Compare' incorporates:
       *  Constant: '<S969>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[212] == 1.0);

      /* RelationalOperator: '<S970>/Compare' incorporates:
       *  Constant: '<S970>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[213] == 1.0);

      /* RelationalOperator: '<S971>/Compare' incorporates:
       *  Constant: '<S971>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[214] == 1.0);

      /* RelationalOperator: '<S972>/Compare' incorporates:
       *  Constant: '<S972>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[215] == 1.0);

      /* RelationalOperator: '<S973>/Compare' incorporates:
       *  Constant: '<S973>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[216] == 1.0);

      /* RelationalOperator: '<S974>/Compare' incorporates:
       *  Constant: '<S974>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[217] == 1.0);

      /* RelationalOperator: '<S975>/Compare' incorporates:
       *  Constant: '<S975>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[218] == 1.0);

      /* Logic: '<S892>/Logical Operator' */
      rtb_LogicalOperator_c = (rtb_Compare_ci || rtb_Compare_c || rtb_Compare_fd
        || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 || Compare_p ||
        Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2 ||
        rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S976>/Compare' incorporates:
       *  Constant: '<S976>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[139] == 1.0);

      /* RelationalOperator: '<S977>/Compare' incorporates:
       *  Constant: '<S977>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[140] == 1.0);

      /* RelationalOperator: '<S978>/Compare' incorporates:
       *  Constant: '<S978>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[149] == 1.0);

      /* RelationalOperator: '<S979>/Compare' incorporates:
       *  Constant: '<S979>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[150] == 1.0);

      /* RelationalOperator: '<S980>/Compare' incorporates:
       *  Constant: '<S980>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[151] == 1.0);

      /* RelationalOperator: '<S981>/Compare' incorporates:
       *  Constant: '<S981>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[152] == 1.0);

      /* RelationalOperator: '<S982>/Compare' incorporates:
       *  Constant: '<S982>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[153] == 1.0);

      /* RelationalOperator: '<S983>/Compare' incorporates:
       *  Constant: '<S983>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[154] == 1.0);

      /* RelationalOperator: '<S984>/Compare' incorporates:
       *  Constant: '<S984>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[155] == 1.0);

      /* RelationalOperator: '<S985>/Compare' incorporates:
       *  Constant: '<S985>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[156] == 1.0);

      /* RelationalOperator: '<S986>/Compare' incorporates:
       *  Constant: '<S986>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[157] == 1.0);

      /* RelationalOperator: '<S987>/Compare' incorporates:
       *  Constant: '<S987>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[158] == 1.0);

      /* RelationalOperator: '<S988>/Compare' incorporates:
       *  Constant: '<S988>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[141] == 1.0);

      /* RelationalOperator: '<S989>/Compare' incorporates:
       *  Constant: '<S989>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[142] == 1.0);

      /* RelationalOperator: '<S990>/Compare' incorporates:
       *  Constant: '<S990>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[143] == 1.0);

      /* RelationalOperator: '<S991>/Compare' incorporates:
       *  Constant: '<S991>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[144] == 1.0);

      /* RelationalOperator: '<S992>/Compare' incorporates:
       *  Constant: '<S992>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[145] == 1.0);

      /* RelationalOperator: '<S993>/Compare' incorporates:
       *  Constant: '<S993>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[146] == 1.0);

      /* RelationalOperator: '<S994>/Compare' incorporates:
       *  Constant: '<S994>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[147] == 1.0);

      /* RelationalOperator: '<S995>/Compare' incorporates:
       *  Constant: '<S995>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[148] == 1.0);

      /* Logic: '<S893>/Logical Operator' */
      rtb_LogicalOperator_jr = (rtb_Compare_ci || rtb_Compare_c ||
        rtb_Compare_fd || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 ||
        Compare_p || Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2
        || rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S996>/Compare' incorporates:
       *  Constant: '<S996>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[69] == 1.0);

      /* RelationalOperator: '<S997>/Compare' incorporates:
       *  Constant: '<S997>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[70] == 1.0);

      /* RelationalOperator: '<S998>/Compare' incorporates:
       *  Constant: '<S998>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[79] == 1.0);

      /* RelationalOperator: '<S999>/Compare' incorporates:
       *  Constant: '<S999>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[80] == 1.0);

      /* RelationalOperator: '<S1000>/Compare' incorporates:
       *  Constant: '<S1000>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[81] == 1.0);

      /* RelationalOperator: '<S1001>/Compare' incorporates:
       *  Constant: '<S1001>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[82] == 1.0);

      /* RelationalOperator: '<S1002>/Compare' incorporates:
       *  Constant: '<S1002>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[83] == 1.0);

      /* RelationalOperator: '<S1003>/Compare' incorporates:
       *  Constant: '<S1003>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[84] == 1.0);

      /* RelationalOperator: '<S1004>/Compare' incorporates:
       *  Constant: '<S1004>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[85] == 1.0);

      /* RelationalOperator: '<S1005>/Compare' incorporates:
       *  Constant: '<S1005>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[86] == 1.0);

      /* RelationalOperator: '<S1006>/Compare' incorporates:
       *  Constant: '<S1006>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[87] == 1.0);

      /* RelationalOperator: '<S1007>/Compare' incorporates:
       *  Constant: '<S1007>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[88] == 1.0);

      /* RelationalOperator: '<S1008>/Compare' incorporates:
       *  Constant: '<S1008>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[71] == 1.0);

      /* RelationalOperator: '<S1009>/Compare' incorporates:
       *  Constant: '<S1009>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[72] == 1.0);

      /* RelationalOperator: '<S1010>/Compare' incorporates:
       *  Constant: '<S1010>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[73] == 1.0);

      /* RelationalOperator: '<S1011>/Compare' incorporates:
       *  Constant: '<S1011>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[74] == 1.0);

      /* RelationalOperator: '<S1012>/Compare' incorporates:
       *  Constant: '<S1012>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[75] == 1.0);

      /* RelationalOperator: '<S1013>/Compare' incorporates:
       *  Constant: '<S1013>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[76] == 1.0);

      /* RelationalOperator: '<S1014>/Compare' incorporates:
       *  Constant: '<S1014>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[77] == 1.0);

      /* RelationalOperator: '<S1015>/Compare' incorporates:
       *  Constant: '<S1015>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[78] == 1.0);

      /* Logic: '<S894>/Logical Operator' */
      rtb_LogicalOperator_pj = (rtb_Compare_ci || rtb_Compare_c ||
        rtb_Compare_fd || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 ||
        Compare_p || Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2
        || rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* Update for Memory: '<S879>/Memory4' */
      six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_bi =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_p.life;

      /* Update for Memory: '<S879>/Memory5' */
      six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_ia =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_o.life;

      /* Update for Memory: '<S879>/Memory1' */
      six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_o0 =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_o.life;

      /* Update for Memory: '<S879>/Memory3' */
      six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_aa =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_c.life;

      /* Update for Memory: '<S879>/Memory2' */
      six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_f =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_l.life;

      /* Update for Memory: '<S879>/Memory6' */
      six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_o =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_k.life;

      /* End of Outputs for SubSystem: '<S878>/Brake' */
      break;
    }

    /* End of SwitchCase: '<S878>/Switch Case1' */

    /* MultiPortSwitch: '<S878>/Multiport Switch' */
    if (rtb_y_o == 0) {
      memcpy(&six_plus_six_AcmsteeringV09_m_B.MultiportSwitch_k[0],
             &six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem_b[0],
             40U * sizeof(real32_T));
    } else {
      memcpy(&six_plus_six_AcmsteeringV09_m_B.MultiportSwitch_k[0],
             &six_plus_six_AcmsteeringV09_m_B.OutportBufferForforward_dem[0],
             40U * sizeof(real32_T));
    }

    /* End of MultiPortSwitch: '<S878>/Multiport Switch' */
    /* End of Outputs for SubSystem: '<S408>/forward' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S408>/neutral' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    /* Memory: '<S1190>/Memory' */
    rtb_Memory_a = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_f;

    /* MATLAB Function: '<S1190>/HeartBeat' */
    six_plus_six_Acms_HeartBeat(rtb_Memory_a,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_b);

    /* Memory: '<S1190>/Memory4' */
    rtb_Memory4_mt = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_g;

    /* MATLAB Function: '<S1190>/HeartBeat3' */
    six_plus_six_Acms_HeartBeat(rtb_Memory4_mt,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_p);

    /* Memory: '<S1190>/Memory1' */
    rtb_Memory1_j = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_ev;

    /* MATLAB Function: '<S1190>/HeartBeat1' */
    six_plus_six_Acms_HeartBeat(rtb_Memory1_j,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_l);

    /* Memory: '<S1190>/Memory2' */
    rtb_Memory2_d = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_h;

    /* MATLAB Function: '<S1190>/HeartBeat2' */
    six_plus_six_Acms_HeartBeat(rtb_Memory2_d,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_i);

    /* Memory: '<S1190>/Memory6' */
    rtb_Memory6_h = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_d;

    /* MATLAB Function: '<S1190>/HeartBeat4' */
    six_plus_six_Acms_HeartBeat(rtb_Memory6_h,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_h);

    /* Memory: '<S1190>/Memory3' */
    rtb_Memory3_eg = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_lm;

    /* MATLAB Function: '<S1190>/HeartBeat5' */
    six_plus_six_Acms_HeartBeat(rtb_Memory3_eg,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_l);

    /* Lookup_n-D: '<S1190>/1-D Lookup Table1' */
    rtb_Product_m = look1_iflf_binlx(six_plus_six_AcmsteeringV09_m_B.steer_dem,
      six_plus_six_Acmsteering_ConstP.pooled41,
      six_plus_six_Acmsteering_ConstP.pooled40, 2U);

    /* Saturate: '<S1190>/Saturation' */
    if (rtb_Product_m > 400000.0F) {
      rtb_acc_dem = 400000.0F;
    } else if (rtb_Product_m < -400000.0F) {
      rtb_acc_dem = -400000.0F;
    } else {
      rtb_acc_dem = rtb_Product_m;
    }

    /* End of Saturate: '<S1190>/Saturation' */

    /* Gain: '<S1190>/Gain' */
    rtb_steer_dem = 0.5F * rtb_Product_m;

    /* Saturate: '<S1190>/Saturation1' */
    if (rtb_steer_dem > 400000.0F) {
      rtb_steer_dem = 400000.0F;
    } else {
      if (rtb_steer_dem < -400000.0F) {
        rtb_steer_dem = -400000.0F;
      }
    }

    /* End of Saturate: '<S1190>/Saturation1' */

    /* Gain: '<S1190>/Gain1' */
    rtb_Product_m = -rtb_Product_m;

    /* Saturate: '<S1190>/Saturation2' */
    if (rtb_Product_m > 400000.0F) {
      rtb_Product_m = 400000.0F;
    } else {
      if (rtb_Product_m < -400000.0F) {
        rtb_Product_m = -400000.0F;
      }
    }

    /* End of Saturate: '<S1190>/Saturation2' */

    /* Lookup_n-D: '<S1190>/1-D Lookup Table2' */
    rtb_Gain3_o = look1_iflf_binlx(brake_dem,
      six_plus_six_Acmsteering_ConstP.pooled46,
      six_plus_six_Acmsteering_ConstP.pooled45, 1U);

    /* Saturate: '<S1190>/Saturation3' */
    if (rtb_Gain3_o > 750000.0F) {
      rtb_Gain3_o = 750000.0F;
    } else {
      if (rtb_Gain3_o < -140000.0F) {
        rtb_Gain3_o = -140000.0F;
      }
    }

    /* End of Saturate: '<S1190>/Saturation3' */

    /* SignalConversion: '<S415>/OutportBufferForneutral_dem' incorporates:
     *  Constant: '<S1190>/SpdSet_dem'
     *  Constant: '<S1190>/SpdSet_dem1'
     *  Constant: '<S1190>/SpdSet_dem2'
     *  Constant: '<S1190>/SpdSet_dem3'
     *  Constant: '<S1190>/SpdSet_dem4'
     *  Constant: '<S1190>/SpdSet_dem5'
     *  Constant: '<S1190>/TrqSet_dem'
     *  Constant: '<S1190>/TrqSet_dem1'
     *  Constant: '<S1190>/TrqSet_dem2'
     *  Constant: '<S1190>/TrqSet_dem3'
     *  Constant: '<S1190>/TrqSet_dem4'
     *  Constant: '<S1190>/TrqSet_dem5'
     *  Constant: '<S1190>/mot_enable'
     *  Constant: '<S1190>/mot_enable1'
     *  Constant: '<S1190>/mot_enable2'
     *  Constant: '<S1190>/mot_enable3'
     *  Constant: '<S1190>/mot_enable4'
     *  Constant: '<S1190>/mot_enable5'
     *  Constant: '<S1190>/mot_gear'
     *  Constant: '<S1190>/mot_gear1'
     *  Constant: '<S1190>/mot_gear2'
     *  Constant: '<S1190>/mot_gear3'
     *  Constant: '<S1190>/mot_gear4'
     *  Constant: '<S1190>/mot_gear5'
     *  Constant: '<S1190>/mot_mode'
     *  Constant: '<S1190>/mot_mode1'
     *  Constant: '<S1190>/mot_mode2'
     *  Constant: '<S1190>/mot_mode3'
     *  Constant: '<S1190>/mot_mode4'
     *  Constant: '<S1190>/mot_mode5'
     */
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[0] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[1] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[2] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[3] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[4] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[5] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_b.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[6] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[7] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[8] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[9] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[10] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[11] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_p.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[12] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[13] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[14] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[15] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[16] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[17] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_l.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[18] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[19] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[20] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[21] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[22] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[23] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_i.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[24] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[25] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[26] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[27] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[28] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[29] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_h.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[30] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[31] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[32] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[33] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[34] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[35] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_l.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[36] =
      rtb_acc_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[37] =
      rtb_steer_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[38] =
      rtb_Product_m;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[39] =
      rtb_Gain3_o;

    /* Update for Memory: '<S1190>/Memory' */
    six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_f =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_b.life;

    /* Update for Memory: '<S1190>/Memory4' */
    six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_g =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_p.life;

    /* Update for Memory: '<S1190>/Memory1' */
    six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_ev =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_l.life;

    /* Update for Memory: '<S1190>/Memory2' */
    six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_h =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_i.life;

    /* Update for Memory: '<S1190>/Memory6' */
    six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_d =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_h.life;

    /* Update for Memory: '<S1190>/Memory3' */
    six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_lm =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_l.life;

    /* End of Outputs for SubSystem: '<S408>/neutral' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S408>/backward' incorporates:
     *  ActionPort: '<S411>/Action Port'
     */
    /* MATLAB Function: '<S423>/MATLAB Function' */
    /* MATLAB Function 'MainControl/mode_control/backward/backward/MATLAB Function': '<S426>:1' */
    if (brake_dem == 0.0F) {
      /* '<S426>:1:10' */
      /* '<S426>:1:11' */
      rtb_y_o = 0;
    } else {
      /* '<S426>:1:13' */
      rtb_y_o = 1;
    }

    /* End of MATLAB Function: '<S423>/MATLAB Function' */

    /* SwitchCase: '<S423>/Switch Case1' incorporates:
     *  Constant: '<S573>/Constant'
     *  Constant: '<S573>/Constant1'
     */
    rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem;
    rtAction = -1;
    switch (rtb_y_o) {
     case 0:
      rtAction = 0;
      break;

     case 1:
      rtAction = 1;
      break;
    }

    six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem = rtAction;
    if ((rtb_Memory_cn != rtAction) && (rtb_Memory_cn == 0)) {
      /* Disable for Atomic SubSystem: '<S576>/直行TCS' */
      /* Disable for Atomic SubSystem: '<S704>/直行' */
      /* Disable for If: '<S728>/If' */
      six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem = -1;

      /* Disable for If: '<S728>/If4' */
      six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem = -1;

      /* Disable for If: '<S728>/If1' */
      six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem = -1;

      /* Disable for If: '<S728>/If2' */
      six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem = -1;

      /* Disable for If: '<S728>/If5' */
      six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem = -1;

      /* Disable for If: '<S728>/If3' */
      six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem = -1;

      /* End of Disable for SubSystem: '<S704>/直行' */
      /* End of Disable for SubSystem: '<S576>/直行TCS' */
    }

    switch (rtAction) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S423>/Drive' incorporates:
       *  ActionPort: '<S425>/Action Port'
       */
      /* Abs: '<S425>/Abs' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_brake_dem = (real32_T)-rtb_y;
      } else {
        rtb_brake_dem = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs' */

      /* Abs: '<S425>/Abs1' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs = (real32_T)-rtb_y;
      } else {
        rtb_Abs = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs1' */

      /* Abs: '<S425>/Abs10' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs4 = (real32_T)-rtb_y;
      } else {
        rtb_Abs4 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs10' */

      /* Abs: '<S425>/Abs11' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Abs5 = (real32_T)-rtb_y;
      } else {
        rtb_Abs5 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs11' */

      /* Abs: '<S425>/Abs12' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Product_m = (real32_T)-rtb_y;
      } else {
        rtb_Product_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs12' */

      /* Abs: '<S425>/Abs13' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Gain3_o = (real32_T)-rtb_y;
      } else {
        rtb_Gain3_o = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs13' */

      /* Abs: '<S425>/Abs14' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Gain6_f = (real32_T)-rtb_y;
      } else {
        rtb_Gain6_f = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs14' */

      /* Abs: '<S425>/Abs15' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Abs15_i = (real32_T)-rtb_y;
      } else {
        rtb_Abs15_i = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs15' */

      /* Abs: '<S425>/Abs16' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs16_h = (real32_T)-rtb_y;
      } else {
        rtb_Abs16_h = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs16' */

      /* Abs: '<S425>/Abs17' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs17_d = (real32_T)-rtb_y;
      } else {
        rtb_Abs17_d = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs17' */

      /* Abs: '<S425>/Abs18' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs18_j = (real32_T)-rtb_y;
      } else {
        rtb_Abs18_j = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs18' */

      /* Abs: '<S425>/Abs19' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs12_e = (real32_T)-rtb_y;
      } else {
        rtb_Abs12_e = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs19' */

      /* Abs: '<S425>/Abs2' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs19_l4 = (real32_T)-rtb_y;
      } else {
        rtb_Abs19_l4 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs2' */

      /* Abs: '<S425>/Abs20' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs14_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs14_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs20' */

      /* Abs: '<S425>/Abs21' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs21 = (real32_T)-rtb_y;
      } else {
        rtb_Abs21 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs21' */

      /* Abs: '<S425>/Abs22' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs22 = (real32_T)-rtb_y;
      } else {
        rtb_Abs22 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs22' */

      /* Abs: '<S425>/Abs24' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs13_a = (real32_T)-rtb_y;
      } else {
        rtb_Abs13_a = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs24' */

      /* Abs: '<S425>/Abs25' */
      rtb_Abs20_g = (real32_T)fabs(acc_dem);

      /* Abs: '<S425>/Abs3' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_steer_dem = (real32_T)-rtb_y;
      } else {
        rtb_steer_dem = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs3' */

      /* Abs: '<S425>/Abs4' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Abs4_f = (real32_T)-rtb_y;
      } else {
        rtb_Abs4_f = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs4' */

      /* Abs: '<S425>/Abs5' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs5_j = (real32_T)-rtb_y;
      } else {
        rtb_Abs5_j = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs5' */

      /* Abs: '<S425>/Abs6' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs6_i = (real32_T)-rtb_y;
      } else {
        rtb_Abs6_i = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs6' */

      /* Abs: '<S425>/Abs7' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs7_j = (real32_T)-rtb_y;
      } else {
        rtb_Abs7_j = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs7' */

      /* Abs: '<S425>/Abs8' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs8_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs8_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs8' */

      /* Abs: '<S425>/Abs9' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs9_p = (real32_T)-rtb_y;
      } else {
        rtb_Abs9_p = (real32_T)rtb_y;
      }

      /* End of Abs: '<S425>/Abs9' */

      /* MATLAB Function: '<S425>/MATLAB Function' incorporates:
       *  Constant: '<S425>/Constant1'
       */
      six_plus_s_MATLABFunction_a(acc_y, ag_thr,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_b);

      /* SwitchCase: '<S425>/Switch Case' incorporates:
       *  Constant: '<S575>/Constant4'
       */
      switch (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_b.y) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S425>/车辆稳定性控制' incorporates:
         *  ActionPort: '<S574>/Action Port'
         */
        /* Abs: '<S574>/Abs' */
        rtb_y = fabs(acc_y);

        /* Sum: '<S574>/Sum' incorporates:
         *  Constant: '<S574>/Constant'
         */
        rtb_Sum_i = ag_thr - rtb_y;

        /* Memory: '<S574>/Memory4' */
        rtb_Memory4_e = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput;

        /* Gain: '<S574>/Gain20' */
        rtb_y = 2.0 * rtb_Memory4_e;

        /* Memory: '<S574>/Memory5' */
        rtb_Subtract1_j = six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput;

        /* Sum: '<S574>/Add10' */
        rtb_y = (rtb_Sum_i - rtb_y) + rtb_Subtract1_j;

        /* Memory: '<S574>/Memory3' */
        rtb_Subtract1_j = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput;

        /* Sum: '<S574>/Subtract1' */
        rtb_Subtract1_j = rtb_Sum_i - rtb_Subtract1_j;

        /* Gain: '<S574>/Gain5' */
        rtb_Saturation2_fh = (real32_T)(kp1 * rtb_Subtract1_j);

        /* Gain: '<S574>/Gain6' */
        rtb_Saturation3_m = (real32_T)(ki1 * rtb_Sum_i);

        /* Gain: '<S574>/Gain7' */
        rtb_acc_dem = (real32_T)(kd1 * rtb_y);

        /* Sum: '<S574>/Add2' */
        rtb_Saturation2_fh = (rtb_Saturation2_fh + rtb_Saturation3_m) +
          rtb_acc_dem;

        /* Memory: '<S574>/Memory13' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_m;

        /* Sum: '<S574>/Subtract5' */
        rtb_Saturation2_fh += rtb_acc_dem;

        /* Switch: '<S574>/Switch1' incorporates:
         *  Constant: '<S574>/Constant3'
         *  Constant: '<S574>/Constant4'
         */
        if (ESP_switch > 0.5F) {
          /* Switch: '<S574>/Switch' incorporates:
           *  Constant: '<S574>/Constant1'
           *  Constant: '<S574>/Constant2'
           */
          if (acc_y >= 0.0) {
            rtb_Memory_cn = 1;
          } else {
            rtb_Memory_cn = -1;
          }

          /* End of Switch: '<S574>/Switch' */

          /* Product: '<S574>/Product' */
          rtb_Add2_c = rtb_Saturation2_fh * (real32_T)rtb_Memory_cn;

          /* Gain: '<S574>/Gain3' */
          rtb_Add2_c *= 0.125F;
          six_plus_six_AcmsteeringV09_m_B.Switch1 = rtb_Add2_c;
        } else {
          six_plus_six_AcmsteeringV09_m_B.Switch1 = 0.0F;
        }

        /* End of Switch: '<S574>/Switch1' */

        /* Update for Memory: '<S574>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput = rtb_Sum_i;

        /* Update for Memory: '<S574>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput = rtb_Memory4_e;

        /* Update for Memory: '<S574>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput = rtb_Sum_i;

        /* Update for Memory: '<S574>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_m =
          rtb_Saturation2_fh;

        /* End of Outputs for SubSystem: '<S425>/车辆稳定性控制' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S425>/车辆稳定性控制1' incorporates:
         *  ActionPort: '<S575>/Action Port'
         */
        six_plus_six_AcmsteeringV09_m_B.Constant4 = 0.0F;

        /* End of Outputs for SubSystem: '<S425>/车辆稳定性控制1' */
        break;
      }

      /* End of SwitchCase: '<S425>/Switch Case' */

      /* MultiPortSwitch: '<S425>/Multiport Switch' */
      if (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_b.y == 0) {
        rtb_MultiportSwitch = six_plus_six_AcmsteeringV09_m_B.Switch1;
      } else {
        rtb_MultiportSwitch = six_plus_six_AcmsteeringV09_m_B.Constant4;
      }

      /* End of MultiPortSwitch: '<S425>/Multiport Switch' */

      /* Lookup_n-D: '<S570>/mot_map' */
      rtb_Gain5_d = look1_iflf_binlx(rtb_brake_dem,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S570>/MinMax6' */
      u0 = rtb_Gain5_d;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[229];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax6 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax6' */

      /* Lookup_n-D: '<S570>/mot_map4' */
      rtb_Gain5_d = look1_iflf_binlx(rtb_Abs,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S570>/MinMax7' */
      u0 = rtb_Gain5_d;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[159];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax7 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax7' */

      /* Lookup_n-D: '<S570>/mot_map1' */
      rtb_Gain5_d = look1_iflf_binlx(rtb_Abs4,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S570>/MinMax5' */
      u0 = rtb_Gain5_d;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[89];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax5 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax5' */

      /* Sum: '<S570>/Add3' */
      rtb_Add3 = (rtb_MinMax6 + rtb_MinMax7) + rtb_MinMax5;

      /* Sum: '<S570>/Add4' */
      rtb_y = (six_plus_six_AcmsteeringV09_m_B.Signals[17] +
               six_plus_six_AcmsteeringV09_m_B.Signals[35]) +
        six_plus_six_AcmsteeringV09_m_B.Signals[53];

      /* Sum: '<S570>/Add1' */
      rtb_brake_dem = ((((rtb_brake_dem + rtb_Abs) + rtb_Abs4) + rtb_Abs19_l4) +
                       rtb_Abs13_a) + rtb_steer_dem;

      /* Gain: '<S570>/Gain' */
      rtb_brake_dem *= 0.166666672F;

      /* Product: '<S570>/Divide' */
      rtb_Gain1_j = 9549.0 * rtb_y / rtb_brake_dem;

      /* Gain: '<S571>/Gain' */
      rtb_Abs20_g *= 0.01F;

      /* Lookup_n-D: '<S571>/mot_map' */
      rtb_Abs5 = look1_iflf_binlx(rtb_Abs5,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S571>/MinMax' */
      u0 = rtb_Abs5;
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[229];
      if ((u0 <= rtb_y) || rtIsNaN(rtb_y)) {
        rtb_y = u0;
      }

      /* End of MinMax: '<S571>/MinMax' */

      /* Lookup_n-D: '<S571>/mot_map1' */
      rtb_Product_m = look1_iflf_binlx(rtb_Product_m,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S571>/MinMax1' */
      u0 = rtb_Product_m;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[159];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      /* End of MinMax: '<S571>/MinMax1' */

      /* Lookup_n-D: '<S571>/mot_map4' */
      rtb_Gain3_o = look1_iflf_binlx(rtb_Gain3_o,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S571>/MinMax4' */
      u0 = rtb_Gain3_o;
      rtb_Memory4_e = six_plus_six_AcmsteeringV09_m_B.Signals[89];
      if ((u0 <= rtb_Memory4_e) || rtIsNaN(rtb_Memory4_e)) {
        rtb_Memory4_e = u0;
      }

      /* End of MinMax: '<S571>/MinMax4' */

      /* Lookup_n-D: '<S571>/mot_map5' */
      rtb_Gain6_f = look1_iflf_binlx(rtb_Gain6_f,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S571>/MinMax5' */
      u0 = rtb_Gain6_f;
      rtb_Subtract1_j = six_plus_six_AcmsteeringV09_m_B.Signals[194];
      if ((u0 <= rtb_Subtract1_j) || rtIsNaN(rtb_Subtract1_j)) {
        rtb_Subtract1_j = u0;
      }

      /* End of MinMax: '<S571>/MinMax5' */

      /* Lookup_n-D: '<S571>/mot_map2' */
      rtb_Abs12_e = look1_iflf_binlx(rtb_Abs12_e,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S571>/MinMax2' */
      u0 = rtb_Abs12_e;
      rtb_MinMax2_b = six_plus_six_AcmsteeringV09_m_B.Signals[124];
      if ((u0 <= rtb_MinMax2_b) || rtIsNaN(rtb_MinMax2_b)) {
        rtb_MinMax2_b = u0;
      }

      /* End of MinMax: '<S571>/MinMax2' */

      /* Lookup_n-D: '<S571>/mot_map3' */
      rtb_Abs14_m = look1_iflf_binlx(rtb_Abs14_m,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S571>/MinMax3' */
      u0 = rtb_Abs14_m;
      rtb_Add = six_plus_six_AcmsteeringV09_m_B.Signals[54];
      if ((u0 <= rtb_Add) || rtIsNaN(rtb_Add)) {
        rtb_Add = u0;
      }

      /* End of MinMax: '<S571>/MinMax3' */

      /* Sum: '<S571>/Add' */
      rtb_y = ((((rtb_y + rtb_Sum_i) + rtb_Memory4_e) + rtb_Subtract1_j) +
               rtb_MinMax2_b) + rtb_Add;

      /* Product: '<S571>/Product' */
      rtb_Add = rtb_Abs20_g * rtb_y;

      /* MinMax: '<S570>/MinMax' */
      if (!((rtb_Gain1_j <= rtb_Add) || rtIsNaN(rtb_Add))) {
        rtb_Gain1_j = rtb_Add;
      }

      /* End of MinMax: '<S570>/MinMax' */

      /* Gain: '<S570>/Gain1' */
      rtb_Gain1_j *= 0.5;

      /* Gain: '<S570>/Gain4' */
      rtb_Gain5_d = 0.5F * rtb_MultiportSwitch;

      /* Sum: '<S570>/Subtract' */
      rtb_Add = rtb_Gain1_j - rtb_Gain5_d;

      /* MinMax: '<S570>/MinMax1' */
      rtb_Sum_i = rtb_Add3;
      if (!((rtb_Sum_i <= rtb_Add) || rtIsNaN(rtb_Add))) {
        rtb_Sum_i = rtb_Add;
      }

      rtb_MinMax1 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax1' */

      /* Lookup_n-D: '<S570>/mot_map2' */
      rtb_Abs19_l4 = look1_iflf_binlx(rtb_Abs19_l4,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S570>/MinMax4' */
      u0 = rtb_Abs19_l4;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[194];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax4 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax4' */

      /* Lookup_n-D: '<S570>/mot_map5' */
      rtb_Abs13_a = look1_iflf_binlx(rtb_Abs13_a,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S570>/MinMax8' */
      u0 = rtb_Abs13_a;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[124];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax8 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax8' */

      /* Lookup_n-D: '<S570>/mot_map3' */
      rtb_steer_dem = look1_iflf_binlx(rtb_steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* MinMax: '<S570>/MinMax3' */
      u0 = rtb_steer_dem;
      rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[54];
      if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
        rtb_Sum_i = u0;
      }

      rtb_MinMax3 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax3' */

      /* Sum: '<S570>/Add2' */
      rtb_Add2 = (rtb_MinMax4 + rtb_MinMax8) + rtb_MinMax3;

      /* Sum: '<S570>/Add' */
      rtb_Add = rtb_Gain1_j + rtb_Gain5_d;

      /* MinMax: '<S570>/MinMax2' */
      rtb_Sum_i = rtb_Add2;
      if (!((rtb_Sum_i <= rtb_Add) || rtIsNaN(rtb_Add))) {
        rtb_Sum_i = rtb_Add;
      }

      rtb_MinMax2 = rtb_Sum_i;

      /* End of MinMax: '<S570>/MinMax2' */

      /* MATLAB Function: '<S570>/MATLAB Function' */
      six_plus_s_MATLABFunction_e(rtb_Add3, rtb_MinMax1, rtb_Add2, rtb_MinMax2,
        rtb_MultiportSwitch,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_cm);

      /* MATLAB Function: '<S569>/MATLAB Function5' incorporates:
       *  Constant: '<S569>/ECCalVar2'
       *  Constant: '<S569>/ECCalVar3'
       *  Constant: '<S569>/ECCalVar4'
       *  Constant: '<S569>/ECCalVar5'
       */
      six_plus_si_MATLABFunction5(six_plus_six_AcmsteeringV09_m_B.Compare_g,
        guzhang_lr, guzhang_rf, guzhang_rm, guzhang_rr,
        &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5_k);

      /* DataTypeConversion: '<S569>/Data Type Conversion' */
      rtb_guzhang_lf =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5_k.guzhang_lf1;

      /* DataTypeConversion: '<S569>/Data Type Conversion1' */
      rtb_guzhang_lm =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5_k.guzhang_lm1;

      /* DataTypeConversion: '<S569>/Data Type Conversion2' */
      rtb_guzhang_lr =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5_k.guzhang_lr1;

      /* DataTypeConversion: '<S569>/Data Type Conversion3' */
      rtb_guzhang_rf =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5_k.guzhang_rf1;

      /* DataTypeConversion: '<S569>/Data Type Conversion4' */
      rtb_guzhang_rm =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5_k.guzhang_rm1;

      /* DataTypeConversion: '<S569>/Data Type Conversion5' */
      rtb_guzhang_rr =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction5_k.guzhang_rr1;

      /* MATLAB Function: '<S569>/MATLAB Function' incorporates:
       *  Constant: '<S569>/Constant'
       */
      six_plus_s_MATLABFunction_o
        (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_cm.trq_dem_l,
         six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_cm.trq_dem_r,
         rtb_MinMax6, rtb_MinMax7, rtb_MinMax5, rtb_MinMax4, rtb_MinMax8,
         rtb_MinMax3, rtb_guzhang_lf, rtb_guzhang_lm, rtb_guzhang_lr,
         rtb_guzhang_rf, rtb_guzhang_rm, rtb_guzhang_rr, 33.3333321F,
         &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0);

      /* Abs: '<S573>/Abs11' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Gain5_d = (real32_T)-rtb_y;
      } else {
        rtb_Gain5_d = (real32_T)rtb_y;
      }

      /* End of Abs: '<S573>/Abs11' */

      /* Abs: '<S573>/Abs12' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_steer_dem = (real32_T)-rtb_y;
      } else {
        rtb_steer_dem = (real32_T)rtb_y;
      }

      /* End of Abs: '<S573>/Abs12' */

      /* Abs: '<S573>/Abs13' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs20_g = (real32_T)-rtb_y;
      } else {
        rtb_Abs20_g = (real32_T)rtb_y;
      }

      /* End of Abs: '<S573>/Abs13' */

      /* Abs: '<S573>/Abs14' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs13_a = (real32_T)-rtb_y;
      } else {
        rtb_Abs13_a = (real32_T)rtb_y;
      }

      /* End of Abs: '<S573>/Abs14' */

      /* Abs: '<S573>/Abs19' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs14_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs14_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S573>/Abs19' */

      /* Abs: '<S573>/Abs20' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs19_l4 = (real32_T)-rtb_y;
      } else {
        rtb_Abs19_l4 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S573>/Abs20' */

      /* MinMax: '<S573>/MinMax' */
      if ((rtb_Gain5_d <= rtb_steer_dem) || rtIsNaNF(rtb_steer_dem)) {
        rtb_Saturation3_m = rtb_Gain5_d;
      } else {
        rtb_Saturation3_m = rtb_steer_dem;
      }

      if (!((rtb_Saturation3_m <= rtb_Abs20_g) || rtIsNaNF(rtb_Abs20_g))) {
        rtb_Saturation3_m = rtb_Abs20_g;
      }

      if (!((rtb_Saturation3_m <= rtb_Abs13_a) || rtIsNaNF(rtb_Abs13_a))) {
        rtb_Saturation3_m = rtb_Abs13_a;
      }

      if (!((rtb_Saturation3_m <= rtb_Abs14_m) || rtIsNaNF(rtb_Abs14_m))) {
        rtb_Saturation3_m = rtb_Abs14_m;
      }

      if ((rtb_Saturation3_m <= rtb_Abs19_l4) || rtIsNaNF(rtb_Abs19_l4)) {
        rtb_Gain5_d = rtb_Saturation3_m;
      } else {
        rtb_Gain5_d = rtb_Abs19_l4;
      }

      /* End of MinMax: '<S573>/MinMax' */

      /* Gain: '<S573>/Gain1' */
      rtb_Gain5_d *= 0.125F;

      /* Gain: '<S573>/Gain2' */
      rtb_Gain5_d *= 0.104719758F;

      /* Gain: '<S573>/Gain3' */
      rtb_Gain5_d *= 0.2286F;

      /* Gain: '<S573>/Gain4' */
      rtb_Gain5_d *= 3.6F;

      /* Gain: '<S573>/Gain5' */
      rtb_Gain5_d *= 0.9F;

      /* Lookup_n-D: '<S573>/1-D Lookup Table' */
      rtb_DLookupTable = look1_iflf_binlx(rtb_Gain5_d,
        six_plus_six_Acmsteering_ConstP.pooled68,
        six_plus_six_Acmsteering_ConstP.pooled67, 3U);

      /* Outputs for Atomic SubSystem: '<S576>/直行TCS' */
      /* Gain: '<S705>/Gain3' */
      rtb_Saturation2_fh = 0.125F * rtb_Abs4_f;

      /* Gain: '<S705>/Gain' */
      rtb_Saturation2_fh *= 0.104719758F;

      /* Gain: '<S705>/Gain1' */
      rtb_Saturation2_fh *= 0.2286F;

      /* MinMax: '<S711>/MinMax' */
      if ((rtb_Abs4_f <= rtb_Abs5_j) || rtIsNaNF(rtb_Abs5_j)) {
        rtb_Saturation3_m = rtb_Abs4_f;
      } else {
        rtb_Saturation3_m = rtb_Abs5_j;
      }

      if ((rtb_Saturation3_m <= rtb_Abs6_i) || rtIsNaNF(rtb_Abs6_i)) {
        rtb_acc_dem = rtb_Saturation3_m;
      } else {
        rtb_acc_dem = rtb_Abs6_i;
      }

      /* End of MinMax: '<S711>/MinMax' */

      /* Gain: '<S711>/Gain' */
      rtb_acc_dem *= 0.125F;

      /* Gain: '<S711>/Gain1' */
      rtb_acc_dem *= 0.104719758F;

      /* Gain: '<S711>/Gain2' */
      rtb_acc_dem *= 0.2286F;

      /* Gain: '<S711>/Gain3' */
      rtb_acc_dem *= 3.6F;

      /* Gain: '<S711>/Gain4' */
      rtb_acc_dem *= 0.9F;

      /* Gain: '<S705>/Gain2' */
      rtb_steer_dem = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S705>/Subtract' */
      rtb_steer_dem = rtb_Saturation2_fh - rtb_steer_dem;

      /* Sum: '<S705>/Add' incorporates:
       *  Constant: '<S705>/Constant'
       */
      rtb_Saturation2_fh += 2.22044605E-16F;

      /* Product: '<S705>/Divide' */
      rtb_steer_dem /= rtb_Saturation2_fh;

      /* Saturate: '<S704>/Saturation' */
      if (rtb_steer_dem > 2.0F) {
        rtb_Saturation = 2.0F;
      } else if (rtb_steer_dem < 0.0F) {
        rtb_Saturation = 0.0F;
      } else {
        rtb_Saturation = rtb_steer_dem;
      }

      /* End of Saturate: '<S704>/Saturation' */

      /* Gain: '<S706>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs5_j;

      /* Gain: '<S706>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S706>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S706>/Gain2' */
      rtb_Saturation2_fh = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S706>/Subtract' */
      rtb_Saturation2_fh = rtb_steer_dem - rtb_Saturation2_fh;

      /* Sum: '<S706>/Add' incorporates:
       *  Constant: '<S706>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S706>/Divide' */
      rtb_Saturation2_fh /= rtb_steer_dem;

      /* Saturate: '<S704>/Saturation1' */
      if (rtb_Saturation2_fh > 2.0F) {
        rtb_Saturation1 = 2.0F;
      } else if (rtb_Saturation2_fh < 0.0F) {
        rtb_Saturation1 = 0.0F;
      } else {
        rtb_Saturation1 = rtb_Saturation2_fh;
      }

      /* End of Saturate: '<S704>/Saturation1' */

      /* Gain: '<S707>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs6_i;

      /* Gain: '<S707>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S707>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S707>/Gain2' */
      rtb_acc_dem *= 0.277777791F;

      /* Sum: '<S707>/Subtract' */
      rtb_acc_dem = rtb_steer_dem - rtb_acc_dem;

      /* Sum: '<S707>/Add' incorporates:
       *  Constant: '<S707>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S707>/Divide' */
      rtb_acc_dem /= rtb_steer_dem;

      /* Saturate: '<S704>/Saturation2' */
      if (rtb_acc_dem > 2.0F) {
        rtb_Saturation2 = 2.0F;
      } else if (rtb_acc_dem < 0.0F) {
        rtb_Saturation2 = 0.0F;
      } else {
        rtb_Saturation2 = rtb_acc_dem;
      }

      /* End of Saturate: '<S704>/Saturation2' */

      /* Gain: '<S708>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs7_j;

      /* Gain: '<S708>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S708>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* MinMax: '<S712>/MinMax' */
      if ((rtb_Abs7_j <= rtb_Abs8_m) || rtIsNaNF(rtb_Abs8_m)) {
        rtb_Saturation3_m = rtb_Abs7_j;
      } else {
        rtb_Saturation3_m = rtb_Abs8_m;
      }

      if ((rtb_Saturation3_m <= rtb_Abs9_p) || rtIsNaNF(rtb_Abs9_p)) {
        rtb_acc_dem = rtb_Saturation3_m;
      } else {
        rtb_acc_dem = rtb_Abs9_p;
      }

      /* End of MinMax: '<S712>/MinMax' */

      /* Gain: '<S712>/Gain' */
      rtb_acc_dem *= 0.125F;

      /* Gain: '<S712>/Gain1' */
      rtb_acc_dem *= 0.104719758F;

      /* Gain: '<S712>/Gain2' */
      rtb_acc_dem *= 0.2286F;

      /* Gain: '<S712>/Gain3' */
      rtb_acc_dem *= 3.6F;

      /* Gain: '<S712>/Gain4' */
      rtb_acc_dem *= 0.9F;

      /* Gain: '<S708>/Gain2' */
      rtb_Saturation2_fh = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S708>/Subtract' */
      rtb_Saturation2_fh = rtb_steer_dem - rtb_Saturation2_fh;

      /* Sum: '<S708>/Add' incorporates:
       *  Constant: '<S708>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S708>/Divide' */
      rtb_Saturation2_fh /= rtb_steer_dem;

      /* Saturate: '<S704>/Saturation3' */
      if (rtb_Saturation2_fh > 2.0F) {
        rtb_Saturation3 = 2.0F;
      } else if (rtb_Saturation2_fh < 0.0F) {
        rtb_Saturation3 = 0.0F;
      } else {
        rtb_Saturation3 = rtb_Saturation2_fh;
      }

      /* End of Saturate: '<S704>/Saturation3' */

      /* Gain: '<S709>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs8_m;

      /* Gain: '<S709>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S709>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S709>/Gain2' */
      rtb_Saturation2_fh = 0.277777791F * rtb_acc_dem;

      /* Sum: '<S709>/Subtract' */
      rtb_Saturation2_fh = rtb_steer_dem - rtb_Saturation2_fh;

      /* Sum: '<S709>/Add' incorporates:
       *  Constant: '<S709>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S709>/Divide' */
      rtb_Saturation2_fh /= rtb_steer_dem;

      /* Saturate: '<S704>/Saturation4' */
      if (rtb_Saturation2_fh > 2.0F) {
        rtb_Saturation4 = 2.0F;
      } else if (rtb_Saturation2_fh < 0.0F) {
        rtb_Saturation4 = 0.0F;
      } else {
        rtb_Saturation4 = rtb_Saturation2_fh;
      }

      /* End of Saturate: '<S704>/Saturation4' */

      /* Gain: '<S710>/Gain3' */
      rtb_steer_dem = 0.125F * rtb_Abs9_p;

      /* Gain: '<S710>/Gain' */
      rtb_steer_dem *= 0.104719758F;

      /* Gain: '<S710>/Gain1' */
      rtb_steer_dem *= 0.2286F;

      /* Gain: '<S710>/Gain2' */
      rtb_acc_dem *= 0.277777791F;

      /* Sum: '<S710>/Subtract' */
      rtb_acc_dem = rtb_steer_dem - rtb_acc_dem;

      /* Sum: '<S710>/Add' incorporates:
       *  Constant: '<S710>/Constant'
       */
      rtb_steer_dem += 2.22044605E-16F;

      /* Product: '<S710>/Divide' */
      rtb_acc_dem /= rtb_steer_dem;

      /* Saturate: '<S704>/Saturation5' */
      if (rtb_acc_dem > 2.0F) {
        rtb_Saturation5 = 2.0F;
      } else if (rtb_acc_dem < 0.0F) {
        rtb_Saturation5 = 0.0F;
      } else {
        rtb_Saturation5 = rtb_acc_dem;
      }

      /* End of Saturate: '<S704>/Saturation5' */

      /* Outputs for Atomic SubSystem: '<S704>/直行' */
      /* Lookup_n-D: '<S713>/1-D Lookup Table' */
      rtb_Gain5_d = look1_iflf_binlx(six_plus_six_AcmsteeringV09_m_B.steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled41,
        six_plus_six_Acmsteering_ConstP.pooled40, 2U);

      /* Memory: '<S713>/Memory' */
      rtb_Memory_hc = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_a;

      /* MATLAB Function: '<S713>/MATLAB Function' incorporates:
       *  Constant: '<S713>/Constant7'
       */
      six_plus_s_MATLABFunction_g(rtb_Saturation, rtb_DLookupTable, 0.05F,
        rtb_Memory_hc, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_ew);

      /* Memory: '<S713>/Memory10' */
      rtb_Memory10 = six_plus_six_AcmsteeringV09__DW.Memory10_PreviousInput;

      /* MATLAB Function: '<S713>/MATLAB Function4' incorporates:
       *  Constant: '<S713>/Constant12'
       */
      six_plus_si_MATLABFunction4(rtb_Saturation1, rtb_DLookupTable, 0.05F,
        rtb_Memory10, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction4_k);

      /* Memory: '<S713>/Memory7' */
      rtb_Memory7 = six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput_c;

      /* MATLAB Function: '<S713>/MATLAB Function1' incorporates:
       *  Constant: '<S713>/Constant8'
       */
      six_plus_si_MATLABFunction1(rtb_Saturation2, rtb_DLookupTable, 0.05F,
        rtb_Memory7, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_j);

      /* Memory: '<S713>/Memory8' */
      rtb_Memory8_i = six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput_m;

      /* MATLAB Function: '<S713>/MATLAB Function2' incorporates:
       *  Constant: '<S713>/Constant9'
       */
      six_plus_si_MATLABFunction2(rtb_Saturation3, rtb_DLookupTable, 0.05F,
        rtb_Memory8_i, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2_c);

      /* Memory: '<S713>/Memory11' */
      rtb_Memory11 = six_plus_six_AcmsteeringV09__DW.Memory11_PreviousInput;

      /* MATLAB Function: '<S713>/MATLAB Function6' incorporates:
       *  Constant: '<S713>/Constant13'
       */
      six_plus_si_MATLABFunction6(rtb_Saturation4, rtb_DLookupTable, 0.05F,
        rtb_Memory11, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction6_e);

      /* Memory: '<S713>/Memory9' */
      rtb_Memory9 = six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput_l;

      /* MATLAB Function: '<S713>/MATLAB Function3' incorporates:
       *  Constant: '<S713>/Constant10'
       */
      six_plus_si_MATLABFunction3(rtb_Saturation5, rtb_DLookupTable, 0.05F,
        rtb_Memory9, &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_l);

      /* MATLAB Function: '<S713>/MATLAB Function5' incorporates:
       *  Constant: '<S713>/Constant11'
       */
      /* MATLAB Function 'MainControl/mode_control/backward/backward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function5': '<S725>:1' */
      if (TCS_switch == 0.0F) {
        /* '<S725>:1:3' */
        /* '<S725>:1:4' */
        rtb_Abs4 = 0.0F;

        /* '<S725>:1:5' */
        rtb_Add2_c = 0.0F;

        /* '<S725>:1:6' */
        rtb_Gain6_f = 0.0F;

        /* '<S725>:1:7' */
        rtb_Abs12_e = 0.0F;

        /* '<S725>:1:8' */
        rtb_Abs20_g = 0.0F;

        /* '<S725>:1:9' */
        rtb_Abs19_l4 = 0.0F;
      } else {
        /* '<S725>:1:11' */
        rtb_Abs4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_ew.flag_lf_g;

        /* '<S725>:1:12' */
        rtb_Add2_c =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction4_k.flag_lm_g;

        /* '<S725>:1:13' */
        rtb_Gain6_f =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_j.flag_lr_g;

        /* '<S725>:1:14' */
        rtb_Abs12_e =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2_c.flag_rf_k;

        /* '<S725>:1:15' */
        rtb_Abs20_g =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction6_e.flag_rm_d;

        /* '<S725>:1:16' */
        rtb_Abs19_l4 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_l.flag_rr_h;
      }

      /* End of MATLAB Function: '<S713>/MATLAB Function5' */

      /* If: '<S728>/If' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem;
      rtAction = -1;
      if (rtb_Abs4 > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S728>/Subsystem' incorporates:
           *  InitializeConditions for ActionPort: '<S729>/Action Port'
           */
          /* InitializeConditions for If: '<S728>/If' incorporates:
           *  InitializeConditions for Memory: '<S729>/Memory13'
           *  InitializeConditions for Memory: '<S729>/Memory3'
           *  InitializeConditions for Memory: '<S729>/Memory4'
           *  InitializeConditions for Memory: '<S729>/Memory5'
           */
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_bb = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_h = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_n = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_j = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S728>/Subsystem' */
        }

        /* Outputs for IfAction SubSystem: '<S728>/Subsystem' incorporates:
         *  ActionPort: '<S729>/Action Port'
         */
        /* Sum: '<S729>/Sum' */
        rtb_steer_dem = rtb_DLookupTable - rtb_Saturation;

        /* Memory: '<S729>/Memory4' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_bb;

        /* Gain: '<S729>/Gain20' */
        rtb_acc_dem = 2.0F * rtb_Saturation2_fh;

        /* Memory: '<S729>/Memory5' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_h;

        /* Sum: '<S729>/Add10' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Saturation3_m;

        /* Memory: '<S729>/Memory3' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_n;

        /* Sum: '<S729>/Subtract1' */
        rtb_Saturation3_m = rtb_steer_dem - rtb_Saturation3_m;

        /* Gain: '<S729>/Gain1' */
        rtb_Saturation3_m *= 300.0F;

        /* Gain: '<S729>/Gain3' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S729>/Add2' */
        rtb_Saturation3_m = (rtb_Saturation3_m + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S729>/Memory13' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_j;

        /* Sum: '<S729>/Subtract5' */
        rtb_acc_dem += rtb_Saturation3_m;

        /* Gain: '<S729>/Gain' */
        rtb_Saturation3_m = 0.125F * rtb_acc_dem;

        /* Sum: '<S729>/Add3' */
        rtb_Saturation3_m +=
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* Saturate: '<S729>/Saturation' */
        if (rtb_Saturation3_m <= 0.0F) {
          rtb_Saturation3_m = 0.0F;
        }

        /* End of Saturate: '<S729>/Saturation' */

        /* DataTypeConversion: '<S729>/Data Type Conversion' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_f = rtb_Saturation3_m;

        /* Update for Memory: '<S729>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_bb = rtb_steer_dem;

        /* Update for Memory: '<S729>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_h =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S729>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_n = rtb_steer_dem;

        /* Update for Memory: '<S729>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_j = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S728>/Subsystem' */
      }

      /* End of If: '<S728>/If' */

      /* Switch: '<S728>/Switch' */
      if (rtb_Abs4 > 0.5F) {
        rtb_Abs14_m = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_f;
      } else {
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;
      }

      /* End of Switch: '<S728>/Switch' */

      /* If: '<S728>/If4' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem;
      rtAction = -1;
      if (rtb_Add2_c > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S728>/Subsystem4' incorporates:
           *  InitializeConditions for ActionPort: '<S733>/Action Port'
           */
          /* InitializeConditions for If: '<S728>/If4' incorporates:
           *  InitializeConditions for Memory: '<S733>/Memory13'
           *  InitializeConditions for Memory: '<S733>/Memory3'
           *  InitializeConditions for Memory: '<S733>/Memory4'
           *  InitializeConditions for Memory: '<S733>/Memory5'
           */
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_k = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_p = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_a = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S728>/Subsystem4' */
        }

        /* Outputs for IfAction SubSystem: '<S728>/Subsystem4' incorporates:
         *  ActionPort: '<S733>/Action Port'
         */
        /* Sum: '<S733>/Sum' */
        rtb_steer_dem = rtb_DLookupTable - rtb_Saturation1;

        /* Memory: '<S733>/Memory4' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_k;

        /* Gain: '<S733>/Gain20' */
        rtb_acc_dem = 2.0F * rtb_Saturation2_fh;

        /* Memory: '<S733>/Memory5' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_p;

        /* Sum: '<S733>/Add10' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Saturation3_m;

        /* Memory: '<S733>/Memory3' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_a;

        /* Sum: '<S733>/Subtract1' */
        rtb_Saturation3_m = rtb_steer_dem - rtb_Saturation3_m;

        /* Gain: '<S733>/Gain1' */
        rtb_Saturation3_m *= 300.0F;

        /* Gain: '<S733>/Gain3' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S733>/Add2' */
        rtb_Saturation3_m = (rtb_Saturation3_m + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S733>/Memory13' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput;

        /* Sum: '<S733>/Subtract5' */
        rtb_acc_dem += rtb_Saturation3_m;

        /* Gain: '<S733>/Gain' */
        rtb_Saturation3_m = 0.125F * rtb_acc_dem;

        /* Sum: '<S733>/Add3' */
        rtb_Saturation3_m +=
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* Saturate: '<S733>/Saturation' */
        if (rtb_Saturation3_m <= 0.0F) {
          rtb_Saturation3_m = 0.0F;
        }

        /* End of Saturate: '<S733>/Saturation' */

        /* DataTypeConversion: '<S733>/Data Type Conversion' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion = rtb_Saturation3_m;

        /* Update for Memory: '<S733>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_k = rtb_steer_dem;

        /* Update for Memory: '<S733>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_p =
          rtb_Saturation2_fh;

        /* Update for Memory: '<S733>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_a = rtb_steer_dem;

        /* Update for Memory: '<S733>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S728>/Subsystem4' */
      }

      /* End of If: '<S728>/If4' */

      /* Switch: '<S728>/Switch4' */
      if (rtb_Add2_c > 0.5F) {
        rtb_Abs13_a = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion;
      } else {
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;
      }

      /* End of Switch: '<S728>/Switch4' */

      /* If: '<S728>/If1' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem;
      rtAction = -1;
      if (rtb_Gain6_f > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S728>/Subsystem1' incorporates:
           *  InitializeConditions for ActionPort: '<S730>/Action Port'
           */
          /* InitializeConditions for If: '<S728>/If1' incorporates:
           *  InitializeConditions for Memory: '<S730>/Memory13'
           *  InitializeConditions for Memory: '<S730>/Memory3'
           *  InitializeConditions for Memory: '<S730>/Memory4'
           *  InitializeConditions for Memory: '<S730>/Memory5'
           */
          six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_h = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_f = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_f3 = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_o = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S728>/Subsystem1' */
        }

        /* Outputs for IfAction SubSystem: '<S728>/Subsystem1' incorporates:
         *  ActionPort: '<S730>/Action Port'
         */
        /* Sum: '<S730>/Sum' */
        rtb_steer_dem = rtb_DLookupTable - rtb_Saturation2;

        /* Memory: '<S730>/Memory4' */
        rtb_Product_m = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_h;

        /* Gain: '<S730>/Gain20' */
        rtb_acc_dem = 2.0F * rtb_Product_m;

        /* Memory: '<S730>/Memory5' */
        rtb_Gain3_o = six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_f;

        /* Sum: '<S730>/Add10' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Gain3_o;

        /* Memory: '<S730>/Memory3' */
        rtb_Gain3_o = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_f3;

        /* Sum: '<S730>/Subtract1' */
        rtb_Gain3_o = rtb_steer_dem - rtb_Gain3_o;

        /* Gain: '<S730>/Gain1' */
        rtb_Gain3_o *= 300.0F;

        /* Gain: '<S730>/Gain3' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S730>/Add2' */
        rtb_Gain3_o = (rtb_Gain3_o + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S730>/Memory13' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_o;

        /* Sum: '<S730>/Subtract5' */
        rtb_acc_dem += rtb_Gain3_o;

        /* Gain: '<S730>/Gain' */
        rtb_Gain3_o = 0.125F * rtb_acc_dem;

        /* Sum: '<S730>/Add3' */
        rtb_Gain3_o +=
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* Saturate: '<S730>/Saturation' */
        if (rtb_Gain3_o <= 0.0F) {
          rtb_Gain3_o = 0.0F;
        }

        /* End of Saturate: '<S730>/Saturation' */

        /* DataTypeConversion: '<S730>/Data Type Conversion' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_g = rtb_Gain3_o;

        /* Update for Memory: '<S730>/Memory4' */
        six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_h = rtb_steer_dem;

        /* Update for Memory: '<S730>/Memory5' */
        six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_f = rtb_Product_m;

        /* Update for Memory: '<S730>/Memory3' */
        six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_f3 = rtb_steer_dem;

        /* Update for Memory: '<S730>/Memory13' */
        six_plus_six_AcmsteeringV09__DW.Memory13_PreviousInput_o = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S728>/Subsystem1' */
      }

      /* End of If: '<S728>/If1' */

      /* Switch: '<S728>/Switch1' */
      if (rtb_Gain6_f > 0.5F) {
        rtb_Abs = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion_g;
      } else {
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;
      }

      /* End of Switch: '<S728>/Switch1' */

      /* If: '<S728>/If2' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem;
      rtAction = -1;
      if (rtb_Abs12_e > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S728>/Subsystem2' incorporates:
           *  InitializeConditions for ActionPort: '<S731>/Action Port'
           */
          /* InitializeConditions for If: '<S728>/If2' incorporates:
           *  InitializeConditions for Memory: '<S731>/Memory1'
           *  InitializeConditions for Memory: '<S731>/Memory15'
           *  InitializeConditions for Memory: '<S731>/Memory2'
           *  InitializeConditions for Memory: '<S731>/Memory6'
           */
          six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_i = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_m = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_p3 = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_c = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S728>/Subsystem2' */
        }

        /* Outputs for IfAction SubSystem: '<S728>/Subsystem2' incorporates:
         *  ActionPort: '<S731>/Action Port'
         */
        /* Sum: '<S731>/Sum3' */
        rtb_Product_m = rtb_DLookupTable - rtb_Saturation3;

        /* Memory: '<S731>/Memory1' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_i;

        /* Sum: '<S731>/Subtract2' */
        rtb_acc_dem = rtb_Product_m - rtb_acc_dem;

        /* Gain: '<S731>/Gain16' */
        rtb_acc_dem *= 300.0F;

        /* Memory: '<S731>/Memory2' */
        rtb_Gain3_o = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_m;

        /* Gain: '<S731>/Gain18' */
        rtb_steer_dem = 2.0F * rtb_Gain3_o;

        /* Memory: '<S731>/Memory6' */
        rtb_brake_dem = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_p3;

        /* Sum: '<S731>/Add9' */
        rtb_steer_dem = (rtb_Product_m - rtb_steer_dem) + rtb_brake_dem;

        /* Gain: '<S731>/Gain19' */
        rtb_steer_dem *= 0.0F;

        /* Sum: '<S731>/Add11' */
        rtb_acc_dem = (rtb_acc_dem + rtb_Product_m) + rtb_steer_dem;

        /* Memory: '<S731>/Memory15' */
        rtb_brake_dem = six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_c;

        /* Sum: '<S731>/Subtract7' */
        rtb_acc_dem += rtb_brake_dem;

        /* Gain: '<S731>/Gain14' */
        rtb_brake_dem = 0.125F * rtb_acc_dem;

        /* Sum: '<S731>/Add8' */
        rtb_brake_dem +=
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* Saturate: '<S731>/Saturation' */
        if (rtb_brake_dem <= 0.0F) {
          rtb_brake_dem = 0.0F;
        }

        /* End of Saturate: '<S731>/Saturation' */

        /* DataTypeConversion: '<S731>/Data Type Conversion2' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_a = rtb_brake_dem;

        /* Update for Memory: '<S731>/Memory1' */
        six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_i = rtb_Product_m;

        /* Update for Memory: '<S731>/Memory2' */
        six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_m = rtb_Product_m;

        /* Update for Memory: '<S731>/Memory6' */
        six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_p3 = rtb_Gain3_o;

        /* Update for Memory: '<S731>/Memory15' */
        six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput_c = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S728>/Subsystem2' */
      }

      /* End of If: '<S728>/If2' */

      /* Switch: '<S728>/Switch3' */
      if (rtb_Abs12_e > 0.5F) {
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_a;
      } else {
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;
      }

      /* End of Switch: '<S728>/Switch3' */

      /* If: '<S728>/If5' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem;
      rtAction = -1;
      if (rtb_Abs20_g > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S728>/Subsystem5' incorporates:
           *  InitializeConditions for ActionPort: '<S734>/Action Port'
           */
          /* InitializeConditions for If: '<S728>/If5' incorporates:
           *  InitializeConditions for Memory: '<S734>/Memory1'
           *  InitializeConditions for Memory: '<S734>/Memory15'
           *  InitializeConditions for Memory: '<S734>/Memory2'
           *  InitializeConditions for Memory: '<S734>/Memory6'
           */
          six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_c = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_n = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_i = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S728>/Subsystem5' */
        }

        /* Outputs for IfAction SubSystem: '<S728>/Subsystem5' incorporates:
         *  ActionPort: '<S734>/Action Port'
         */
        /* Sum: '<S734>/Sum3' */
        rtb_Product_m = rtb_DLookupTable - rtb_Saturation4;

        /* Memory: '<S734>/Memory1' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_c;

        /* Sum: '<S734>/Subtract2' */
        rtb_acc_dem = rtb_Product_m - rtb_acc_dem;

        /* Gain: '<S734>/Gain16' */
        rtb_acc_dem *= 300.0F;

        /* Memory: '<S734>/Memory2' */
        rtb_Gain3_o = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_n;

        /* Gain: '<S734>/Gain18' */
        rtb_steer_dem = 2.0F * rtb_Gain3_o;

        /* Memory: '<S734>/Memory6' */
        rtb_brake_dem = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_i;

        /* Sum: '<S734>/Add9' */
        rtb_steer_dem = (rtb_Product_m - rtb_steer_dem) + rtb_brake_dem;

        /* Gain: '<S734>/Gain19' */
        rtb_steer_dem *= 0.0F;

        /* Sum: '<S734>/Add11' */
        rtb_acc_dem = (rtb_acc_dem + rtb_Product_m) + rtb_steer_dem;

        /* Memory: '<S734>/Memory15' */
        rtb_brake_dem = six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput;

        /* Sum: '<S734>/Subtract7' */
        rtb_acc_dem += rtb_brake_dem;

        /* Gain: '<S734>/Gain14' */
        rtb_brake_dem = 0.125F * rtb_acc_dem;

        /* Sum: '<S734>/Add8' */
        rtb_brake_dem +=
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* Saturate: '<S734>/Saturation' */
        if (rtb_brake_dem <= 0.0F) {
          rtb_brake_dem = 0.0F;
        }

        /* End of Saturate: '<S734>/Saturation' */

        /* DataTypeConversion: '<S734>/Data Type Conversion2' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2 = rtb_brake_dem;

        /* Update for Memory: '<S734>/Memory1' */
        six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_c = rtb_Product_m;

        /* Update for Memory: '<S734>/Memory2' */
        six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_n = rtb_Product_m;

        /* Update for Memory: '<S734>/Memory6' */
        six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_i = rtb_Gain3_o;

        /* Update for Memory: '<S734>/Memory15' */
        six_plus_six_AcmsteeringV09__DW.Memory15_PreviousInput = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S728>/Subsystem5' */
      }

      /* End of If: '<S728>/If5' */

      /* Switch: '<S728>/Switch5' */
      if (rtb_Abs20_g > 0.5F) {
        rtb_Abs5 = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2;
      } else {
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;
      }

      /* End of Switch: '<S728>/Switch5' */

      /* If: '<S728>/If3' */
      rtb_Memory_cn = six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem;
      rtAction = -1;
      if (rtb_Abs19_l4 > 0.5F) {
        rtAction = 0;
      }

      six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem = rtAction;
      if (rtAction == 0) {
        if (0 != rtb_Memory_cn) {
          /* InitializeConditions for IfAction SubSystem: '<S728>/Subsystem3' incorporates:
           *  InitializeConditions for ActionPort: '<S732>/Action Port'
           */
          /* InitializeConditions for If: '<S728>/If3' incorporates:
           *  InitializeConditions for Memory: '<S732>/Memory16'
           *  InitializeConditions for Memory: '<S732>/Memory7'
           *  InitializeConditions for Memory: '<S732>/Memory8'
           *  InitializeConditions for Memory: '<S732>/Memory9'
           */
          six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput = 0.0F;
          six_plus_six_AcmsteeringV09__DW.Memory16_PreviousInput = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S728>/Subsystem3' */
        }

        /* Outputs for IfAction SubSystem: '<S728>/Subsystem3' incorporates:
         *  ActionPort: '<S732>/Action Port'
         */
        /* Sum: '<S732>/Sum2' */
        rtb_steer_dem = rtb_DLookupTable - rtb_Saturation5;

        /* Memory: '<S732>/Memory8' */
        rtb_Product_m = six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput;

        /* Gain: '<S732>/Gain23' */
        rtb_acc_dem = 2.0F * rtb_Product_m;

        /* Memory: '<S732>/Memory9' */
        rtb_Gain3_o = six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput;

        /* Sum: '<S732>/Add12' */
        rtb_acc_dem = (rtb_steer_dem - rtb_acc_dem) + rtb_Gain3_o;

        /* Memory: '<S732>/Memory7' */
        rtb_Gain3_o = six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput;

        /* Sum: '<S732>/Subtract3' */
        rtb_Gain3_o = rtb_steer_dem - rtb_Gain3_o;

        /* Gain: '<S732>/Gain21' */
        rtb_Gain3_o *= 300.0F;

        /* Gain: '<S732>/Gain24' */
        rtb_acc_dem *= 0.0F;

        /* Sum: '<S732>/Add13' */
        rtb_Gain3_o = (rtb_Gain3_o + rtb_steer_dem) + rtb_acc_dem;

        /* Memory: '<S732>/Memory16' */
        rtb_acc_dem = six_plus_six_AcmsteeringV09__DW.Memory16_PreviousInput;

        /* Sum: '<S732>/Subtract8' */
        rtb_acc_dem += rtb_Gain3_o;

        /* Gain: '<S732>/Gain15' */
        rtb_Gain3_o = 0.125F * rtb_acc_dem;

        /* Sum: '<S732>/Add6' */
        rtb_Gain3_o +=
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* Saturate: '<S732>/Saturation' */
        if (rtb_Gain3_o <= 0.0F) {
          rtb_Gain3_o = 0.0F;
        }

        /* End of Saturate: '<S732>/Saturation' */

        /* DataTypeConversion: '<S732>/Data Type Conversion3' */
        six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3 = rtb_Gain3_o;

        /* Update for Memory: '<S732>/Memory8' */
        six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput = rtb_steer_dem;

        /* Update for Memory: '<S732>/Memory9' */
        six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput = rtb_Product_m;

        /* Update for Memory: '<S732>/Memory7' */
        six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput = rtb_steer_dem;

        /* Update for Memory: '<S732>/Memory16' */
        six_plus_six_AcmsteeringV09__DW.Memory16_PreviousInput = rtb_acc_dem;

        /* End of Outputs for SubSystem: '<S728>/Subsystem3' */
      }

      /* End of If: '<S728>/If3' */

      /* Switch: '<S728>/Switch2' */
      if (rtb_Abs19_l4 > 0.5F) {
        rtb_Saturation2_fh = six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3;
      } else {
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;
      }

      /* End of Switch: '<S728>/Switch2' */

      /* MATLAB Function: '<S713>/MATLAB Function7' */
      /* MATLAB Function 'MainControl/mode_control/backward/backward/Drive/驱动防滑控制TCS/直行TCS/直行/MATLAB Function7': '<S727>:1' */
      if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f == 0.0F) &&
          (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) && (rtb_Abs19_l4 ==
           0.0F)) {
        /* '<S727>:1:3' */
        /*  0电机滑转===============================================0电机滑转 */
        /* '<S727>:1:4' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:5' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:6' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:7' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:8' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:9' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:10' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:11' */
        /* '<S727>:1:12' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:22' */
        /* 左前轮滑转===================================================1电机滑转 */
        /* '<S727>:1:23' */
        /* '<S727>:1:24' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:25' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:26' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:27' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:28' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:29' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:30' */
        /* '<S727>:1:31' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:32' */
        /* 左中轮滑转 */
        /* '<S727>:1:33' */
        /* '<S727>:1:34' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:35' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:36' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:37' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:38' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:39' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:40' */
        /* '<S727>:1:41' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:42' */
        /* 左后轮滑转 */
        /* '<S727>:1:43' */
        /* '<S727>:1:44' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:45' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:46' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:47' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:48' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:49' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:50' */
        /* '<S727>:1:51' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:53' */
        /* 右前轮滑转 */
        /* '<S727>:1:54' */
        /* '<S727>:1:55' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:56' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:57' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:58' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:59' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:60' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:61' */
        /* '<S727>:1:62' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:63' */
        /* 右中轮滑转 */
        /* '<S727>:1:64' */
        /* '<S727>:1:65' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:66' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:67' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:68' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:69' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:70' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:71' */
        /* '<S727>:1:72' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:73' */
        /* 右后轮滑转 */
        /* '<S727>:1:74' */
        /* '<S727>:1:75' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:76' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:77' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:78' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:79' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:80' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:81' */
        /* '<S727>:1:82' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:93' */
        /* 左前-左中 轮滑转===================================================2电机滑转    左侧 */
        /* '<S727>:1:94' */
        /* '<S727>:1:95' */
        /* '<S727>:1:96' */
        rtb_Abs =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a);

        /* '<S727>:1:97' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:98' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:99' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:100' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:101' */
        /* '<S727>:1:102' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:103' */
        /* 左前-左后 轮滑转 */
        /* '<S727>:1:104' */
        /* '<S727>:1:105' */
        /* '<S727>:1:106' */
        rtb_Abs13_a =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:107' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:108' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:109' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:110' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:111' */
        /* '<S727>:1:112' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:113' */
        /* 左中-左后 轮滑转 */
        /* '<S727>:1:114' */
        /* '<S727>:1:115' */
        /* '<S727>:1:116' */
        rtb_Abs14_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:117' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:118' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:119' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:120' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:121' */
        /* '<S727>:1:122' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:124' */
        /* 右前-右中 轮滑转                        右侧 */
        /* '<S727>:1:125' */
        /* '<S727>:1:126' */
        /* '<S727>:1:127' */
        rtb_Saturation2_fh =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5);

        /* '<S727>:1:128' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:129' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:130' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:131' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:132' */
        /* '<S727>:1:133' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:134' */
        /* 右前-右后 轮滑转 */
        /* '<S727>:1:135' */
        /* '<S727>:1:136' */
        /* '<S727>:1:137' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:138' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:139' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:140' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:141' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:142' */
        /* '<S727>:1:143' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:144' */
        /* 右中-右后 轮滑转 */
        /* '<S727>:1:145' */
        /* '<S727>:1:146' */
        /* '<S727>:1:147' */
        rtb_Saturation3_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:148' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:149' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:150' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:151' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:152' */
        /* '<S727>:1:153' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:155' */
        /* 左前-右前 轮滑转                 对侧 */
        /* '<S727>:1:156' */
        /* '<S727>:1:157' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:158' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:159' */
        /* '<S727>:1:160' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:161' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:162' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:163' */
        /* '<S727>:1:164' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:165' */
        /* 左前-右中 轮滑转 */
        /* '<S727>:1:166' */
        /* '<S727>:1:167' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:168' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:169' */
        /* '<S727>:1:170' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:171' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:172' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:173' */
        /* '<S727>:1:174' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:175' */
        /* 左前-右后 轮滑转 */
        /* '<S727>:1:176' */
        /* '<S727>:1:177' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:178' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:179' */
        /* '<S727>:1:180' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:181' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:182' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:183' */
        /* '<S727>:1:184' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:186' */
        /* 左中-右前 轮滑转                 对侧 */
        /* '<S727>:1:187' */
        /* '<S727>:1:188' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:189' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:190' */
        /* '<S727>:1:191' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:192' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:193' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:194' */
        /* '<S727>:1:195' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:196' */
        /* 左中-右中 轮滑转 */
        /* '<S727>:1:197' */
        /* '<S727>:1:198' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:199' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:200' */
        /* '<S727>:1:201' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:202' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:203' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:204' */
        /* '<S727>:1:205' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:206' */
        /* 左中-右后 轮滑转 */
        /* '<S727>:1:207' */
        /* '<S727>:1:208' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:209' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:210' */
        /* '<S727>:1:211' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:212' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:213' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:214' */
        /* '<S727>:1:215' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:216' */
        /* 左后-右前 轮滑转                 对侧 */
        /* '<S727>:1:217' */
        /* '<S727>:1:218' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:219' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:220' */
        /* '<S727>:1:221' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:222' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:223' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:224' */
        /* '<S727>:1:225' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:226' */
        /* 左后-右中 轮滑转 */
        /* '<S727>:1:227' */
        /* '<S727>:1:228' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:229' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:230' */
        /* '<S727>:1:231' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:232' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:233' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:234' */
        /* '<S727>:1:235' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:236' */
        /* 左后-右后 轮滑转 */
        /* '<S727>:1:237' */
        /* '<S727>:1:238' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:239' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:240' */
        /* '<S727>:1:241' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:242' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:243' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:244' */
        /* '<S727>:1:245' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:268' */
        /* 左前-左中-左后 轮滑转===================================================3电机滑转    左侧 */
        /* '<S727>:1:269' */
        /* '<S727>:1:270' */
        /* '<S727>:1:271' */
        /* '<S727>:1:272' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
             rtb_Abs14_m) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
             rtb_Abs13_a)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
            rtb_Abs)) / 3.0F;

        /* '<S727>:1:273' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
             rtb_Abs14_m) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
             rtb_Abs13_a)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
            rtb_Abs)) / 3.0F;

        /* '<S727>:1:274' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
             rtb_Abs14_m) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
             rtb_Abs13_a)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
            rtb_Abs)) / 3.0F;

        /* '<S727>:1:275' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:276' */
        /* '<S727>:1:277' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:278' */
        /* 右前-右中-右后 轮滑转                      右侧 */
        /* '<S727>:1:279' */
        /* '<S727>:1:280' */
        /* '<S727>:1:281' */
        /* '<S727>:1:282' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
             rtb_Saturation3_m) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
             rtb_Abs5)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
            rtb_Saturation2_fh)) / 3.0F;

        /* '<S727>:1:283' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
             rtb_Saturation3_m) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
             rtb_Abs5)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
            rtb_Saturation2_fh)) / 3.0F;

        /* '<S727>:1:284' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
          (((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
             rtb_Saturation3_m) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
             rtb_Abs5)) +
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
            rtb_Saturation2_fh)) / 3.0F;

        /* '<S727>:1:285' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:286' */
        /* '<S727>:1:287' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:289' */
        /* 左前-左中-右前 轮滑转 */
        /* '<S727>:1:290' */
        /* '<S727>:1:291' */
        /* '<S727>:1:292' */
        rtb_Abs =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a);

        /* '<S727>:1:293' */
        /* '<S727>:1:294' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:295' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:296' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:297' */
        /* '<S727>:1:298' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:299' */
        /* 左前-左中-右中 轮滑转 */
        /* '<S727>:1:300' */
        /* '<S727>:1:301' */
        /* '<S727>:1:302' */
        rtb_Abs =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a);

        /* '<S727>:1:303' */
        /* '<S727>:1:304' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:305' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:306' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:307' */
        /* '<S727>:1:308' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:309' */
        /* 左前-左中-右后 轮滑转 */
        /* '<S727>:1:310' */
        /* '<S727>:1:311' */
        /* '<S727>:1:312' */
        rtb_Abs =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a);

        /* '<S727>:1:313' */
        /* '<S727>:1:314' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:315' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:316' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:317' */
        /* '<S727>:1:318' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:320' */
        /* 左前-左后-右前 轮滑转 */
        /* '<S727>:1:321' */
        /* '<S727>:1:322' */
        /* '<S727>:1:323' */
        rtb_Abs13_a =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:324' */
        /* '<S727>:1:325' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:326' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:327' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:328' */
        /* '<S727>:1:329' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:330' */
        /* 左前-左后-右中 轮滑转 */
        /* '<S727>:1:331' */
        /* '<S727>:1:332' */
        /* '<S727>:1:333' */
        rtb_Abs13_a =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:334' */
        /* '<S727>:1:335' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:336' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:337' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:338' */
        /* '<S727>:1:339' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:340' */
        /* 左前-左后-右后 轮滑转 */
        /* '<S727>:1:341' */
        /* '<S727>:1:342' */
        /* '<S727>:1:343' */
        rtb_Abs13_a =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:344' */
        /* '<S727>:1:345' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:346' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:347' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:348' */
        /* '<S727>:1:349' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:351' */
        /* 左中-左后-右前 轮滑转 */
        /* '<S727>:1:352' */
        /* '<S727>:1:353' */
        /* '<S727>:1:354' */
        rtb_Abs14_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:355' */
        /* '<S727>:1:356' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:357' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
           rtb_Saturation3_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:358' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:359' */
        /* '<S727>:1:360' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:361' */
        /* 左中-左后-右中 轮滑转 */
        /* '<S727>:1:362' */
        /* '<S727>:1:363' */
        /* '<S727>:1:364' */
        rtb_Abs14_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:365' */
        /* '<S727>:1:366' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:367' */
        rtb_Saturation2_fh =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr;

        /* '<S727>:1:368' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:369' */
        /* '<S727>:1:370' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:371' */
        /* 左中-左后-右后 轮滑转 */
        /* '<S727>:1:372' */
        /* '<S727>:1:373' */
        /* '<S727>:1:374' */
        rtb_Abs14_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:375' */
        /* '<S727>:1:376' */
        rtb_Saturation3_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf;

        /* '<S727>:1:377' */
        rtb_Abs5 =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm;

        /* '<S727>:1:378' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:379' */
        /* '<S727>:1:380' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:382' */
        /* 右前-右中-左前 轮滑转 */
        /* '<S727>:1:383' */
        /* '<S727>:1:384' */
        /* '<S727>:1:385' */
        rtb_Saturation2_fh =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5);

        /* '<S727>:1:386' */
        /* '<S727>:1:387' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:388' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:389' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:390' */
        /* '<S727>:1:391' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:392' */
        /* 右前-右中-左中 轮滑转 */
        /* '<S727>:1:393' */
        /* '<S727>:1:394' */
        /* '<S727>:1:395' */
        rtb_Saturation2_fh =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5);

        /* '<S727>:1:396' */
        /* '<S727>:1:397' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:398' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:399' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:400' */
        /* '<S727>:1:401' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:402' */
        /* 右前-右中-左后 轮滑转 */
        /* '<S727>:1:403' */
        /* '<S727>:1:404' */
        /* '<S727>:1:405' */
        rtb_Saturation2_fh =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5);

        /* '<S727>:1:406' */
        /* '<S727>:1:407' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:408' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:409' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:410' */
        /* '<S727>:1:411' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:413' */
        /* 右前-右后-左前 轮滑转 */
        /* '<S727>:1:414' */
        /* '<S727>:1:415' */
        /* '<S727>:1:416' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:417' */
        /* '<S727>:1:418' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:419' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:420' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:421' */
        /* '<S727>:1:422' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:423' */
        /* 右前-右后-左中 轮滑转 */
        /* '<S727>:1:424' */
        /* '<S727>:1:425' */
        /* '<S727>:1:426' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:427' */
        /* '<S727>:1:428' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:429' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:430' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:431' */
        /* '<S727>:1:432' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:433' */
        /* 右前-右后-左后 轮滑转 */
        /* '<S727>:1:434' */
        /* '<S727>:1:435' */
        /* '<S727>:1:436' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:437' */
        /* '<S727>:1:438' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:439' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:440' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:441' */
        /* '<S727>:1:442' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:444' */
        /* 右中-右后-左前 轮滑转 */
        /* '<S727>:1:445' */
        /* '<S727>:1:446' */
        /* '<S727>:1:447' */
        rtb_Saturation3_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:448' */
        /* '<S727>:1:449' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:450' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
           rtb_Abs14_m) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:451' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:452' */
        /* '<S727>:1:453' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:454' */
        /* 右中-右后-左中 轮滑转 */
        /* '<S727>:1:455' */
        /* '<S727>:1:456' */
        /* '<S727>:1:457' */
        rtb_Saturation3_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:458' */
        /* '<S727>:1:459' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:460' */
        rtb_Abs =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr;

        /* '<S727>:1:461' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:462' */
        /* '<S727>:1:463' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:464' */
        /* 右中-右后-左后 轮滑转 */
        /* '<S727>:1:465' */
        /* '<S727>:1:466' */
        /* '<S727>:1:467' */
        rtb_Saturation3_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:468' */
        /* '<S727>:1:469' */
        rtb_Abs14_m =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf;

        /* '<S727>:1:470' */
        rtb_Abs13_a =
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs) / 2.0F +
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm;

        /* '<S727>:1:471' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:472' */
        /* '<S727>:1:473' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:495' */
        /* 左前-左中-左后 右前 轮滑转===================================================4电机滑转 */
        /* '<S727>:1:496' */
        /* '<S727>:1:497' */
        /* '<S727>:1:498' */
        /* '<S727>:1:499' */
        /* '<S727>:1:500' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
              rtb_Abs14_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
              rtb_Abs13_a)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
             rtb_Abs)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m)) / 2.0F;

        /* '<S727>:1:501' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
              rtb_Abs14_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
              rtb_Abs13_a)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
             rtb_Abs)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m)) / 2.0F;

        /* '<S727>:1:502' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:503' */
        /* '<S727>:1:504' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:505' */
        /* 左前-左中-左后 右中 轮滑转 */
        /* '<S727>:1:506' */
        /* '<S727>:1:507' */
        /* '<S727>:1:508' */
        /* '<S727>:1:509' */
        /* '<S727>:1:510' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
              rtb_Abs14_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
              rtb_Abs13_a)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
             rtb_Abs)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5)) / 2.0F;

        /* '<S727>:1:511' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
              rtb_Abs14_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
              rtb_Abs13_a)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
             rtb_Abs)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5)) / 2.0F;

        /* '<S727>:1:512' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:513' */
        /* '<S727>:1:514' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:515' */
        /* 左前-左中-左后 右后 轮滑转 */
        /* '<S727>:1:516' */
        /* '<S727>:1:517' */
        /* '<S727>:1:518' */
        /* '<S727>:1:519' */
        /* '<S727>:1:520' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
              rtb_Abs14_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
              rtb_Abs13_a)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
             rtb_Abs)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
            rtb_Saturation2_fh)) / 2.0F;

        /* '<S727>:1:521' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
              rtb_Abs14_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
              rtb_Abs13_a)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
             rtb_Abs)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
            rtb_Saturation2_fh)) / 2.0F;

        /* '<S727>:1:522' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:523' */
        /* '<S727>:1:524' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:526' */
        /* 右前-右中-右后 左前 轮滑转 */
        /* '<S727>:1:527' */
        /* '<S727>:1:528' */
        /* '<S727>:1:529' */
        /* '<S727>:1:530' */
        /* '<S727>:1:531' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
              rtb_Saturation3_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
              rtb_Abs5)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
             rtb_Saturation2_fh)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m)) / 2.0F;

        /* '<S727>:1:532' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
              rtb_Saturation3_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
              rtb_Abs5)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
             rtb_Saturation2_fh)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m)) / 2.0F;

        /* '<S727>:1:533' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:534' */
        /* '<S727>:1:535' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:536' */
        /* 右前-右中-右后 左中 轮滑转 */
        /* '<S727>:1:537' */
        /* '<S727>:1:538' */
        /* '<S727>:1:539' */
        /* '<S727>:1:540' */
        /* '<S727>:1:541' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
              rtb_Saturation3_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
              rtb_Abs5)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
             rtb_Saturation2_fh)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a)) / 2.0F;

        /* '<S727>:1:542' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
              rtb_Saturation3_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
              rtb_Abs5)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
             rtb_Saturation2_fh)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a)) / 2.0F;

        /* '<S727>:1:543' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:544' */
        /* '<S727>:1:545' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:546' */
        /* 右前-右中-右后 左后 轮滑转 */
        /* '<S727>:1:547' */
        /* '<S727>:1:548' */
        /* '<S727>:1:549' */
        /* '<S727>:1:550' */
        /* '<S727>:1:551' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
              rtb_Saturation3_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
              rtb_Abs5)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
             rtb_Saturation2_fh)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
            rtb_Abs)) / 2.0F;

        /* '<S727>:1:552' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
          ((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
              rtb_Saturation3_m) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
              rtb_Abs5)) +
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
             rtb_Saturation2_fh)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
            rtb_Abs)) / 2.0F;

        /* '<S727>:1:553' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:554' */
        /* '<S727>:1:555' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:557' */
        /* 左前-左中 右前-右中 轮滑转 */
        /* '<S727>:1:558' */
        /* '<S727>:1:559' */
        /* '<S727>:1:560' */
        rtb_Abs =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a);

        /* '<S727>:1:561' */
        /* '<S727>:1:562' */
        /* '<S727>:1:563' */
        rtb_Saturation2_fh =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5);

        /* '<S727>:1:564' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:565' */
        /* '<S727>:1:566' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:567' */
        /* 左前-左中 右前-右后 轮滑转 */
        /* '<S727>:1:568' */
        /* '<S727>:1:569' */
        /* '<S727>:1:570' */
        rtb_Abs =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a);

        /* '<S727>:1:571' */
        /* '<S727>:1:572' */
        /* '<S727>:1:573' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:574' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:575' */
        /* '<S727>:1:576' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:577' */
        /* 左前-左中 右中-右后 轮滑转 */
        /* '<S727>:1:578' */
        /* '<S727>:1:579' */
        /* '<S727>:1:580' */
        rtb_Abs =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
           rtb_Abs13_a);

        /* '<S727>:1:581' */
        /* '<S727>:1:582' */
        /* '<S727>:1:583' */
        rtb_Saturation3_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:584' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:585' */
        /* '<S727>:1:586' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:588' */
        /* 左前-左后 右前-右中 轮滑转 */
        /* '<S727>:1:589' */
        /* '<S727>:1:590' */
        /* '<S727>:1:591' */
        rtb_Abs13_a =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:592' */
        /* '<S727>:1:593' */
        /* '<S727>:1:594' */
        rtb_Saturation2_fh =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5);

        /* '<S727>:1:595' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:596' */
        /* '<S727>:1:597' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:598' */
        /* 左前-左后 右前-右后 轮滑转 */
        /* '<S727>:1:599' */
        /* '<S727>:1:600' */
        /* '<S727>:1:601' */
        rtb_Abs13_a =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:602' */
        /* '<S727>:1:603' */
        /* '<S727>:1:604' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:605' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:606' */
        /* '<S727>:1:607' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:608' */
        /* 左前-左后 右中-右后 轮滑转 */
        /* '<S727>:1:609' */
        /* '<S727>:1:610' */
        /* '<S727>:1:611' */
        rtb_Abs13_a =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
            rtb_Abs14_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:612' */
        /* '<S727>:1:613' */
        /* '<S727>:1:614' */
        rtb_Saturation3_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:615' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:616' */
        /* '<S727>:1:617' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:619' */
        /* 左中-左后 右前-右中 轮滑转 */
        /* '<S727>:1:620' */
        /* '<S727>:1:621' */
        /* '<S727>:1:622' */
        rtb_Abs14_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:623' */
        /* '<S727>:1:624' */
        /* '<S727>:1:625' */
        rtb_Saturation2_fh =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
           rtb_Abs5);

        /* '<S727>:1:626' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:627' */
        /* '<S727>:1:628' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:629' */
        /* 左中-左后 右前-右后 轮滑转 */
        /* '<S727>:1:630' */
        /* '<S727>:1:631' */
        /* '<S727>:1:632' */
        rtb_Abs14_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:633' */
        /* '<S727>:1:634' */
        /* '<S727>:1:635' */
        rtb_Abs5 =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
            rtb_Saturation3_m) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:636' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:637' */
        /* '<S727>:1:638' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:639' */
        /* 左中-左后 右中-右后 轮滑转 */
        /* '<S727>:1:640' */
        /* '<S727>:1:641' */
        /* '<S727>:1:642' */
        rtb_Abs14_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
           rtb_Abs);

        /* '<S727>:1:643' */
        /* '<S727>:1:644' */
        /* '<S727>:1:645' */
        rtb_Saturation3_m =
          ((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5) +
           six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf) +
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);

        /* '<S727>:1:646' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:647' */
        /* '<S727>:1:648' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 0.0F)) {
        /* '<S727>:1:666' */
        /* 右后轮不划转===================================================5电机滑转 */
        /* '<S727>:1:667' */
        /* '<S727>:1:668' */
        /* '<S727>:1:669' */
        /* '<S727>:1:670' */
        /* '<S727>:1:671' */
        /* '<S727>:1:672' */
        rtb_Saturation2_fh =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
               rtb_Abs14_m) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
               rtb_Abs13_a)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
              rtb_Abs)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
             rtb_Saturation3_m)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5));

        /* '<S727>:1:673' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:674' */
        /* '<S727>:1:675' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 0.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:676' */
        /* 右中轮不划转 */
        /* '<S727>:1:677' */
        /* '<S727>:1:678' */
        /* '<S727>:1:679' */
        /* '<S727>:1:680' */
        /* '<S727>:1:681' */
        /* '<S727>:1:682' */
        rtb_Abs5 =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
               rtb_Abs14_m) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
               rtb_Abs13_a)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
              rtb_Abs)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
             rtb_Saturation3_m)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
            rtb_Saturation2_fh));

        /* '<S727>:1:683' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:684' */
        /* '<S727>:1:685' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 0.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:686' */
        /* 右前轮不划转 */
        /* '<S727>:1:687' */
        /* '<S727>:1:688' */
        /* '<S727>:1:689' */
        /* '<S727>:1:690' */
        /* '<S727>:1:691' */
        /* '<S727>:1:692' */
        rtb_Saturation3_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
               rtb_Abs14_m) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
               rtb_Abs13_a)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
              rtb_Abs)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
             rtb_Abs5)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
            rtb_Saturation2_fh));

        /* '<S727>:1:693' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:694' */
        /* '<S727>:1:695' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  0.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:696' */
        /* 左后轮不划转===================================================5电机滑转 */
        /* '<S727>:1:697' */
        /* '<S727>:1:698' */
        /* '<S727>:1:699' */
        /* '<S727>:1:700' */
        /* '<S727>:1:701' */
        /* '<S727>:1:702' */
        rtb_Abs =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
               rtb_Saturation3_m) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
               rtb_Abs5)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
              rtb_Saturation2_fh)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
             rtb_Abs14_m)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
            rtb_Abs13_a));

        /* '<S727>:1:703' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:704' */
        /* '<S727>:1:705' */
      } else if ((rtb_Abs4 == 1.0F) && (rtb_Add2_c == 0.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:706' */
        /* 左中轮不划转 */
        /* '<S727>:1:707' */
        /* '<S727>:1:708' */
        /* '<S727>:1:709' */
        /* '<S727>:1:710' */
        /* '<S727>:1:711' */
        /* '<S727>:1:712' */
        rtb_Abs13_a =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
               rtb_Saturation3_m) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
               rtb_Abs5)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
              rtb_Saturation2_fh)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
             rtb_Abs14_m)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
            rtb_Abs));

        /* '<S727>:1:713' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:714' */
        /* '<S727>:1:715' */
      } else if ((rtb_Abs4 == 0.0F) && (rtb_Add2_c == 1.0F) && (rtb_Gain6_f ==
                  1.0F) && (rtb_Abs12_e == 1.0F) && (rtb_Abs20_g == 1.0F) &&
                 (rtb_Abs19_l4 == 1.0F)) {
        /* '<S727>:1:716' */
        /* 左前轮不划转 */
        /* '<S727>:1:717' */
        /* '<S727>:1:718' */
        /* '<S727>:1:719' */
        /* '<S727>:1:720' */
        /* '<S727>:1:721' */
        /* '<S727>:1:722' */
        rtb_Abs14_m =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
               rtb_Saturation3_m) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
               rtb_Abs5)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
              rtb_Saturation2_fh)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
             rtb_Abs13_a)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
            rtb_Abs));

        /* '<S727>:1:723' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:724' */
        /* '<S727>:1:725' */
      } else {
        /*      flag_lf==1 && flag_lm==1 && flag_lr==1 && flag_rf==1 && flag_rm==1 && flag_rr==1 %===================================================6电机滑转 */
        /* '<S727>:1:741' */
        /* '<S727>:1:742' */
        /* '<S727>:1:743' */
        /* '<S727>:1:744' */
        /* '<S727>:1:745' */
        /* '<S727>:1:746' */
        /* '<S727>:1:747' */
        rtb_acc_dem =
          (((((six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lf -
               rtb_Abs14_m) +
              (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lm -
               rtb_Abs13_a)) +
             (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_lr -
              rtb_Abs)) -
            (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rf -
             rtb_Saturation3_m)) -
           (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rm -
            rtb_Abs5)) -
          (six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.trq_dem_rr -
           rtb_Saturation2_fh);
        if (rtb_acc_dem >= 0.0F) {
          /* '<S727>:1:748' */
          /* '<S727>:1:749' */
          rtb_Saturation3_m -= rtb_acc_dem / 3.0F;

          /* '<S727>:1:750' */
          rtb_Abs5 -= rtb_acc_dem / 3.0F;

          /* '<S727>:1:751' */
          rtb_Saturation2_fh -= rtb_acc_dem / 3.0F;
        } else {
          /* '<S727>:1:753' */
          rtb_Abs14_m += rtb_acc_dem / 3.0F;

          /* '<S727>:1:754' */
          rtb_Abs13_a += rtb_acc_dem / 3.0F;

          /* '<S727>:1:755' */
          rtb_Abs += rtb_acc_dem / 3.0F;
        }

        /* '<S727>:1:757' */
        rtb_acc_dem =
          six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_c0.bra_pre_l +
          brake_dem;

        /* '<S727>:1:758' */
        /* '<S727>:1:759' */
      }

      /* End of MATLAB Function: '<S713>/MATLAB Function7' */

      /* Saturate: '<S713>/Saturation4' */
      /* '<S727>:1:764' */
      /* '<S727>:1:765' */
      /* '<S727>:1:766' */
      /* '<S727>:1:767' */
      /* '<S727>:1:768' */
      /* '<S727>:1:769' */
      /* '<S727>:1:770' */
      /* '<S727>:1:771' */
      if (rtb_acc_dem > 100.0F) {
        rtb_steer_dem = 100.0F;
      } else if (rtb_acc_dem < 0.0F) {
        rtb_steer_dem = 0.0F;
      } else {
        rtb_steer_dem = rtb_acc_dem;
      }

      /* End of Saturate: '<S713>/Saturation4' */

      /* Lookup_n-D: '<S713>/1-D Lookup Table1' */
      rtb_steer_dem = look1_iflf_binlx(rtb_steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled46,
        six_plus_six_Acmsteering_ConstP.pooled45, 1U);

      /* Gain: '<S713>/Gain' */
      rtb_Add2_c = 0.5F * rtb_Gain5_d;

      /* Gain: '<S713>/Gain1' */
      rtb_acc_dem = -rtb_Gain5_d;

      /* Memory: '<S713>/Memory4' */
      rtb_Memory4_k = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_lg;

      /* MATLAB Function: '<S713>/HeartBeat' */
      six_plus_six_Acms_HeartBeat(rtb_Memory4_k,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_m);

      /* Memory: '<S713>/Memory5' */
      rtb_Memory5_i = six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_n;

      /* MATLAB Function: '<S713>/HeartBeat1' */
      six_plus_six_Acms_HeartBeat(rtb_Memory5_i,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_b);

      /* Memory: '<S713>/Memory1' */
      rtb_Memory1_g = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_o;

      /* MATLAB Function: '<S713>/HeartBeat2' */
      six_plus_six_Acms_HeartBeat(rtb_Memory1_g,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_l);

      /* Memory: '<S713>/Memory2' */
      rtb_Memory2_c = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_o;

      /* MATLAB Function: '<S713>/HeartBeat3' */
      six_plus_six_Acms_HeartBeat(rtb_Memory2_c,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_k);

      /* Memory: '<S713>/Memory3' */
      rtb_Memory3_l = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_i;

      /* MATLAB Function: '<S713>/HeartBeat4' */
      six_plus_six_Acms_HeartBeat(rtb_Memory3_l,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_d);

      /* Memory: '<S713>/Memory6' */
      rtb_Memory6_l = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_l;

      /* MATLAB Function: '<S713>/HeartBeat5' */
      six_plus_six_Acms_HeartBeat(rtb_Memory6_l,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_j);

      /* Saturate: '<S713>/Saturation' */
      if (rtb_Abs14_m > 70.5F) {
        rtb_Gain6_f = 70.5F;
      } else if (rtb_Abs14_m < -70.5F) {
        rtb_Gain6_f = -70.5F;
      } else {
        rtb_Gain6_f = rtb_Abs14_m;
      }

      /* End of Saturate: '<S713>/Saturation' */

      /* Saturate: '<S713>/Saturation1' */
      if (rtb_Abs > 70.5F) {
        rtb_Abs4 = 70.5F;
      } else if (rtb_Abs < -70.5F) {
        rtb_Abs4 = -70.5F;
      } else {
        rtb_Abs4 = rtb_Abs;
      }

      /* End of Saturate: '<S713>/Saturation1' */

      /* Saturate: '<S713>/Saturation10' */
      if (rtb_acc_dem > 400000.0F) {
        rtb_Abs = 400000.0F;
      } else if (rtb_acc_dem < -400000.0F) {
        rtb_Abs = -400000.0F;
      } else {
        rtb_Abs = rtb_acc_dem;
      }

      /* End of Saturate: '<S713>/Saturation10' */

      /* Saturate: '<S713>/Saturation11' */
      if (rtb_steer_dem > 750000.0F) {
        rtb_brake_dem = 750000.0F;
      } else if (rtb_steer_dem < -140000.0F) {
        rtb_brake_dem = -140000.0F;
      } else {
        rtb_brake_dem = rtb_steer_dem;
      }

      /* End of Saturate: '<S713>/Saturation11' */

      /* Saturate: '<S713>/Saturation2' */
      if (rtb_Saturation3_m > 70.5F) {
        rtb_Gain3_o = 70.5F;
      } else if (rtb_Saturation3_m < -70.5F) {
        rtb_Gain3_o = -70.5F;
      } else {
        rtb_Gain3_o = rtb_Saturation3_m;
      }

      /* End of Saturate: '<S713>/Saturation2' */

      /* Saturate: '<S713>/Saturation3' */
      if (rtb_Saturation2_fh > 70.5F) {
        rtb_Product_m = 70.5F;
      } else if (rtb_Saturation2_fh < -70.5F) {
        rtb_Product_m = -70.5F;
      } else {
        rtb_Product_m = rtb_Saturation2_fh;
      }

      /* End of Saturate: '<S713>/Saturation3' */

      /* Saturate: '<S713>/Saturation6' */
      if (rtb_Abs13_a > 70.5F) {
        rtb_Saturation3_m = 70.5F;
      } else if (rtb_Abs13_a < -70.5F) {
        rtb_Saturation3_m = -70.5F;
      } else {
        rtb_Saturation3_m = rtb_Abs13_a;
      }

      /* End of Saturate: '<S713>/Saturation6' */

      /* Saturate: '<S713>/Saturation7' */
      if (rtb_Abs5 > 70.5F) {
        rtb_Saturation2_fh = 70.5F;
      } else if (rtb_Abs5 < -70.5F) {
        rtb_Saturation2_fh = -70.5F;
      } else {
        rtb_Saturation2_fh = rtb_Abs5;
      }

      /* End of Saturate: '<S713>/Saturation7' */

      /* Saturate: '<S713>/Saturation8' */
      if (rtb_Gain5_d > 400000.0F) {
        rtb_steer_dem = 400000.0F;
      } else if (rtb_Gain5_d < -400000.0F) {
        rtb_steer_dem = -400000.0F;
      } else {
        rtb_steer_dem = rtb_Gain5_d;
      }

      /* End of Saturate: '<S713>/Saturation8' */

      /* Saturate: '<S713>/Saturation9' */
      if (rtb_Add2_c > 400000.0F) {
        rtb_acc_dem = 400000.0F;
      } else if (rtb_Add2_c < -400000.0F) {
        rtb_acc_dem = -400000.0F;
      } else {
        rtb_acc_dem = rtb_Add2_c;
      }

      /* End of Saturate: '<S713>/Saturation9' */

      /* Update for Memory: '<S713>/Memory' */
      six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_a =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction_ew.flag_lf_g;

      /* Update for Memory: '<S713>/Memory10' */
      six_plus_six_AcmsteeringV09__DW.Memory10_PreviousInput =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction4_k.flag_lm_g;

      /* Update for Memory: '<S713>/Memory7' */
      six_plus_six_AcmsteeringV09__DW.Memory7_PreviousInput_c =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1_j.flag_lr_g;

      /* Update for Memory: '<S713>/Memory8' */
      six_plus_six_AcmsteeringV09__DW.Memory8_PreviousInput_m =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2_c.flag_rf_k;

      /* Update for Memory: '<S713>/Memory11' */
      six_plus_six_AcmsteeringV09__DW.Memory11_PreviousInput =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction6_e.flag_rm_d;

      /* Update for Memory: '<S713>/Memory9' */
      six_plus_six_AcmsteeringV09__DW.Memory9_PreviousInput_l =
        six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3_l.flag_rr_h;

      /* Update for Memory: '<S713>/Memory4' */
      six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_lg =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_m.life;

      /* Update for Memory: '<S713>/Memory5' */
      six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_n =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_b.life;

      /* Update for Memory: '<S713>/Memory1' */
      six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_o =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_l.life;

      /* Update for Memory: '<S713>/Memory2' */
      six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_o =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_k.life;

      /* Update for Memory: '<S713>/Memory3' */
      six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_i =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_d.life;

      /* Update for Memory: '<S713>/Memory6' */
      six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_l =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_j.life;

      /* End of Outputs for SubSystem: '<S704>/直行' */
      /* End of Outputs for SubSystem: '<S576>/直行TCS' */

      /* SignalConversion: '<S425>/OutportBufferForbackward_dem' incorporates:
       *  Constant: '<S713>/SpdSet_dem'
       *  Constant: '<S713>/SpdSet_dem1'
       *  Constant: '<S713>/SpdSet_dem2'
       *  Constant: '<S713>/SpdSet_dem3'
       *  Constant: '<S713>/SpdSet_dem4'
       *  Constant: '<S713>/SpdSet_dem5'
       *  Constant: '<S713>/mot_enable1'
       *  Constant: '<S713>/mot_enable2'
       *  Constant: '<S713>/mot_enable3'
       *  Constant: '<S713>/mot_enable4'
       *  Constant: '<S713>/mot_enable5'
       *  Constant: '<S713>/mot_enable6'
       *  Constant: '<S713>/mot_gear'
       *  Constant: '<S713>/mot_gear1'
       *  Constant: '<S713>/mot_gear2'
       *  Constant: '<S713>/mot_gear3'
       *  Constant: '<S713>/mot_gear4'
       *  Constant: '<S713>/mot_gear5'
       *  Constant: '<S713>/mot_mode'
       *  Constant: '<S713>/mot_mode1'
       *  Constant: '<S713>/mot_mode2'
       *  Constant: '<S713>/mot_mode3'
       *  Constant: '<S713>/mot_mode4'
       *  Constant: '<S713>/mot_mode5'
       */
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[0] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[1] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[2] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[3] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[4] =
        rtb_Gain6_f;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[5] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_m.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[6] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[7] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[8] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[9] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[10] =
        rtb_Saturation3_m;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[11] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_k.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[12] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[13] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[14] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[15] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[16] =
        rtb_Abs4;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[17] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_b.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[18] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[19] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[20] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[21] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[22] =
        rtb_Gain3_o;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[23] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_l.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[24] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[25] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[26] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[27] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[28] =
        rtb_Saturation2_fh;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[29] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_d.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[30] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[31] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[32] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[33] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[34] =
        rtb_Product_m;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[35] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_j.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[36] =
        rtb_steer_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[37] =
        rtb_acc_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[38] =
        rtb_Abs;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[39] =
        rtb_brake_dem;

      /* Outputs for Atomic SubSystem: '<S425>/目标转向力矩确定模块' */
      six_plus_six_AcmsteeringV_u(rtb_Abs15_i, rtb_Abs16_h, rtb_Abs17_d,
        rtb_Abs18_j, rtb_Abs21, rtb_Abs22);

      /* End of Outputs for SubSystem: '<S425>/目标转向力矩确定模块' */

      /* End of Outputs for SubSystem: '<S423>/Drive' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S423>/Brake' incorporates:
       *  ActionPort: '<S424>/Action Port'
       */
      /* Lookup_n-D: '<S424>/1-D Lookup Table1' */
      rtb_Add2_c = look1_iflf_binlx(six_plus_six_AcmsteeringV09_m_B.steer_dem,
        six_plus_six_Acmsteering_ConstP.pooled41,
        six_plus_six_Acmsteering_ConstP.pooled40, 2U);

      /* Lookup_n-D: '<S424>/1-D Lookup Table2' */
      rtb_Gain6_f = look1_iflf_binlx(brake_dem,
        six_plus_six_Acmsteering_ConstP.pooled46,
        six_plus_six_Acmsteering_ConstP.pooled45, 1U);

      /* Abs: '<S424>/Abs1' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[32];
      if (rtb_y < 0.0) {
        rtb_Abs1_n = (real32_T)-rtb_y;
      } else {
        rtb_Abs1_n = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs1' */

      /* Abs: '<S424>/Abs10' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[89];
      if (rtb_y < 0.0) {
        rtb_Abs10 = (real32_T)-rtb_y;
      } else {
        rtb_Abs10 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs10' */

      /* Abs: '<S424>/Abs11' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[194];
      if (rtb_y < 0.0) {
        rtb_Abs11 = (real32_T)-rtb_y;
      } else {
        rtb_Abs11 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs11' */

      /* Abs: '<S424>/Abs12' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[124];
      if (rtb_y < 0.0) {
        rtb_Abs12 = (real32_T)-rtb_y;
      } else {
        rtb_Abs12 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs12' */

      /* Abs: '<S424>/Abs13' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[54];
      if (rtb_y < 0.0) {
        rtb_Abs13 = (real32_T)-rtb_y;
      } else {
        rtb_Abs13 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs13' */

      /* Abs: '<S424>/Abs14' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
      if (rtb_y < 0.0) {
        rtb_Abs14 = (real32_T)-rtb_y;
      } else {
        rtb_Abs14 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs14' */

      /* Abs: '<S424>/Abs15' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
      if (rtb_y < 0.0) {
        rtb_Abs15 = (real32_T)-rtb_y;
      } else {
        rtb_Abs15 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs15' */

      /* Abs: '<S424>/Abs16' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
      if (rtb_y < 0.0) {
        rtb_Abs16 = (real32_T)-rtb_y;
      } else {
        rtb_Abs16 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs16' */

      /* Abs: '<S424>/Abs17' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
      if (rtb_y < 0.0) {
        rtb_Abs17 = (real32_T)-rtb_y;
      } else {
        rtb_Abs17 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs17' */

      /* Abs: '<S424>/Abs18' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
      if (rtb_y < 0.0) {
        rtb_Abs18 = (real32_T)-rtb_y;
      } else {
        rtb_Abs18 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs18' */

      /* Abs: '<S424>/Abs19' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
      if (rtb_y < 0.0) {
        rtb_Abs19 = (real32_T)-rtb_y;
      } else {
        rtb_Abs19 = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs19' */

      /* Abs: '<S424>/Abs2' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[50];
      if (rtb_y < 0.0) {
        rtb_Abs2_m = (real32_T)-rtb_y;
      } else {
        rtb_Abs2_m = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs2' */

      /* Abs: '<S424>/Abs3' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[229];
      if (rtb_y < 0.0) {
        rtb_Abs3_n = (real32_T)-rtb_y;
      } else {
        rtb_Abs3_n = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs3' */

      /* Abs: '<S424>/Abs4' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[159];
      if (rtb_y < 0.0) {
        rtb_Abs4_b = (real32_T)-rtb_y;
      } else {
        rtb_Abs4_b = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs4' */

      /* Abs: '<S424>/Abs5' */
      rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[14];
      if (rtb_y < 0.0) {
        rtb_Abs5_f = (real32_T)-rtb_y;
      } else {
        rtb_Abs5_f = (real32_T)rtb_y;
      }

      /* End of Abs: '<S424>/Abs5' */

      /* Gain: '<S424>/Gain2' */
      rtb_acc_dem = 0.01F * brake_dem;

      /* Product: '<S424>/Product' incorporates:
       *  Constant: '<S424>/Constant4'
       */
      rtb_acc_dem *= 5020.0F;

      /* DataTypeConversion: '<S424>/Data Type Conversion1' */
      rtb_y = rtb_acc_dem;

      /* Gain: '<S424>/Gain' */
      rtb_Gain = 0.16666666666666666 * rtb_y;

      /* Gain: '<S424>/Gain1' */
      rtb_acc_dem = 0.5F * rtb_Add2_c;

      /* Gain: '<S424>/Gain3' */
      rtb_steer_dem = -rtb_Add2_c;

      /* Memory: '<S424>/Memory4' */
      rtb_Memory4_i = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_p;

      /* MATLAB Function: '<S424>/HeartBeat' */
      six_plus_six_Acms_HeartBeat(rtb_Memory4_i,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_f);

      /* Memory: '<S424>/Memory5' */
      rtb_Memory5 = six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_o;

      /* MATLAB Function: '<S424>/HeartBeat1' */
      six_plus_six_Acms_HeartBeat(rtb_Memory5,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_j);

      /* Memory: '<S424>/Memory1' */
      rtb_Memory1_n = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_e;

      /* MATLAB Function: '<S424>/HeartBeat2' */
      six_plus_six_Acms_HeartBeat(rtb_Memory1_n,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_j);

      /* Memory: '<S424>/Memory3' */
      rtb_Memory3_e = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_e;

      /* MATLAB Function: '<S424>/HeartBeat3' */
      six_plus_six_Acms_HeartBeat(rtb_Memory3_e,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_b);

      /* Memory: '<S424>/Memory2' */
      rtb_Memory2_e = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_ak;

      /* MATLAB Function: '<S424>/HeartBeat4' */
      six_plus_six_Acms_HeartBeat(rtb_Memory2_e,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_b);

      /* Memory: '<S424>/Memory6' */
      rtb_Memory6_i = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_n;

      /* MATLAB Function: '<S424>/HeartBeat5' */
      six_plus_six_Acms_HeartBeat(rtb_Memory6_i,
        &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_o);

      /* Saturate: '<S424>/Saturation8' */
      if (rtb_Add2_c > 400000.0F) {
        rtb_Add2_c = 400000.0F;
      } else {
        if (rtb_Add2_c < -400000.0F) {
          rtb_Add2_c = -400000.0F;
        }
      }

      /* End of Saturate: '<S424>/Saturation8' */

      /* Saturate: '<S424>/Saturation9' */
      if (rtb_acc_dem > 400000.0F) {
        rtb_acc_dem = 400000.0F;
      } else {
        if (rtb_acc_dem < -400000.0F) {
          rtb_acc_dem = -400000.0F;
        }
      }

      /* End of Saturate: '<S424>/Saturation9' */

      /* Saturate: '<S424>/Saturation10' */
      if (rtb_steer_dem > 400000.0F) {
        rtb_steer_dem = 400000.0F;
      } else {
        if (rtb_steer_dem < -400000.0F) {
          rtb_steer_dem = -400000.0F;
        }
      }

      /* End of Saturate: '<S424>/Saturation10' */

      /* Saturate: '<S424>/Saturation11' */
      if (rtb_Gain6_f > 750000.0F) {
        rtb_Gain6_f = 750000.0F;
      } else {
        if (rtb_Gain6_f < -140000.0F) {
          rtb_Gain6_f = -140000.0F;
        }
      }

      /* End of Saturate: '<S424>/Saturation11' */

      /* SignalConversion: '<S424>/OutportBufferForbackward_dem' incorporates:
       *  Constant: '<S424>/SpdSet_dem'
       *  Constant: '<S424>/SpdSet_dem1'
       *  Constant: '<S424>/SpdSet_dem2'
       *  Constant: '<S424>/SpdSet_dem3'
       *  Constant: '<S424>/SpdSet_dem4'
       *  Constant: '<S424>/SpdSet_dem5'
       *  Constant: '<S424>/mot_enable1'
       *  Constant: '<S424>/mot_enable2'
       *  Constant: '<S424>/mot_enable3'
       *  Constant: '<S424>/mot_enable4'
       *  Constant: '<S424>/mot_enable5'
       *  Constant: '<S424>/mot_enable6'
       *  Constant: '<S424>/mot_gear'
       *  Constant: '<S424>/mot_gear1'
       *  Constant: '<S424>/mot_gear2'
       *  Constant: '<S424>/mot_gear3'
       *  Constant: '<S424>/mot_gear4'
       *  Constant: '<S424>/mot_gear5'
       *  Constant: '<S424>/mot_mode'
       *  Constant: '<S424>/mot_mode1'
       *  Constant: '<S424>/mot_mode2'
       *  Constant: '<S424>/mot_mode3'
       *  Constant: '<S424>/mot_mode4'
       *  Constant: '<S424>/mot_mode5'
       */
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[0] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[1] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[2] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[3] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[4] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[5] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_f.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[6] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[7] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[8] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[9] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[10] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[11] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_b.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[12] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[13] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[14] = 2.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[15] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[16] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[17] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_j.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[18] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[19] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[20] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[21] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[22] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[23] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_j.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[24] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[25] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[26] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[27] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[28] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[29] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_b.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[30] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[31] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[32] = 1.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[33] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[34] = 0.0F;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[35] =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_o.life;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[36] =
        rtb_Add2_c;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[37] =
        rtb_acc_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[38] =
        rtb_steer_dem;
      six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[39] =
        rtb_Gain6_f;

      /* RelationalOperator: '<S441>/Compare' incorporates:
       *  Constant: '<S441>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[244] == 1.0);

      /* RelationalOperator: '<S442>/Compare' incorporates:
       *  Constant: '<S442>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[245] == 1.0);

      /* RelationalOperator: '<S443>/Compare' incorporates:
       *  Constant: '<S443>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[254] == 1.0);

      /* RelationalOperator: '<S444>/Compare' incorporates:
       *  Constant: '<S444>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[255] == 1.0);

      /* RelationalOperator: '<S445>/Compare' incorporates:
       *  Constant: '<S445>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[256] == 1.0);

      /* RelationalOperator: '<S446>/Compare' incorporates:
       *  Constant: '<S446>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[257] == 1.0);

      /* RelationalOperator: '<S447>/Compare' incorporates:
       *  Constant: '<S447>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[258] == 1.0);

      /* RelationalOperator: '<S448>/Compare' incorporates:
       *  Constant: '<S448>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[259] == 1.0);

      /* RelationalOperator: '<S449>/Compare' incorporates:
       *  Constant: '<S449>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[260] == 1.0);

      /* RelationalOperator: '<S450>/Compare' incorporates:
       *  Constant: '<S450>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[261] == 1.0);

      /* RelationalOperator: '<S451>/Compare' incorporates:
       *  Constant: '<S451>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[262] == 1.0);

      /* RelationalOperator: '<S452>/Compare' incorporates:
       *  Constant: '<S452>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[263] == 1.0);

      /* RelationalOperator: '<S453>/Compare' incorporates:
       *  Constant: '<S453>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[246] == 1.0);

      /* RelationalOperator: '<S454>/Compare' incorporates:
       *  Constant: '<S454>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[247] == 1.0);

      /* RelationalOperator: '<S455>/Compare' incorporates:
       *  Constant: '<S455>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[248] == 1.0);

      /* RelationalOperator: '<S456>/Compare' incorporates:
       *  Constant: '<S456>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[249] == 1.0);

      /* RelationalOperator: '<S457>/Compare' incorporates:
       *  Constant: '<S457>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[250] == 1.0);

      /* RelationalOperator: '<S458>/Compare' incorporates:
       *  Constant: '<S458>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[251] == 1.0);

      /* RelationalOperator: '<S459>/Compare' incorporates:
       *  Constant: '<S459>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[252] == 1.0);

      /* RelationalOperator: '<S460>/Compare' incorporates:
       *  Constant: '<S460>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[253] == 1.0);

      /* Logic: '<S433>/Logical Operator' */
      rtb_LogicalOperator_g = (rtb_Compare || rtb_Compare_ak || rtb_Compare_pb ||
        rtb_Compare_kt || rtb_Compare_jl || rtb_Compare_kd || rtb_Compare_d1 ||
        rtb_Compare_kf2 || rtb_Compare_c || rtb_Compare_ci || Compare ||
        Compare_p || rtb_Compare_i3 || rtb_Compare_gb || rtb_Compare_hb ||
        rtb_Compare_fd || rtb_Compare_mr || rtb_Compare_op || rtb_Compare_h1 ||
        rtb_Compare_b4);

      /* Lookup_n-D: '<S434>/mot_map' */
      rtb_mot_map = look1_iflf_binlx(rtb_Abs14,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S434>/mot_map4' */
      rtb_mot_map4 = look1_iflf_binlx(rtb_Abs15,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S434>/mot_map1' */
      rtb_mot_map1 = look1_iflf_binlx(rtb_Abs16,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S434>/mot_map2' */
      rtb_mot_map2 = look1_iflf_binlx(rtb_Abs17,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S434>/mot_map5' */
      rtb_mot_map5 = look1_iflf_binlx(rtb_Abs18,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* Lookup_n-D: '<S434>/mot_map3' */
      rtb_mot_map3 = look1_iflf_binlx(rtb_Abs19,
        six_plus_six_Acmsteering_ConstP.pooled74,
        six_plus_six_Acmsteering_ConstP.pooled73, 11U);

      /* RelationalOperator: '<S461>/Compare' incorporates:
       *  Constant: '<S461>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[174] == 1.0);

      /* RelationalOperator: '<S462>/Compare' incorporates:
       *  Constant: '<S462>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[175] == 1.0);

      /* RelationalOperator: '<S463>/Compare' incorporates:
       *  Constant: '<S463>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[184] == 1.0);

      /* RelationalOperator: '<S464>/Compare' incorporates:
       *  Constant: '<S464>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[185] == 1.0);

      /* RelationalOperator: '<S465>/Compare' incorporates:
       *  Constant: '<S465>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[186] == 1.0);

      /* RelationalOperator: '<S466>/Compare' incorporates:
       *  Constant: '<S466>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[187] == 1.0);

      /* RelationalOperator: '<S467>/Compare' incorporates:
       *  Constant: '<S467>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[188] == 1.0);

      /* RelationalOperator: '<S468>/Compare' incorporates:
       *  Constant: '<S468>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[189] == 1.0);

      /* RelationalOperator: '<S469>/Compare' incorporates:
       *  Constant: '<S469>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[190] == 1.0);

      /* RelationalOperator: '<S470>/Compare' incorporates:
       *  Constant: '<S470>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[191] == 1.0);

      /* RelationalOperator: '<S471>/Compare' incorporates:
       *  Constant: '<S471>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[192] == 1.0);

      /* RelationalOperator: '<S472>/Compare' incorporates:
       *  Constant: '<S472>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[193] == 1.0);

      /* RelationalOperator: '<S473>/Compare' incorporates:
       *  Constant: '<S473>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[176] == 1.0);

      /* RelationalOperator: '<S474>/Compare' incorporates:
       *  Constant: '<S474>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[177] == 1.0);

      /* RelationalOperator: '<S475>/Compare' incorporates:
       *  Constant: '<S475>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[178] == 1.0);

      /* RelationalOperator: '<S476>/Compare' incorporates:
       *  Constant: '<S476>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[179] == 1.0);

      /* RelationalOperator: '<S477>/Compare' incorporates:
       *  Constant: '<S477>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[180] == 1.0);

      /* RelationalOperator: '<S478>/Compare' incorporates:
       *  Constant: '<S478>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[181] == 1.0);

      /* RelationalOperator: '<S479>/Compare' incorporates:
       *  Constant: '<S479>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[182] == 1.0);

      /* RelationalOperator: '<S480>/Compare' incorporates:
       *  Constant: '<S480>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[183] == 1.0);

      /* Logic: '<S435>/Logical Operator' */
      rtb_LogicalOperator_a = (rtb_Compare_ci || rtb_Compare_c || rtb_Compare_fd
        || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 || Compare_p ||
        Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2 ||
        rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S481>/Compare' incorporates:
       *  Constant: '<S481>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[104] == 1.0);

      /* RelationalOperator: '<S482>/Compare' incorporates:
       *  Constant: '<S482>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[105] == 1.0);

      /* RelationalOperator: '<S483>/Compare' incorporates:
       *  Constant: '<S483>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[114] == 1.0);

      /* RelationalOperator: '<S484>/Compare' incorporates:
       *  Constant: '<S484>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[115] == 1.0);

      /* RelationalOperator: '<S485>/Compare' incorporates:
       *  Constant: '<S485>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[116] == 1.0);

      /* RelationalOperator: '<S486>/Compare' incorporates:
       *  Constant: '<S486>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[117] == 1.0);

      /* RelationalOperator: '<S487>/Compare' incorporates:
       *  Constant: '<S487>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[118] == 1.0);

      /* RelationalOperator: '<S488>/Compare' incorporates:
       *  Constant: '<S488>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[119] == 1.0);

      /* RelationalOperator: '<S489>/Compare' incorporates:
       *  Constant: '<S489>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[120] == 1.0);

      /* RelationalOperator: '<S490>/Compare' incorporates:
       *  Constant: '<S490>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[121] == 1.0);

      /* RelationalOperator: '<S491>/Compare' incorporates:
       *  Constant: '<S491>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[122] == 1.0);

      /* RelationalOperator: '<S492>/Compare' incorporates:
       *  Constant: '<S492>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[123] == 1.0);

      /* RelationalOperator: '<S493>/Compare' incorporates:
       *  Constant: '<S493>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[106] == 1.0);

      /* RelationalOperator: '<S494>/Compare' incorporates:
       *  Constant: '<S494>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[107] == 1.0);

      /* RelationalOperator: '<S495>/Compare' incorporates:
       *  Constant: '<S495>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[108] == 1.0);

      /* RelationalOperator: '<S496>/Compare' incorporates:
       *  Constant: '<S496>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[109] == 1.0);

      /* RelationalOperator: '<S497>/Compare' incorporates:
       *  Constant: '<S497>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[110] == 1.0);

      /* RelationalOperator: '<S498>/Compare' incorporates:
       *  Constant: '<S498>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[111] == 1.0);

      /* RelationalOperator: '<S499>/Compare' incorporates:
       *  Constant: '<S499>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[112] == 1.0);

      /* RelationalOperator: '<S500>/Compare' incorporates:
       *  Constant: '<S500>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[113] == 1.0);

      /* Logic: '<S436>/Logical Operator' */
      rtb_LogicalOperator_n = (rtb_Compare_ci || rtb_Compare_c || rtb_Compare_fd
        || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 || Compare_p ||
        Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2 ||
        rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S501>/Compare' incorporates:
       *  Constant: '<S501>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[209] == 1.0);

      /* RelationalOperator: '<S502>/Compare' incorporates:
       *  Constant: '<S502>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[210] == 1.0);

      /* RelationalOperator: '<S503>/Compare' incorporates:
       *  Constant: '<S503>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[219] == 1.0);

      /* RelationalOperator: '<S504>/Compare' incorporates:
       *  Constant: '<S504>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[220] == 1.0);

      /* RelationalOperator: '<S505>/Compare' incorporates:
       *  Constant: '<S505>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[221] == 1.0);

      /* RelationalOperator: '<S506>/Compare' incorporates:
       *  Constant: '<S506>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[222] == 1.0);

      /* RelationalOperator: '<S507>/Compare' incorporates:
       *  Constant: '<S507>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[223] == 1.0);

      /* RelationalOperator: '<S508>/Compare' incorporates:
       *  Constant: '<S508>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[224] == 1.0);

      /* RelationalOperator: '<S509>/Compare' incorporates:
       *  Constant: '<S509>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[225] == 1.0);

      /* RelationalOperator: '<S510>/Compare' incorporates:
       *  Constant: '<S510>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[226] == 1.0);

      /* RelationalOperator: '<S511>/Compare' incorporates:
       *  Constant: '<S511>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[227] == 1.0);

      /* RelationalOperator: '<S512>/Compare' incorporates:
       *  Constant: '<S512>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[228] == 1.0);

      /* RelationalOperator: '<S513>/Compare' incorporates:
       *  Constant: '<S513>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[211] == 1.0);

      /* RelationalOperator: '<S514>/Compare' incorporates:
       *  Constant: '<S514>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[212] == 1.0);

      /* RelationalOperator: '<S515>/Compare' incorporates:
       *  Constant: '<S515>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[213] == 1.0);

      /* RelationalOperator: '<S516>/Compare' incorporates:
       *  Constant: '<S516>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[214] == 1.0);

      /* RelationalOperator: '<S517>/Compare' incorporates:
       *  Constant: '<S517>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[215] == 1.0);

      /* RelationalOperator: '<S518>/Compare' incorporates:
       *  Constant: '<S518>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[216] == 1.0);

      /* RelationalOperator: '<S519>/Compare' incorporates:
       *  Constant: '<S519>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[217] == 1.0);

      /* RelationalOperator: '<S520>/Compare' incorporates:
       *  Constant: '<S520>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[218] == 1.0);

      /* Logic: '<S437>/Logical Operator' */
      rtb_LogicalOperator_p5 = (rtb_Compare_ci || rtb_Compare_c ||
        rtb_Compare_fd || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 ||
        Compare_p || Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2
        || rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S521>/Compare' incorporates:
       *  Constant: '<S521>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[139] == 1.0);

      /* RelationalOperator: '<S522>/Compare' incorporates:
       *  Constant: '<S522>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[140] == 1.0);

      /* RelationalOperator: '<S523>/Compare' incorporates:
       *  Constant: '<S523>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[149] == 1.0);

      /* RelationalOperator: '<S524>/Compare' incorporates:
       *  Constant: '<S524>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[150] == 1.0);

      /* RelationalOperator: '<S525>/Compare' incorporates:
       *  Constant: '<S525>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[151] == 1.0);

      /* RelationalOperator: '<S526>/Compare' incorporates:
       *  Constant: '<S526>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[152] == 1.0);

      /* RelationalOperator: '<S527>/Compare' incorporates:
       *  Constant: '<S527>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[153] == 1.0);

      /* RelationalOperator: '<S528>/Compare' incorporates:
       *  Constant: '<S528>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[154] == 1.0);

      /* RelationalOperator: '<S529>/Compare' incorporates:
       *  Constant: '<S529>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[155] == 1.0);

      /* RelationalOperator: '<S530>/Compare' incorporates:
       *  Constant: '<S530>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[156] == 1.0);

      /* RelationalOperator: '<S531>/Compare' incorporates:
       *  Constant: '<S531>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[157] == 1.0);

      /* RelationalOperator: '<S532>/Compare' incorporates:
       *  Constant: '<S532>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[158] == 1.0);

      /* RelationalOperator: '<S533>/Compare' incorporates:
       *  Constant: '<S533>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[141] == 1.0);

      /* RelationalOperator: '<S534>/Compare' incorporates:
       *  Constant: '<S534>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[142] == 1.0);

      /* RelationalOperator: '<S535>/Compare' incorporates:
       *  Constant: '<S535>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[143] == 1.0);

      /* RelationalOperator: '<S536>/Compare' incorporates:
       *  Constant: '<S536>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[144] == 1.0);

      /* RelationalOperator: '<S537>/Compare' incorporates:
       *  Constant: '<S537>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[145] == 1.0);

      /* RelationalOperator: '<S538>/Compare' incorporates:
       *  Constant: '<S538>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[146] == 1.0);

      /* RelationalOperator: '<S539>/Compare' incorporates:
       *  Constant: '<S539>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[147] == 1.0);

      /* RelationalOperator: '<S540>/Compare' incorporates:
       *  Constant: '<S540>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[148] == 1.0);

      /* Logic: '<S438>/Logical Operator' */
      rtb_LogicalOperator_ag = (rtb_Compare_ci || rtb_Compare_c ||
        rtb_Compare_fd || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 ||
        Compare_p || Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2
        || rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* RelationalOperator: '<S541>/Compare' incorporates:
       *  Constant: '<S541>/Constant'
       */
      rtb_Compare_ci = (six_plus_six_AcmsteeringV09_m_B.Signals[69] == 1.0);

      /* RelationalOperator: '<S542>/Compare' incorporates:
       *  Constant: '<S542>/Constant'
       */
      rtb_Compare_c = (six_plus_six_AcmsteeringV09_m_B.Signals[70] == 1.0);

      /* RelationalOperator: '<S543>/Compare' incorporates:
       *  Constant: '<S543>/Constant'
       */
      rtb_Compare_kf2 = (six_plus_six_AcmsteeringV09_m_B.Signals[79] == 1.0);

      /* RelationalOperator: '<S544>/Compare' incorporates:
       *  Constant: '<S544>/Constant'
       */
      rtb_Compare_d1 = (six_plus_six_AcmsteeringV09_m_B.Signals[80] == 1.0);

      /* RelationalOperator: '<S545>/Compare' incorporates:
       *  Constant: '<S545>/Constant'
       */
      rtb_Compare_kd = (six_plus_six_AcmsteeringV09_m_B.Signals[81] == 1.0);

      /* RelationalOperator: '<S546>/Compare' incorporates:
       *  Constant: '<S546>/Constant'
       */
      rtb_Compare_jl = (six_plus_six_AcmsteeringV09_m_B.Signals[82] == 1.0);

      /* RelationalOperator: '<S547>/Compare' incorporates:
       *  Constant: '<S547>/Constant'
       */
      rtb_Compare_kt = (six_plus_six_AcmsteeringV09_m_B.Signals[83] == 1.0);

      /* RelationalOperator: '<S548>/Compare' incorporates:
       *  Constant: '<S548>/Constant'
       */
      rtb_Compare_pb = (six_plus_six_AcmsteeringV09_m_B.Signals[84] == 1.0);

      /* RelationalOperator: '<S549>/Compare' incorporates:
       *  Constant: '<S549>/Constant'
       */
      rtb_Compare_b4 = (six_plus_six_AcmsteeringV09_m_B.Signals[85] == 1.0);

      /* RelationalOperator: '<S550>/Compare' incorporates:
       *  Constant: '<S550>/Constant'
       */
      rtb_Compare_h1 = (six_plus_six_AcmsteeringV09_m_B.Signals[86] == 1.0);

      /* RelationalOperator: '<S551>/Compare' incorporates:
       *  Constant: '<S551>/Constant'
       */
      rtb_Compare_op = (six_plus_six_AcmsteeringV09_m_B.Signals[87] == 1.0);

      /* RelationalOperator: '<S552>/Compare' incorporates:
       *  Constant: '<S552>/Constant'
       */
      rtb_Compare_mr = (six_plus_six_AcmsteeringV09_m_B.Signals[88] == 1.0);

      /* RelationalOperator: '<S553>/Compare' incorporates:
       *  Constant: '<S553>/Constant'
       */
      rtb_Compare_fd = (six_plus_six_AcmsteeringV09_m_B.Signals[71] == 1.0);

      /* RelationalOperator: '<S554>/Compare' incorporates:
       *  Constant: '<S554>/Constant'
       */
      rtb_Compare_hb = (six_plus_six_AcmsteeringV09_m_B.Signals[72] == 1.0);

      /* RelationalOperator: '<S555>/Compare' incorporates:
       *  Constant: '<S555>/Constant'
       */
      rtb_Compare_gb = (six_plus_six_AcmsteeringV09_m_B.Signals[73] == 1.0);

      /* RelationalOperator: '<S556>/Compare' incorporates:
       *  Constant: '<S556>/Constant'
       */
      rtb_Compare_i3 = (six_plus_six_AcmsteeringV09_m_B.Signals[74] == 1.0);

      /* RelationalOperator: '<S557>/Compare' incorporates:
       *  Constant: '<S557>/Constant'
       */
      Compare_p = (six_plus_six_AcmsteeringV09_m_B.Signals[75] == 1.0);

      /* RelationalOperator: '<S558>/Compare' incorporates:
       *  Constant: '<S558>/Constant'
       */
      Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[76] == 1.0);

      /* RelationalOperator: '<S559>/Compare' incorporates:
       *  Constant: '<S559>/Constant'
       */
      rtb_Compare_ak = (six_plus_six_AcmsteeringV09_m_B.Signals[77] == 1.0);

      /* RelationalOperator: '<S560>/Compare' incorporates:
       *  Constant: '<S560>/Constant'
       */
      rtb_Compare = (six_plus_six_AcmsteeringV09_m_B.Signals[78] == 1.0);

      /* Logic: '<S439>/Logical Operator' */
      rtb_LogicalOperator_f = (rtb_Compare_ci || rtb_Compare_c || rtb_Compare_fd
        || rtb_Compare_hb || rtb_Compare_gb || rtb_Compare_i3 || Compare_p ||
        Compare || rtb_Compare_ak || rtb_Compare || rtb_Compare_kf2 ||
        rtb_Compare_d1 || rtb_Compare_kd || rtb_Compare_jl || rtb_Compare_kt ||
        rtb_Compare_pb || rtb_Compare_b4 || rtb_Compare_h1 || rtb_Compare_op ||
        rtb_Compare_mr);

      /* Update for Memory: '<S424>/Memory4' */
      six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_p =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_f.life;

      /* Update for Memory: '<S424>/Memory5' */
      six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_o =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_j.life;

      /* Update for Memory: '<S424>/Memory1' */
      six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_e =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_j.life;

      /* Update for Memory: '<S424>/Memory3' */
      six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_e =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_b.life;

      /* Update for Memory: '<S424>/Memory2' */
      six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_ak =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_b.life;

      /* Update for Memory: '<S424>/Memory6' */
      six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_n =
        six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_o.life;

      /* End of Outputs for SubSystem: '<S423>/Brake' */
      break;
    }

    /* End of SwitchCase: '<S423>/Switch Case1' */

    /* MultiPortSwitch: '<S423>/Multiport Switch' */
    if (rtb_y_o == 0) {
      memcpy(&six_plus_six_AcmsteeringV09_m_B.MultiportSwitch_o[0],
             &six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem_e[0],
             40U * sizeof(real32_T));
    } else {
      memcpy(&six_plus_six_AcmsteeringV09_m_B.MultiportSwitch_o[0],
             &six_plus_six_AcmsteeringV09_m_B.OutportBufferForbackward_dem[0],
             40U * sizeof(real32_T));
    }

    /* End of MultiPortSwitch: '<S423>/Multiport Switch' */
    /* End of Outputs for SubSystem: '<S408>/backward' */
    break;

   case 4:
    /* Outputs for IfAction SubSystem: '<S408>/center_steer' incorporates:
     *  ActionPort: '<S412>/Action Port'
     */
    /* Switch: '<S735>/Switch' incorporates:
     *  Constant: '<S735>/mot_gear'
     *  Constant: '<S735>/mot_gear1'
     */
    if (six_plus_six_AcmsteeringV09_m_B.steer_dem > 0.0F) {
      rtb_Abs13_a = 2.0F;
    } else {
      rtb_Abs13_a = 1.0F;
    }

    /* End of Switch: '<S735>/Switch' */

    /* Abs: '<S749>/Abs' */
    rtb_Saturation3_m = (real32_T)fabs(six_plus_six_AcmsteeringV09_m_B.steer_dem);

    /* Gain: '<S749>/Gain2' */
    rtb_Saturation3_m *= 0.01F;

    /* Sum: '<S749>/Add' */
    rtb_Sum_i = (six_plus_six_AcmsteeringV09_m_B.Signals[17] +
                 six_plus_six_AcmsteeringV09_m_B.Signals[35]) +
      six_plus_six_AcmsteeringV09_m_B.Signals[53];

    /* Abs: '<S735>/Abs' */
    rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[235];
    if (rtb_y < 0.0) {
      rtb_Abs4 = (real32_T)-rtb_y;
    } else {
      rtb_Abs4 = (real32_T)rtb_y;
    }

    /* End of Abs: '<S735>/Abs' */

    /* Abs: '<S735>/Abs1' */
    rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[165];
    if (rtb_y < 0.0) {
      rtb_Add2_c = (real32_T)-rtb_y;
    } else {
      rtb_Add2_c = (real32_T)rtb_y;
    }

    /* End of Abs: '<S735>/Abs1' */

    /* Abs: '<S735>/Abs2' */
    rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[95];
    if (rtb_y < 0.0) {
      rtb_Gain6_f = (real32_T)-rtb_y;
    } else {
      rtb_Gain6_f = (real32_T)rtb_y;
    }

    /* End of Abs: '<S735>/Abs2' */

    /* Abs: '<S735>/Abs3' */
    rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[200];
    if (rtb_y < 0.0) {
      rtb_Abs5 = (real32_T)-rtb_y;
    } else {
      rtb_Abs5 = (real32_T)rtb_y;
    }

    /* End of Abs: '<S735>/Abs3' */

    /* Abs: '<S735>/Abs4' */
    rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[130];
    if (rtb_y < 0.0) {
      rtb_Abs20_g = (real32_T)-rtb_y;
    } else {
      rtb_Abs20_g = (real32_T)rtb_y;
    }

    /* End of Abs: '<S735>/Abs4' */

    /* Abs: '<S735>/Abs5' */
    rtb_y = six_plus_six_AcmsteeringV09_m_B.Signals[60];
    if (rtb_y < 0.0) {
      rtb_Abs19_l4 = (real32_T)-rtb_y;
    } else {
      rtb_Abs19_l4 = (real32_T)rtb_y;
    }

    /* End of Abs: '<S735>/Abs5' */

    /* Sum: '<S749>/Add1' */
    rtb_Abs14_m = ((((rtb_Abs4 + rtb_Add2_c) + rtb_Gain6_f) + rtb_Abs5) +
                   rtb_Abs20_g) + rtb_Abs19_l4;

    /* Gain: '<S749>/Gain' */
    rtb_Abs14_m *= 0.166666672F;

    /* Product: '<S749>/Divide' */
    rtb_y = 9549.0 * rtb_Sum_i / rtb_Abs14_m;

    /* Lookup_n-D: '<S749>/mot_map' */
    rtb_Abs4 = look1_iflf_binlx(rtb_Abs4,
      six_plus_six_Acmsteering_ConstP.pooled74,
      six_plus_six_Acmsteering_ConstP.pooled73, 11U);

    /* MinMax: '<S749>/MinMax6' */
    u0 = rtb_Abs4;
    rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[229];
    if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
      rtb_Sum_i = u0;
    }

    rtb_brake_dem = (real32_T)rtb_Sum_i;

    /* End of MinMax: '<S749>/MinMax6' */

    /* Lookup_n-D: '<S749>/mot_map4' */
    rtb_Add2_c = look1_iflf_binlx(rtb_Add2_c,
      six_plus_six_Acmsteering_ConstP.pooled74,
      six_plus_six_Acmsteering_ConstP.pooled73, 11U);

    /* MinMax: '<S749>/MinMax1' */
    u0 = rtb_Add2_c;
    rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[159];
    if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
      rtb_Sum_i = u0;
    }

    rtb_Saturation2_fh = (real32_T)rtb_Sum_i;

    /* End of MinMax: '<S749>/MinMax1' */

    /* Lookup_n-D: '<S749>/mot_map1' */
    rtb_Gain6_f = look1_iflf_binlx(rtb_Gain6_f,
      six_plus_six_Acmsteering_ConstP.pooled74,
      six_plus_six_Acmsteering_ConstP.pooled73, 11U);

    /* MinMax: '<S749>/MinMax5' */
    u0 = rtb_Gain6_f;
    rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[89];
    if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
      rtb_Sum_i = u0;
    }

    rtb_Gain6_f = (real32_T)rtb_Sum_i;

    /* End of MinMax: '<S749>/MinMax5' */

    /* Lookup_n-D: '<S749>/mot_map2' */
    rtb_Abs5 = look1_iflf_binlx(rtb_Abs5,
      six_plus_six_Acmsteering_ConstP.pooled74,
      six_plus_six_Acmsteering_ConstP.pooled73, 11U);

    /* MinMax: '<S749>/MinMax4' */
    u0 = rtb_Abs5;
    rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[194];
    if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
      rtb_Sum_i = u0;
    }

    rtb_Abs4 = (real32_T)rtb_Sum_i;

    /* End of MinMax: '<S749>/MinMax4' */

    /* Lookup_n-D: '<S749>/mot_map5' */
    rtb_Abs20_g = look1_iflf_binlx(rtb_Abs20_g,
      six_plus_six_Acmsteering_ConstP.pooled74,
      six_plus_six_Acmsteering_ConstP.pooled73, 11U);

    /* MinMax: '<S749>/MinMax2' */
    u0 = rtb_Abs20_g;
    rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[124];
    if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
      rtb_Sum_i = u0;
    }

    rtb_Gain3_o = (real32_T)rtb_Sum_i;

    /* End of MinMax: '<S749>/MinMax2' */

    /* Lookup_n-D: '<S749>/mot_map3' */
    rtb_Abs19_l4 = look1_iflf_binlx(rtb_Abs19_l4,
      six_plus_six_Acmsteering_ConstP.pooled74,
      six_plus_six_Acmsteering_ConstP.pooled73, 11U);

    /* MinMax: '<S749>/MinMax3' */
    u0 = rtb_Abs19_l4;
    rtb_Sum_i = six_plus_six_AcmsteeringV09_m_B.Signals[54];
    if ((u0 <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
      rtb_Sum_i = u0;
    }

    rtb_Abs = (real32_T)rtb_Sum_i;

    /* End of MinMax: '<S749>/MinMax3' */

    /* Sum: '<S749>/Add3' */
    rtb_Abs14_m = ((((rtb_brake_dem + rtb_Saturation2_fh) + rtb_Gain6_f) +
                    rtb_Abs4) + rtb_Gain3_o) + rtb_Abs;

    /* MinMax: '<S749>/MinMax' */
    rtb_Sum_i = rtb_Abs14_m;
    if ((rtb_y <= rtb_Sum_i) || rtIsNaN(rtb_Sum_i)) {
      rtb_Sum_i = rtb_y;
    }

    /* End of MinMax: '<S749>/MinMax' */

    /* Product: '<S749>/Product' */
    rtb_y = rtb_Saturation3_m * rtb_Sum_i;

    /* Gain: '<S749>/Gain1' */
    rtb_steer_dem = (real32_T)(0.5 * rtb_y);

    /* Gain: '<S735>/Gain5' */
    rtb_Abs14_m = 0.01F * brake_dem;

    /* Product: '<S735>/Product' incorporates:
     *  Constant: '<S735>/Constant1'
     */
    rtb_Abs14_m *= 5020.0F;

    /* Gain: '<S735>/Gain4' */
    rtb_Abs14_m *= 0.5F;

    /* Gain: '<S735>/Gain6' */
    rtb_Abs19_l4 = 0.5F * rtb_Abs14_m;

    /* Lookup_n-D: '<S735>/1-D Lookup Table3' */
    look1_iflf_binlx(rtb_Abs19_l4, six_plus_six_Acmsteering_ConstP.pooled76,
                     six_plus_six_Acmsteering_ConstP.pooled75, 10U);

    /* Gain: '<S735>/Gain7' */
    rtb_Abs14_m *= 0.5F;

    /* Lookup_n-D: '<S735>/1-D Lookup Table1' */
    look1_iflf_binlx(rtb_Abs14_m, six_plus_six_Acmsteering_ConstP.pooled76,
                     six_plus_six_Acmsteering_ConstP.pooled75, 10U);

    /* MATLAB Function: '<S748>/MATLAB Function' */
    /* MATLAB Function 'MainControl/mode_control/center_steer/center_steer/容错控制/MATLAB Function': '<S870>:1' */
    if (brake_dem == 0.0F) {
      /* '<S870>:1:3' */
      /* '<S870>:1:5' */
      rtb_acc_dem = rtb_steer_dem / 3.0F;

      /* '<S870>:1:6' */
      rtb_Product_m = rtb_steer_dem / 3.0F;

      /* '<S870>:1:7' */
      rtb_Add2_c = rtb_steer_dem / 3.0F;

      /* '<S870>:1:8' */
      rtb_Saturation3_m = rtb_steer_dem / 3.0F;

      /* '<S870>:1:9' */
      rtb_Abs12_e = rtb_steer_dem / 3.0F;

      /* '<S870>:1:10' */
      rtb_steer_dem /= 3.0F;

      /* '<S870>:1:11' */
      /* '<S870>:1:12' */
      /* '<S870>:1:13' */
      /*      if guzhang_lf==0 && guzhang_lr==0 && guzhang_rf==0 && guzhang_rr==0    %0电机故障,平均分配 */
      /*          trq_dem_lf=single(trq_dem_l/2); */
      /*          trq_dem_lr=single(trq_dem_l/2); */
      /*          trq_dem_rf=single(trq_dem_r/2); */
      /*          trq_dem_rr=single(trq_dem_r/2); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=1; */
      /*      elseif  guzhang_lf==1 && guzhang_lr==0 && guzhang_rf==0 && guzhang_rr==0  %1电机故障，同侧电机进行力矩转移,跟行车不同，对侧不降扭。 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_lr=single(min(trq_dem_l,trqlim_lr)); */
      /*          trq_dem_rf=single(trq_dem_r/2); */
      /*          trq_dem_rr=single(trq_dem_r/2); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=2; */
      /*      elseif  guzhang_lf==0 && guzhang_lr==1 && guzhang_rf==0 && guzhang_rr==0 */
      /*          trq_dem_lf=single(min(trq_dem_l,trqlim_lf)); */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rf=single(trq_dem_r/2); */
      /*          trq_dem_rr=single(trq_dem_r/2); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=3; */
      /*      elseif  guzhang_lf==0 && guzhang_lr==0 && guzhang_rf==1 && guzhang_rr==0 */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_rr=single(min(trq_dem_r,trqlim_rr)); */
      /*          trq_dem_lf=single(trq_dem_l/2); */
      /*          trq_dem_lr=single(trq_dem_l/2); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=4; */
      /*      elseif  guzhang_lf==0 && guzhang_lr==0 && guzhang_rf==0 && guzhang_rr==1 */
      /*          trq_dem_rf=single(min(trq_dem_r,trqlim_rf)); */
      /*          trq_dem_rr=single(0); */
      /*          trq_dem_lf=single(trq_dem_l/2); */
      /*          trq_dem_lr=single(trq_dem_l/2); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=5; */
      /*      elseif  guzhang_lf==1 && guzhang_lr==1 && guzhang_rf==0 && guzhang_rr==0  %2电机故障，左侧双电机故障，左侧履带施加制动，改为原地转向 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rf=single(trq_dem_r/2); */
      /*          trq_dem_rr=single(trq_dem_r/2); */
      /*          bra_pre_l=single(bra_pre_yd); */
      /*          bra_pre_r=single(0); */
      /*          mode=6; */
      /*      elseif  guzhang_lf==0 && guzhang_lr==0 && guzhang_rf==1 && guzhang_rr==1  %右侧双电机故障 */
      /*          trq_dem_lf=single(trq_dem_l/2); */
      /*          trq_dem_lr=single(trq_dem_l/2); */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_rr=single(0); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(bra_pre_yd); */
      /*          mode=7; */
      /*      elseif  guzhang_lf==1 && guzhang_lr==0 && guzhang_rf==1 && guzhang_rr==0 %2电机故障，对侧双电机故障,有4种情况,前两电机故障 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_lr=single(min(trq_dem_l,trqlim_lr)); */
      /*          trq_dem_rr=single(min(trq_dem_r,trqlim_rr)); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=8; */
      /*      elseif  guzhang_lf==0 && guzhang_lr==1 && guzhang_rf==0 && guzhang_rr==1 %后两电机故障 */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rr=single(0); */
      /*          trq_dem_lf=single(min(trq_dem_l,trqlim_lf)); */
      /*          trq_dem_rf=single(min(trq_dem_r,trqlim_rf)); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=9; */
      /*      elseif  guzhang_lf==1 && guzhang_lr==0 && guzhang_rf==0 && guzhang_rr==1 %左前电机和右后电机故障 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_rr=single(0); */
      /*          trq_dem_lr=single(min(trq_dem_l,trqlim_lr)); */
      /*          trq_dem_rf=single(min(trq_dem_r,trqlim_rf)); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=10; */
      /*      elseif  guzhang_lf==0 && guzhang_lr==1 && guzhang_rf==1 && guzhang_rr==0 %左后电机和右前电机故障 */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_lf=single(min(trq_dem_l,trqlim_lf)); */
      /*          trq_dem_rr=single(min(trq_dem_r,trqlim_rr)); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=11; */
      /*      elseif guzhang_lf==1 && guzhang_lr==1 && guzhang_rf==1 && guzhang_rr==0   % 三电机故障 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_rr=single(min(trq_dem_r,trqlim_rr)); */
      /*          bra_pre_l=single(bra_pre_yd); */
      /*          bra_pre_r=single(0); */
      /*          mode=12; */
      /*      elseif guzhang_lf==1 && guzhang_lr==1 && guzhang_rf==0 && guzhang_rr==1 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rf=single(min(trq_dem_r,trqlim_rf)); */
      /*          trq_dem_rr=single(0); */
      /*          bra_pre_l=single(bra_pre_yd); */
      /*          bra_pre_r=single(0); */
      /*          mode=13; */
      /*      elseif guzhang_lf==1 && guzhang_lr==0 && guzhang_rf==1 && guzhang_rr==1 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_lr=single(min(trq_dem_l,trqlim_lr)); */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_rr=single(0); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(bra_pre_yd); */
      /*          mode=14; */
      /*      elseif guzhang_lf==0 && guzhang_lr==1 && guzhang_rf==1 && guzhang_rr==1 */
      /*          trq_dem_lf=single(min(trq_dem_l,trqlim_lf)); */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_rr=single(0); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(bra_pre_yd); */
      /*          mode=15; */
      /*      else */
      /*          %     guzhang_lf==1 && guzhang_lr==1 && guzhang_rf==1 && guzhang_rr==1 %四电机故障 */
      /*          trq_dem_lf=single(0); */
      /*          trq_dem_lr=single(0); */
      /*          trq_dem_rf=single(0); */
      /*          trq_dem_rr=single(0); */
      /*          bra_pre_l=single(0); */
      /*          bra_pre_r=single(0); */
      /*          mode=16; */
      /*      end */
    } else {
      /* '<S870>:1:147' */
      rtb_acc_dem = 0.0F;

      /* '<S870>:1:148' */
      rtb_Product_m = 0.0F;

      /* '<S870>:1:149' */
      rtb_Add2_c = 0.0F;

      /* '<S870>:1:150' */
      rtb_Saturation3_m = 0.0F;

      /* '<S870>:1:151' */
      rtb_Abs12_e = 0.0F;

      /* '<S870>:1:152' */
      rtb_steer_dem = 0.0F;

      /* '<S870>:1:153' */
      /* '<S870>:1:154' */
      /* '<S870>:1:155' */
    }

    /* '<S870>:1:157' */
    if ((rtb_brake_dem <= rtb_acc_dem) || rtIsNaNF(rtb_acc_dem)) {
      rtb_acc_dem = rtb_brake_dem;
    }

    /* '<S870>:1:157' */
    if (!(0.0F < rtb_acc_dem)) {
      rtb_acc_dem = 0.0F;
    }

    /* '<S870>:1:158' */
    if ((rtb_Saturation2_fh <= rtb_Product_m) || rtIsNaNF(rtb_Product_m)) {
      rtb_Product_m = rtb_Saturation2_fh;
    }

    /* '<S870>:1:158' */
    if (!(0.0F < rtb_Product_m)) {
      rtb_Product_m = 0.0F;
    }

    /* '<S870>:1:159' */
    if ((rtb_Gain6_f <= rtb_Add2_c) || rtIsNaNF(rtb_Add2_c)) {
      rtb_Add2_c = rtb_Gain6_f;
    }

    /* '<S870>:1:159' */
    if (!(0.0F < rtb_Add2_c)) {
      rtb_Add2_c = 0.0F;
    }

    /* '<S870>:1:160' */
    if ((rtb_Abs4 <= rtb_Saturation3_m) || rtIsNaNF(rtb_Saturation3_m)) {
      rtb_Saturation3_m = rtb_Abs4;
    }

    /* '<S870>:1:160' */
    if (!(0.0F < rtb_Saturation3_m)) {
      rtb_Saturation3_m = 0.0F;
    }

    /* '<S870>:1:161' */
    if ((rtb_Gain3_o <= rtb_Abs12_e) || rtIsNaNF(rtb_Abs12_e)) {
      rtb_Abs12_e = rtb_Gain3_o;
    }

    /* '<S870>:1:161' */
    if (!(0.0F < rtb_Abs12_e)) {
      rtb_Abs12_e = 0.0F;
    }

    /* '<S870>:1:162' */
    if ((rtb_Abs <= rtb_steer_dem) || rtIsNaNF(rtb_steer_dem)) {
      rtb_steer_dem = rtb_Abs;
    }

    /* '<S870>:1:162' */
    if (!(0.0F < rtb_steer_dem)) {
      rtb_steer_dem = 0.0F;
    }

    /* End of MATLAB Function: '<S748>/MATLAB Function' */

    /* Saturate: '<S735>/Saturation' */
    /* '<S870>:1:163' */
    /* '<S870>:1:164' */
    if (rtb_acc_dem > 70.5F) {
      rtb_Abs14_m = 70.5F;
    } else {
      rtb_Abs14_m = rtb_acc_dem;
    }

    /* End of Saturate: '<S735>/Saturation' */

    /* Memory: '<S735>/Memory' */
    rtb_Memory_l = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_m;

    /* MATLAB Function: '<S735>/HeartBeat' */
    six_plus_six_Acms_HeartBeat(rtb_Memory_l,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_i);

    /* Switch: '<S735>/Switch4' incorporates:
     *  Constant: '<S735>/mot_gear4'
     *  Constant: '<S735>/mot_gear5'
     */
    if (six_plus_six_AcmsteeringV09_m_B.steer_dem > 0.0F) {
      rtb_Abs19_l4 = 2.0F;
    } else {
      rtb_Abs19_l4 = 1.0F;
    }

    /* End of Switch: '<S735>/Switch4' */

    /* Saturate: '<S735>/Saturation8' */
    if (rtb_Product_m > 70.5F) {
      rtb_Abs20_g = 70.5F;
    } else {
      rtb_Abs20_g = rtb_Product_m;
    }

    /* End of Saturate: '<S735>/Saturation8' */

    /* Memory: '<S735>/Memory4' */
    rtb_Memory4_m = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_l;

    /* MATLAB Function: '<S735>/HeartBeat3' */
    six_plus_six_Acms_HeartBeat(rtb_Memory4_m,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_m);

    /* Switch: '<S735>/Switch1' incorporates:
     *  Constant: '<S735>/mot_gear8'
     *  Constant: '<S735>/mot_gear9'
     */
    if (six_plus_six_AcmsteeringV09_m_B.steer_dem > 0.0F) {
      rtb_Abs5 = 2.0F;
    } else {
      rtb_Abs5 = 1.0F;
    }

    /* End of Switch: '<S735>/Switch1' */

    /* Saturate: '<S735>/Saturation1' */
    if (rtb_Add2_c > 70.5F) {
      rtb_Gain6_f = 70.5F;
    } else {
      rtb_Gain6_f = rtb_Add2_c;
    }

    /* End of Saturate: '<S735>/Saturation1' */

    /* Memory: '<S735>/Memory1' */
    rtb_Memory1_f = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_n;

    /* MATLAB Function: '<S735>/HeartBeat1' */
    six_plus_six_Acms_HeartBeat(rtb_Memory1_f,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_jt);

    /* Switch: '<S735>/Switch2' incorporates:
     *  Constant: '<S735>/mot_gear2'
     *  Constant: '<S735>/mot_gear3'
     */
    if (six_plus_six_AcmsteeringV09_m_B.steer_dem > 0.0F) {
      rtb_Add2_c = 2.0F;
    } else {
      rtb_Add2_c = 1.0F;
    }

    /* End of Switch: '<S735>/Switch2' */

    /* Saturate: '<S735>/Saturation2' */
    if (rtb_Saturation3_m > 70.5F) {
      rtb_Abs4 = 70.5F;
    } else {
      rtb_Abs4 = rtb_Saturation3_m;
    }

    /* End of Saturate: '<S735>/Saturation2' */

    /* Memory: '<S735>/Memory3' */
    rtb_Memory3_a = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_g;

    /* MATLAB Function: '<S735>/HeartBeat2' */
    six_plus_six_Acms_HeartBeat(rtb_Memory3_a,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_ie);

    /* Switch: '<S735>/Switch6' incorporates:
     *  Constant: '<S735>/mot_gear6'
     *  Constant: '<S735>/mot_gear7'
     */
    if (six_plus_six_AcmsteeringV09_m_B.steer_dem > 0.0F) {
      rtb_Saturation3_m = 2.0F;
    } else {
      rtb_Saturation3_m = 1.0F;
    }

    /* End of Switch: '<S735>/Switch6' */

    /* Saturate: '<S735>/Saturation9' */
    if (rtb_Abs12_e > 70.5F) {
      rtb_brake_dem = 70.5F;
    } else {
      rtb_brake_dem = rtb_Abs12_e;
    }

    /* End of Saturate: '<S735>/Saturation9' */

    /* Memory: '<S735>/Memory6' */
    rtb_Memory6_e = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_p;

    /* MATLAB Function: '<S735>/HeartBeat4' */
    six_plus_six_Acms_HeartBeat(rtb_Memory6_e,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_c);

    /* Switch: '<S735>/Switch3' incorporates:
     *  Constant: '<S735>/mot_gear10'
     *  Constant: '<S735>/mot_gear11'
     */
    if (six_plus_six_AcmsteeringV09_m_B.steer_dem > 0.0F) {
      rtb_Abs = 2.0F;
    } else {
      rtb_Abs = 1.0F;
    }

    /* End of Switch: '<S735>/Switch3' */

    /* Saturate: '<S735>/Saturation3' */
    if (rtb_steer_dem > 70.5F) {
      rtb_acc_dem = 70.5F;
    } else {
      rtb_acc_dem = rtb_steer_dem;
    }

    /* End of Saturate: '<S735>/Saturation3' */

    /* Memory: '<S735>/Memory2' */
    rtb_Memory2_i = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_a;

    /* MATLAB Function: '<S735>/HeartBeat5' */
    six_plus_six_Acms_HeartBeat(rtb_Memory2_i,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_lf);

    /* Lookup_n-D: '<S735>/1-D Lookup Table2' */
    rtb_Abs4_f = look1_iflf_binlx(brake_dem,
      six_plus_six_Acmsteering_ConstP.pooled46,
      six_plus_six_Acmsteering_ConstP.pooled45, 1U);

    /* Saturate: '<S735>/Saturation13' */
    if (rtb_Abs4_f > 750000.0F) {
      rtb_Abs4_f = 750000.0F;
    } else {
      if (rtb_Abs4_f < -140000.0F) {
        rtb_Abs4_f = -140000.0F;
      }
    }

    /* End of Saturate: '<S735>/Saturation13' */

    /* SignalConversion: '<S412>/OutportBufferForcenter_steer_dem' incorporates:
     *  Constant: '<S735>/SpdSet_dem'
     *  Constant: '<S735>/SpdSet_dem1'
     *  Constant: '<S735>/SpdSet_dem2'
     *  Constant: '<S735>/SpdSet_dem3'
     *  Constant: '<S735>/SpdSet_dem4'
     *  Constant: '<S735>/SpdSet_dem5'
     *  Constant: '<S735>/mot_enable1'
     *  Constant: '<S735>/mot_enable2'
     *  Constant: '<S735>/mot_enable3'
     *  Constant: '<S735>/mot_enable4'
     *  Constant: '<S735>/mot_enable5'
     *  Constant: '<S735>/mot_enable6'
     *  Constant: '<S735>/mot_mode'
     *  Constant: '<S735>/mot_mode1'
     *  Constant: '<S735>/mot_mode2'
     *  Constant: '<S735>/mot_mode3'
     *  Constant: '<S735>/mot_mode4'
     *  Constant: '<S735>/mot_mode5'
     */
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[0] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[1] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[2] =
      rtb_Abs13_a;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[3] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[4] =
      rtb_Abs14_m;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[5] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_i.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[6] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[7] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[8] =
      rtb_Abs19_l4;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[9] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[10] =
      rtb_Abs20_g;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[11] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_m.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[12] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[13] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[14] =
      rtb_Abs5;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[15] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[16] =
      rtb_Gain6_f;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[17] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_jt.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[18] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[19] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[20] =
      rtb_Add2_c;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[21] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[22] =
      rtb_Abs4;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[23] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_ie.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[24] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[25] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[26] =
      rtb_Saturation3_m;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[27] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[28] =
      rtb_brake_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[29] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_c.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[30] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[31] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[32] =
      rtb_Abs;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[33] = 1.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[34] =
      rtb_acc_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[35] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_lf.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[36] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[37] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[38] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[39] =
      rtb_Abs4_f;

    /* Update for Memory: '<S735>/Memory' */
    six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_m =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_i.life;

    /* Update for Memory: '<S735>/Memory4' */
    six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_l =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_m.life;

    /* Update for Memory: '<S735>/Memory1' */
    six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_n =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_jt.life;

    /* Update for Memory: '<S735>/Memory3' */
    six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_g =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_ie.life;

    /* Update for Memory: '<S735>/Memory6' */
    six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput_p =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_c.life;

    /* Update for Memory: '<S735>/Memory2' */
    six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_a =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_lf.life;

    /* End of Outputs for SubSystem: '<S408>/center_steer' */
    break;

   case 5:
    /* Outputs for IfAction SubSystem: '<S408>/emergency_stop' incorporates:
     *  ActionPort: '<S413>/Action Port'
     */
    /* Memory: '<S871>/Memory' */
    rtb_Memory = six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_b;

    /* MATLAB Function: '<S871>/HeartBeat' */
    six_plus_six_Acms_HeartBeat(rtb_Memory,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_e);

    /* Memory: '<S871>/Memory4' */
    rtb_Memory4_l = six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_d;

    /* MATLAB Function: '<S871>/HeartBeat3' */
    six_plus_six_Acms_HeartBeat(rtb_Memory4_l,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_ch);

    /* Memory: '<S871>/Memory1' */
    rtb_Memory1 = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_a;

    /* MATLAB Function: '<S871>/HeartBeat1' */
    six_plus_six_Acms_HeartBeat(rtb_Memory1,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_e);

    /* Memory: '<S871>/Memory2' */
    rtb_Memory2 = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_i;

    /* MATLAB Function: '<S871>/HeartBeat2' */
    six_plus_six_Acms_HeartBeat(rtb_Memory2,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_e);

    /* Memory: '<S871>/Memory6' */
    rtb_Memory6 = six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput;

    /* MATLAB Function: '<S871>/HeartBeat4' */
    six_plus_six_Acms_HeartBeat(rtb_Memory6,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_lp);

    /* Memory: '<S871>/Memory3' */
    rtb_Memory3_h = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_f;

    /* MATLAB Function: '<S871>/HeartBeat5' */
    six_plus_six_Acms_HeartBeat(rtb_Memory3_h,
      &six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_e);

    /* Lookup_n-D: '<S871>/1-D Lookup Table' */
    rtb_Product_m = look1_iflf_binlx(six_plus_six_AcmsteeringV09_m_B.steer_dem,
      six_plus_six_Acmsteering_ConstP.pooled41,
      six_plus_six_Acmsteering_ConstP.pooled40, 2U);

    /* Saturate: '<S871>/Saturation' */
    if (rtb_Product_m > 400000.0F) {
      rtb_acc_dem = 400000.0F;
    } else if (rtb_Product_m < -400000.0F) {
      rtb_acc_dem = -400000.0F;
    } else {
      rtb_acc_dem = rtb_Product_m;
    }

    /* End of Saturate: '<S871>/Saturation' */

    /* Gain: '<S871>/Gain' */
    rtb_steer_dem = 0.5F * rtb_Product_m;

    /* Saturate: '<S871>/Saturation2' */
    if (rtb_steer_dem > 400000.0F) {
      rtb_steer_dem = 400000.0F;
    } else {
      if (rtb_steer_dem < -400000.0F) {
        rtb_steer_dem = -400000.0F;
      }
    }

    /* End of Saturate: '<S871>/Saturation2' */

    /* Gain: '<S871>/Gain1' */
    rtb_Product_m = -rtb_Product_m;

    /* Saturate: '<S871>/Saturation3' */
    if (rtb_Product_m > 400000.0F) {
      rtb_Product_m = 400000.0F;
    } else {
      if (rtb_Product_m < -400000.0F) {
        rtb_Product_m = -400000.0F;
      }
    }

    /* End of Saturate: '<S871>/Saturation3' */

    /* Lookup_n-D: '<S871>/1-D Lookup Table1' incorporates:
     *  Constant: '<S871>/Constant'
     */
    rtb_Gain3_o = look1_iflf_binlx(100.0F,
      six_plus_six_Acmsteering_ConstP.pooled46,
      six_plus_six_Acmsteering_ConstP.pooled45, 1U);

    /* Saturate: '<S871>/Saturation5' */
    if (rtb_Gain3_o > 750000.0F) {
      rtb_Gain3_o = 750000.0F;
    } else {
      if (rtb_Gain3_o < -140000.0F) {
        rtb_Gain3_o = -140000.0F;
      }
    }

    /* End of Saturate: '<S871>/Saturation5' */

    /* SignalConversion: '<S413>/OutportBufferForemergency_stop_dem' incorporates:
     *  Constant: '<S871>/SpdSet_dem'
     *  Constant: '<S871>/SpdSet_dem1'
     *  Constant: '<S871>/SpdSet_dem2'
     *  Constant: '<S871>/SpdSet_dem3'
     *  Constant: '<S871>/SpdSet_dem4'
     *  Constant: '<S871>/SpdSet_dem5'
     *  Constant: '<S871>/TrqSet_dem'
     *  Constant: '<S871>/TrqSet_dem1'
     *  Constant: '<S871>/TrqSet_dem2'
     *  Constant: '<S871>/TrqSet_dem3'
     *  Constant: '<S871>/TrqSet_dem4'
     *  Constant: '<S871>/TrqSet_dem5'
     *  Constant: '<S871>/mot_enable'
     *  Constant: '<S871>/mot_enable1'
     *  Constant: '<S871>/mot_enable2'
     *  Constant: '<S871>/mot_enable3'
     *  Constant: '<S871>/mot_enable4'
     *  Constant: '<S871>/mot_enable5'
     *  Constant: '<S871>/mot_gear'
     *  Constant: '<S871>/mot_gear1'
     *  Constant: '<S871>/mot_gear2'
     *  Constant: '<S871>/mot_gear3'
     *  Constant: '<S871>/mot_gear4'
     *  Constant: '<S871>/mot_gear5'
     *  Constant: '<S871>/mot_mode'
     *  Constant: '<S871>/mot_mode1'
     *  Constant: '<S871>/mot_mode2'
     *  Constant: '<S871>/mot_mode3'
     *  Constant: '<S871>/mot_mode4'
     *  Constant: '<S871>/mot_mode5'
     */
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[0] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[1] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[2] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[3] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[4] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[5] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_e.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[6] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[7] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[8] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[9] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[10] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[11] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_ch.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[12] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[13] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[14] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[15] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[16] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[17] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_e.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[18] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[19] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[20] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[21] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[22] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[23] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_e.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[24] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[25] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[26] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[27] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[28] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[29] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_lp.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[30] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[31] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[32] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[33] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[34] = 0.0F;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[35] =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_e.life;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[36] =
      rtb_acc_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[37] =
      rtb_steer_dem;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[38] =
      rtb_Product_m;
    six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[39] =
      rtb_Gain3_o;

    /* Update for Memory: '<S871>/Memory' */
    six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_b =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat_e.life;

    /* Update for Memory: '<S871>/Memory4' */
    six_plus_six_AcmsteeringV09__DW.Memory4_PreviousInput_d =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat3_ch.life;

    /* Update for Memory: '<S871>/Memory1' */
    six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput_a =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat1_e.life;

    /* Update for Memory: '<S871>/Memory2' */
    six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput_i =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat2_e.life;

    /* Update for Memory: '<S871>/Memory6' */
    six_plus_six_AcmsteeringV09__DW.Memory6_PreviousInput =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat4_lp.life;

    /* Update for Memory: '<S871>/Memory3' */
    six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_f =
      six_plus_six_AcmsteeringV09_m_B.sf_HeartBeat5_e.life;

    /* End of Outputs for SubSystem: '<S408>/emergency_stop' */
    break;
  }

  /* End of SwitchCase: '<S408>/Switch Case' */

  /* MultiPortSwitch: '<S408>/Multiport Switch' */
  switch (mode_dem_out) {
   case 0:
    memcpy(&MultiportSwitch[0],
           &six_plus_six_AcmsteeringV09_m_B.OutportBufferForpark_dem[0], 40U *
           sizeof(real32_T));
    break;

   case 1:
    memcpy(&MultiportSwitch[0],
           &six_plus_six_AcmsteeringV09_m_B.MultiportSwitch_k[0], 40U * sizeof
           (real32_T));
    break;

   case 2:
    memcpy(&MultiportSwitch[0],
           &six_plus_six_AcmsteeringV09_m_B.OutportBufferForneutral_dem[0], 40U *
           sizeof(real32_T));
    break;

   case 3:
    memcpy(&MultiportSwitch[0],
           &six_plus_six_AcmsteeringV09_m_B.MultiportSwitch_o[0], 40U * sizeof
           (real32_T));
    break;

   case 4:
    memcpy(&MultiportSwitch[0],
           &six_plus_six_AcmsteeringV09_m_B.OutportBufferForcenter_steer_de[0],
           40U * sizeof(real32_T));
    break;

   default:
    memcpy(&MultiportSwitch[0],
           &six_plus_six_AcmsteeringV09_m_B.OutportBufferForemergency_stop_[0],
           40U * sizeof(real32_T));
    break;
  }

  /* End of MultiPortSwitch: '<S408>/Multiport Switch' */

  /* Update for Memory: '<S409>/Memory' */
  six_plus_six_AcmsteeringV09__DW.Memory_PreviousInput_o = mode_dem_out;

  /* S-Function (fcncallgen): '<Root>/Function-Call Generator1' incorporates:
   *  SubSystem: '<Root>/Subsystem'
   */
  /* Saturate: '<S1255>/VCU1_GearCmd_sat' */
  rtb_acc_dem = MultiportSwitch[14];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1255>/VCU1_GearCmd_sat' */

  /* Rounding: '<S1255>/VCU1_GearCmdRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1255>/VCU1_GearCmd_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 3);

  /* DataTypeConversion: '<S1255>/VCU1_GearCmd_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1255>/VCU1_GearCmd_L' */
  rtb_VCU1_LifeCnt_L &= 24U;

  /* DataTypeConversion: '<S1255>/VCU1_GearCmd_Convert' */
  rtb_VCU1_EnableReq_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1253>/VCU1_CtrlModel_sat' */
  rtb_acc_dem = MultiportSwitch[13];
  if (rtb_acc_dem > 1.0F) {
    rtb_acc_dem = 1.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1253>/VCU1_CtrlModel_sat' */

  /* Rounding: '<S1253>/VCU1_CtrlModelRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1253>/VCU1_CtrlModel_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 2);

  /* DataTypeConversion: '<S1253>/VCU1_CtrlModel_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1253>/VCU1_CtrlModel_L' */
  rtb_VCU1_LifeCnt_L &= 4U;

  /* DataTypeConversion: '<S1253>/VCU1_CtrlModel_Convert' */
  rtb_VCU1_CtrlModel_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1254>/VCU1_EnableReq_sat' */
  rtb_acc_dem = MultiportSwitch[12];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1254>/VCU1_EnableReq_sat' */

  /* Rounding: '<S1254>/VCU1_EnableReqRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1254>/VCU1_EnableReq_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1254>/VCU1_EnableReq_L' */
  rtb_VCU1_LifeCnt_L &= 3U;

  /* DataTypeConversion: '<S1254>/VCU1_EnableReq_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1227>/or1' */
  six_plus_six_AcmsteeringV09_m_B.or1 = (uint8_T)(rtb_VCU1_EnableReq_Convert |
    rtb_VCU1_CtrlModel_Convert | rtb_VCU1_LifeCnt_Convert);

  /* Saturate: '<S1257>/VCU1_SpeedMax_sat' */
  rtb_acc_dem = MultiportSwitch[15];
  if (rtb_acc_dem > 10000.0F) {
    rtb_acc_dem = 10000.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1257>/VCU1_SpeedMax_sat' */

  /* Rounding: '<S1257>/VCU1_SpeedMaxRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1257>/VCU1_SpeedMax_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1257>/VCU1_SpeedMax_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1257>/VCU1_SpeedMax_D1' incorporates:
   *  Constant: '<S1257>/VCU1_SpeedMaxoutput2_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1257>/VCU1_SpeedMaxCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1227>/or2' */
  six_plus_six_AcmsteeringV09_m_B.or2 = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1257>/VCU1_SpeedMax_And' incorporates:
   *  Constant: '<S1257>/VCU1_SpeedMax_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1257>/VCU1_SpeedMaxBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1227>/or3' */
  six_plus_six_AcmsteeringV09_m_B.or3 = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1258>/VCU1_TorqueRef_sat' */
  rtb_acc_dem = MultiportSwitch[16];
  if (rtb_acc_dem > 1000.0F) {
    rtb_acc_dem = 1000.0F;
  } else {
    if (rtb_acc_dem < -1000.0F) {
      rtb_acc_dem = -1000.0F;
    }
  }

  /* End of Saturate: '<S1258>/VCU1_TorqueRef_sat' */

  /* Sum: '<S1258>/VCU1_TorqueRef_st' incorporates:
   *  Constant: '<S1258>/VCU1_TorqueRef_O'
   */
  rtb_acc_dem -= -1000.0F;

  /* Product: '<S1258>/VCU1_TorqueRef_D' incorporates:
   *  Constant: '<S1258>/VCU1_TorqueRef_F'
   */
  rtb_acc_dem /= 0.1F;

  /* Rounding: '<S1258>/VCU1_TorqueRefRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1258>/VCU1_TorqueRef_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1258>/VCU1_TorqueRef_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1258>/VCU1_TorqueRef_D1' incorporates:
   *  Constant: '<S1258>/VCU1_TorqueRefoutput4_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1258>/VCU1_TorqueRefCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1227>/or4' */
  six_plus_six_AcmsteeringV09_m_B.or4 = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1258>/VCU1_TorqueRef_And' incorporates:
   *  Constant: '<S1258>/VCU1_TorqueRef_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1258>/VCU1_TorqueRefBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1227>/or5' */
  six_plus_six_AcmsteeringV09_m_B.or5 = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1256>/VCU1_LifeCnt_sat' */
  rtb_acc_dem = MultiportSwitch[17];
  if (rtb_acc_dem > 255.0F) {
    rtb_acc_dem = 255.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1256>/VCU1_LifeCnt_sat' */

  /* Rounding: '<S1256>/VCU1_LifeCntRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1256>/VCU1_LifeCnt_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1256>/VCU1_LifeCnt_L' */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1256>/VCU1_LifeCnt_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1227>/or8' */
  six_plus_six_AcmsteeringV09_m_B.or8 = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit1' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF10TX[8];
    uint8 can0buf10looptx= 0;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_AcmsteeringV09_m_B.or1;
    can0buf10looptx++;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_AcmsteeringV09_m_B.or2;
    can0buf10looptx++;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_AcmsteeringV09_m_B.or3;
    can0buf10looptx++;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_AcmsteeringV09_m_B.or4;
    can0buf10looptx++;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_AcmsteeringV09_m_B.or5;
    can0buf10looptx++;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_Acmsteering_ConstB.or6;
    can0buf10looptx++;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_Acmsteering_ConstB.or7;
    can0buf10looptx++;
    CAN0BUF10TX[can0buf10looptx]= six_plus_six_AcmsteeringV09_m_B.or8;
    can0buf10looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit1= ec_can_transmit(0, 10, 1,
      205583143U, 8, CAN0BUF10TX);
  }

  /* Saturate: '<S1237>/VCU1_GearCmd_sat' */
  rtb_acc_dem = MultiportSwitch[20];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1237>/VCU1_GearCmd_sat' */

  /* Rounding: '<S1237>/VCU1_GearCmdRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1237>/VCU1_GearCmd_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 3);

  /* DataTypeConversion: '<S1237>/VCU1_GearCmd_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1237>/VCU1_GearCmd_L' */
  rtb_VCU1_LifeCnt_L &= 24U;

  /* DataTypeConversion: '<S1237>/VCU1_GearCmd_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1235>/VCU1_CtrlModel_sat' */
  rtb_acc_dem = MultiportSwitch[19];
  if (rtb_acc_dem > 1.0F) {
    rtb_acc_dem = 1.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1235>/VCU1_CtrlModel_sat' */

  /* Rounding: '<S1235>/VCU1_CtrlModelRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1235>/VCU1_CtrlModel_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 2);

  /* DataTypeConversion: '<S1235>/VCU1_CtrlModel_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1235>/VCU1_CtrlModel_L' */
  rtb_VCU1_LifeCnt_L &= 4U;

  /* DataTypeConversion: '<S1235>/VCU1_CtrlModel_Convert' */
  rtb_VCU1_CtrlModel_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1236>/VCU1_EnableReq_sat' */
  rtb_acc_dem = MultiportSwitch[18];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1236>/VCU1_EnableReq_sat' */

  /* Rounding: '<S1236>/VCU1_EnableReqRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1236>/VCU1_EnableReq_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1236>/VCU1_EnableReq_L' */
  rtb_VCU1_LifeCnt_L &= 3U;

  /* DataTypeConversion: '<S1236>/VCU1_EnableReq_Convert' */
  rtb_VCU1_EnableReq_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1224>/or1' */
  six_plus_six_AcmsteeringV09_m_B.or1_e = (uint8_T)(rtb_VCU1_LifeCnt_Convert |
    rtb_VCU1_CtrlModel_Convert | rtb_VCU1_EnableReq_Convert);

  /* Saturate: '<S1239>/VCU1_SpeedMax_sat' */
  rtb_acc_dem = MultiportSwitch[21];
  if (rtb_acc_dem > 10000.0F) {
    rtb_acc_dem = 10000.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1239>/VCU1_SpeedMax_sat' */

  /* Rounding: '<S1239>/VCU1_SpeedMaxRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1239>/VCU1_SpeedMax_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1239>/VCU1_SpeedMax_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1239>/VCU1_SpeedMax_D1' incorporates:
   *  Constant: '<S1239>/VCU1_SpeedMaxoutput2_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1239>/VCU1_SpeedMaxCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1224>/or2' */
  six_plus_six_AcmsteeringV09_m_B.or2_m = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1239>/VCU1_SpeedMax_And' incorporates:
   *  Constant: '<S1239>/VCU1_SpeedMax_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1239>/VCU1_SpeedMaxBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1224>/or3' */
  six_plus_six_AcmsteeringV09_m_B.or3_l = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1240>/VCU1_TorqueRef_sat' */
  rtb_acc_dem = MultiportSwitch[22];
  if (rtb_acc_dem > 1000.0F) {
    rtb_acc_dem = 1000.0F;
  } else {
    if (rtb_acc_dem < -1000.0F) {
      rtb_acc_dem = -1000.0F;
    }
  }

  /* End of Saturate: '<S1240>/VCU1_TorqueRef_sat' */

  /* Sum: '<S1240>/VCU1_TorqueRef_st' incorporates:
   *  Constant: '<S1240>/VCU1_TorqueRef_O'
   */
  rtb_acc_dem -= -1000.0F;

  /* Product: '<S1240>/VCU1_TorqueRef_D' incorporates:
   *  Constant: '<S1240>/VCU1_TorqueRef_F'
   */
  rtb_acc_dem /= 0.1F;

  /* Rounding: '<S1240>/VCU1_TorqueRefRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1240>/VCU1_TorqueRef_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1240>/VCU1_TorqueRef_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1240>/VCU1_TorqueRef_D1' incorporates:
   *  Constant: '<S1240>/VCU1_TorqueRefoutput4_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1240>/VCU1_TorqueRefCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1224>/or4' */
  six_plus_six_AcmsteeringV09_m_B.or4_m = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1240>/VCU1_TorqueRef_And' incorporates:
   *  Constant: '<S1240>/VCU1_TorqueRef_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1240>/VCU1_TorqueRefBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1224>/or5' */
  six_plus_six_AcmsteeringV09_m_B.or5_d = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1238>/VCU1_LifeCnt_sat' */
  rtb_acc_dem = MultiportSwitch[23];
  if (rtb_acc_dem > 255.0F) {
    rtb_acc_dem = 255.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1238>/VCU1_LifeCnt_sat' */

  /* Rounding: '<S1238>/VCU1_LifeCntRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1238>/VCU1_LifeCnt_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1238>/VCU1_LifeCnt_L' */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1238>/VCU1_LifeCnt_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1224>/or8' */
  six_plus_six_AcmsteeringV09_m_B.or8_f = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit11' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF12TX[8];
    uint8 can0buf12looptx= 0;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_AcmsteeringV09_m_B.or1_e;
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_AcmsteeringV09_m_B.or2_m;
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_AcmsteeringV09_m_B.or3_l;
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_AcmsteeringV09_m_B.or4_m;
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_AcmsteeringV09_m_B.or5_d;
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_Acmsteering_ConstB.or6_o;
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_Acmsteering_ConstB.or7_m;
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= six_plus_six_AcmsteeringV09_m_B.or8_f;
    can0buf12looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit11= ec_can_transmit(0, 12, 1,
      205582375U, 8, CAN0BUF12TX);
  }

  /* Saturate: '<S1249>/VCU1_GearCmd_sat' */
  rtb_acc_dem = MultiportSwitch[26];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1249>/VCU1_GearCmd_sat' */

  /* Rounding: '<S1249>/VCU1_GearCmdRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1249>/VCU1_GearCmd_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 3);

  /* DataTypeConversion: '<S1249>/VCU1_GearCmd_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1249>/VCU1_GearCmd_L' */
  rtb_VCU1_LifeCnt_L &= 24U;

  /* DataTypeConversion: '<S1249>/VCU1_GearCmd_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1247>/VCU1_CtrlModel_sat' */
  rtb_acc_dem = MultiportSwitch[25];
  if (rtb_acc_dem > 1.0F) {
    rtb_acc_dem = 1.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1247>/VCU1_CtrlModel_sat' */

  /* Rounding: '<S1247>/VCU1_CtrlModelRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1247>/VCU1_CtrlModel_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 2);

  /* DataTypeConversion: '<S1247>/VCU1_CtrlModel_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1247>/VCU1_CtrlModel_L' */
  rtb_VCU1_LifeCnt_L &= 4U;

  /* DataTypeConversion: '<S1247>/VCU1_CtrlModel_Convert' */
  rtb_VCU1_CtrlModel_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1248>/VCU1_EnableReq_sat' */
  rtb_acc_dem = MultiportSwitch[24];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1248>/VCU1_EnableReq_sat' */

  /* Rounding: '<S1248>/VCU1_EnableReqRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1248>/VCU1_EnableReq_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1248>/VCU1_EnableReq_L' */
  rtb_VCU1_LifeCnt_L &= 3U;

  /* DataTypeConversion: '<S1248>/VCU1_EnableReq_Convert' */
  rtb_VCU1_EnableReq_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1226>/or1' */
  six_plus_six_AcmsteeringV09_m_B.or1_j = (uint8_T)(rtb_VCU1_LifeCnt_Convert |
    rtb_VCU1_CtrlModel_Convert | rtb_VCU1_EnableReq_Convert);

  /* Saturate: '<S1251>/VCU1_SpeedMax_sat' */
  rtb_acc_dem = MultiportSwitch[27];
  if (rtb_acc_dem > 10000.0F) {
    rtb_acc_dem = 10000.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1251>/VCU1_SpeedMax_sat' */

  /* Rounding: '<S1251>/VCU1_SpeedMaxRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1251>/VCU1_SpeedMax_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1251>/VCU1_SpeedMax_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1251>/VCU1_SpeedMax_D1' incorporates:
   *  Constant: '<S1251>/VCU1_SpeedMaxoutput2_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1251>/VCU1_SpeedMaxCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1226>/or2' */
  six_plus_six_AcmsteeringV09_m_B.or2_d = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1251>/VCU1_SpeedMax_And' incorporates:
   *  Constant: '<S1251>/VCU1_SpeedMax_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1251>/VCU1_SpeedMaxBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1226>/or3' */
  six_plus_six_AcmsteeringV09_m_B.or3_k = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1252>/VCU1_TorqueRef_sat' */
  rtb_acc_dem = MultiportSwitch[28];
  if (rtb_acc_dem > 1000.0F) {
    rtb_acc_dem = 1000.0F;
  } else {
    if (rtb_acc_dem < -1000.0F) {
      rtb_acc_dem = -1000.0F;
    }
  }

  /* End of Saturate: '<S1252>/VCU1_TorqueRef_sat' */

  /* Sum: '<S1252>/VCU1_TorqueRef_st' incorporates:
   *  Constant: '<S1252>/VCU1_TorqueRef_O'
   */
  rtb_acc_dem -= -1000.0F;

  /* Product: '<S1252>/VCU1_TorqueRef_D' incorporates:
   *  Constant: '<S1252>/VCU1_TorqueRef_F'
   */
  rtb_acc_dem /= 0.1F;

  /* Rounding: '<S1252>/VCU1_TorqueRefRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1252>/VCU1_TorqueRef_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1252>/VCU1_TorqueRef_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1252>/VCU1_TorqueRef_D1' incorporates:
   *  Constant: '<S1252>/VCU1_TorqueRefoutput4_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1252>/VCU1_TorqueRefCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1226>/or4' */
  six_plus_six_AcmsteeringV09_m_B.or4_d = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1252>/VCU1_TorqueRef_And' incorporates:
   *  Constant: '<S1252>/VCU1_TorqueRef_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1252>/VCU1_TorqueRefBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1226>/or5' */
  six_plus_six_AcmsteeringV09_m_B.or5_i = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1250>/VCU1_LifeCnt_sat' */
  rtb_acc_dem = MultiportSwitch[29];
  if (rtb_acc_dem > 255.0F) {
    rtb_acc_dem = 255.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1250>/VCU1_LifeCnt_sat' */

  /* Rounding: '<S1250>/VCU1_LifeCntRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1250>/VCU1_LifeCnt_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1250>/VCU1_LifeCnt_L' */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1250>/VCU1_LifeCnt_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1226>/or8' */
  six_plus_six_AcmsteeringV09_m_B.or8_o = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit12' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF11TX[8];
    uint8 can0buf11looptx= 0;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_AcmsteeringV09_m_B.or1_j;
    can0buf11looptx++;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_AcmsteeringV09_m_B.or2_d;
    can0buf11looptx++;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_AcmsteeringV09_m_B.or3_k;
    can0buf11looptx++;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_AcmsteeringV09_m_B.or4_d;
    can0buf11looptx++;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_AcmsteeringV09_m_B.or5_i;
    can0buf11looptx++;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_Acmsteering_ConstB.or6_d;
    can0buf11looptx++;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_Acmsteering_ConstB.or7_c;
    can0buf11looptx++;
    CAN0BUF11TX[can0buf11looptx]= six_plus_six_AcmsteeringV09_m_B.or8_o;
    can0buf11looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit12= ec_can_transmit(0, 11, 1,
      205582887U, 8, CAN0BUF11TX);
  }

  /* Saturate: '<S1231>/VCU1_GearCmd_sat' */
  rtb_acc_dem = MultiportSwitch[2];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1231>/VCU1_GearCmd_sat' */

  /* Rounding: '<S1231>/VCU1_GearCmdRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1231>/VCU1_GearCmd_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 3);

  /* DataTypeConversion: '<S1231>/VCU1_GearCmd_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1231>/VCU1_GearCmd_L' */
  rtb_VCU1_LifeCnt_L &= 24U;

  /* DataTypeConversion: '<S1231>/VCU1_GearCmd_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1229>/VCU1_CtrlModel_sat' */
  rtb_acc_dem = MultiportSwitch[1];
  if (rtb_acc_dem > 1.0F) {
    rtb_acc_dem = 1.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1229>/VCU1_CtrlModel_sat' */

  /* Rounding: '<S1229>/VCU1_CtrlModelRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1229>/VCU1_CtrlModel_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 2);

  /* DataTypeConversion: '<S1229>/VCU1_CtrlModel_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1229>/VCU1_CtrlModel_L' */
  rtb_VCU1_LifeCnt_L &= 4U;

  /* DataTypeConversion: '<S1229>/VCU1_CtrlModel_Convert' */
  rtb_VCU1_CtrlModel_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1230>/VCU1_EnableReq_sat' */
  rtb_acc_dem = MultiportSwitch[0];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1230>/VCU1_EnableReq_sat' */

  /* Rounding: '<S1230>/VCU1_EnableReqRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1230>/VCU1_EnableReq_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1230>/VCU1_EnableReq_L' */
  rtb_VCU1_LifeCnt_L &= 3U;

  /* DataTypeConversion: '<S1230>/VCU1_EnableReq_Convert' */
  rtb_VCU1_EnableReq_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1223>/or1' */
  six_plus_six_AcmsteeringV09_m_B.or1_k = (uint8_T)(rtb_VCU1_LifeCnt_Convert |
    rtb_VCU1_CtrlModel_Convert | rtb_VCU1_EnableReq_Convert);

  /* Saturate: '<S1233>/VCU1_SpeedMax_sat' */
  rtb_acc_dem = MultiportSwitch[3];
  if (rtb_acc_dem > 10000.0F) {
    rtb_acc_dem = 10000.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1233>/VCU1_SpeedMax_sat' */

  /* Rounding: '<S1233>/VCU1_SpeedMaxRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1233>/VCU1_SpeedMax_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1233>/VCU1_SpeedMax_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1233>/VCU1_SpeedMax_D1' incorporates:
   *  Constant: '<S1233>/VCU1_SpeedMaxoutput2_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1233>/VCU1_SpeedMaxCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1223>/or2' */
  six_plus_six_AcmsteeringV09_m_B.or2_de = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1233>/VCU1_SpeedMax_And' incorporates:
   *  Constant: '<S1233>/VCU1_SpeedMax_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1233>/VCU1_SpeedMaxBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1223>/or3' */
  six_plus_six_AcmsteeringV09_m_B.or3_p = rtb_VCU1_LifeCnt_Convert;

  /* Switch: '<S5>/Switch15' incorporates:
   *  Constant: '<S5>/Constant1'
   */
  if (Compare_m) {
    rtb_acc_dem = 0.0F;
  } else {
    rtb_acc_dem = MultiportSwitch[4];
  }

  /* End of Switch: '<S5>/Switch15' */

  /* Saturate: '<S1234>/VCU1_TorqueRef_sat' */
  if (rtb_acc_dem > 1000.0F) {
    rtb_acc_dem = 1000.0F;
  } else {
    if (rtb_acc_dem < -1000.0F) {
      rtb_acc_dem = -1000.0F;
    }
  }

  /* End of Saturate: '<S1234>/VCU1_TorqueRef_sat' */

  /* Sum: '<S1234>/VCU1_TorqueRef_st' incorporates:
   *  Constant: '<S1234>/VCU1_TorqueRef_O'
   */
  rtb_acc_dem -= -1000.0F;

  /* Product: '<S1234>/VCU1_TorqueRef_D' incorporates:
   *  Constant: '<S1234>/VCU1_TorqueRef_F'
   */
  rtb_acc_dem /= 0.1F;

  /* Rounding: '<S1234>/VCU1_TorqueRefRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1234>/VCU1_TorqueRef_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1234>/VCU1_TorqueRef_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1234>/VCU1_TorqueRef_D1' incorporates:
   *  Constant: '<S1234>/VCU1_TorqueRefoutput4_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1234>/VCU1_TorqueRefCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1223>/or4' */
  six_plus_six_AcmsteeringV09_m_B.or4_e = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1234>/VCU1_TorqueRef_And' incorporates:
   *  Constant: '<S1234>/VCU1_TorqueRef_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1234>/VCU1_TorqueRefBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1223>/or5' */
  six_plus_six_AcmsteeringV09_m_B.or5_e = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1232>/VCU1_LifeCnt_sat' */
  rtb_acc_dem = MultiportSwitch[5];
  if (rtb_acc_dem > 255.0F) {
    rtb_acc_dem = 255.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1232>/VCU1_LifeCnt_sat' */

  /* Rounding: '<S1232>/VCU1_LifeCntRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1232>/VCU1_LifeCnt_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1232>/VCU1_LifeCnt_L' */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1232>/VCU1_LifeCnt_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1223>/or8' */
  six_plus_six_AcmsteeringV09_m_B.or8_a = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit2' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF8TX[8];
    uint8 can0buf8looptx= 0;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_AcmsteeringV09_m_B.or1_k;
    can0buf8looptx++;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_AcmsteeringV09_m_B.or2_de;
    can0buf8looptx++;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_AcmsteeringV09_m_B.or3_p;
    can0buf8looptx++;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_AcmsteeringV09_m_B.or4_e;
    can0buf8looptx++;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_AcmsteeringV09_m_B.or5_e;
    can0buf8looptx++;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_Acmsteering_ConstB.or6_e;
    can0buf8looptx++;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_Acmsteering_ConstB.or7_f;
    can0buf8looptx++;
    CAN0BUF8TX[can0buf8looptx]= six_plus_six_AcmsteeringV09_m_B.or8_a;
    can0buf8looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit2= ec_can_transmit(0, 8, 1,
      205582119U, 8, CAN0BUF8TX);
  }

  /* Saturate: '<S1243>/VCU1_GearCmd_sat' */
  rtb_acc_dem = MultiportSwitch[8];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1243>/VCU1_GearCmd_sat' */

  /* Rounding: '<S1243>/VCU1_GearCmdRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1243>/VCU1_GearCmd_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 3);

  /* DataTypeConversion: '<S1243>/VCU1_GearCmd_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1243>/VCU1_GearCmd_L' */
  rtb_VCU1_LifeCnt_L &= 24U;

  /* DataTypeConversion: '<S1243>/VCU1_GearCmd_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1241>/VCU1_CtrlModel_sat' */
  rtb_acc_dem = MultiportSwitch[7];
  if (rtb_acc_dem > 1.0F) {
    rtb_acc_dem = 1.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1241>/VCU1_CtrlModel_sat' */

  /* Rounding: '<S1241>/VCU1_CtrlModelRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1241>/VCU1_CtrlModel_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 2);

  /* DataTypeConversion: '<S1241>/VCU1_CtrlModel_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1241>/VCU1_CtrlModel_L' */
  rtb_VCU1_LifeCnt_L &= 4U;

  /* DataTypeConversion: '<S1241>/VCU1_CtrlModel_Convert' */
  rtb_VCU1_CtrlModel_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1242>/VCU1_EnableReq_sat' */
  rtb_acc_dem = MultiportSwitch[6];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1242>/VCU1_EnableReq_sat' */

  /* Rounding: '<S1242>/VCU1_EnableReqRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1242>/VCU1_EnableReq_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1242>/VCU1_EnableReq_L' */
  rtb_VCU1_LifeCnt_L &= 3U;

  /* DataTypeConversion: '<S1242>/VCU1_EnableReq_Convert' */
  rtb_VCU1_EnableReq_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1225>/or1' */
  six_plus_six_AcmsteeringV09_m_B.or1_g = (uint8_T)(rtb_VCU1_LifeCnt_Convert |
    rtb_VCU1_CtrlModel_Convert | rtb_VCU1_EnableReq_Convert);

  /* Saturate: '<S1245>/VCU1_SpeedMax_sat' */
  rtb_acc_dem = MultiportSwitch[9];
  if (rtb_acc_dem > 10000.0F) {
    rtb_acc_dem = 10000.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1245>/VCU1_SpeedMax_sat' */

  /* Rounding: '<S1245>/VCU1_SpeedMaxRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1245>/VCU1_SpeedMax_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1245>/VCU1_SpeedMax_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1245>/VCU1_SpeedMax_D1' incorporates:
   *  Constant: '<S1245>/VCU1_SpeedMaxoutput2_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1245>/VCU1_SpeedMaxCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1225>/or2' */
  six_plus_six_AcmsteeringV09_m_B.or2_b = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1245>/VCU1_SpeedMax_And' incorporates:
   *  Constant: '<S1245>/VCU1_SpeedMax_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1245>/VCU1_SpeedMaxBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1225>/or3' */
  six_plus_six_AcmsteeringV09_m_B.or3_b = rtb_VCU1_LifeCnt_Convert;

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant10'
   */
  if (Compare_m) {
    rtb_acc_dem = 0.0F;
  } else {
    rtb_acc_dem = MultiportSwitch[10];
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Saturate: '<S1246>/VCU1_TorqueRef_sat' */
  if (rtb_acc_dem > 1000.0F) {
    rtb_acc_dem = 1000.0F;
  } else {
    if (rtb_acc_dem < -1000.0F) {
      rtb_acc_dem = -1000.0F;
    }
  }

  /* End of Saturate: '<S1246>/VCU1_TorqueRef_sat' */

  /* Sum: '<S1246>/VCU1_TorqueRef_st' incorporates:
   *  Constant: '<S1246>/VCU1_TorqueRef_O'
   */
  rtb_acc_dem -= -1000.0F;

  /* Product: '<S1246>/VCU1_TorqueRef_D' incorporates:
   *  Constant: '<S1246>/VCU1_TorqueRef_F'
   */
  rtb_acc_dem /= 0.1F;

  /* Rounding: '<S1246>/VCU1_TorqueRefRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1246>/VCU1_TorqueRef_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1246>/VCU1_TorqueRef_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1246>/VCU1_TorqueRef_D1' incorporates:
   *  Constant: '<S1246>/VCU1_TorqueRefoutput4_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1246>/VCU1_TorqueRefCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1225>/or4' */
  six_plus_six_AcmsteeringV09_m_B.or4_mz = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1246>/VCU1_TorqueRef_And' incorporates:
   *  Constant: '<S1246>/VCU1_TorqueRef_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1246>/VCU1_TorqueRefBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1225>/or5' */
  six_plus_six_AcmsteeringV09_m_B.or5_j = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1244>/VCU1_LifeCnt_sat' */
  rtb_acc_dem = MultiportSwitch[11];
  if (rtb_acc_dem > 255.0F) {
    rtb_acc_dem = 255.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1244>/VCU1_LifeCnt_sat' */

  /* Rounding: '<S1244>/VCU1_LifeCntRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1244>/VCU1_LifeCnt_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1244>/VCU1_LifeCnt_L' */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1244>/VCU1_LifeCnt_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1225>/or8' */
  six_plus_six_AcmsteeringV09_m_B.or8_p = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit4' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF9TX[8];
    uint8 can0buf9looptx= 0;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_AcmsteeringV09_m_B.or1_g;
    can0buf9looptx++;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_AcmsteeringV09_m_B.or2_b;
    can0buf9looptx++;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_AcmsteeringV09_m_B.or3_b;
    can0buf9looptx++;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_AcmsteeringV09_m_B.or4_mz;
    can0buf9looptx++;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_AcmsteeringV09_m_B.or5_j;
    can0buf9looptx++;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_Acmsteering_ConstB.or6_b;
    can0buf9looptx++;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_Acmsteering_ConstB.or7_g;
    can0buf9looptx++;
    CAN0BUF9TX[can0buf9looptx]= six_plus_six_AcmsteeringV09_m_B.or8_p;
    can0buf9looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit4= ec_can_transmit(0, 9, 1,
      205582631U, 8, CAN0BUF9TX);
  }

  /* Saturate: '<S1261>/VCU1_GearCmd_sat' */
  rtb_acc_dem = MultiportSwitch[32];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1261>/VCU1_GearCmd_sat' */

  /* Rounding: '<S1261>/VCU1_GearCmdRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1261>/VCU1_GearCmd_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 3);

  /* DataTypeConversion: '<S1261>/VCU1_GearCmd_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1261>/VCU1_GearCmd_L' */
  rtb_VCU1_LifeCnt_L &= 24U;

  /* DataTypeConversion: '<S1261>/VCU1_GearCmd_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1259>/VCU1_CtrlModel_sat' */
  rtb_acc_dem = MultiportSwitch[31];
  if (rtb_acc_dem > 1.0F) {
    rtb_acc_dem = 1.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1259>/VCU1_CtrlModel_sat' */

  /* Rounding: '<S1259>/VCU1_CtrlModelRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* ArithShift: '<S1259>/VCU1_CtrlModel_S' */
  rtb_acc_dem = (real32_T)ldexp(rtb_acc_dem, 2);

  /* DataTypeConversion: '<S1259>/VCU1_CtrlModel_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1259>/VCU1_CtrlModel_L' */
  rtb_VCU1_LifeCnt_L &= 4U;

  /* DataTypeConversion: '<S1259>/VCU1_CtrlModel_Convert' */
  rtb_VCU1_CtrlModel_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* Saturate: '<S1260>/VCU1_EnableReq_sat' */
  rtb_acc_dem = MultiportSwitch[30];
  if (rtb_acc_dem > 3.0F) {
    rtb_acc_dem = 3.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1260>/VCU1_EnableReq_sat' */

  /* Rounding: '<S1260>/VCU1_EnableReqRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1260>/VCU1_EnableReq_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1260>/VCU1_EnableReq_L' */
  rtb_VCU1_LifeCnt_L &= 3U;

  /* DataTypeConversion: '<S1260>/VCU1_EnableReq_Convert' */
  rtb_VCU1_EnableReq_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1228>/or1' */
  six_plus_six_AcmsteeringV09_m_B.or1_b = (uint8_T)(rtb_VCU1_LifeCnt_Convert |
    rtb_VCU1_CtrlModel_Convert | rtb_VCU1_EnableReq_Convert);

  /* Saturate: '<S1263>/VCU1_SpeedMax_sat' */
  rtb_acc_dem = MultiportSwitch[33];
  if (rtb_acc_dem > 10000.0F) {
    rtb_acc_dem = 10000.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1263>/VCU1_SpeedMax_sat' */

  /* Rounding: '<S1263>/VCU1_SpeedMaxRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1263>/VCU1_SpeedMax_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1263>/VCU1_SpeedMax_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1263>/VCU1_SpeedMax_D1' incorporates:
   *  Constant: '<S1263>/VCU1_SpeedMaxoutput2_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1263>/VCU1_SpeedMaxCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1228>/or2' */
  six_plus_six_AcmsteeringV09_m_B.or2_i = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1263>/VCU1_SpeedMax_And' incorporates:
   *  Constant: '<S1263>/VCU1_SpeedMax_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1263>/VCU1_SpeedMaxBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1228>/or3' */
  six_plus_six_AcmsteeringV09_m_B.or3_d = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1264>/VCU1_TorqueRef_sat' */
  rtb_acc_dem = MultiportSwitch[34];
  if (rtb_acc_dem > 1000.0F) {
    rtb_acc_dem = 1000.0F;
  } else {
    if (rtb_acc_dem < -1000.0F) {
      rtb_acc_dem = -1000.0F;
    }
  }

  /* End of Saturate: '<S1264>/VCU1_TorqueRef_sat' */

  /* Sum: '<S1264>/VCU1_TorqueRef_st' incorporates:
   *  Constant: '<S1264>/VCU1_TorqueRef_O'
   */
  rtb_acc_dem -= -1000.0F;

  /* Product: '<S1264>/VCU1_TorqueRef_D' incorporates:
   *  Constant: '<S1264>/VCU1_TorqueRef_F'
   */
  rtb_acc_dem /= 0.1F;

  /* Rounding: '<S1264>/VCU1_TorqueRefRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1264>/VCU1_TorqueRef_Convert' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1264>/VCU1_TorqueRef_L' */
  rtb_VCU1_LifeCnt_L &= 65535U;

  /* Product: '<S1264>/VCU1_TorqueRef_D1' incorporates:
   *  Constant: '<S1264>/VCU1_TorqueRefoutput4_C'
   */
  rtb_y = (real_T)rtb_VCU1_LifeCnt_L / 256.0;

  /* DataTypeConversion: '<S1264>/VCU1_TorqueRefCOV' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_y;

  /* S-Function (sfix_bitop): '<S1228>/or4' */
  six_plus_six_AcmsteeringV09_m_B.or4_j = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (sfix_bitop): '<S1264>/VCU1_TorqueRef_And' incorporates:
   *  Constant: '<S1264>/VCU1_TorqueRef_And_C'
   */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1264>/VCU1_TorqueRefBitCov' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1228>/or5' */
  six_plus_six_AcmsteeringV09_m_B.or5_jy = rtb_VCU1_LifeCnt_Convert;

  /* Saturate: '<S1262>/VCU1_LifeCnt_sat' */
  rtb_acc_dem = MultiportSwitch[35];
  if (rtb_acc_dem > 255.0F) {
    rtb_acc_dem = 255.0F;
  } else {
    if (rtb_acc_dem < 0.0F) {
      rtb_acc_dem = 0.0F;
    }
  }

  /* End of Saturate: '<S1262>/VCU1_LifeCnt_sat' */

  /* Rounding: '<S1262>/VCU1_LifeCntRon' */
  rtb_acc_dem = rt_roundf_snf(rtb_acc_dem);

  /* DataTypeConversion: '<S1262>/VCU1_LifeCnt_Convert1' */
  rtb_VCU1_LifeCnt_L = (uint32_T)rtb_acc_dem;

  /* S-Function (sfix_bitop): '<S1262>/VCU1_LifeCnt_L' */
  rtb_VCU1_LifeCnt_L &= 255U;

  /* DataTypeConversion: '<S1262>/VCU1_LifeCnt_Convert' */
  rtb_VCU1_LifeCnt_Convert = (uint8_T)rtb_VCU1_LifeCnt_L;

  /* S-Function (sfix_bitop): '<S1228>/or8' */
  six_plus_six_AcmsteeringV09_m_B.or8_i = rtb_VCU1_LifeCnt_Convert;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit5' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF13TX[8];
    uint8 can0buf13looptx= 0;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_AcmsteeringV09_m_B.or1_b;
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_AcmsteeringV09_m_B.or2_i;
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_AcmsteeringV09_m_B.or3_d;
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_AcmsteeringV09_m_B.or4_j;
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_AcmsteeringV09_m_B.or5_jy;
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_Acmsteering_ConstB.or6_c;
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_Acmsteering_ConstB.or7_i;
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= six_plus_six_AcmsteeringV09_m_B.or8_i;
    can0buf13looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit5= ec_can_transmit(0, 13, 1,
      205583399U, 8, CAN0BUF13TX);
  }

  /* Memory: '<S5>/Memory5' */
  rtb_y = six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_m;

  /* Sum: '<S5>/Sum3' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  rtb_Sum_i = 1.0 + rtb_y;

  /* Sum: '<S5>/Sum1' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  rtb_Sum1_h = 5.0 + rtb_Sum_i;

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  rtb_DataTypeConversion_g = MultiportSwitch[36];

  /* MATLAB Function: '<S5>/MATLAB Function' */
  six_plus_six_MATLABFunction(rtb_Sum1_h, rtb_DataTypeConversion_g,
    &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction);

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_ap = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction.data;

  /* DataTypeConversion: '<S5>/Data Type Conversion6' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion6 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction.zero;

  /* DataTypeConversion: '<S5>/Data Type Conversion10' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion10 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction.position_4;

  /* DataTypeConversion: '<S5>/Data Type Conversion14' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion14 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction.position_3;

  /* DataTypeConversion: '<S5>/Data Type Conversion12' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion12 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction.position_2;

  /* DataTypeConversion: '<S5>/Data Type Conversion9' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion9 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction.position_1;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit6' */

  /*Transmit CAN message*/
  {
    uint8 CAN1BUF15TX[6];
    uint8 can1buf15looptx= 0;
    CAN1BUF15TX[can1buf15looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion2_ap;
    can1buf15looptx++;
    CAN1BUF15TX[can1buf15looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion6;
    can1buf15looptx++;
    CAN1BUF15TX[can1buf15looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion10;
    can1buf15looptx++;
    CAN1BUF15TX[can1buf15looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion14;
    can1buf15looptx++;
    CAN1BUF15TX[can1buf15looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion12;
    can1buf15looptx++;
    CAN1BUF15TX[can1buf15looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion9;
    can1buf15looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit6= ec_can_transmit(1, 15, 0, 514U,
      6, CAN1BUF15TX);
  }

  /* Memory: '<S5>/Memory1' */
  rtb_y = six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput;

  /* Sum: '<S5>/Sum4' incorporates:
   *  Constant: '<S5>/Constant3'
   */
  rtb_Memory4_e = 1.0 + rtb_y;

  /* Sum: '<S5>/Sum2' incorporates:
   *  Constant: '<S5>/Constant5'
   */
  rtb_Sum2 = 5.0 + rtb_Memory4_e;

  /* DataTypeConversion: '<S5>/Data Type Conversion25' */
  rtb_DataTypeConversion25 = MultiportSwitch[37];

  /* MATLAB Function: '<S5>/MATLAB Function1' */
  six_plus_six_MATLABFunction(rtb_Sum2, rtb_DataTypeConversion25,
    &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1);

  /* DataTypeConversion: '<S5>/Data Type Conversion5' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion5 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1.data;

  /* DataTypeConversion: '<S5>/Data Type Conversion7' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion7 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1.zero;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion1 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1.position_4;

  /* DataTypeConversion: '<S5>/Data Type Conversion4' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion4 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1.position_3;

  /* DataTypeConversion: '<S5>/Data Type Conversion3' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3_f = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1.position_2;

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion8_n = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction1.position_1;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit7' */

  /*Transmit CAN message*/
  {
    uint8 CAN1BUF56TX[6];
    uint8 can1buf56looptx= 0;
    CAN1BUF56TX[can1buf56looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion5;
    can1buf56looptx++;
    CAN1BUF56TX[can1buf56looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion7;
    can1buf56looptx++;
    CAN1BUF56TX[can1buf56looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion1;
    can1buf56looptx++;
    CAN1BUF56TX[can1buf56looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion4;
    can1buf56looptx++;
    CAN1BUF56TX[can1buf56looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion3_f;
    can1buf56looptx++;
    CAN1BUF56TX[can1buf56looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion8_n;
    can1buf56looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit7= ec_can_transmit(1, 56, 0, 515U,
      6, CAN1BUF56TX);
  }

  /* Memory: '<S5>/Memory2' */
  rtb_y = six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput;

  /* Sum: '<S5>/Sum6' incorporates:
   *  Constant: '<S5>/Constant6'
   */
  rtb_Subtract1_j = 1.0 + rtb_y;

  /* Sum: '<S5>/Sum5' incorporates:
   *  Constant: '<S5>/Constant7'
   */
  rtb_Sum5 = 5.0 + rtb_Subtract1_j;

  /* DataTypeConversion: '<S5>/Data Type Conversion26' */
  rtb_DataTypeConversion26 = MultiportSwitch[38];

  /* MATLAB Function: '<S5>/MATLAB Function2' */
  six_plus_six_MATLABFunction(rtb_Sum5, rtb_DataTypeConversion26,
    &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2);

  /* DataTypeConversion: '<S5>/Data Type Conversion16' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion16 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2.data;

  /* DataTypeConversion: '<S5>/Data Type Conversion17' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion17 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2.zero;

  /* DataTypeConversion: '<S5>/Data Type Conversion11' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion11 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2.position_4;

  /* DataTypeConversion: '<S5>/Data Type Conversion15' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion15 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2.position_3;

  /* DataTypeConversion: '<S5>/Data Type Conversion13' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion13 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2.position_2;

  /* DataTypeConversion: '<S5>/Data Type Conversion18' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion18 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction2.position_1;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit8' */

  /*Transmit CAN message*/
  {
    uint8 CAN1BUF57TX[6];
    uint8 can1buf57looptx= 0;
    CAN1BUF57TX[can1buf57looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion16;
    can1buf57looptx++;
    CAN1BUF57TX[can1buf57looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion17;
    can1buf57looptx++;
    CAN1BUF57TX[can1buf57looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion11;
    can1buf57looptx++;
    CAN1BUF57TX[can1buf57looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion15;
    can1buf57looptx++;
    CAN1BUF57TX[can1buf57looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion13;
    can1buf57looptx++;
    CAN1BUF57TX[can1buf57looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion18;
    can1buf57looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit8= ec_can_transmit(1, 57, 0, 516U,
      6, CAN1BUF57TX);
  }

  /* Memory: '<S5>/Memory3' */
  rtb_y = six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_ly;

  /* Sum: '<S5>/Sum8' incorporates:
   *  Constant: '<S5>/Constant8'
   */
  rtb_y++;

  /* Sum: '<S5>/Sum7' incorporates:
   *  Constant: '<S5>/Constant9'
   */
  rtb_Sum7 = 5.0 + rtb_y;

  /* DataTypeConversion: '<S5>/Data Type Conversion27' */
  rtb_DataTypeConversion27 = MultiportSwitch[39];

  /* MATLAB Function: '<S5>/MATLAB Function3' */
  six_plus_six_MATLABFunction(rtb_Sum7, rtb_DataTypeConversion27,
    &six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3);

  /* DataTypeConversion: '<S5>/Data Type Conversion22' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion22 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3.data;

  /* DataTypeConversion: '<S5>/Data Type Conversion23' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion23 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3.zero;

  /* DataTypeConversion: '<S5>/Data Type Conversion19' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion19 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3.position_4;

  /* DataTypeConversion: '<S5>/Data Type Conversion21' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion21 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3.position_3;

  /* DataTypeConversion: '<S5>/Data Type Conversion20' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion20 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3.position_2;

  /* DataTypeConversion: '<S5>/Data Type Conversion24' */
  six_plus_six_AcmsteeringV09_m_B.DataTypeConversion24 = (uint8_T)
    six_plus_six_AcmsteeringV09_m_B.sf_MATLABFunction3.position_1;

  /* S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit9' */

  /*Transmit CAN message*/
  {
    uint8 CAN1BUF58TX[6];
    uint8 can1buf58looptx= 0;
    CAN1BUF58TX[can1buf58looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion22;
    can1buf58looptx++;
    CAN1BUF58TX[can1buf58looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion23;
    can1buf58looptx++;
    CAN1BUF58TX[can1buf58looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion19;
    can1buf58looptx++;
    CAN1BUF58TX[can1buf58looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion21;
    can1buf58looptx++;
    CAN1BUF58TX[can1buf58looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion20;
    can1buf58looptx++;
    CAN1BUF58TX[can1buf58looptx]=
      six_plus_six_AcmsteeringV09_m_B.DataTypeConversion24;
    can1buf58looptx++;
    six_plus_six_AcmsteeringV09_m_B.CANTransmit9= ec_can_transmit(1, 58, 0, 513U,
      6, CAN1BUF58TX);
  }

  /* Update for Memory: '<S5>/Memory5' */
  six_plus_six_AcmsteeringV09__DW.Memory5_PreviousInput_m = rtb_Sum_i;

  /* Update for Memory: '<S5>/Memory1' */
  six_plus_six_AcmsteeringV09__DW.Memory1_PreviousInput = rtb_Memory4_e;

  /* Update for Memory: '<S5>/Memory2' */
  six_plus_six_AcmsteeringV09__DW.Memory2_PreviousInput = rtb_Subtract1_j;

  /* Update for Memory: '<S5>/Memory3' */
  six_plus_six_AcmsteeringV09__DW.Memory3_PreviousInput_ly = rtb_y;

  /* S-Function (fcncallgen): '<S1199>/50ms' incorporates:
   *  SubSystem: '<S1199>/daq50ms'
   */

  /* S-Function (ec5744_ccpslb1): '<S1213>/CCPDAQ' */
  ccpDaq(2);
}

/* Model step function for TID5 */
void six_plus_six_AcmsteeringV09_main_2lflm_step5(void) /* Sample time: [0.1s, 0.0s] */
{
  /* S-Function (fcncallgen): '<S1198>/100MS' incorporates:
   *  SubSystem: '<S1198>/Function-Call Subsystem'
   */

  /* S-Function (ec5744_canreceiveslb): '<S1202>/CANReceive' */

  /* Receive CAN message */
  {
    uint8 CAN2BUF1RX[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint8 can2buf1looprx= 0;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o3_j= 278;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o5_i= 8;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o2_c= ec_can_receive(2,1,
      CAN2BUF1RX);
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[0]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[1]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[2]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[3]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[4]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[5]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[6]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
    six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[7]=
      CAN2BUF1RX[can2buf1looprx];
    can2buf1looprx++;
  }

  /* Call the system: <S1202>/Function-Call Subsystem */

  /* Output and update for function-call system: '<S1202>/Function-Call Subsystem' */
  {
    uint8_T rtb_Add;
    uint8_T rtb_Compare;

    /* Outputs for Enabled SubSystem: '<S1203>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S1204>/Enable'
     */
    if (six_plus_six_AcmsteeringV09_m_B.CANReceive_o2_c > 0) {
      /* RelationalOperator: '<S1205>/Compare' incorporates:
       *  Constant: '<S1205>/Constant'
       */
      rtb_Add = (uint8_T)(six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[0] ==
                          83);

      /* RelationalOperator: '<S1206>/Compare' incorporates:
       *  Constant: '<S1206>/Constant'
       */
      rtb_Compare = (uint8_T)(six_plus_six_AcmsteeringV09_m_B.CANReceive_o4_b[5]
        == 84);

      /* Sum: '<S1204>/Add' */
      rtb_Add = (uint8_T)((uint32_T)rtb_Add + rtb_Compare);

      /* RelationalOperator: '<S1207>/Compare' incorporates:
       *  Constant: '<S1207>/Constant'
       */
      rtb_Compare = (uint8_T)(rtb_Add == 2);

      /* If: '<S1204>/If' incorporates:
       *  Constant: '<S1209>/Constant'
       */
      if (rtb_Compare > 0) {
        /* Outputs for IfAction SubSystem: '<S1204>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1208>/Action Port'
         */

        /* S-Function (ec5744_bootloaderslb): '<S1208>/BootLoader' */
        {
          uint16 i= 0;
          N256K_BLOCK_SEL n256KBlockSelect;
          CONTEXT_DATA pgmCtxData;
          n256KBlockSelect.first256KBlockSelect = 0x00000080;
          n256KBlockSelect.second256KBlockSelect = 0x00000000;
          pgmCtxData.pReqCompletionFn = pFlashProgram;
          uint8 CAN2BUF9TX[]= { 11, 12, 12, 13 };

          uint8 returnCode1= 0;
          uint8 bootflag[]= { 1, 0, 0, 0, 0, 0, 0, 0 };

          DisableInterrupts();
          SIUL2.GPDO[22].R = 1;
          App_FlashErase( &ssdConfig, 0, 0x00000000, 0x00000000, 0x00000000,
                         n256KBlockSelect );
          App_FlashProgram( &ssdConfig, 0, 0x011FFFF0, 8, (uint32)bootflag,
                           &pgmCtxData );
          i= 1000;
          while (i--) {
            ;
          }

          ec_can_transmit(2, 9, 0, 593, 4, CAN2BUF9TX);
          i= 10000;
          while (i--) {
            ;
          }
        }

        /* S-Function (ec5744_cpuresetslb): '<S1208>/CPUReset' */

        /* Perform a microcontroller reset */
        MC_ME.MCTL.R = 0X00005AF0;
        MC_ME.MCTL.R = 0X0000A50F;

        /* End of Outputs for SubSystem: '<S1204>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S1204>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1209>/Action Port'
         */

        /* S-Function (ec5744_cantransmitslb): '<S1209>/CANTransmit' */

        /*Transmit CAN message*/
        {
          uint8 CAN2BUF9TX[1];
          uint8 can2buf9looptx= 0;
          CAN2BUF9TX[can2buf9looptx]= ((uint8_T)1U);
          can2buf9looptx++;
          six_plus_six_AcmsteeringV09_m_B.CANTransmit= ec_can_transmit(2, 9, 0,
            593U, 1, CAN2BUF9TX);
        }

        /* End of Outputs for SubSystem: '<S1204>/If Action Subsystem1' */
      }

      /* End of If: '<S1204>/If' */
    }

    /* End of Outputs for SubSystem: '<S1203>/Enabled Subsystem' */
  }

  /* S-Function (fcncallgen): '<S1199>/100ms' incorporates:
   *  SubSystem: '<S1199>/daq100ms'
   */

  /* S-Function (ec5744_ccpslb1): '<S1210>/CCPDAQ' */
  ccpDaq(3);
}

/* Model step function for TID6 */
void six_plus_six_AcmsteeringV09_main_2lflm_step6(void) /* Sample time: [0.5s, 0.0s] */
{
  /* S-Function (fcncallgen): '<S1199>/500ms' incorporates:
   *  SubSystem: '<S1199>/daq500ms'
   */

  /* S-Function (ec5744_ccpslb1): '<S1212>/CCPDAQ' */
  ccpDaq(4);

  /* S-Function (fcncallgen): '<S1200>/500ms' incorporates:
   *  SubSystem: '<S1200>/EEPROMOperation'
   */

  /* S-Function (ec5744_eepromoslb): '<S1215>/EEPROMOperatin' */
#if defined EC_EEPROM_ENABLE

  /* Operate the EEPROM module on the MPC5744 */
  ec_flash_operation();

#endif

}

/* Model step wrapper function for compatibility with a static main program */
void six_plus_six_AcmsteeringV09_main_2lflm_step(int_T tid)
{
  switch (tid) {
   case 0 :
    six_plus_six_AcmsteeringV09_main_2lflm_step0();
    break;

   case 1 :
    six_plus_six_AcmsteeringV09_main_2lflm_step1();
    break;

   case 2 :
    six_plus_six_AcmsteeringV09_main_2lflm_step2();
    break;

   case 3 :
    six_plus_six_AcmsteeringV09_main_2lflm_step3();
    break;

   case 4 :
    six_plus_six_AcmsteeringV09_main_2lflm_step4();
    break;

   case 5 :
    six_plus_six_AcmsteeringV09_main_2lflm_step5();
    break;

   case 6 :
    six_plus_six_AcmsteeringV09_main_2lflm_step6();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void six_plus_six_AcmsteeringV09_main_2lflm_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Start for S-Function (fcncallgen): '<Root>/Function-Call Generator5' incorporates:
   *  Start for SubSystem: '<Root>/Data_input'
   */
  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive36' */
  ec_buffer_init(1,44,0,387);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive47' */
  ec_buffer_init(1,53,0,262);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive48' */
  ec_buffer_init(1,54,0,263);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive35' */
  ec_buffer_init(1,43,0,386);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive38' */
  ec_buffer_init(1,46,0,385);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive37' */
  ec_buffer_init(1,45,0,388);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive40' */
  ec_buffer_init(1,47,0,256);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive42' */
  ec_buffer_init(1,48,0,257);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive43' */
  ec_buffer_init(1,49,0,258);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive44' */
  ec_buffer_init(1,50,0,259);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive45' */
  ec_buffer_init(1,51,0,260);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive46' */
  ec_buffer_init(1,52,0,261);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive3' */
  ec_buffer_init(1,0,0,33);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive13' */
  ec_buffer_init(1,18,0,35);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive8' */
  ec_buffer_init(1,5,0,34);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive4' */
  ec_buffer_init(1,1,0,49);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive9' */
  ec_buffer_init(1,6,0,50);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive14' */
  ec_buffer_init(1,19,0,51);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive5' */
  ec_buffer_init(1,2,0,65);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive10' */
  ec_buffer_init(1,7,0,66);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive15' */
  ec_buffer_init(1,20,0,67);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive6' */
  ec_buffer_init(1,3,0,81);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive11' */
  ec_buffer_init(1,16,0,82);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive16' */
  ec_buffer_init(1,21,0,83);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive7' */
  ec_buffer_init(1,4,0,97);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive12' */
  ec_buffer_init(1,17,0,98);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive17' */
  ec_buffer_init(1,22,0,99);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive' */
  ec_buffer_init(0,23,1,217710831);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive1' */
  ec_buffer_init(0,24,1,217711087);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive18' */
  ec_buffer_init(0,26,1,217710832);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive19' */
  ec_buffer_init(0,27,1,217711088);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive2' */
  ec_buffer_init(0,25,1,419037935);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive20' */
  ec_buffer_init(0,28,1,419037936);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive21' */
  ec_buffer_init(0,29,1,217710833);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive22' */
  ec_buffer_init(0,30,1,217711089);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive23' */
  ec_buffer_init(0,31,1,419037937);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive24' */
  ec_buffer_init(0,32,1,217710834);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive25' */
  ec_buffer_init(0,33,1,217711090);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive26' */
  ec_buffer_init(0,34,1,419037938);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive27' */
  ec_buffer_init(0,35,1,217710835);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive28' */
  ec_buffer_init(0,36,1,217711091);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive29' */
  ec_buffer_init(0,37,1,419037939);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive30' */
  ec_buffer_init(0,38,1,217710836);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive31' */
  ec_buffer_init(0,39,1,217711092);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive32' */
  ec_buffer_init(0,40,1,419037940);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive33' */
  ec_buffer_init(1,42,0,17);

  /* Start for S-Function (ec5744_canreceiveslb): '<S1>/CANReceive34' */
  ec_buffer_init(1,41,0,18);

  /* Start for Enabled SubSystem: '<S1>/Enabled Subsystem' */

  /* Start for S-Function (ec5744_cantransmitslb): '<S159>/CANTransmit' */
  ec_buffer_init(1,59,0,0U);

  /* End of Start for SubSystem: '<S1>/Enabled Subsystem' */

  /* Start for S-Function (fcncallgen): '<Root>/Function-Call Generator3' incorporates:
   *  Start for SubSystem: '<Root>/MainControl'
   */
  /* Start for SwitchCase: '<S408>/Switch Case' */
  six_plus_six_AcmsteeringV09__DW.SwitchCase_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S408>/forward' */
  /* Start for SwitchCase: '<S878>/Switch Case1' */
  six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem_g = -1;

  /* Start for IfAction SubSystem: '<S878>/Drive' */
  /* Start for Atomic SubSystem: '<S1031>/直行TCS' */
  /* Start for Atomic SubSystem: '<S1159>/直行' */
  /* Start for If: '<S1183>/If' */
  six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem_a = -1;

  /* Start for If: '<S1183>/If4' */
  six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem_b = -1;

  /* Start for If: '<S1183>/If1' */
  six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem_c = -1;

  /* Start for If: '<S1183>/If2' */
  six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem_b = -1;

  /* Start for If: '<S1183>/If5' */
  six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem_k = -1;

  /* Start for If: '<S1183>/If3' */
  six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem_c = -1;

  /* End of Start for SubSystem: '<S1159>/直行' */
  /* End of Start for SubSystem: '<S1031>/直行TCS' */
  /* End of Start for SubSystem: '<S878>/Drive' */
  /* End of Start for SubSystem: '<S408>/forward' */

  /* Start for IfAction SubSystem: '<S408>/backward' */
  /* Start for SwitchCase: '<S423>/Switch Case1' */
  six_plus_six_AcmsteeringV09__DW.SwitchCase1_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S423>/Drive' */
  /* Start for Atomic SubSystem: '<S576>/直行TCS' */
  /* Start for Atomic SubSystem: '<S704>/直行' */
  /* Start for If: '<S728>/If' */
  six_plus_six_AcmsteeringV09__DW.If_ActiveSubsystem = -1;

  /* Start for If: '<S728>/If4' */
  six_plus_six_AcmsteeringV09__DW.If4_ActiveSubsystem = -1;

  /* Start for If: '<S728>/If1' */
  six_plus_six_AcmsteeringV09__DW.If1_ActiveSubsystem = -1;

  /* Start for If: '<S728>/If2' */
  six_plus_six_AcmsteeringV09__DW.If2_ActiveSubsystem = -1;

  /* Start for If: '<S728>/If5' */
  six_plus_six_AcmsteeringV09__DW.If5_ActiveSubsystem = -1;

  /* Start for If: '<S728>/If3' */
  six_plus_six_AcmsteeringV09__DW.If3_ActiveSubsystem = -1;

  /* End of Start for SubSystem: '<S704>/直行' */
  /* End of Start for SubSystem: '<S576>/直行TCS' */
  /* End of Start for SubSystem: '<S423>/Drive' */
  /* End of Start for SubSystem: '<S408>/backward' */

  /* Start for S-Function (fcncallgen): '<Root>/Function-Call Generator1' incorporates:
   *  Start for SubSystem: '<Root>/Subsystem'
   */
  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit1' */
  ec_buffer_init(0,10,1,205583143U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit11' */
  ec_buffer_init(0,12,1,205582375U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit12' */
  ec_buffer_init(0,11,1,205582887U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit2' */
  ec_buffer_init(0,8,1,205582119U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit4' */
  ec_buffer_init(0,9,1,205582631U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit5' */
  ec_buffer_init(0,13,1,205583399U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit6' */
  ec_buffer_init(1,15,0,514U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit7' */
  ec_buffer_init(1,56,0,515U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit8' */
  ec_buffer_init(1,57,0,516U);

  /* Start for S-Function (ec5744_cantransmitslb): '<S5>/CANTransmit9' */
  ec_buffer_init(1,58,0,513U);

  /* Start for S-Function (fcncallgen): '<S1198>/100MS' incorporates:
   *  Start for SubSystem: '<S1198>/Function-Call Subsystem'
   */
  /* Start for S-Function (ec5744_canreceiveslb): '<S1202>/CANReceive' incorporates:
   *  Start for SubSystem: '<S1202>/Function-Call Subsystem'
   */
  /* Start for function-call system: '<S1202>/Function-Call Subsystem' */

  /* Start for Enabled SubSystem: '<S1203>/Enabled Subsystem' */

  /* Start for IfAction SubSystem: '<S1204>/If Action Subsystem1' */

  /* Start for S-Function (ec5744_cantransmitslb): '<S1209>/CANTransmit' */
  ec_buffer_init(2,9,0,593U);

  /* End of Start for SubSystem: '<S1204>/If Action Subsystem1' */

  /* End of Start for SubSystem: '<S1203>/Enabled Subsystem' */

  /* Start for S-Function (ec5744_canreceiveslb): '<S1202>/CANReceive' */
  ec_buffer_init(2,1,0,278);

  /* Start for S-Function (fcncallgen): '<S1201>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S1201>/CCPBackground'
   */
  /* Start for S-Function (ec5744_ccpslb): '<S1216>/CCPBackground' */
  ccpInit();

  /* Start for S-Function (ec5744_caninterruptslb1): '<S1201>/ReceiveandTransmitInterrupt' incorporates:
   *  Start for SubSystem: '<S1201>/CCPReceive'
   */
  /* Start for function-call system: '<S1201>/CCPReceive' */

  /* Start for S-Function (ec5744_canreceiveslb): '<S1217>/CANReceive' */
  ec_buffer_init(2,0,0,CCP_CRO_ID);

  /* Start for S-Function (ec5744_caninterruptslb1): '<S1201>/ReceiveandTransmitInterrupt' */
  ec_bufint_init(2,0);
  INTC_0.PSR[548].B.PRIN = 12;
  IntcIsrVectorTable[548] = (uint32_t)&ISR_FlexCAN_2_MB0;
}

/* File trailer for ECUCoder generated file six_plus_six_AcmsteeringV09_main_2lflm.c.
 *
 * [EOF]
 */
