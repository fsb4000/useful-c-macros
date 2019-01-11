#ifndef USEFUL_C_MACROS_ATTRIBUTES_H
#define USEFUL_C_MACROS_ATTRIBUTES_H

#pragma once

#ifdef __GNUC__
#define NONNULL(...) __attribute__((nonnull (__VA_ARGS__)))
#else
#define NONNULL(...)
#endif

#endif