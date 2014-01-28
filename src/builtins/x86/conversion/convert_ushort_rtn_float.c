/*****************************************************************************/
/* Copyright (C) 2010, 2011 Seoul National University                        */
/* and Samsung Electronics Co., Ltd.                                         */
/*                                                                           */
/* Contributed by Sangmin Seo <sangmin@aces.snu.ac.kr>, Jungwon Kim          */
/* <jungwon@aces.snu.ac.kr>, Jaejin Lee <jlee@cse.snu.ac.kr>, Seungkyun Kim  */
/* <seungkyun@aces.snu.ac.kr>, Jungho Park <jungho@aces.snu.ac.kr>,          */
/* Honggyu Kim <honggyu@aces.snu.ac.kr>, Jeongho Nah                         */
/* <jeongho@aces.snu.ac.kr>, Sung Jong Seo <sj1557.seo@samsung.com>,         */
/* Seung Hak Lee <s.hak.lee@samsung.com>, Seung Mo Cho                       */
/* <seungm.cho@samsung.com>, Hyo Jung Song <hjsong@samsung.com>,             */
/* Sang-Bum Suh <sbuk.suh@samsung.com>, and Jong-Deok Choi                   */
/* <jd11.choi@samsung.com>                                                   */
/*                                                                           */
/* All rights reserved.                                                      */
/*                                                                           */
/* This file is part of the SNU-SAMSUNG OpenCL runtime.                      */
/*                                                                           */
/* The SNU-SAMSUNG OpenCL runtime is free software: you can redistribute it  */
/* and/or modify it under the terms of the GNU Lesser General Public License */
/* as published by the Free Software Foundation, either version 3 of the     */
/* License, or (at your option) any later version.                           */
/*                                                                           */
/* The SNU-SAMSUNG OpenCL runtime is distributed in the hope that it will be */
/* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of    */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General  */
/* Public License for more details.                                          */
/*                                                                           */
/* You should have received a copy of the GNU Lesser General Public License  */
/* along with the SNU-SAMSUNG OpenCL runtime. If not, see                    */
/* <http://www.gnu.org/licenses/>.                                           */
/*****************************************************************************/

#include <cl_cpu_ops.h>
#include "convert_util.h"

ushort convert_ushort_rtn(float x) {
	ushort ret;                
	__CHANGE_FP_MODE(_CL_FPMODE_RTN);   
	ret = clamp_float_ushort(x);
	__RESTORE_FP_MODE(_CL_FPMODE_RTN);  
	return ret;              
}

ushort2 convert_ushort2_rtn(float2 x) {
	ushort2 ret;                              
	__CHANGE_FP_MODE(_CL_FPMODE_RTN);                 
	for (int i = 0; i < 2; i++)            
		ret[i] = clamp_float_ushort(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTN);                
	return ret;                            
}

ushort3 convert_ushort3_rtn(float3 x) {
	ushort3 ret;                              
	__CHANGE_FP_MODE(_CL_FPMODE_RTN);                 
	for (int i = 0; i < 3; i++)            
		ret[i] = clamp_float_ushort(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTN);                
	return ret;                            
}

ushort4 convert_ushort4_rtn(float4 x) {
	ushort4 ret;                              
	__CHANGE_FP_MODE(_CL_FPMODE_RTN);                 
	for (int i = 0; i < 4; i++)            
		ret[i] = clamp_float_ushort(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTN);                
	return ret;                            
}

ushort8 convert_ushort8_rtn(float8 x) {
	ushort8 ret;                              
	__CHANGE_FP_MODE(_CL_FPMODE_RTN);                 
	for (int i = 0; i < 8; i++)            
		ret[i] = clamp_float_ushort(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTN);                
	return ret;                            
}

ushort16 convert_ushort16_rtn(float16 x) {
	ushort16 ret;                              
	__CHANGE_FP_MODE(_CL_FPMODE_RTN);                 
	for (int i = 0; i < 16; i++)           
		ret[i] = clamp_float_ushort(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTN);                
	return ret;                            
}

