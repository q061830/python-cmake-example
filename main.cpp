#include <Python.h>
#include <iostream>
using namespace std;

int main(){
    wchar_t pname[32] = L"Python-Cmake";
    Py_SetProgramName(pname);
    Py_Initialize();
    PyRun_SimpleString("print('Hello World, Python')\n");
    Py_Finalize();
    return 0;
}