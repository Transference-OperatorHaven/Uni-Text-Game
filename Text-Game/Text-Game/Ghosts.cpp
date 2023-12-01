#include "Ghosts.h"


Evidence evidenceTypes[6] =
{
   Evidence("name","Say Ghost Name", "You say the ghost's name aloud to try and goad the ghost into action. This is a universal action and so has no bearing on ghost type unless specified in ghost description.", 5, 15,0),
   Evidence("human","Offer Human Body Part","Some ghosts are entinced by the flesh of the material. Offer this piece of another human and see if they take to it.",25,30,0),
   Evidence("salt", "Salt", "Salt has supernatural properties that affect specific ghosts. Their otherworldly feet can't help but leave an eventual tread.", 5, 10,0),
   Evidence("food", "Food Offering", "Leave the ghost food as an offering that it may take", 15, 5),
   Evidence("camera", "View Through Camera", "Cameras percieve the world differently to us meaning some ghosts may become visible when they usually are not.", 20, 10,0),
   Evidence("water", "Spray Water Vapour", "Dispearse water vapour into the air. Some ghosts are sensitive to the water and may react.", 35, 5,0)
};

Ghost ghostList[10] =
{
	Ghost("spectre", "The spectre is the most common ghost archetype in the imperial core. They take the form of their previous life.\n\nThey are reponsive to salt and appear on cameras.", "Spectre",10, 3, "Greg McCumhaill", evidenceTypes[2], evidenceTypes[4]),//standard ghost
	Ghost("oni","Oni are the second most aggressive ghost archetype but their aggression doesn't stick around.\nThey are orcish and violent, if you do not survive do not beat yourself up.\n\nThey take human offerings and their anger leads them to stepping in salt.","Oni", 30, 8, "Ren Suzuki", evidenceTypes[1],evidenceTypes[2]), //High aggression
	Ghost("dullahan","The Dullahan, or more common \"The Headless Horseman\" is an Irish ghost that lacks a head. It is an aggressive ghost with a consistent decrease in aggression the longer one stays in its grounds.\n\nIt is invisible to the sane eye but shows up on camera and reacts to water vapour.","Dullahan", 20, 4, "Niamh Byrne", evidenceTypes[4], evidenceTypes[5]), //Medium Aggression
	Ghost("shinigami","Shinigami are ghosts tied to death most closely, they can bring feelings of suicide into the minds of even the most steeled investigator.\n\nThey are receptive to human offerings and food offerings. ","Shinigami", 25, 3, "Haruto Arasaka", evidenceTypes[1], evidenceTypes[3]),//Almost as aggressive as Oni 
	Ghost("hantu","The hantu air are a more calm malay ghost to encounter with low initial aggression to investigators and don't calm down as easily.\nThey are almost liquid in appeareance and seem to shift forms ever so slightly constantly until they're unrecognisable.\n\nThey leave footprints in salt and react to water vapour spray.","Hantu Air", 8, 2, "Nadia Tengku", evidenceTypes[2], evidenceTypes[5]), // Low aggression, low aggression rate
	Ghost("mary","The Bloody Mary is a ghost archetype started by the Queen Mary I.\nThey are the most aggressive ghosts but have less temperment more then Oni or Wight.\n\nThey take food offerings and appear on cameras. They also become highly regressive when having their name said.","Bloody Mary", 35, 3, "Benjamin Walsh", evidenceTypes[3],evidenceTypes[4]), //Reacts specially to having name said, high initial aggression, low rate until name said
	Ghost("wight","The wight is a blue ghost archetype from England. They crave flesh and harm but are curious souls so aren't as aggressive as one would think.\nBut desire and instinct take the wight over and so they are the most aggressive by lowest rate of aggression decrease of any ghost.\n\nThey take human offerings and appear on cameras.","Wight", 5, 1, "Noah Sullivan", evidenceTypes[1],evidenceTypes[4]), //low aggression, high aggression rate
	Ghost("preta","Preta are ghosts that spawned from an archetype in the indian subcontinet. They resemble starving humans and may try and trick those who encounter them into feeding them.\n\nThey leave footprints in salt and take food offerings.","Preta",15,4,"Ajay Basu",evidenceTypes[2],evidenceTypes[3]), //above average aggression, average aggression rate
	Ghost("vrykolakas","Vrykolakas are a greek ghost archetype that are violent and flesh hungry. They resemble a wolfish human, covered in fur and a bestial face.\n\nThey take human offerings and react to water vapour.","Vrykolakas",20,6,"Eleni Galanis",evidenceTypes[1],evidenceTypes[5]), //above average aggression and rate
	Ghost("mogwai","Mogwai are a chinese ghost archetype the involve rain and desire. They react to the onset of rain seasons by entering a mating season and are see as vengeful.\n\nThey are receiptive to food offerings as well as reacting to water vapour. They become more aggressive when water vapour is in the air.","Mogwai",10, 3,"Bao Huang",evidenceTypes[3],evidenceTypes[5]), //Aggression rate should double when using water
};