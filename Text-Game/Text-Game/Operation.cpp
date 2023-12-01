#include "Operation.h"
#include "Ghosts.h"

bool bExit = false, bLoop = false;
bool cinFail = true;
string userInput;
int vector_i;
vector<string> splitInput;
Ghost activeGhost;

std::random_device device;
std::mt19937 randomGenerator(device());

int Random(int min, int max)
{
    //We have to do this because if the ranges aren't
    //ordered then C++ will throw an error
    int trueMin = std::min(min, max);
    int trueMax = std::max(max, min);

    //Build a uniform distribution
    uniform_int_distribution<int> udist(trueMin, trueMax);

    //Sample the distribution using the generator
    return udist(randomGenerator);
}



void TypeWrite(string str, int time)
{
    for (int i = 0; i < str.size(); i++) {
        cout << str[i];
        Sleep(time);
    }
}

int Main()
{
    TakeInput();
    return 0;
}

void InitiateOperation()
{
    system("cls");
    TypeWrite("Welcome Back, I've got a job for you. You'll need to head to 109 Langley Drive. Reported haunting just right for you.", 10);
    activeGhost = ghostList[Random(0, 9)];
}

void TakeInput()
{
    while (!bExit)
    {
        system("cls");
        cout << "\n\n>";
        getline(cin, userInput);
        splitInput.push_back(string());
        for (int i = 0; i < userInput.length(); i++)
        {
            if (userInput[i] != ' ')
            {
                splitInput[vector_i].push_back(userInput[i]);
            }
            else
            {
                vector_i++;
                splitInput.push_back(string());
            }
        }
    }
}

void Operation()
{



}