#include "__cf_FullApp_Harness1.h"
#ifndef RTW_HEADER_FullApp_Harness1_acc_private_h_
#define RTW_HEADER_FullApp_Harness1_acc_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifndef UCHAR_MAX
#include <limits.h>
#endif
#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
#endif
#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
#endif
#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
#endif
#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
#endif
#if 0
#if ( ULLONG_MAX != (0xFFFFFFFFFFFFFFFFULL) ) || ( LLONG_MAX != (0x7FFFFFFFFFFFFFFFLL) )
#error Code was generated for compiler with different sized ulong_long/long_long. \
#endif
#endif
#endif