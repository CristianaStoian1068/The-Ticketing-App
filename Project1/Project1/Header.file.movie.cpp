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
		name=aName;
}
	void SetName(string aName)
	{
		if (aName =="Home alone" || aName == "Christmas movie" || aName == "Grinch")
			name=aName;
		else name = "This movie is not available";
	}
	string GetName()
	{
			return name;
	}
	
};

