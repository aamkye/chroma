# libChroma.a
Or just **_chroma_***, it's simple library for color purposes.

## Description

```c++
class:
Chroma::Painter

functions:
text(std::string)
text(std::string, std::vector<int> = {})

types in namespaces (listed in "Even more details"):
Chroma::Type (with definitions)
Chroma::Fore (with definitions)
Chroma::Back (with definitions)
```

*_Tested on: Ubuntu 14.04LTS and MacOSX 10.12.5_

## Usage
Usage is pretty simple (5 steps):
- Add header file to You soruce:

```c++
// If added locally:
#include "Chroma.hpp"

// If added globally:
#include <Chroma.hpp>
```

- Create `Painter` object:

```c++
Chroma::Painter whateverObj;
```

- Print something to wherever You want:

```c++
  std::cout << whateverObj.text("Green Chroma", {Chroma::Fore::iGreen}) << std::endl;
  std::string = whateverObj.text("Storaged Green Chroma", {Chroma::Fore::iGreen});
```

- Link it:

```bash
#inline g++ linker
g++ main.cpp -o main -std=c++1z -lstdc++ -L. -lchroma

#or inline g++ library
g++ main.cpp libChroma.a -o main -std=c++1z -lstdc++

#or CMakeLists.txt
target_link_libraries(harmlessWhatever Chroma)
```

- Run it.

## Details
Whenever You wanted to color something, You've been messing up with those strange numbers like `\033[37m` or even more complicated `\033[1;41;32m` without knowing what type of color or style are You dealing with.. Here comes Chroma, once You create painter, You'll not want come back to bash style colours. 

Dedicated vars are even more *human readable* than toaster manual. You want to bold red color text? Nothing simpler, just type it:

```c++
  whateverObj.text("Toaster manual", {Chroma::Fore::red, Chroma::Type::bold});
```

Want more? Add it by Yourself!

```c++
  whateverObj.text("Toaster manual", {Chroma::Fore::red, Chroma::Type::bold, Chroma::Back::blue, Chroma::Type::reverse, Chroma::Type::underline});
```

### **--- --- --- IMPORTANT --- --- ---**

As You can see there is no order or limitation to arguments, but keep in mind that there are only Type has no limitation of its type, for example if You put there a foreground red color, then bold style, and then foreground blue, the output will be bolded blue.

## Even more details
Type names are selfExplaining, IDs are those which makes the whole things fun, because You don't have to worry about them.

Please mind that names in entities are fully working code if pased. I mean You can get `Chroma`, `Type` and `underline`, mix it to `Chroma::Type::underline` and use it in `text()` function.

|`Type` | `ID`|
| --- | --- |
|`normal` | `0` |
|`bold` | `1` |
|`dim` | `2` |
|`underline` | `4` |
|`blink` | `5` |
|`reverse` | `7` |
|`hidden` | `8` |

**_Fore_** stands for foreground. Rest is the same as above, __BUT__ there are those strange iNames which stands for `intensive` versions of their siblings colors.

|`Fore` | `ID`|
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

**_Back_** stands for background. Rest is totaly the same as above.

|`Back` | `ID`|
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

Aaand thats is. Have fun.
