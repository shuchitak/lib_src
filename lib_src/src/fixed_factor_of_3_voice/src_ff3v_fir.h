// Copyright 2016-2021 XMOS LIMITED.
// This Software is subject to the terms of the XMOS Public Licence: Version 1.
//
// This file is generated using src_ff3v_fir_generator.py
//
// Do not modify it directly, changes may be overwritten!
//

#ifndef _SRC_FF3V_FIR_H_
#define _SRC_FF3V_FIR_H_

#include <stdint.h>

#define SRC_FF3V_FIR_NUM_PHASES (3)
#define SRC_FF3V_FIR_TAPS_PER_PHASE (24)

#if defined(__cplusplus) || defined(__XC__)
extern "C" {
#endif

extern const unsigned src_ff3v_fir_comp_q_ds;
extern const int32_t src_ff3v_fir_comp_ds;

extern const unsigned src_ff3v_fir_comp_q_us;
extern const int32_t src_ff3v_fir_comp_us;

extern int32_t src_ff3v_fir_coefs_debug[SRC_FF3V_FIR_NUM_PHASES * SRC_FF3V_FIR_TAPS_PER_PHASE];
extern const int32_t src_ff3v_fir_coefs[SRC_FF3V_FIR_NUM_PHASES][SRC_FF3V_FIR_TAPS_PER_PHASE];

#if defined(__cplusplus) || defined(__XC__)
}
#endif

#endif // _SRC_FF3V_FIR_H_
