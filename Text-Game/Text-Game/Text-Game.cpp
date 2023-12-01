// Text-Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Operation.h"

using namespace std;
/*
variable declarations
*/
string playerName;

/*
function declarations
*/
//seperate function as it is not a scene function

void Opening();
void Title();
void Intro();




int main()
{
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    //0 = Black  | 8 = Gray
    //1 = Blue   | 9 = Light Blue
    //2 = Green  | a = Light Green
    //3 = Aqua   | b = Light Aqua
    //4 = Red    | c = Light Red
    //5 = Purple | d = Light Purple
    //6 = Yellow | e = Light Yellow
    //7 = White  | f = Bright White
    system("Color 0b");
    Opening();
}

void Opening() 
{
    Title();
}

void Title()
{
    cout << R"(
 _  .-')     ('-.        (`-.      ('-.              ('-.        (`-.            .-') _      ('-.     .-') _                            .-') _  
( \( -O )  _(  OO)     _(OO  )_  _(  OO)           _(  OO)     _(OO  )_         (  OO) )    ( OO ).-.(  OO) )                          ( OO ) ) 
 ,------. (,------.,--(_/   ,. \(,------.,--.     (,------.,--(_/   ,. \ ,-.-') /     '._   / . --. //     '._ ,-.-')  .-'),-----. ,--./ ,--,'  
 |   /`. ' |  .---'\   \   /(__/ |  .---'|  |.-')  |  .---'\   \   /(__/ |  |OO)|'--...__)  | \-.  \ |'--...__)|  |OO)( OO'  .-.  '|   \ |  |\  
 |  /  | | |  |     \   \ /   /  |  |    |  | OO ) |  |     \   \ /   /  |  |  \'--.  .--'.-'-'  |  |'--.  .--'|  |  \/   |  | |  ||    \|  | ) 
 |  |_.' |(|  '--.   \   '   /, (|  '--. |  |`-' |(|  '--.   \   '   /,  |  |(_/   |  |    \| |_.'  |   |  |   |  |(_/\_) |  |\|  ||  .     |/  
 |  .  '.' |  .--'    \     /__) |  .--'(|  '---.' |  .--'    \     /__),|  |_.'   |  |     |  .-.  |   |  |  ,|  |_.'  \ |  | |  ||  |\    |   
 |  |\  \  |  `---.    \   /     |  `---.|      |  |  `---.    \   /   (_|  |      |  |     |  | |  |   |  | (_|  |      `'  '-'  '|  | \   |   
 `--' '--' `------'     `-'      `------'`------'  `------'     `-'      `--'      `--'     `--' `--'   `--'   `--'        `-----' `--'  `--'   
 )";
    cout << endl;
    cout << "                                                      A game about finding ghosts";
    cout << endl;
    system("pause");
    Intro();
}
void Intro()
{   
    /*
    char satisfaction;
    bool satisfactionLoop = true;

    system("cls");
    string printString = "Booting...";
    TypeWrite(printString, 100);
    Sleep(1000);
    system("cls");
    TypeWrite(printString, 100);
    Sleep(1000);
    system("cls");
    TypeWrite(printString, 100);
    system("PAUSE");
    system("cls");
    Sleep(500);
    cout << "Welcome to the State of the Art(!) GhOSt, provided by SpectreWare! This handheld will be used to provide simple education on the undead and a reputable source on the various ghosts you will face.\nSpecial info will be sent to your GhOSt by your employer as you are deployed on tasks." << endl;
    Sleep(5000);
    cout << "You will be allowed access to your handheld GhOSt during investigations as a source for infomation. To access your GhOSt's repository. Please audibly say \"GhOSt\" and your handheld GhOSt will deploy.\nAfter doing as such please audibly say the name of the ghost and the handheld GhOSt will display information on the searched ghost." << endl;
    Sleep(3000);
    cout << "An example of a ghost repository will now be deployed.";
    Sleep(4000);
    MessageBox(NULL, (LPCWSTR)L"The Dullahan, or more common \"The Headless Horseman\" is an Irish ghost that lacks a head. It is an aggressive ghost with a consistent increase in aggression the longer one stays in its grounds.\n\nIt is invisible to the sane eye but shows up on camera and reacts to water vapour.", (LPCWSTR)L"Dullahan", MB_ICONASTERISK | MB_OK | MB_DEFBUTTON1); 
    Sleep(250);
    cout << "\nWas this satisfactory?(y/n) ";
    cin >> satisfaction;
    while (satisfactionLoop)
    {
        if ((satisfaction != 'y' && satisfaction != 'n') || !cin)
        {
            cout << "User please enter y or n";
            cin >> satisfaction;
        }
        else
        {
            break;
        }
    }
    if (satisfaction == 'n')
    {
        cout << "\nI'm sorry to hear that. However, too bad.\n";
    }
    Sleep(500);
    cout << "INCOMING CALL FROM: Manager";
    Sleep(250);
    */
    InitiateOperation();

}
