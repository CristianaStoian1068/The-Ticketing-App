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
	Movie(string aName)
	{	
		SetName(aName);
}
	void SetName(string aName)
	{
		if (aName =="Home alone" || aName == "Christmas movie" || aName == "The Grinch")
			name=aName;
		else name = "unavailable";
	}
	string GetName()
	{
			return name;
	}
	
};

