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
	{ return rating;
	}
	int GetDuration()
	{ return duration;
	}
	int GetDate();
	{ return date;
	}
	//Setters
	void SetTime(int aTime)
	{
		if (aTime == 17 || aTime == 18 || aTime == 19)
			time = aTime;
		else
			time = 0;
	}
	void SetName(string aName)
	{
		if (aName == "Home alone" || aName == "Christmas movie" || aName == "The Grinch")
			name = aName;
		else name = "unavailable";
	}
	
	}
	

};
