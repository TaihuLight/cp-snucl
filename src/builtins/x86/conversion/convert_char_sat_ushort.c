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

schar convert_char_sat(ushort x) {
	return (schar)(x > SCHAR_MAX ? SCHAR_MAX : x);
}

char2 convert_char2_sat(ushort2 x) {
	char2 ret;                                              
	for (int i = 0; i < 2; i++)                            
		ret[i] = (schar)(x[i] > SCHAR_MAX ? SCHAR_MAX : x[i]);
	return ret;                                            
}

char3 convert_char3_sat(ushort3 x) {
	char3 ret;                                              
	for (int i = 0; i < 3; i++)                            
		ret[i] = (schar)(x[i] > SCHAR_MAX ? SCHAR_MAX : x[i]);
	return ret;                                            
}

char4 convert_char4_sat(ushort4 x) {
	char4 ret;                                              
	for (int i = 0; i < 4; i++)                            
		ret[i] = (schar)(x[i] > SCHAR_MAX ? SCHAR_MAX : x[i]);
	return ret;                                            
}

char8 convert_char8_sat(ushort8 x) {
	char8 ret;                                              
	for (int i = 0; i < 8; i++)                            
		ret[i] = (schar)(x[i] > SCHAR_MAX ? SCHAR_MAX : x[i]);
	return ret;                                            
}

char16 convert_char16_sat(ushort16 x) {
	char16 ret;                                              
	for (int i = 0; i < 16; i++)                           
		ret[i] = (schar)(x[i] > SCHAR_MAX ? SCHAR_MAX : x[i]);
	return ret;                                            
}

