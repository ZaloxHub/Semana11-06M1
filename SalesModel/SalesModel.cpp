#include "pch.h"

#include "SalesModel.h"

SalesModel::Person::Person(int id, String^ firstName, String^ lastName, String^ email, String^ dni) {
	this->Id = id;
	this->FirstName = firstName;
	this->LastName = lastName;
	this->Email = email;
	this->Dni = dni;
}

double SalesModel::Electronic::GetTax() {
	return 0.0;
}

SalesModel::User::User()
{
}

SalesModel::User::User(int id, String^ username, String^ password, String^ firstName, String^ lastName, char gender)
{
	Id = id;
	Username = username;
	Password = password;
	FirstName = firstName;
	LastName = lastName;
	Gender = gender;
}
SalesModel::Book::Book()
{

}

SalesModel::Book::Book(int id, String^ name, String^ description, String^ author, String^ title, double price,
	int stockTotal, String^ edition, String^ editorial, int year, char status) : 
	SalesModel::Product::Product(id, name, description, stockTotal, price, status){
	/*
	Id = id;
	Name = name;
	Description = description;
	Price = price;
	StockTotal = stockTotal;
	Status = status;
	*/
	Author = author;
	Title = title;
	Edition = edition;
	Editorial = editorial;
	Year = year;	
}

SalesModel::Product::Product()
{
	
}

SalesModel::Product::Product(int id, String^ name, String^ description, int stockTotal, double price, char status)
{
	Id = id;
	Name = name;
	Description = description;
	Price = price;
	StockTotal = stockTotal;
	Status = status;
}
