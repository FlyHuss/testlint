//===--- Check_namespace_nameCheck.h - clang-tidy ---------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_CHECK_NAMESPACE_NAMECHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_CHECK_NAMESPACE_NAMECHECK_H

#include "../ClangTidy.h"   // NOLINT

namespace clang {
  namespace tidy {
    namespace readability {

      /// FIXME: Write a short description.
      ///
      /// For the user-facing documentation see:
      /// http://clang.llvm.org/extra/clang-tidy/checks/readability-check_namespace_name.html
      class Check_namespace_nameCheck : public ClangTidyCheck {
       public:
        Check_namespace_nameCheck(StringRef Name, ClangTidyContext *Context)
            : ClangTidyCheck(Name, Context) {}
        void registerMatchers(ast_matchers::MatchFinder *Finder) override;
        void
        check(const ast_matchers::MatchFinder::MatchResult &Result) override;
      };

    }   // namespace readability
  }     // namespace tidy
}   // namespace clang

#endif   // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_CHECK_NAMESPACE_NAMECHECK_H
