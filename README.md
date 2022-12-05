# cirrus

#### Download and Build on Linux and macOS using CMake
```
% cd ~/repos
% git clone https://github.com/davidjwalling/cirrus.git
% cd cirrus
% rm -rf cmake && mkdir cmake && cd cmake
% cmake ..
% make
% sudo make install
```
#### Download and Build on Windows using CMake
```
C:\> cd \repos
C:\> git clone https://github.com/davidjwalling/cirrus.git
C:\repos\cirrus> rmdir /s /q cmake && mkdir cmake && cd cmake
C:\repos\cirrus\cmake> cmake -A Win32 -B build32 ..
C:\repos\cirrus\cmake> cmake --build build32 --config Debug
C:\repos\cirrus\cmake> cmake --build build32 --config Release
C:\repos\cirrus\cmake> cmake -A x64 -B build64 ..
C:\repos\cirrus\cmake> cmake --build build64 --config Debug
C:\repos\cirrus\cmake> cmake --build build64 --config Release
```
