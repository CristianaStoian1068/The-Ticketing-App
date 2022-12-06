#pragma once
#include <iostream>
#include <string>
using namespace std;
class Ticket
{
private:
	string movie_details;
		int hall_no;
		int row;
		int seat;
		int typeOfTicket;
		int id;
public:
	//Default Constructor
	Ticket()
	{
		this->movie_details = "default_name";
		this->hall_no = 0;
		this->row = 0;
		this->seat = 0;
		this->typeOfTicket= 0;
		this->id = 0;
	}
	//Constructor with parameters
	Ticket(string movie_details, int hall_no, int row, int seat, int typeOfTicket, int id) {
		this->movie_details = movie_details;
		this->hall_no = hall_no;
		this->row =row;
		this->seat = seat;
		this->typeOfTicket = typeOfTicket;
		this->id = id;
	}
};