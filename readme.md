**_Chroma_** it's simple library for color purposes.

## Description

```c++
class:
chroma::Underscore

functions:
template<typename T>
std::string text(const T &text, const std::vector<int> &vec = {})

types in namespaces (listed in "Even more details"):
chroma::type (with definitions)
chroma::foreground (with definitions)
chroma::background (with definitions)
```

_Tested on: Ubuntu 14.04LTS and MacOSX 10.12.5_

## Usage
Usage is pretty simple (4 steps):
- Add header file to You source:

```c++
// If added locally:
#include "Chroma.hpp"

// If added globally:
#include <Chroma.hpp>
```

- Create `Underscore` object:

```c++
chroma::Underscore _;
```

- Print something to wherever You want:

```c++
  std::cout << _("Green Chroma", {chroma::foreground::iGreen}) << std::endl;
  std::string = _(112, {chroma::foreground::iRed});
```

- Run it.

## Details
Whenever You wanted to color something, You've been messing up with those strange numbers like `\033[37m` or even more complicated `\033[1;41;32m` without knowing what type of color or style are You dealing with.. Here comes Chroma, once You create painter, You'll not want come back to bash style colours.

Dedicated vars are even more *human readable* than toaster manual. You want to bold red color text? Nothing simpler, just type it:

```c++
  _("Toaster manual", {chroma::foreground::red, chroma::type::bold});
```

Want more? Add it by Yourself!

```c++
  _("Toaster manual", {chroma::foreground::red, chroma::type::bold, chroma::background::blue, chroma::type::reverse, chroma::type::underline});
```

### **--- --- --- IMPORTANT --- --- ---**

As You can see there is no order or limitation to arguments, but keep in mind that there are only Type has no limitation of its type, for example if You put there a foreground red color, then bold style, and then foreground blue, the output will be bolded blue.

## Even more details
Type names are selfExplaining, IDs are those which makes the whole things fun, because You don't have to worry about them.

Please mind that names in entities are fully working code if passed. I mean You can get `chroma`, `type` and `underline`, mix it to `chroma::type::underline` and use it in `_("", {})` function.

|`Type` | `ID`|
| --- | --- |
|`normal` | `0` |
|`bold` | `1` |
|`dim` | `2` |
|`underline` | `4` |
|`blink` | `5` |
|`reverse` | `7` |
|`hidden` | `8` |

**_Foreground_**. Rest is the same as above, __BUT__ there are those strange iNames which stands for `intensive` versions of their siblings colors.

|`Foreground` | `ID`|
| --- | --- |
|`white` | `39`|
|`black` | `30`|
|`red` | `31`|
|`green` | `32`|
|`yellow` | `33`|
|`blue` | `34`|
|`magenta` | `35`|
|`cyan` | `36`|
|`gray` | `37`|
|`iGray` | `90`|
|`iRed` | `91`|
|`iGreen` | `92`|
|`iYellow` | `93`|
|`iBlue` | `94`|
|`iMagenta` | `95`|
|`iCyan` | `96`|
|`iWhite` | `97`|

**_Background_**. Rest is totally the same as above.

|`Background` | `ID`|
| --- | --- |
|`white` | `49`|
|`black` | `40`|
|`red` | `41`|
|`green` | `42`|
|`yellow` | `43`|
|`blue` | `44`|
|`magenta` | `45`|
|`cyan` | `46`|
|`gray` | `47`|
|`iGray` | `100`|
|`iRed` | `101`|
|`iGreen` | `102`|
|`iYellow` | `103`|
|`iBlue` | `104`|
|`iMagenta` | `105`|
|`iCyan` | `106`|
|`iWhite` | `107`|

Aaand that's it. Have fun.
