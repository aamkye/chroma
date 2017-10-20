#include "Chroma.hpp"
#include <iostream>

int main()
{
  chroma::Underscore _;
  uint32_t num = 107;

  std::vector<int> a = {chroma::foreground::red, chroma::background::yellow};

  std::cout << _("Text1", {chroma::foreground::iGreen}) << std::endl;
  std::cout << _("Text2", a) << std::endl;
  std::cout << _(num + 5, {chroma::foreground::iRed, chroma::type::underline}) << std::endl;
  return 0;
}
