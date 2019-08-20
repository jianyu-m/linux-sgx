/*
 * Copyright (C) 2011-2017 Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Intel Corporation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#include "sgx_tcrypto.h"
#include "stdlib.h"
#include "string.h"

/* AES-CTR 128-bit
 * Parameters:
 *   Return:
 *     sgx_status_t - SGX_SUCCESS or failure as defined in sgx_error.h
 *   Inputs:
 *     sgx_aes_128bit_key_t *p_key - Pointer to the key used in encryption/decryption operation
 *     uint8_t *p_src - Pointer to the input stream to be encrypted/decrypted
 *     uint32_t src_len - Length of the input stream to be encrypted/decrypted
 *     uint8_t *p_ctr - Pointer to the counter block
 *     uint32_t ctr_inc_bits - Number of bits in counter to be incremented
 *   Output:
 *     uint8_t *p_dst - Pointer to the cipher text. Size of buffer should be >= src_len.
 */
sgx_status_t sgx_aes_ctr_encrypt(const sgx_aes_ctr_128bit_key_t *p_key, const uint8_t *p_src,
                                const uint32_t src_len, uint8_t *p_ctr, const uint32_t ctr_inc_bits,
                                uint8_t *p_dst)
{
    (void) p_key;
    (void) p_src;
    (void) src_len;
    (void) p_ctr;
    (void) ctr_inc_bits;
    (void) p_dst;
    return SGX_SUCCESS;
}

sgx_status_t sgx_aes_ctr_decrypt(const sgx_aes_ctr_128bit_key_t *p_key, const uint8_t *p_src,
                                const uint32_t src_len, uint8_t *p_ctr, const uint32_t ctr_inc_bits,
                                uint8_t *p_dst)
{
    (void) p_key;
    (void) p_src;
    (void) src_len;
    (void) p_ctr;
    (void) ctr_inc_bits;
    (void) p_dst;
    return SGX_SUCCESS;
}
