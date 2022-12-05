#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Movie
{
private:
	string name;
	int time;
	int hall_no;
public:
	Movie(string aName, int aTime)
	{
		this.time = aTime;
		this.name = aName;
	}
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
	string GetName()
	{
		return name;
	}
	int GetTime()
	{
		return time;
	}

};
