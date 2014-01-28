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

#ifndef __CL_BUILTINS_CONVERT_UINT8_H__
#define __CL_BUILTINS_CONVERT_UINT8_H__

#include "cl_types.h"

uint8 convert_uint8(char8) __attribute__((overloadable));
uint8 convert_uint8(uchar8) __attribute__((overloadable));
uint8 convert_uint8(short8) __attribute__((overloadable));
uint8 convert_uint8(ushort8) __attribute__((overloadable));
uint8 convert_uint8(int8) __attribute__((overloadable));
uint8 convert_uint8(uint8) __attribute__((overloadable));
uint8 convert_uint8(long8) __attribute__((overloadable));
uint8 convert_uint8(ulong8) __attribute__((overloadable));
uint8 convert_uint8(float8) __attribute__((overloadable));
uint8 convert_uint8(double8) __attribute__((overloadable));
uint8 convert_uint8_rte(char8) __attribute__((overloadable));
uint8 convert_uint8_rte(uchar8) __attribute__((overloadable));
uint8 convert_uint8_rte(short8) __attribute__((overloadable));
uint8 convert_uint8_rte(ushort8) __attribute__((overloadable));
uint8 convert_uint8_rte(int8) __attribute__((overloadable));
uint8 convert_uint8_rte(uint8) __attribute__((overloadable));
uint8 convert_uint8_rte(long8) __attribute__((overloadable));
uint8 convert_uint8_rte(ulong8) __attribute__((overloadable));
uint8 convert_uint8_rte(float8) __attribute__((overloadable));
uint8 convert_uint8_rte(double8) __attribute__((overloadable));
uint8 convert_uint8_rtz(char8) __attribute__((overloadable));
uint8 convert_uint8_rtz(uchar8) __attribute__((overloadable));
uint8 convert_uint8_rtz(short8) __attribute__((overloadable));
uint8 convert_uint8_rtz(ushort8) __attribute__((overloadable));
uint8 convert_uint8_rtz(int8) __attribute__((overloadable));
uint8 convert_uint8_rtz(uint8) __attribute__((overloadable));
uint8 convert_uint8_rtz(long8) __attribute__((overloadable));
uint8 convert_uint8_rtz(ulong8) __attribute__((overloadable));
uint8 convert_uint8_rtz(float8) __attribute__((overloadable));
uint8 convert_uint8_rtz(double8) __attribute__((overloadable));
uint8 convert_uint8_rtp(char8) __attribute__((overloadable));
uint8 convert_uint8_rtp(uchar8) __attribute__((overloadable));
uint8 convert_uint8_rtp(short8) __attribute__((overloadable));
uint8 convert_uint8_rtp(ushort8) __attribute__((overloadable));
uint8 convert_uint8_rtp(int8) __attribute__((overloadable));
uint8 convert_uint8_rtp(uint8) __attribute__((overloadable));
uint8 convert_uint8_rtp(long8) __attribute__((overloadable));
uint8 convert_uint8_rtp(ulong8) __attribute__((overloadable));
uint8 convert_uint8_rtp(float8) __attribute__((overloadable));
uint8 convert_uint8_rtp(double8) __attribute__((overloadable));
uint8 convert_uint8_rtn(char8) __attribute__((overloadable));
uint8 convert_uint8_rtn(uchar8) __attribute__((overloadable));
uint8 convert_uint8_rtn(short8) __attribute__((overloadable));
uint8 convert_uint8_rtn(ushort8) __attribute__((overloadable));
uint8 convert_uint8_rtn(int8) __attribute__((overloadable));
uint8 convert_uint8_rtn(uint8) __attribute__((overloadable));
uint8 convert_uint8_rtn(long8) __attribute__((overloadable));
uint8 convert_uint8_rtn(ulong8) __attribute__((overloadable));
uint8 convert_uint8_rtn(float8) __attribute__((overloadable));
uint8 convert_uint8_rtn(double8) __attribute__((overloadable));
uint8 convert_uint8_sat(char8) __attribute__((overloadable));
uint8 convert_uint8_sat(uchar8) __attribute__((overloadable));
uint8 convert_uint8_sat(short8) __attribute__((overloadable));
uint8 convert_uint8_sat(ushort8) __attribute__((overloadable));
uint8 convert_uint8_sat(int8) __attribute__((overloadable));
uint8 convert_uint8_sat(uint8) __attribute__((overloadable));
uint8 convert_uint8_sat(long8) __attribute__((overloadable));
uint8 convert_uint8_sat(ulong8) __attribute__((overloadable));
uint8 convert_uint8_sat(float8) __attribute__((overloadable));
uint8 convert_uint8_sat(double8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(char8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(uchar8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(short8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(ushort8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(int8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(uint8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(long8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(ulong8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(float8) __attribute__((overloadable));
uint8 convert_uint8_sat_rte(double8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(char8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(uchar8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(short8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(ushort8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(int8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(uint8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(long8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(ulong8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(float8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtz(double8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(char8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(uchar8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(short8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(ushort8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(int8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(uint8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(long8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(ulong8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(float8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtp(double8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(char8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(uchar8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(short8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(ushort8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(int8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(uint8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(long8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(ulong8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(float8) __attribute__((overloadable));
uint8 convert_uint8_sat_rtn(double8) __attribute__((overloadable));

#endif //__CL_BUILTINS_CONVERT_UINT8_H__
