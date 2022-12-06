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
	//setters
	void Setmovie_details(string movie_details)
	{
		this->movie_details = movie_details;

	}
	void Sethall_no(int hall_no)
	{
		this->hall_no = hall_no;
	}
	void Setrow(int row)
	{
		this->row = row;
	}
	void Setseat(int seat)
	{
		this->seat = seat;
	}
	void SettypeOfTicket(int typeOfTicket)
	{
		this->typeOfTicket = typeOfTicket;
	}
	void Setid()
	{
		this->id = id;
	}
	//getters
	string Getmovie_details(string movie_details)
	{
		return movie_details;
 }
	int Gethall_no(int hall_no)
	{
		return hall_no;
	}
	int Getrow()
	{
		return row;
	}
	int Getseat() {

		return seat;
	}
	int GettypeOfTicket(int typeOfTicket)
	{
		return typeOfTicket;
	}
	int Getid(int id)
	{
		return id;
	}
	//Operators
	friend istream& operator >>(istream& in, Ticket& t);

	friend ostream& operator <<(ostream& out, const Ticket& t);
};
istream& operator>> (istream& in, Ticket& t) {
	in >>t.movie_details >> t.hall_no >> t.row >> t.seat>> t.typeOfTicket>> t.id;
	return in;
}
ostream& operator<<(ostream& out, const Ticket& t)
{
	out << t.movie_details << t.hall_no << t.row << t.seat << t.typeOfTicket << t.id;
}