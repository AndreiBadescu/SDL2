#include <stdint.h>
#include <stdio.h>

#ifdef _DEBUG
#else
#endif

// signed
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
// unsigned
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
// floating-point
typedef float f32;
typedef double f64;

// constants
const i32 SCREEN_WIDTH = 1000;
const i32 SCREEN_HEIGHT = 1000;