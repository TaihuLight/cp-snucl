//=====-- MBlazeSubtarget.h - Define Subtarget for the MBlaze -*- C++ -*--====//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the MBlaze specific subclass of TargetSubtarget.
//
//===----------------------------------------------------------------------===//

#ifndef MBLAZESUBTARGET_H
#define MBLAZESUBTARGET_H

#include "llvm/Target/TargetSubtarget.h"
#include "llvm/Target/TargetMachine.h"

#include <string>

namespace llvm {

class MBlazeSubtarget : public TargetSubtarget {

protected:

  enum MBlazeArchEnum {
    V400, V500, V600, V700, V710
  };

  // MBlaze architecture version
  MBlazeArchEnum MBlazeArchVersion;

  bool HasPipe3;
  bool HasBarrel;
  bool HasDiv;
  bool HasMul;
  bool HasFSL;
  bool HasEFSL;
  bool HasMSRSet;
  bool HasException;
  bool HasPatCmp;
  bool HasFPU;
  bool HasESR;
  bool HasPVR;
  bool HasMul64;
  bool HasSqrt;
  bool HasMMU;

  InstrItineraryData InstrItins;

public:

  /// This constructor initializes the data members to match that
  /// of the specified triple.
  MBlazeSubtarget(const std::string &TT, const std::string &FS);

  /// ParseSubtargetFeatures - Parses features string setting specified
  /// subtarget options.  Definition of function is auto generated by tblgen.
  std::string ParseSubtargetFeatures(const std::string &FS,
                                     const std::string &CPU);

  bool hasFPU()    const { return HasFPU; }
  bool hasSqrt()   const { return HasSqrt; }
  bool hasMul()    const { return HasMul; }
  bool hasMul64()  const { return HasMul64; }
  bool hasDiv()    const { return HasDiv; }
  bool hasBarrel() const { return HasBarrel; }

  bool isV400() const { return MBlazeArchVersion == V400; }
  bool isV500() const { return MBlazeArchVersion == V500; }
  bool isV600() const { return MBlazeArchVersion == V600; }
  bool isV700() const { return MBlazeArchVersion == V700; }
  bool isV710() const { return MBlazeArchVersion == V710; }
};
} // End llvm namespace

#endif
