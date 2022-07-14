#ifndef __c100_six_plus_six_AcmsteeringV09_main_h__
#define __c100_six_plus_six_AcmsteeringV09_main_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc100_six_plus_six_AcmsteeringV09_mainInstanceStruct
#define typedef_SFc100_six_plus_six_AcmsteeringV09_mainInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c100_sfEvent;
  boolean_T c100_isStable;
  boolean_T c100_doneDoubleBufferReInit;
  uint8_T c100_is_active_c100_six_plus_six_AcmsteeringV09_main;
} SFc100_six_plus_six_AcmsteeringV09_mainInstanceStruct;

#endif                                 /*typedef_SFc100_six_plus_six_AcmsteeringV09_mainInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c100_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c100_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *
  plhs[]);
extern void c100_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
