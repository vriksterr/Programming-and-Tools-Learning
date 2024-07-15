Setup for CPP

Windows:
  1. Install MingW : https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites can watch video for better understanding : https://www.youtube.com/watch?v=oC69vlWofJQ
  2. open mingw and enter this commands to install GCC and Clang compiler i. pacman -S mingw-w64-ucrt-x86_64-gcc ii. pacman -S mingw-w64-ucrt-x86_64-clang
  3. once mingw is installed and compiler also installed go to its installed dir and find where the location of the compiler is its going to be in "C:\msys64\ucrt64\bin" copy this and add this to your enviroment so that you can access gcc in cmd and other code editors
  4. Done!! you can test by typing "gcc --version" or "clang --version" so see if they are working or not. 
