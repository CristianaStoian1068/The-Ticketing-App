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

	//Operators
	friend istream& operator >>(istream& in, Movie& m);
	friend ofstream& operator<<(ostream& in, const Movie& m);
	bool operator==(const Movie& m1) {
		if (this->name == m1.name && this->time == m1.time && this->rating == m1.rating && this->duration == m1.duration && this->date == m1.date)
		{return true;
	}
	        return false;
}
		~Movie() {}

};
istream& operator>> (istream& in, Movie& m) {
	in >> m.name >> m.time >> m.rating >> m.duration >> m.date;
	return in;
}

ostream& operator<<(ostream& out, const Movie& m) {
	out << "Name: " << m.name
		<< " | Time: " << m.time
		<< " | Rating: " << m.rating
		<< " | Duration: " << m.duration
		<< " | Date: " << m.date
		<< "\n";
	return out;
}
