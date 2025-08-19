#pragma once

#include "params.h"

template<typename ElementT, int HeadDimV>
void run_flash_mla_combine_kernel(Flash_fwd_mla_params &params, cudaStream_t stream);
