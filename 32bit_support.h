#ifndef USEFUL_C_MACROS_32BIT_SUPPORT_H
#define USEFUL_C_MACROS_32BIT_SUPPORT_H

#pragma once

#include <limits.h>
#include <inttypes.h>

#if ((SIZE_MAX) == (UINT32_MAX)) && !defined(__HAIKU__) && !defined(__OpenBSD__)
#define CAST_UINT32_TO_SIZE_T
#define CAST_SIZE_T_TO_UINT32
#else
#ifndef __cplusplus
#define CAST_UINT32_TO_SIZE_T (size_t)
#define CAST_SIZE_T_TO_UINT32 (uint32_t)
#else
#define CAST_UINT32_TO_SIZE_T static_cast<std::size_t>
#define CAST_SIZE_T_TO_UINT32 static_cast<std::uint32_t>
#endif
#endif

#endif
