#ifndef __c39_six_plus_six_AcmsteeringV09_main_2lfrf_h__
#define __c39_six_plus_six_AcmsteeringV09_main_2lfrf_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc39_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct
#define typedef_SFc39_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c39_sfEvent;
  boolean_T c39_isStable;
  boolean_T c39_doneDoubleBufferReInit;
  uint8_T c39_is_active_c39_six_plus_six_AcmsteeringV09_main_2lfrf;
} SFc39_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct;

#endif                                 /*typedef_SFc39_six_plus_six_AcmsteeringV09_main_2lfrfInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c39_six_plus_six_AcmsteeringV09_main_2lfrf_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c39_six_plus_six_AcmsteeringV09_main_2lfrf_get_check_sum(mxArray *
  plhs[]);
extern void c39_six_plus_six_AcmsteeringV09_main_2lfrf_method_dispatcher
  (SimStruct *S, int_T method, void *data);

#endif
