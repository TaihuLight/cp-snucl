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

short convert_short_sat_rtz(double x) {
	short ret;                    
	__CHANGE_FP_MODE(_CL_FPMODE_RTZ);       
	ret = clamp_double_short_sat(x);
	__RESTORE_FP_MODE(_CL_FPMODE_RTZ);      
	return ret;                  
}

short2 convert_short2_sat_rtz(double2 x) {
	short2 ret;                                  
	__CHANGE_FP_MODE(_CL_FPMODE_RTZ);                     
	for (int i = 0; i < 2; i++)                
		ret[i] = clamp_double_short_sat(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTZ);                    
	return ret;                                
}

short3 convert_short3_sat_rtz(double3 x) {
	short3 ret;                                  
	__CHANGE_FP_MODE(_CL_FPMODE_RTZ);                     
	for (int i = 0; i < 3; i++)                
		ret[i] = clamp_double_short_sat(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTZ);                    
	return ret;                                
}

short4 convert_short4_sat_rtz(double4 x) {
	short4 ret;                                  
	__CHANGE_FP_MODE(_CL_FPMODE_RTZ);                     
	for (int i = 0; i < 4; i++)                
		ret[i] = clamp_double_short_sat(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTZ);                    
	return ret;                                
}

short8 convert_short8_sat_rtz(double8 x) {
	short8 ret;                                  
	__CHANGE_FP_MODE(_CL_FPMODE_RTZ);                     
	for (int i = 0; i < 8; i++)                
		ret[i] = clamp_double_short_sat(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTZ);                    
	return ret;                                
}

short16 convert_short16_sat_rtz(double16 x) {
	short16 ret;                                  
	__CHANGE_FP_MODE(_CL_FPMODE_RTZ);                     
	for (int i = 0; i < 16; i++)               
		ret[i] = clamp_double_short_sat(x[i]);
	__RESTORE_FP_MODE(_CL_FPMODE_RTZ);                    
	return ret;                                
}

