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
/*   Jungwon Kim, Sangmin Seo, Jun Lee, Jeongho Nah, Gangwon Jo, Jaejin Lee  */
/*                                                                           */
/*****************************************************************************/

#ifndef __FUSIONCLDEVICE_H
#define __FUSIONCLDEVICE_H

#include <CLObject.h>
#include <Utils.h>
#include <arch/fusion/Page.h>

#define FOREACH_DEV(i)  for (int i = 0; i < NDEV; ++i)

class FusionCLDevice : public CLDevice {
public:
  static int CreateDevices(vector<CLDevice*>* devices, bool force);
  static FusionCLDevice* ParseConfigure(char* line, vector<CLDevice*>* devices);
  FusionCLDevice(cl_device_type type);
  ~FusionCLDevice();
  void Init();
  void InitInfo();

  void LaunchKernel(CLCommand* command);
  void ReadBuffer(CLCommand* command);
  void WriteBuffer(CLCommand* command);
  void CopyBuffer(CLCommand* command);
  void BuildProgram(CLCommand* command);

  void AllocBuffer(CLMem* mem);
  void FreeBuffer(CLCommand* command);

public:
  vector<CLDevice*> devices;
  int               NDEV;

};

#endif

