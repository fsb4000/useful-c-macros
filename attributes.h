#ifndef USEFUL_C_MACROS_ATTRIBUTES_H
#define USEFUL_C_MACROS_ATTRIBUTES_H

#pragma once

#ifdef __GNUC__
#define NONNULL(...) __attribute__((nonnull (__VA_ARGS__)))
#define PURE __attribute__((pure))
#else
#define NONNULL(...)
#define PURE
#endif

#endif
