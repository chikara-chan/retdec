/*
* @file include/llvmir2hll/support/library_funcs_remover.h
* @brief Removes defined functions which are from some standard library whose
*        header file has to be included because of some function declarations.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_SUPPORT_LIBRARY_FUNCS_REMOVER_H
#define LLVMIR2HLL_SUPPORT_LIBRARY_FUNCS_REMOVER_H

#include "llvmir2hll/support/smart_ptr.h"
#include "llvmir2hll/support/types.h"
#include "tl-cpputils/non_copyable.h"

namespace llvmir2hll {

class Module;

/**
* @brief Removes defined functions which are from some standard library whose
*        header file has to be included because of some function declarations.
*
* For more information, see the description of removeFuncs().
*
* This class implements the "static helper" (or "library") design pattern (it
* has just static functions and no public instances can be created).
*/
class LibraryFuncsRemover: private tl_cpputils::NonCopyable {
public:
	static FuncVector removeFuncs(ShPtr<Module> module);
};

} // namespace llvmir2hll

#endif
