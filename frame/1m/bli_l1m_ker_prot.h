/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name(s) of the copyright holder(s) nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/


//
// Define template prototypes for level-1m kernels.
//

// native packm kernels

#define PACKM_KER_PROT( ctype, ch, varname ) \
\
void PASTEMAC(ch,varname) \
     ( \
       conj_t           conja, \
       pack_t           schema, \
       dim_t            cdim, \
       dim_t            n, \
       dim_t            n_max, \
       void*   restrict kappa, \
       void*   restrict a, inc_t inca, inc_t lda, \
       void*   restrict p,             inc_t ldp, \
       cntx_t* restrict cntx  \
     );


// native unpackm kernels

#define UNPACKM_KER_PROT( ctype, ch, varname ) \
\
void PASTEMAC(ch,varname) \
     ( \
       conj_t           conja, \
       dim_t            n, \
       void*   restrict kappa, \
       void*   restrict p,             inc_t ldp, \
       void*   restrict a, inc_t inca, inc_t lda, \
       cntx_t* restrict cntx  \
     );


// 3mis packm kernels

#define PACKM_3MIS_KER_PROT( ctype, ch, varname ) \
\
void PASTEMAC(ch,varname) \
     ( \
       conj_t           conja, \
       dim_t            cdim, \
       dim_t            n, \
       dim_t            n_max, \
       void*   restrict kappa, \
       void*   restrict a, inc_t inca, inc_t lda, \
       void*   restrict p, inc_t is_p, inc_t ldp, \
       cntx_t* restrict cntx  \
     );


// 4mi packm kernels

#define PACKM_4MI_KER_PROT( ctype, ch, varname ) \
\
void PASTEMAC(ch,varname) \
     ( \
       conj_t           conja, \
       dim_t            cdim, \
       dim_t            n, \
       dim_t            n_max, \
       void*   restrict kappa, \
       void*   restrict a, inc_t inca, inc_t lda, \
       void*   restrict p, inc_t is_p, inc_t ldp, \
       cntx_t* restrict cntx  \
     );


// rih packm kernels

#define PACKM_RIH_KER_PROT( ctype, ch, varname ) \
\
void PASTEMAC(ch,varname) \
     ( \
       conj_t           conja, \
       pack_t           schema, \
       dim_t            cdim, \
       dim_t            n, \
       dim_t            n_max, \
       void*   restrict kappa, \
       void*   restrict a, inc_t inca, inc_t lda, \
       void*   restrict p,             inc_t ldp, \
       cntx_t* restrict cntx  \
     );


// 1e/1r packm kernels

#define PACKM_1ER_KER_PROT( ctype, ch, varname ) \
\
void PASTEMAC(ch,varname) \
     ( \
       conj_t           conja, \
       pack_t           schema, \
       dim_t            cdim, \
       dim_t            n, \
       dim_t            n_max, \
       void*   restrict kappa, \
       void*   restrict a, inc_t inca, inc_t lda, \
       void*   restrict p,             inc_t ldp, \
       cntx_t* restrict cntx  \
     );

