#pragma once
#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
	string name;
	string time;
	string rating;
	int duration;
	int date;
public:
	//Default Constructor
	Movie()
	{
		this->name = "default_name";
		this->time = "default_time";
		this->rating = "default_rating";
		this->duration = 0;
		this->date = 0;
	}
	//Constructor with parameters
	Movie(string name, string time, string rating, int duration, int date) {
		this->name = name;
		this->time = time;
		this->rating = rating;
		this->duration = duration;
		this->date = date;
	}
	//Getters
	string GetName()
	{
		return name;
	}
	string GetTime()
	{
		return time;
	}
	string GetRating()
	{
		return rating;
	}
	int GetDuration()
	{
		return duration;
	}
	int GetDate()
	{
		return date;
	}
	//Setters
	void SetName(string name) {
		try {
			if (name == "Home Alone" || name == "The Grinch" || name == "Christmas Love Story") {
				this->name = name;
			}
		else {
			throw exception("The movie selected is unavailable, please make your choice again:\n");
			}
	}
	catch (exception& e) {
		cout << e.what();
	}
}
	void SetTime(string time) {
		try {
			if (time == "14:30" || time == "19:40" || time == "21:50") {
				this->time = time;
			}
			else {
				throw(time);
			}
		}
		catch (string wrongTime) {
			cout << "At the hour " << wrongTime << " there is no movie available or the time selected is unavailable\n";
		}
	}
	
	void SetRating(string rating) {
		this->rating = rating;
	}
	void SetDuration(int duration) {
		this->duration = duration;
	}
	void SetDate(int date) {
		this->date = date;
	}
	
	

};
