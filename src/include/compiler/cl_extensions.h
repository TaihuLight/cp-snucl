/*****************************************************************************/
/*                                                                           */
/* Copyright (c) 2011-2012 Seoul National University.                        */
/* All rights reserved.                                                      */
/*                                                                           */
/* Redistribution and use in source and binary forms, with or without        */
/* modification, are permitted provided that the following conditions        */
/* are met:                                                                  */
/*   1. Redistributions of source code must retain the above copyright       */
/*      notice, this list of conditions and the following disclaimer.        */
/*   2. Redistributions in binary form must reproduce the above copyright    */
/*      notice, this list of conditions and the following disclaimer in the  */
/*      documentation and/or other materials provided with the distribution. */
/*   3. Neither the name of Seoul National University nor the names of its   */
/*      contributors may be used to endorse or promote products derived      */
/*      from this software without specific prior written permission.        */
/*                                                                           */
/* THIS SOFTWARE IS PROVIDED BY SEOUL NATIONAL UNIVERSITY "AS IS" AND ANY    */
/* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED */
/* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE    */
/* DISCLAIMED. IN NO EVENT SHALL SEOUL NATIONAL UNIVERSITY BE LIABLE FOR ANY */
/* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL        */
/* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS   */
/* OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)     */
/* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,       */
/* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN  */
/* ANY WAY OUT OF THE USE OF THIS  SOFTWARE, EVEN IF ADVISED OF THE          */
/* POSSIBILITY OF SUCH DAMAGE.                                               */
/*                                                                           */
/* Contact information:                                                      */
/*   Center for Manycore Programming                                         */
/*   School of Computer Science and Engineering                              */
/*   Seoul National University, Seoul 151-744, Korea                         */
/*   http://aces.snu.ac.kr                                                   */
/*                                                                           */
/* Contributors:                                                             */
/*   Sangmin Seo, Jungwon Kim, Jun Lee, Jeongho Nah, Gangwon Jo,             */
/*   and Jaejin Lee                                                          */
/*                                                                           */
/*****************************************************************************/

/*****************************************************************************/
/* This file is based on the SNU-SAMSUNG OpenCL Compiler and is distributed  */
/* under the same license, GNU General Public License.                       */
/* See LICENSE.SNU-SAMSUNG_OpenCL_C_Compiler.TXT for details.                */
/*****************************************************************************/

#ifndef __CL_EXTENSIONS_H__
#define __CL_EXTENSIONS_H__

/* Extensions */
#pragma OPENCL EXTENSION cl_khr_fp64: enable
#define cl_khr_global_int32_base_atomics      cl_khr_global_int32_base_atomics
#define cl_khr_global_int32_extended_atomics  cl_khr_global_int32_extended_atomics
#define cl_khr_local_int32_base_atomics       cl_khr_local_int32_base_atomics
#define cl_khr_local_int32_extended_atomics   cl_khr_local_int32_extended_atomics
#define cl_khr_byte_addressable_store         cl_khr_byte_addressable_store
#define cl_khr_fp64                           cl_khr_fp64


/* cl_khr_global_int32_base_atomics and 
   cl_khr_local_int32_base_atomics */
#define atom_add(p,val)           atomic_add(p,val)
#define atom_sub(p,val)           atomic_sub(p,val)
#define atom_xchg(p,val)          atomic_xchg(p,val)
#define atom_inc(p)               atomic_inc(p)
#define atom_dec(p)               atomic_dec(p)
#define atom_cmpxchg(p,cmp,val)   atomic_cmpxchg(p,cmp,val)

/* cl_khr_global_int32_extended_atomics and 
   cl_khr_local_int32_extended_atomics */
#define atom_min(p,val)           atomic_min(p,val)
#define atom_max(p,val)           atomic_max(p,val)
#define atom_and(p,val)           atomic_and(p,val)
#define atom_or(p,val)            atomic_or(p,val)
#define atom_xor(p,val)           atomic_xor(p,val)

#endif //__CL_EXTENSIONS_H__
