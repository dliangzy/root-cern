//--------------------------------------------------------------------*- C++ -*-
// CLING - the C++ LLVM-based InterpreterG :)
// version: $Id$
// author:  Baozeng Ding
// author:  Vassil Vassilev <vasil.georgiev.vasilev@cern.ch>
//------------------------------------------------------------------------------

#ifndef CLING_IR_DUMPER_H
#define CLING_IR_DUMPER_H

#include "TransactionTransformer.h"

namespace llvm {
  class Module;
}

namespace cling {

  class Transaction;

  // TODO : This is not really a transformer. Factor out.
  class IRDumper : public TransactionTransformer {
  public:
    IRDumper() : TransactionTransformer(0) { }
    virtual ~IRDumper();

    virtual void Transform();

  private:
    void printIR(llvm::Module* M);
  };

} // namespace cling

#endif // CLING_IR_DUMPER_H
