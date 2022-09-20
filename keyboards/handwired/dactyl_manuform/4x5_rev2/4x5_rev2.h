#pragma once

#include "dactyl_manuform.h"

#define XXX KC_NO

#define LAYOUT( \
    L00, L01, L02, L03, L04,                     R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,                     R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24,                     R20, R21, R22, R23, R24, \
         L31, L32,                                         R32, R33,      \
              L42, L33, L34,                     R30, R31, R42,           \
              L41, L43, L44,                     R40, R41, R43            \
) { \
    { L04, L03, L02, L01, L00 }, \
    { L14, L13, L12, L11, L10 }, \
    { L24, L23, L22, L21, L20 }, \
    { L34, L33, L32, L31, XXX }, \
    { L44, L43, L42, L41, XXX }, \
\
    { R04, R03, R02, R01, R00 }, \
    { R14, R13, R12, R11, R10 }, \
    { R24, R23, R22, R21, R20 }, \
    { XXX, R33, R32, R31, R30 }, \
    { XXX, R43, R42, R41, R40 } \
}
