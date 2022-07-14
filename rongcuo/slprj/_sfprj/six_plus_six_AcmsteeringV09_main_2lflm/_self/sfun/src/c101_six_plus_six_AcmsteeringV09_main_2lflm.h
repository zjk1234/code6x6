#ifndef __c101_six_plus_six_AcmsteeringV09_main_2lflm_h__
#define __c101_six_plus_six_AcmsteeringV09_main_2lflm_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc101_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct
#define typedef_SFc101_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c101_sfEvent;
  boolean_T c101_isStable;
  boolean_T c101_doneDoubleBufferReInit;
  uint8_T c101_is_active_c101_six_plus_six_AcmsteeringV09_main_2lflm;
} SFc101_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct;

#endif                                 /*typedef_SFc101_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c101_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c101_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray
  *plhs[]);
extern void c101_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher
  (SimStruct *S, int_T method, void *data);

#endif
