#include <iostream>
#include <string>
#include "Movie.h";
using namespace std;



int main()

{
	
	
	cout << "_______________________________________________________________________" << endl;
	cout << endl;
	cout << "                       " << "TICKETING APP " << "                      " << endl;
	cout << endl;
	cout << "_______________________________________________________________________" << endl;

	
	Movie movies[100];
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
			cout<<""
			cout << "The movie selected is " << choice.GetName();
			cout << "Please choose time:" << endl;
			cout << "Availaible times:";

			Movie choice(selection3);
			choice.SetTime(selection3);
			cout << choice.GetTime();



			cin >> selection3;
			choice.SetTime(selection3)






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