#include "Chroma.hpp"
#include <iostream>

int main()
{
  Chroma::Painter c;
  uint32_t num = 107;

  std::cout << c.text("Text", {Chroma::Fore::iGreen}) << std::endl;
  std::cout << c.text(num + 5, {Chroma::Fore::iRed}) << std::endl;
  return 0;
}
