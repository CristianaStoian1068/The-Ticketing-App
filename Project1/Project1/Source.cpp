#include <iostream>
#include <string>
#include "Header1.h*";
using namespace std;



int main()
{
	cout << "_______________________________________________________________________" << endl;
	cout << endl;
	cout << "                       " << "TICKETING APP " << "                      " << endl;
	cout << endl;
	cout << "_______________________________________________________________________" << endl;

	int selection;
	 string selection2;
	do
	{
		cout << endl
			<< "1.See movies"
			<< "2.Buy ticket"
			<< "3.Exit"
			<< "Enter your selection:";
		cin >> selection;
		switch (selection)
		{
		case 1:
			cout << endl
				<< "Home alone"
				<< "Christmas Movie"
				<< "The Grinch"
				<< "Please enter movie name:";
			cin >> selection2;
			Movie choice(selection2);
			choice.SetName(selection2);
			cout << "The movie selected is" << choice.GetName();
			cout << "Please choose time:" << endl;






		case 3:
			cout << "Closing Ticketing App..."
				break;
		default:
			cout << "Please enter a valid option";
			break;
		}
		while (selection != 3)

	}

	
	
	
	return 0;
}