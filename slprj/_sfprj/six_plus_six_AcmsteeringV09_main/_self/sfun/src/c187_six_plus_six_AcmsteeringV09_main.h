#ifndef __c187_six_plus_six_AcmsteeringV09_main_h__
#define __c187_six_plus_six_AcmsteeringV09_main_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc187_six_plus_six_AcmsteeringV09_mainInstanceStruct
#define typedef_SFc187_six_plus_six_AcmsteeringV09_mainInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c187_sfEvent;
  boolean_T c187_isStable;
  boolean_T c187_doneDoubleBufferReInit;
  uint8_T c187_is_active_c187_six_plus_six_AcmsteeringV09_main;
} SFc187_six_plus_six_AcmsteeringV09_mainInstanceStruct;

#endif                                 /*typedef_SFc187_six_plus_six_AcmsteeringV09_mainInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c187_six_plus_six_AcmsteeringV09_main_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c187_six_plus_six_AcmsteeringV09_main_get_check_sum(mxArray *
  plhs[]);
extern void c187_six_plus_six_AcmsteeringV09_main_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
