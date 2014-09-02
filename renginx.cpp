// renginx.cpp -- rules engine phase one
// a declarative rules and simulation engine for econ dev and build environments

#include <iostream>
using namespace std;

void displayMenu();  //function prototype for displaying main menu
void runSimulation();
void displayresults();
int MenuChoice();

int main()
{
	int runtime = 1;
	while runtime != 5
	{
		displayMenu();
	}

	displayMenu();
	runSimulation();
	displayresults();
	// programm the loop that takes the input

	return 0;
}

void displayMenu()
{
	cout << "1) display rule-set\n"
    << "2) change rule-set\n"
	<< "3) run simulation\n"
    << "4) display simulation results\n" 
	<< "5) exit\n"
    << endl;
}

void runSimulation()
{
	cout << "running simulation\n";
	cout << "simulation finished\n";
}

void displayresults()
{
	cout << "these are the result of the last simulation run\n";
	cout << "12  -  12  -  45  -  34\n";
	cout << "All Done!\n";
}

int MenuChoice()
{
	int whatnow;
	cout << "Please select 1 - 5)\n:";
	cin >> whatnow; 
	return whatnow;
}
