// more_and.cpp -- using the logical and operator
#include <iostream>
const char * qualify[4] =  // an arry of pointers
{
	"10,000-meter race.\n",
	"mud tug of war.\n",
	"masters canoe jousting.\n",
	"pie-throwing festival.\n"
};
int main()
{
	using namespace std;
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;

	if (age > 17 && age < 35)
		index = 0;
	else if (age >=35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 60)
		index = 2;
	else
		index = 3;

	cout << "you qualify for the " << qualify[ index];
	return 0;
}