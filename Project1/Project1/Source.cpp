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

	//vector to store movie ratings and characteristics using the constructor
	Movie movies[100];
	int moviesSize = 0;
	Movie Home_Alone1("Home Alone","19:40", "R", 120, 10122022);
	Movie Home_Alone2("Home Alone", "14:30", "R", 120, 10122022);
	Movie Home_Alone3("Home Alone", "21:50", "R", 120, 10122022);
	Movie The_Grinch1("The Grinch", "14:30", "PG", 85, 10122022);
	Movie The_Grinch2("The Grinch", "19:40", "PG", 85, 10122022);
	Movie The_Grinch3("The Grinch", "21:50", "PG", 85, 10122022);
	Movie Last_Christmas1("Last Christmas", "14:30", "PG-13", 103, 10122022);
	Movie Last_Christmas2("Last Christmas", "19:40", "PG-13", 103, 10122022);
	Movie Last_Christmas3("Last Christmas", "21:50", "PG-13", 103, 10122022);
	movies[0] = Home_Alone1;
	moviesSize++;
	movies[1] = Home_Alone2;
	moviesSize++;
	movies[3] = Home_Alone3;
	moviesSize++;
	movies[4] = The_Grinch1;
	moviesSize++;
	movies[4] = The_Grinch2;
	moviesSize++; 
	movies[5] = The_Grinch3;
	moviesSize++; 
	moviesSize++; 
	movies[6] = Last_Christmas1;
	moviesSize++; 
	movies[7] = Last_Christmas2;
	moviesSize++; 
	movies[8] = Last_Christmas3;
	
	int option;
	string movieName;
	string movieTime;
	string movieRating;
	int movieDuration;
	int movieDate;
	int done = 1;
	while(done){
		cout << endl
			<< "1.See movies\n"
			<< "2.Buy ticket\n"
			<< "3.Exit\n"
			<< "Enter your selection:\n";
		cin >> option;
		if (option == 1) {
			Movie choice;
			cout << endl
				<< "Home Alone\n"
				<< "The Grinch\n"
				<< "Last Christmas\n"
				<< "Please enter movie name:\n";
			cin.ignore();
			getline(cin, movieName);
			choice.setName(movieName);
			if (choice.getName() != "default_name") {
				cout << "";
				cout << "The movie selected is \n" << choice.getName() << "\n";
				cout << "Please choose the time:\n" << endl;
				cout << "Availaible times: \n";
				cout << "14:30\n";
				cout << "21:50\n";
				cout << "19:40\n";
				cin >> movieTime;
				choice.setTime(movieTime);
				if (choice.getTime() != "default_time") {
					for (int i = 0; i < moviesSize; i++) {
						if (movies[i].getName() == movieName && movies[i].getTime() == movieTime) {
							choice.setRating(movies[i].getRating());
							choice.setDuration(movies[i].getDuration());
							choice.setDate(movies[i].getDate());
						}
					}
				}
				cout << "Your selected movie is: " << choice;
			}
		}
		else if (option == 3) {
			cout << "Closing the Ticketing App...\n";
			done = 0;
		}
	}
	return 0;
}