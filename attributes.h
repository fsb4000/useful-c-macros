#ifndef USEFUL_C_MACROS_ATTRIBUTES_H
#define USEFUL_C_MACROS_ATTRIBUTES_H

#pragma once

#ifdef __GNUC__
#define NONNULL(...) __attribute__((nonnull (__VA_ARGS__)))
#define PURE __attribute__((pure))
#define CONST __attribute__((const))
#else
#define NONNULL(...)
#define PURE
#define CONST
#endif

#endif
