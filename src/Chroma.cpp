#include "Chroma.hpp"
#include <string>
#include <vector>

Chroma::Painter::Painter(){};

std::string Chroma::Painter::text(const std::string &text,
                                  const std::vector<int> &vec = {}) {
  std::string output = beg;
  if (vec.size()) {
    for (const auto &var : vec) {
      output += std::to_string(var) + ";";
    }
    output.pop_back();
  }
  output += end + text + beg + "0" + end;
  return output;
}
