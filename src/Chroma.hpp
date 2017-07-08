#include <string>
#include <vector>

namespace Chroma {
namespace Type {
static const int normal = 0;
static const int bold = 1;
static const int dim = 2;
static const int underline = 4;
static const int blink = 5;
static const int reverse = 7;
static const int hidden = 8;
};

namespace Fore {
static const int white = 39;
static const int black = 30;
static const int red = 31;
static const int green = 32;
static const int yellow = 33;
static const int blue = 34;
static const int magenta = 35;
static const int cyan = 36;
static const int gray = 37;

static const int iGray = 90;
static const int iRed = 91;
static const int iGreen = 92;
static const int iYellow = 93;
static const int iBlue = 94;
static const int iMagenta = 95;
static const int iCyan = 96;
static const int iWhite = 97;
};

namespace Back {
static const int white = 49;
static const int black = 40;
static const int red = 41;
static const int green = 42;
static const int yellow = 43;
static const int blue = 44;
static const int magenta = 45;
static const int cyan = 46;
static const int gray = 47;

static const int iGray = 100;
static const int iRed = 101;
static const int iGreen = 102;
static const int iYellow = 103;
static const int iBlue = 104;
static const int iMagenta = 105;
static const int iCyan = 106;
static const int iWhite = 107;
};

class Painter {
public:
  Painter();
  Painter(const Painter &) = delete;
  Painter(Painter &&) = delete;
  Painter &operator=(const Painter &) = delete;
  Painter &operator=(Painter &&) = delete;
  virtual ~Painter() = default;

  std::string text(const std::string &text, const std::vector<int> &vec = {});

private:
  std::string beg = "\033[";
  std::string end = "m";
};
};
