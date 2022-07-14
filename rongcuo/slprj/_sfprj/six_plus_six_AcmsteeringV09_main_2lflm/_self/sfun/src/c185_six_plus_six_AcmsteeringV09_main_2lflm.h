#ifndef __c185_six_plus_six_AcmsteeringV09_main_2lflm_h__
#define __c185_six_plus_six_AcmsteeringV09_main_2lflm_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc185_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct
#define typedef_SFc185_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c185_sfEvent;
  boolean_T c185_isStable;
  boolean_T c185_doneDoubleBufferReInit;
  uint8_T c185_is_active_c185_six_plus_six_AcmsteeringV09_main_2lflm;
} SFc185_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct;

#endif                                 /*typedef_SFc185_six_plus_six_AcmsteeringV09_main_2lflmInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c185_six_plus_six_AcmsteeringV09_main_2lflm_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c185_six_plus_six_AcmsteeringV09_main_2lflm_get_check_sum(mxArray
  *plhs[]);
extern void c185_six_plus_six_AcmsteeringV09_main_2lflm_method_dispatcher
  (SimStruct *S, int_T method, void *data);

#endif
