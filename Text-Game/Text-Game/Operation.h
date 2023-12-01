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

extern string userInput;
extern int vector_i, tracker;
extern vector<string> splitInput;
extern bool wipeText;

#pragma comment(lib, "winmm.lib")
int Random(int min, int max);
void TypeWrite(string str, int time);
void Opening();
void Title();
void Intro();
void InitiateOperation();
void TakeInput();
void EmptyInput();
void Operation();
void GhostOS(bool wipeText);
void Help();
void EvidenceUse(string tag);
void Name();
void Human();
void Salt();
void Food();
void Camera();
void Water();
void List();
void Guess();
void AttemptHunt();
void Hunt();
void Death();
void End();


