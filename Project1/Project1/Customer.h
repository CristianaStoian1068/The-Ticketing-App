#pragma once
#include <iostream>
#include <string>
using namespace std;
class Customer
{
private:
	string full_name;
	int no_tickets_bought;
	int card;
public:
	//Default Constructor
	Customer()
	{
		this->full_name = "default_name";
		this->no_tickets_bought=0;
		this->card = card=0;
	}
	//Constructor with parameters
	Customer(string name, int no_tickets_bought,int card)
	{
		this->full_name = full_name;
		this->no_tickets_bought = no_tickets_bought;
		this->card = card;
	}
	//setter
	void Setfull_name( string full_name)
	{
		this->full_name = full_name;	}
	void Setno_tickets_bought(int no_tickets_bought)
	{
		this->no_tickets_bought = no_tickets_bought;

	}
	void Setcard(int card)
	{
		this->card = card;
	}
	//GETTERS
	string Getfull_name(string full_name)
	{
		return full_name;
	}
	int Getno_tickets_bought(int no_tickets_bought)
	{
		return no_tickets_bought;
	}
	int Getcard(int card)

	{
		return card;
	}
	//Operators
	friend istream& operator >>(istream& in, Customer& c);

	friend ostream& operator <<(ostream& out, const Customer& c);

};
istream& operator>> (istream& in, Customer& c) {
	in >> c.full_name>>c.no_tickets_bought >> c.card;
	return in;
}ostream& operator<<(ostream& out, const Customer& c)
{
	out << c.full_name << c.no_tickets_bought << c.card;
}