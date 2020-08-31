#include <iostream>   // NOLINT

namespace linttest {
  // clang-format off
  namespace lintTest{ //NOLINT
    // clang-format on
    class test {
     public:
      int a;
      // clang-format off
     test() :                 a(111){};
      // clang-format on
      void fun(int c) {
        std::cout << "in test" << std::endl;
        int b = 222;
        // lambda decl
        [c, b]() mutable {
          std::cout << c << std::endl;
          c += 1;
        }();
      };
    };
    // clang-format off
  }
  // clang-format on
};   // namespace linttest

int main() {
  char *ch = (char *)"a";
  linttest::lintTest::test t{};
loop:
  t.fun(333);   // cout 111
  t.fun(333);   // cout 112
  goto loop;
  return 0;
}
