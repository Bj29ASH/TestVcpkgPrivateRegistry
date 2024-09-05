#include <iostream>
#include <DemoAdd/demo_add.h>

int main() {
  auto result = demo::add(20, 30);
  std::cout << result << std::endl;
  return 0;
}
