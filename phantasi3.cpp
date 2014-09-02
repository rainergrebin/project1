// phantasy3.cpp -- a port of the the abandoned ware phantasy 3 from westwood ssi
// this is really a primer for refreshing/learing of c++ and starting to use the SDL library
#include <iostream>
using namespace std;
void ShowTheStartMenu();  // start menue

void ShowTheJourneyContinues(); // choice in the start menu
void ShowTheJourneyContinuesInPendragon();
void ShowNewJourneyBeginsMenu();
void EndTheJourney();

void ShowCityMenu(); // main city menu

void LoadLastJourneySet(); // load and save journey data
void SaveCurrentJourneySet();

void VisitCityBank();   // options in the city
void VisitCityHardwareStore(); 
void VisitCityTavern(); 
void VisitCityGuild();
void VisitCityMagicSchool();

int main()
{
	ShowTheStartMenu();
	int choice;
	cin >> choice;
	while (choice != 4)
	{
        switch (choice)
        {
        	case 1 : ShowTheJourneyContinues();
        	break;
        	case 2 : ShowTheJourneyContinuesInPendragon();
        	break;
        	case 3 : ShowNewJourneyBeginsMenu();
        	break;
        	case 4 : EndTheJourney();
        	break;
        	default : cout << "please try again";
        }
        ShowTheStartMenu();
        cin >> choice;
	}
	return 0;
}

void ShowTheStartMenu()  // start menue
{
	cout << "Please select 1 - 4):\n"
"1) continue with journey\n"
"2) continue in Pendragon\n"
"3) start over and begin a new journey\n"
"4) quit\n";
}

void ShowTheJourneyContinues() // choice in the start menu
{
	cout << "The journey continues...\n";
    LoadLastJourneySet();
	ShowCityMenu();
}
void ShowTheJourneyContinuesInPendragon()
{
	cout << "The journey continues in Pendragon.\n";
    LoadLastJourneySet();
	ShowCityMenu();
}
void ShowNewJourneyBeginsMenu()
{
	cout << "A new journey begins please assemble your party.\n";
}
void EndTheJourney()
{
	cout << "Bye.\n";
}

void ShowCityMenu() // main city menu
{
	cout << "you can see a (1)gate,(2)a bank, (3)a tavern, \n"
	"(4)hardware store, (5)city guild and (6)a magic school.\n"
	"What do you want to do?:\n";
}
void LoadLastJourneySet() // load and save journey data
{
	cout << "loading data please wait...\n"
	"Done.\n";
}
void SaveCurrentJourneySet()
{
	cout << "saving data to floppy disk...Please be very very patient!\n"
	"and finally done\n";
}

void VisitCityBank()   // options in the city
{
	cout << "Entering bank\n";
}
void VisitCityHardwareStore()
{
	cout << "Entering hardware-store\n";
}
void VisitCityTavern()
{
	cout << "Entering the tavern\n";
} 
void VisitCityGuild()
{
	cout << "Visiting the Citiy guidl to leanr new skills\n";
}
void VisitCityMagicSchool()
{
	cout << "visiting the Magic school to learn new spells\n";
}
