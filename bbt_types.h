/* date = November 10th 2020 1:47 pm */

//-----------------------------------------------------------------------------
// These typedefs are mostly just stdint types renamed to fit my coding style.
//-----------------------------------------------------------------------------

#ifndef BBT_TYPES_H
#define BBT_TYPES_H

#include <stdint.h> // uint32_t, int8_t, ...
#include <floats.h> // FLT_MAX, DBL_MAX, ...

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef float  f32;
typedef double f64;

typedef u8  b8;
typedef u32 b32;

#define U8_MAX  UINT8_MAX
#define U16_MAX UINT16_MAX
#define U32_MAX UINT32_MAX
#define U64_MAX UINT64_MAX

#define I8_MAX  INT8_MAX
#define I16_MAX INT16_MAX
#define I32_MAX INT32_MAX
#define I64_MAX INT64_MAX

#define F32_MAX FLT_MAX
#define F32_MIN FLT_MIN

#define F64_MAX DBL_MAX
#define F64_MIN DBL_MIN

#endif //BBT_TYPES_H
