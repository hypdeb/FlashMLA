#pragma once

#include "params.h"

template<typename InputT, int HeadDimK, int HeadDimV>
void run_flash_splitkv_mla_kernel(Flash_fwd_mla_params &params, cudaStream_t stream);
