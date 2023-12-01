#pragma once
#include "Operation.h"

struct Evidence
{
	string tag;
	string name;
	string description;
	int aggressionModifier;
	int sanityModifier;
	int attempts;

	Evidence(string t = "Empty Tag", string n = "Empty Name", string d = "Empty Description", int aM = 0, int sM = 0, int a = 0)
	{
		tag = t;
		name = n;
		description = d;
		aggressionModifier = aM;
		sanityModifier = sM;
		attempts = a;
	}
};

class Ghost
{
public:
	string ghostType, tag, description, name;
	double aggression, aggressionRate;
	Evidence evidence1;
	Evidence evidence2;
	Ghost(string t = "Empty tag", string d = "Empty Description", string gT = "Empty Ghost Type", double a = 0, double aR = 0, string n = "Empty Name", Evidence e1 = Evidence(), Evidence e2 = Evidence())
	{
		tag = t;
		description = d;
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