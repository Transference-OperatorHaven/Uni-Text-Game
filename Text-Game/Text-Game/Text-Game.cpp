// Text-Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <string>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

using namespace std;
/*

spacing out the stuff fr

*/

/*
variable declarations
*/
string playerName;

/*
function declarations
*/
void Opening();
void FirstEncounter();




int main()
{
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    system("Color 0C");
    Opening();
}

void Opening() 
{
    cout << "You are cool\n";

    cout << "   )\\.-.     /`-.      )\\.-.     /`-.        .-.   )\\.---.     /`-.    )\\.--.   )\\.---.  \n";
    cout << " ,' ,-,_)  ,' _  \\   ,'     )  ,' _  \\   ,'  /  ) (   ,-._(  ,' _  \\  (   ._.' (   ,-._( \n";
    cout << "(  .   _  (  '-' (  (  .-, (  (  '-' (  (  ) | (   \\  '-,   (  '-' (   `-.`.    \\  '-,   \n";
    cout << " ) '..' )  )   _  )  ) '._\\ )  )   _  )  ) './ /    ) ,-`    ) ,_ .'  ,_ (  \\    ) ,-`   \n";
    cout << "(  ,   (  (  ,' ) \\ (  ,   (  (  ,' ) \\ (  ,  (    (  ``-.  (  ' ) \\ (  '.)  )  (  ``-.  \n";
    cout << " )/'._.'   )/    )/  )/ ._.'   )/    )/  )/..'      )..-.(   )/   )/  '._,_.'    )..-.(  \n";
    cout << "                                                                                         \n";


    cout << "A game about being a new vampire\n";

    FirstEncounter();
}

void FirstEncounter()
{
    Sleep(250);
    system("Color C0");
    Sleep(250);
    system("Color 0C");

    cout << "A pale man stands above you as you feel heavy limbs splayed across a hard wood floor. \"hey? What's your name new blood?\" \t";

    cin >> playerName;

    cout << "He shakes his head as he pulls a cigaretta case out from his coat pocket, lighting it and huffing in the acrid fumes. \"no it aint, stardust.\" \n";

    Sleep(250);
    system("Color C0");
    Sleep(250);
    system("Color 0C");
    Sleep(125);
    system("Color C0");
    Sleep(75);
    system("color 0C");

    cout << "You awake on a plush bed. Your head feels like someone threw rocks at it... when you slept? when you died?\nThe line between them was hard to distinguish in the moment. A woman sat at the foot with her hands on her hips. She  \t";

    cin >> playerName;

    cout << "That's not it. That's such a weird name too. Who would be named that?";
    Sleep(230);
    cout << "\x1b[2K";
    cout << "\n";

    Sleep(250);
    system("Color C7");
    Sleep(250);
    system("Color 7C");

    cout << "hey? Do you remember your name? \t";

    cout << "P";
    Sleep(500);
    cout << "u";
    Sleep(430);
    cout << "c";
    Sleep(521);
    cout << "k";
    Sleep(487);
    cout << "\33[2K";
    cout << "\n";

}
