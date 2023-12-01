#pragma once
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <string>
#include <mmsystem.h>
#include "Operation.h"

using namespace std;

 struct Evidence 
 {
	 string tag;
	 string name;
	 string description;
	 int aggressionModifier;
	 int sanityModifier;

	 Evidence(string t = "Empty Tag", string n = "Empty Name", string d = "Empty Description", int aM = 0, int sM = 0)
	 {
		 tag = t;
		 name = n;
		 description =d;
		 aggressionModifier = aM;
		 sanityModifier = sM;
	 }
 };

 class Ghost
 {
 public:
	 string ghostType;
	 double aggression, aggressionRate;
	 string name;
	 Evidence evidence1;
	 Evidence evidence2;
	 Ghost(string gT = "Empty Ghost Type", double a = 0, double aR = 0, string n = "Empty Name", Evidence e1 = Evidence(), Evidence e2 = Evidence())
	 {
		 ghostType = gT;
		 aggression = a;
		 aggressionRate = aR;
		 name = n;
		 evidence1 = e1;
		 evidence2 = e2;
	 }

 private:

 };
 extern Evidence evidenceTypes[6];

 extern Ghost ghostList[10];