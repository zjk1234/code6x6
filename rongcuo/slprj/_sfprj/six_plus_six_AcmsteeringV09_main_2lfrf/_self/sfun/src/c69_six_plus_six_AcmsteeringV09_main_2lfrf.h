#ifndef __c69_six_plus_six_AcmsteeringV09_main_2lfrf_h__
#define __c69_six_plus_six_AcmsteeringV09_main_2lfrf_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc69_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct
#define typedef_SFc69_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c69_sfEvent;
  boolean_T c69_isStable;
  boolean_T c69_doneDoubleBufferReInit;
  uint8_T c69_is_active_c69_six_plus_six_AcmsteeringV09_main_2lfrf;
} SFc69_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct;

#endif                                 /*typedef_SFc69_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c69_six_plus_six_AcmsteeringV09_main_2lfrf_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c69_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(mxArray *
  plhs[]);
extern void c69_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher
  (SimStruct *S, int_T method, void *data);

#endif
