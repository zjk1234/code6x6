/*
 * Code generated for Simulink model six_plus_six_AcmsteeringV09_main_2lflm.
 *
 * FILE    : six_plus_six_AcmsteeringV09_main_2lflm_data.c
 *
 * VERSION : 1.2728
 *
 * DATE    : Mon Nov 23 17:24:10 2020
 *
 * Copyright 2011-2017 ECUCoder. All Rights Reserved.
 */

#include "six_plus_six_AcmsteeringV09_main_2lflm.h"
#include "six_plus_six_AcmsteeringV09_main_2lflm_private.h"

/* Invariant block signals (auto storage) */
const ConstB_six_plus_six_Acmsteeri_T six_plus_six_Acmsteering_ConstB = {
  0U
  ,                                    /* '<S1227>/or6' */
  0U
  ,                                    /* '<S1227>/or7' */
  0U
  ,                                    /* '<S1224>/or6' */
  0U
  ,                                    /* '<S1224>/or7' */
  0U
  ,                                    /* '<S1226>/or6' */
  0U
  ,                                    /* '<S1226>/or7' */
  0U
  ,                                    /* '<S1223>/or6' */
  0U
  ,                                    /* '<S1223>/or7' */
  0U
  ,                                    /* '<S1225>/or6' */
  0U
  ,                                    /* '<S1225>/or7' */
  0U
  ,                                    /* '<S1228>/or6' */
  0U
  /* '<S1228>/or7' */
};

/* Constant parameters (auto storage) */
const ConstP_six_plus_six_Acmsteeri_T six_plus_six_Acmsteering_ConstP = {
  /* Pooled Parameter (Expression: zhuanxiang_bianmazhi)
   * Referenced by:
   *   '<S416>/1-D Lookup Table1'
   *   '<S871>/1-D Lookup Table'
   *   '<S1190>/1-D Lookup Table1'
   *   '<S424>/1-D Lookup Table1'
   *   '<S879>/1-D Lookup Table1'
   *   '<S713>/1-D Lookup Table'
   *   '<S1168>/1-D Lookup Table'
   */
  { -400000.0F, 0.0F, 400000.0F },

  /* Pooled Parameter (Expression: zhuanxiang_youmen)
   * Referenced by:
   *   '<S416>/1-D Lookup Table1'
   *   '<S871>/1-D Lookup Table'
   *   '<S1190>/1-D Lookup Table1'
   *   '<S424>/1-D Lookup Table1'
   *   '<S879>/1-D Lookup Table1'
   *   '<S713>/1-D Lookup Table'
   *   '<S1168>/1-D Lookup Table'
   */
  { -100.0F, 0.0F, 100.0F },

  /* Pooled Parameter (Expression: zhidong_bianmazhi)
   * Referenced by:
   *   '<S416>/1-D Lookup Table2'
   *   '<S735>/1-D Lookup Table2'
   *   '<S871>/1-D Lookup Table1'
   *   '<S1190>/1-D Lookup Table2'
   *   '<S424>/1-D Lookup Table2'
   *   '<S879>/1-D Lookup Table2'
   *   '<S713>/1-D Lookup Table1'
   *   '<S1168>/1-D Lookup Table1'
   */
  { -140000.0F, 750000.0F },

  /* Pooled Parameter (Expression: zhidong_youmen)
   * Referenced by:
   *   '<S416>/1-D Lookup Table2'
   *   '<S735>/1-D Lookup Table2'
   *   '<S871>/1-D Lookup Table1'
   *   '<S1190>/1-D Lookup Table2'
   *   '<S424>/1-D Lookup Table2'
   *   '<S879>/1-D Lookup Table2'
   *   '<S713>/1-D Lookup Table1'
   *   '<S1168>/1-D Lookup Table1'
   */
  { 0.0F, 100.0F },

  /* Pooled Parameter (Expression: s_opt_zhuan_table)
   * Referenced by:
   *   '<S573>/1-D Lookup Table'
   *   '<S1028>/1-D Lookup Table'
   */
  { 0.8F, 0.8F, 0.3F, 0.3F },

  /* Pooled Parameter (Expression: v_table)
   * Referenced by:
   *   '<S573>/1-D Lookup Table'
   *   '<S1028>/1-D Lookup Table'
   */
  { 0.0F, 5.0F, 20.0F, 100.0F },

  /* Pooled Parameter (Expression: trq_map_mot)
   * Referenced by:
   *   '<S749>/mot_map'
   *   '<S749>/mot_map1'
   *   '<S749>/mot_map2'
   *   '<S749>/mot_map3'
   *   '<S749>/mot_map4'
   *   '<S749>/mot_map5'
   *   '<S434>/mot_map'
   *   '<S434>/mot_map1'
   *   '<S434>/mot_map2'
   *   '<S434>/mot_map3'
   *   '<S434>/mot_map4'
   *   '<S434>/mot_map5'
   *   '<S570>/mot_map'
   *   '<S570>/mot_map1'
   *   '<S570>/mot_map2'
   *   '<S570>/mot_map3'
   *   '<S570>/mot_map4'
   *   '<S570>/mot_map5'
   *   '<S571>/mot_map'
   *   '<S571>/mot_map1'
   *   '<S571>/mot_map2'
   *   '<S571>/mot_map3'
   *   '<S571>/mot_map4'
   *   '<S571>/mot_map5'
   *   '<S572>/mot_map'
   *   '<S572>/mot_map1'
   *   '<S572>/mot_map2'
   *   '<S572>/mot_map3'
   *   '<S572>/mot_map4'
   *   '<S572>/mot_map5'
   *   '<S889>/mot_map'
   *   '<S889>/mot_map1'
   *   '<S889>/mot_map2'
   *   '<S889>/mot_map3'
   *   '<S889>/mot_map4'
   *   '<S889>/mot_map5'
   *   '<S1025>/mot_map'
   *   '<S1025>/mot_map1'
   *   '<S1025>/mot_map2'
   *   '<S1025>/mot_map3'
   *   '<S1025>/mot_map4'
   *   '<S1025>/mot_map5'
   *   '<S1026>/mot_map'
   *   '<S1026>/mot_map1'
   *   '<S1026>/mot_map2'
   *   '<S1026>/mot_map3'
   *   '<S1026>/mot_map4'
   *   '<S1026>/mot_map5'
   *   '<S1027>/mot_map'
   *   '<S1027>/mot_map1'
   *   '<S1027>/mot_map2'
   *   '<S1027>/mot_map3'
   *   '<S1027>/mot_map4'
   *   '<S1027>/mot_map5'
   */
  { 70.5F, 70.012F, 71.154F, 65.797F, 53.917F, 45.159F, 38.073F, 32.685F, 27.48F,
    17.133F, 14.949F, 10.07F },

  /* Pooled Parameter (Expression: spd_map_mot)
   * Referenced by:
   *   '<S749>/mot_map'
   *   '<S749>/mot_map1'
   *   '<S749>/mot_map2'
   *   '<S749>/mot_map3'
   *   '<S749>/mot_map4'
   *   '<S749>/mot_map5'
   *   '<S434>/mot_map'
   *   '<S434>/mot_map1'
   *   '<S434>/mot_map2'
   *   '<S434>/mot_map3'
   *   '<S434>/mot_map4'
   *   '<S434>/mot_map5'
   *   '<S570>/mot_map'
   *   '<S570>/mot_map1'
   *   '<S570>/mot_map2'
   *   '<S570>/mot_map3'
   *   '<S570>/mot_map4'
   *   '<S570>/mot_map5'
   *   '<S571>/mot_map'
   *   '<S571>/mot_map1'
   *   '<S571>/mot_map2'
   *   '<S571>/mot_map3'
   *   '<S571>/mot_map4'
   *   '<S571>/mot_map5'
   *   '<S572>/mot_map'
   *   '<S572>/mot_map1'
   *   '<S572>/mot_map2'
   *   '<S572>/mot_map3'
   *   '<S572>/mot_map4'
   *   '<S572>/mot_map5'
   *   '<S889>/mot_map'
   *   '<S889>/mot_map1'
   *   '<S889>/mot_map2'
   *   '<S889>/mot_map3'
   *   '<S889>/mot_map4'
   *   '<S889>/mot_map5'
   *   '<S1025>/mot_map'
   *   '<S1025>/mot_map1'
   *   '<S1025>/mot_map2'
   *   '<S1025>/mot_map3'
   *   '<S1025>/mot_map4'
   *   '<S1025>/mot_map5'
   *   '<S1026>/mot_map'
   *   '<S1026>/mot_map1'
   *   '<S1026>/mot_map2'
   *   '<S1026>/mot_map3'
   *   '<S1026>/mot_map4'
   *   '<S1026>/mot_map5'
   *   '<S1027>/mot_map'
   *   '<S1027>/mot_map1'
   *   '<S1027>/mot_map2'
   *   '<S1027>/mot_map3'
   *   '<S1027>/mot_map4'
   *   '<S1027>/mot_map5'
   */
  { 0.0F, 499.85F, 999.79F, 1500.0F, 2000.0F, 2500.0F, 3000.0F, 3500.0F, 4000.0F,
    4500.0F, 4999.8F, 5999.8F },

  /* Pooled Parameter (Expression: brakepre_dem_data)
   * Referenced by:
   *   '<S735>/1-D Lookup Table1'
   *   '<S735>/1-D Lookup Table3'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F },

  /* Pooled Parameter (Expression: brakeTrq_dem_data)
   * Referenced by:
   *   '<S735>/1-D Lookup Table1'
   *   '<S735>/1-D Lookup Table3'
   */
  { 0.0F, 125.0F, 251.0F, 376.0F, 502.0F, 627.0F, 753.0F, 878.0F, 1004.0F,
    1129.0F, 1255.0F }
};

/* File trailer for ECUCoder generated file six_plus_six_AcmsteeringV09_main_2lflm_data.c.
 *
 * [EOF]
 */
