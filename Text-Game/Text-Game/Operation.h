#define NOMINMAX
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <mmsystem.h>
#include <vector>
#include <string>
#include <vector>
#include <sstream>
#include <random>
#include <algorithm>

using namespace std;

#pragma comment(lib, "winmm.lib")
int Random(int min, int max);
void TypeWrite(string str, int time);
void InitiateOperation();
void TakeInput();

