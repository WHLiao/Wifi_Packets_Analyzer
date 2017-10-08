#ifndef _SSV_TYPES_H_
#define _SSV_TYPES_H_

// Modified from https://github.com/greatlevi/AI6060H/blob/master/include/ssv_types.h

#ifdef __GNUC__
#define STRUCT_PACKED __attribute__ ((packed))
#else
//#define STRUCT_PACKED
#endif

#define TRUE        1
#define FALSE       0

#define false         0
#define true          1

#define ENABLE      0x1
#define DISABLE     0x0


typedef unsigned int        size_t;

typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned int        u32;
typedef unsigned long long  u64;

typedef char            s8;
typedef short           s16;
typedef int             s32;
typedef long long       s64;

/**
 * \def UNUSED
 * \brief Marking \a v as a unused parameter or value.
 */
#define UNUSED(v)          (void)(v)

typedef unsigned char           Bool; //!< Boolean.
typedef unsigned char           bool; //!< Boolean.

typedef signed char             S8 ;  //!< 8-bit signed integer.
typedef unsigned char           U8 ;  //!< 8-bit unsigned integer.
typedef short                   S16;  //!< 16-bit signed integer.
typedef unsigned short          U16;  //!< 16-bit unsigned integer.
typedef unsigned short          le16_t;
typedef unsigned short          be16_t;
typedef int                     S32;  //!< 32-bit signed integer.
typedef unsigned int            U32;  //!< 32-bit unsigned integer.
typedef unsigned int            le32_t;
typedef unsigned int            be32_t;
typedef long long               S64;  //!< 64-bit signed integer.
typedef unsigned long long      U64;  //!< 64-bit unsigned integer.
typedef float                   F32;  //!< 32-bit floating-point number.
typedef double                  F64;  //!< 64-bit floating-point number.

typedef bool                Status_bool_t;  //!< Boolean status.
typedef U8                  Status_t;       //!< 8-bit-coded status.


#endif /* _SSV_TYPES_H_ */