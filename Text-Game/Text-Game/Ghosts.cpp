#include "Ghosts.h"


Evidence evidenceTypes[6] =
{
   Evidence("sayName","Say Ghost Name", "You say the ghost's name aloud to try and goad the ghost into action. This is a universal action and so has no bearing on ghost type unless specified in ghost description.", 5, 15),
   Evidence("human","Offer Human Body Part","Some ghosts are entinced by the flesh of the material. Offer this piece of another human and see if they take to it.",25,30),
   Evidence("salt", "Salt", "Salt has supernatural properties that affect specific ghosts. Their otherworldly feet can't help but leave an eventual tread.", 5, 10),
   Evidence("food", "Food Offering", "Leave the ghost food as an offering that it may take", 15, 5),
   Evidence("camera", "View Through Camera", "Cameras percieve the world differently to us meaning some ghosts may become visible when they usually are not.", 20, 10),
   Evidence("water", "Spray Water Vapour", "Dispearse water vapour into the air. Some ghosts are sensitive to the water and may react.", 35, 5)
};

Ghost ghostList[10] =
{
	Ghost("Spectre",10, 3, "Greg Smeg", evidenceTypes[2], evidenceTypes[4]),//standard ghost
	Ghost("Oni", 30, 8, "Ren Suzuki", evidenceTypes[1],evidenceTypes[2]), //High aggression
	Ghost("Dullahan", 20, 4, "Niamh Byrne", evidenceTypes[4], evidenceTypes[5]), //Medium Aggression
	Ghost("Shinigami", 25, 3, "Haruto Arasaka", evidenceTypes[1], evidenceTypes[3]),//Almost as aggressive as Oni 
	Ghost("Hantu Air", 8, 2, "Nadia Tengku", evidenceTypes[2], evidenceTypes[5]), // Low aggression, low aggression rate
	Ghost("Bloody Mary", 35, 3, "Benjamin Walsh", evidenceTypes[3],evidenceTypes[4]), //Reacts specially to having name said, high initial aggression, low rate until name said
	Ghost("Wight", 5, 10, "Noah Sullivan", evidenceTypes[1],evidenceTypes[4]), //low aggression, high aggression rate
	Ghost("Preta",15,4,"Ajay Basu",evidenceTypes[2],evidenceTypes[3]), //above average aggression, average aggression rate
	Ghost("Vrykolakas",20,6,"Eleni Galanis",evidenceTypes[1],evidenceTypes[5]), //above average aggression and rate
	Ghost("Mogwai",10, 3,"Bao Huang",evidenceTypes[3],evidenceTypes[5]), //Aggression rate should double when using water
};