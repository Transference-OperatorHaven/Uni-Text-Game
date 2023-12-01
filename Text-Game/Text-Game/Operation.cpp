#include "Ghosts.h"
#include <chrono>
#include < conio.h >

vector<string> splitInput;
int vector_i, tracker;
string userInput;

bool bExit = false, bLoop = false, inGhOSt = false;
bool cinFail = true;
Ghost activeGhost;
int playerSanity = 100;
bool evidenceCheck[5] = { false, false, false, false, false };

random_device device;
mt19937 randomGenerator(device());

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

void InitiateOperation()
{
    system("cls");
    TypeWrite("Welcome Back, I've got a job for you. You'll need to head to ", 10); TypeWrite(to_string(Random(30, 205)), 10); TypeWrite(" Langley Drive.Reported haunting just right for you.", 10);
    activeGhost = ghostList[Random(0, 9)];
    system("PAUSE");
    Operation();
}

void TakeInput()
{
    cout << "\n\n>";
    getline(cin, userInput);
    splitInput.push_back(string());
    for (int i = 0; i < userInput.size(); i++)
    {
        userInput[i] = tolower(userInput[i]);
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

void EmptyInput()
{
    splitInput.clear();
    userInput.clear();
    vector_i = 0;
}

void Operation()
{
    system("cls");
    TypeWrite("Initiate ghost investigation Bravo Juliett Delta. Pre-liminary Evidence none.", 75);

    while (playerSanity > 0)
    {
        inGhOSt = false;
        system("cls");
        EmptyInput();
        TakeInput();
        AttemptHunt();
        if (splitInput[0] == "ghost")
        {
            GhostOS(wipeText);
        }
        if (splitInput[0] == "help")
        {
            Help();
        }
        if (splitInput[0] == "check")
        {
            for (int i = 0; i < 6; i++)
            {
                if (splitInput[1] == evidenceTypes[i].tag)
                {
                    evidenceCheck[i] = true;
                }

            }
        }
        if (splitInput[0] == "uncheck")
        {
            for (int i = 0; i < 6; i++)
            {
                if (splitInput[1] == evidenceTypes[i].tag)
                {
                    evidenceCheck[i] = false;
                }

            }
        }
        for (int i = 0; i < 6; i++)
        {
            if (splitInput[0] == evidenceTypes[i].tag)
            {
                EvidenceUse(evidenceTypes[i].tag);
            }
        }
        if (splitInput[0] == "list")
        {
            List();
        }
        if (splitInput[0] == "guess")
        {
            Guess();
        }
        if (splitInput[0] == "debug")
        {
            activeGhost = ghostList[stoi(splitInput[1])];
            cout << "DEBUG: Ghost is now " << activeGhost.ghostType;
            system("pause");
        }

        activeGhost.aggression += activeGhost.aggressionRate;
        if (activeGhost.tag == "mary" && activeGhost.aggressionRate == 9)
        {
            tracker++;
            if (tracker > 2)
            {
                activeGhost.aggressionRate /= 3;
                tracker = 0;
            }
        }
        if (activeGhost.tag == "mogwai" && activeGhost.aggressionRate == 12)
        {
            tracker++;
            if (tracker > 2)
            {
                activeGhost.aggressionRate *= -1;
            }
        }
    }
}
void GhostOS(bool wipeText)
{
    if (wipeText)
    {
        system("cls");
    }
    cout << "GhOSt Encylopedia initiated, Enter Search Query: ";
    inGhOSt = true;
    EmptyInput();
    TakeInput();
    if (splitInput[0] == "help")
    {
        cout << "Evidence guide: " << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << evidenceTypes[i].tag << " for " << evidenceTypes[i].name << endl;
        }
        cout << "\n\nGhost guide: ";
        for (int i = 0; i < 10; i++)
        {
            cout << ghostList[i].tag<< " for " << ghostList[i].ghostType << endl;
        }

        cout << "\"survery\" tells you your current sanity.";

        system("pause");
    }
    for (int i = 0; i < 6; i++)
    {
        if (splitInput[0] == evidenceTypes[i].tag)
        {

            // Initializing an object of wstring
            wstring tempDesc = wstring(evidenceTypes[i].description.begin(), evidenceTypes[i].description.end());

            // Applying c_str() method on temp
            LPCWSTR wideStringDesc = tempDesc.c_str();

            // Initializing an object of wstring
            wstring tempTitle = wstring(evidenceTypes[i].name.begin(), evidenceTypes[i].name.end());

            // Applying c_str() method on temp
            LPCWSTR wideStringTitle = tempTitle.c_str();

            MessageBox(NULL, wideStringDesc, wideStringTitle, MB_ICONASTERISK | MB_OK | MB_DEFBUTTON1);
        }

    }
    for (int i = 0; i < 10; i++)
    {
        if (splitInput[0] == ghostList[i].tag)
        {

            // Initializing an object of wstring
            wstring tempDesc = wstring(ghostList[i].description.begin(), ghostList[i].description.end());

            // Applying c_str() method on temp
            LPCWSTR wideStringDesc = tempDesc.c_str();

            // Initializing an object of wstring
            wstring tempTitle = wstring(ghostList[i].ghostType.begin(), ghostList[i].ghostType.end());

            // Applying c_str() method on temp
            LPCWSTR wideStringTitle = tempTitle.c_str();

            MessageBox(NULL, wideStringDesc, wideStringTitle, MB_ICONASTERISK | MB_OK | MB_DEFBUTTON1);
        }

    }
    if (splitInput[0] == "sanity")
    {
        TypeWrite("You currently have a measurable sanity of ", 25); TypeWrite(to_string(playerSanity), 25); TypeWrite("% remaining.", 25);
    }
}
void Help() 
{
    cout << "\ncommands you can use include: \nghost - to access your handheld GhOSt and its own commands. (using help after entering the GhOSt will show its own commands).\nhelp to access this menu\nCheck (evidence tag) - to mark the evidence type as collected\nUncheck (evidence tag) to undo an evidence type's collected status\n(evidence tag) - to use an evidence. If an evidence type is correct then it will have a random chance to work that increases the more you use an evidence.\nlist - to list all currently valid ghosts (requires atleast one evidence to be checked to work otherwise no ghosts are valid.\nGuess (ghost tag) - to guess the ghost and end the game. Be CAREFUL.\n   ";
    system("pause");
}

void Name()
{
    if (!inGhOSt)
    {
        if (activeGhost.tag == "mary")
        {
            if (Random(evidenceTypes[0].attempts, 4) >= 4)
            {
                activeGhost.aggressionRate *= 3;
                TypeWrite("You hear a shriek in the room and pieces of ornamentation fly from the wall for a moment. It seems that the ghost was angered by being called ", 50); TypeWrite(activeGhost.name, 50); TypeWrite(", much to your not-benefit.", 50);
            }
        }
        else
        {
            TypeWrite("The ghost makes no reaction to hearing ", 50); TypeWrite(activeGhost.name, 50); TypeWrite(" however you feel that slight bit more on edge.", 50);
        }
        activeGhost.aggression += evidenceTypes[0].aggressionModifier;
        playerSanity -= evidenceTypes[0].sanityModifier;
        evidenceTypes[0].attempts++;
    }
}

void Human()
{
    if (!inGhOSt)
    {
        int eviRandom = Random(evidenceTypes[2].attempts, 4);
        if ((activeGhost.evidence1.tag == "human" || activeGhost.evidence2.tag == "human") && (eviRandom) >= 4)
        {
            TypeWrite("The ghost quickly sweeps the frozen body part off the floor and into the great ether beyond. You have no idea where itself gone but the ghost might have appreciated the gesture.", 50);
        }
        else
        {
            TypeWrite("The arm lays there motionless, clearly not amusing the ghost. It seems that this ghost is turning its nose to the human arm.", 50);
        }

        activeGhost.aggression += evidenceTypes[1].aggressionModifier;
        playerSanity -= evidenceTypes[1].sanityModifier;
        evidenceTypes[1].attempts++;
    }
}

void Salt()
{
    if (!inGhOSt)
    {
        if ((activeGhost.evidence1.tag == "salt" || activeGhost.evidence2.tag == "salt") && (Random(evidenceTypes[2].attempts, 3) >= 3))
        {
            TypeWrite("After a moment of baited breath, the salt deforms to the shape of a human foot. This is definitive proof.", 50);

        }
        else
        {
            TypeWrite("The salt remains untouched for an extended period of time. The ghost is unlikely to touch it at the moment.", 50);
        }

        activeGhost.aggression += evidenceTypes[2].aggressionModifier;
        playerSanity -= evidenceTypes[2].sanityModifier;
        evidenceTypes[2].attempts++;
    }
}

void Food()
{
    if (!inGhOSt)
    {
        int eviRandom = Random(evidenceTypes[2].attempts, 6);
        if ((activeGhost.evidence1.tag == "food" || activeGhost.evidence2.tag == "food") && (eviRandom) >= 6)
        {
            TypeWrite("After placing the apple on the ground in the middle of the room and taking steps back. The food is quickly eaten away at and the core is thrown into a wall like a gentle toss. ", 50);

        }
        else
        {
            TypeWrite("The apple is placed on the floor and after stepping back, it remains still. The ghost seems to not want the apple.", 50);
        }

        activeGhost.aggression += evidenceTypes[3].aggressionModifier;
        playerSanity -= evidenceTypes[3].sanityModifier;
        evidenceTypes[3].attempts++;
    }
}

void Camera()
{
    if (!inGhOSt)
    {
        int eviRandom = Random(evidenceTypes[4].attempts, 3);
        if ((activeGhost.evidence1.tag == "camera" || activeGhost.evidence2.tag == "camera") && (eviRandom) >= 3)
        {
            TypeWrite("You press your eye to the screen of the camera and a form travels across it. A figure for you to see.", 50);
        }
        else
        {
            TypeWrite("Despite the eyestrain, you fail to see anything on your camera that's out of the ordinary.", 50);
        }

        activeGhost.aggression += evidenceTypes[4].aggressionModifier;
        playerSanity -= evidenceTypes[4].sanityModifier;
        evidenceTypes[4].attempts++;
    }
}

void Water()
{
    if (!inGhOSt)
    {
        int eviRandom = Random(evidenceTypes[4].attempts, 7);
        if ((activeGhost.evidence1.tag == "water" || activeGhost.evidence2.tag == "water") && (eviRandom) >= 7)
        {
            if (activeGhost.tag == "mogwai")
            {
                TypeWrite("The ghost begins to become very violent. This results in stuff being thrown, doors slamming, curtains flying around. The Ghost seems to be getting more aggressive more quickly.", 50);
                activeGhost.aggressionRate *= -1;
            }
            else
            {
                TypeWrite("The ghost's form deforms the mist for a moment before the water disperses too much.", 50);
            }
        }
        else
        {
            TypeWrite("The water slowly disperses and falls to the ground, no ghostly form appearing in the mist.", 50);
        }

        activeGhost.aggression -= evidenceTypes[5].aggressionModifier;
        playerSanity -= evidenceTypes[5].sanityModifier;
        evidenceTypes[5].attempts++;
    }
}

void EvidenceUse(string tag)
{
    if (tag == "name")
    {
        Name();
    }
    if (tag == "human")
    {
        Human();
    }
    if (tag == "salt")
    {
        Salt();
    }
    if (tag == "food")
    {
        Food();
    }
    if (tag == "camera")
    {
        Camera();
    }
    if (tag == "water")
    {
        Water();
    }

}

void List()
{
    for (int i = 0; i < 5; i++)
    {
        if (evidenceCheck[i])
        {
            for (int i_i = 0; i_i < 10; i_i++)
            {
                if (ghostList[i_i].evidence1.tag == evidenceTypes[i].tag || ghostList[i].evidence2.tag == evidenceTypes[i].tag)
                {
                    cout << ghostList[i_i].ghostType << endl;
                }
            }
        }
    }
    system("pause");
}

void Guess()
{
    End();
}

void AttemptHunt()
{
    int random = Random(0, 100);
    if(random < activeGhost.aggression)
    {
        Hunt();
    }
}

void Hunt()
{

    string target[5] = { "in cupboard", "under bed", "behind sofa", "out window", "other room"};
    int randomTarget = Random(0, 4);
    
    string input;
    
    auto time_begin = clock_t();
    auto time_end = time_begin + (8 - 5 * (activeGhost.aggression / 100));
    cout << "Type '" << target[randomTarget] << "' you only have " << time_end-time_begin << " seconds." << endl;

    getline(cin, input);
    if (input == target[randomTarget] && clock_t() <= time_end)
    {
        TypeWrite("You lived!", 10);
    }
    else
    {
        Death();
    }
}

void Death() {
    TypeWrite("You Died.", 150);
    playerSanity = 0;
    exit(0);
}

void End()
{
    TypeWrite("Welcome back. You had said that the ghost tag was a ", 10); TypeWrite(splitInput[1], 10); TypeWrite(". We dispatched a team to capture and contain the ghost on your way back and the ghost was a .", 10); TypeWrite(activeGhost.ghostType, 10);
    if (splitInput[1] == activeGhost.tag)
    {
        TypeWrite(". And you were correct. Well done investigator.", 10);
    }
    else
    {
        TypeWrite(". However you were wrong and a second investigator is being currently dispatched to amend your fault.",10);
    }
}
