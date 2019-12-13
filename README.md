# Python cmake Example
這個範例適用於需要在C++呼叫python的人。cmake最大的好處是可以跨平台建立makefile，以```gcc```為例，要進行編譯的時候需要使用```-I -l```引入標頭跟lib，現在交給cmake一次幫你解決問題。

## 需求
### Windows
待補充

### Linux
* cmake > 3.0
* python >= 3.7
* python3-dev
* gcc
* git

### MacOS
* cmake > 3.0
* python >= 3.7
* xcode command line tools
* git

## 安裝CMAKE
### Linux
#### Ubuntu / Debian / Raspbian
終端機輸入


```sudo apt-get update && sudo apt-get install -y cmake python3-dev build-essential```

### MacOS
至[官方網站的下載頁面](https://cmake.org/download/)下載最新版的dmg，接著打開終端機輸入

```sudo "/Applications/CMake.app/Contents/bin/cmake-gui" --install```

## 使用方法
### Windows
待補充

### Linux / MacOS
1. 打開終端機
2. ```git clone https://github.com/q061830/python-cmake-example```
3. ```cd python-cmake-example```
4. ```cmake .```
5. ```make```
6. ```./example```

## 作者
* Email : g110732011@grad.ntue.edu.tw
* Telegram : @q061830