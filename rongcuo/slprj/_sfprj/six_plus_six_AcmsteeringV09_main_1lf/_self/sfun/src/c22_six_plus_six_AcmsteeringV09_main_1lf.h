#ifndef __c22_six_plus_six_AcmsteeringV09_main_1lf_h__
#define __c22_six_plus_six_AcmsteeringV09_main_1lf_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc22_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct
#define typedef_SFc22_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c22_sfEvent;
  boolean_T c22_isStable;
  boolean_T c22_doneDoubleBufferReInit;
  uint8_T c22_is_active_c22_six_plus_six_AcmsteeringV09_main_1lf;
} SFc22_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct;

#endif                                 /*typedef_SFc22_six_plus_six_AcmsteeringV09_main_1lfInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c22_six_plus_six_AcmsteeringV09_main_1lf_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c22_six_plus_six_AcmsteeringV09_main_1lf_get_check_sum(mxArray
  *plhs[]);
extern void c22_six_plus_six_AcmsteeringV09_main_1lf_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
