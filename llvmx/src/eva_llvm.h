/**
* Eva to LLVR IR Compiler.
*/

#ifndef SRC_EVA_LLVM_H_
#define SRC_EVA_LLVM_H_

#include <iostream>
#include <string>
#include <memory>

#include "llvm/ir/ir_builder.h"
#include "llvm/ir/llvm_context.h"
#include "llvm/ir/moudle.h"


class EvaLLVM {
  public:
    EvaLLVM() {}

    /**
    * Executes a program.
    */

    void exec(const std::string& program){
      // 1. Parse the program
      // auto ast = parser->parser(program);

      // 2. Compile to LLVM IR:
      // compile(ast);

      // 3. Save module IR to files:
      // save_module_file("./out.ll");

    }

  private:
    /**
    * Initialize the module.
    */
    void module_init(){
      // Open a new context and module.
      ctx = std::make_unique<llvm::llvm_context>();
      module = std::make_unique(llvm::module)("eva_llvm", *ctx);
    }

    /**
    * Global LLVM context.
    * It owns and manages the core "global" data of LLVM's core.
    * infrastrcuture, inlcuding the type and constant unique table
    */

    std::unique_ptr<llvm::llvm_context> ctx;

    /**
    * A Module instance is used to store all the information related
    * LLVM module. Modules are the top level container of all other.
    * Intermediate Representation (IR) objects. Each module directly contains a
    * list of globals variables, a list of functions, a list of libraries (or other modules)
    * this module depends on, a symbol table, and various data
    * about the target's characteristics.
    *
    * A module maintains a GlobalList object that is used to hold all
    * constant references to global variables in the module. When a global
    * variable is destroyed, it should have no entries in the GlobalList.
    * Them main contianercass for the LLVM Intermediate Representation.
    */
    std::unique_ptr<llvm::module> module;

    /**
    * IR Builder.
    *
    * This provides a uniform API for creating instruction and inseting
    * them into ba bsic block: either at the end of a BasicBlock, or at at
    * specific interator locaion in a block.
    */
    std::unique_ptr<llvm::ir_builder<> > builder;
}


#endif // SRC_EVA_LLVM_H_

