#include "src/Chroma.hpp"
#include <iostream>

int main() {
  Chroma::Painter c;
  std::cout << c.text("Text", {Chroma::Fore::iGreen}) << std::endl;
  return 0;
}
