/*
Copyright (c) 2023 Advanced Micro Devices, Inc. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef HIP_INCLUDE_HIP_NVIDIA_DETAIL_HIP_FP16_H
#define HIP_INCLUDE_HIP_NVIDIA_DETAIL_HIP_FP16_H

#define HIPRT_ONE_BF16 CUDART_ONE_BF16
#define HIPRT_ZERO_BF16 CUDART_ZERO_BF16
#define HIPRT_INF_BF16 CUDART_INF_BF16
#define HIPRT_MAX_NORMAL_BF16 CUDART_MAX_NORMAL_BF16
#define HIPRT_MIN_DENORM_BF16 CUDART_MIN_DENORM_BF16
#define HIPRT_NAN_BF16 CUDART_NAN_BF16
#define HIPRT_NEG_ZERO_BF16 CUDART_NEG_ZERO_BF16

#include <cuda_bf16.h>

typedef struct __nv_bfloat16 __hip_bfloat16;
typedef struct __nv_bfloat162 __hip_bfloat162;

#endif // HIP_INCLUDE_HIP_NVIDIA_DETAIL_HIP_FP16_H
