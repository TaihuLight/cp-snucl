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

double snu_rootn(double x, int y);

float rootn(float x, int y) {
	return snu_rootn(x, y);
}

float2 rootn(float2 x, int2 y) {
	float2 ret;
	ret[0] = snu_rootn(x[0], y[0]);
	ret[1] = snu_rootn(x[1], y[1]);
	return ret;
}

float3 rootn(float3 x, int3 y) {
	float3 ret;
	for(int i=0;i<3;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}

float4 rootn(float4 x, int4 y) {
	float4 ret;
	for(int i=0;i<4;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}

float8 rootn(float8 x, int8 y) {
	float8 ret;
	for(int i=0;i<8;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}

float16 rootn(float16 x, int16 y) {
	float16 ret;
	for(int i=0;i<16;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}

double rootn(double x, int y) {
	return snu_rootn(x, y);
}

double2 rootn(double2 x, int2 y) {
	double2 ret;
	ret[0] = snu_rootn(x[0], y[0]);
	ret[1] = snu_rootn(x[1], y[1]);
	return ret;
}

double3 rootn(double3 x, int3 y) {
	double3 ret;
	for(int i=0;i<3;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}

double4 rootn(double4 x, int4 y) {
	double4 ret;
	for(int i=0;i<4;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}

double8 rootn(double8 x, int8 y) {
	double8 ret;
	for(int i=0;i<8;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}

double16 rootn(double16 x, int16 y) {
	double16 ret;
	for(int i=0;i<16;i++) {
		ret[i] = snu_rootn(x[i], y[i]);
  }
	return ret;
}
