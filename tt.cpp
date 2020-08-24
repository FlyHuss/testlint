#include <iostream>

class test {
public:
  int a;

  test() : a(111){};

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

int main() {
  test t{};
loop:
  t.fun(333); // cout 111
  t.fun(333); // cout 112
  goto loop;
  return 0;
}
