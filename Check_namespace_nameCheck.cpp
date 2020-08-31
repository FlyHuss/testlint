//===--- Check_namespace_nameCheck.cpp - clang-tidy -----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "Check_namespace_nameCheck.h"

#include "clang/AST/ASTContext.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"

using namespace clang::ast_matchers;

namespace clang {
  namespace tidy {
    namespace readability {

      void Check_namespace_nameCheck::registerMatchers(MatchFinder *Finder) {
        Finder->addMatcher(namespaceDecl().bind("testlint"), this);
      }

      void
      Check_namespace_nameCheck::check(const MatchFinder::MatchResult &Result) {
        const auto *MatchedDecl =
            Result.Nodes.getNodeAs<NamespaceDecl>("testlint");
        const auto space_name = MatchedDecl->getName();
        if (!space_name.empty()) {
          for (auto itor = space_name.data(); itor != space_name.end();
               ++itor) {
            if ((*itor) < 'a' || (*itor) > 'z') {
              diag(MatchedDecl->getBeginLoc(),
                   "namespace name must be lowercase");
            }
          }
          return;
        }
      }

    }   // namespace readability
  }     // namespace tidy
}   // namespace clang
