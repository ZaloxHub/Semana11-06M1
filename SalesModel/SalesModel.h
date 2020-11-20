#pragma once
using namespace System;
using namespace System::Collections::Generic;

/*
	Se define el namespace SalesModel para tener un bloque de definiciones de clases
	que corresponden al modelo de la solución. Se entiende como Modelo (Model) a la capa
	que contiene las clases que son necesarias para modelar las entidades que participan
	en la solución. Esta estrategia sigue el patrón de arquitectura MVC (Model View Controller).
*/
namespace SalesModel {
	/*
		La clase User modela a un usuario del sistema
	*/
	[Serializable]
	public ref class User {
	public:
		property int Id;
		property String^ Username;
		property String^ Password;
		property String^ FirstName;
		property String^ LastName;
		property char Gender;
		User();
		User(int id, String^ username, String^ password, String^ firstName, String^ lastName, char gender);
	};

	/*
		La clase Administrator modela a un gerente
		Administrator hereda de User, eso significa que un gerente es un tipo de usuario del sistema.
	*/
	[Serializable]
	public ref class Administrator : public User {
	public:
		property int EmployeesNumber;
		property String^ Department;
	};

	/*
		La clase Customer modela a un cliente a quien se realiza la venta.
		Customer hereda de User, eso significa que todo cliente es un tipo de usuario del sistema.
	*/
	[Serializable]
	public ref class Customer : public User {
	public:
		property String^ Address;
		property String^ PhoneNumber;
		property String^ Email;
		property char Status;
	};

	/*
		La clase Company modela a una empresa que es un tipo de cliente.
		Company hereda de Customer, eso significa que una compañía es un tipo de cliente.
	*/
	[Serializable]
	public ref class Company : public Customer {
	public:
		property String^ Name;
		property String^ Ruc;
		property String^ LegalDeparment;
		property String^ WebPage;
	};

	/*
		La clase Person modela a una persona natural que es un tipo de cliente.
		Person hereda de Customer, eso significa que una persona natural es un tipo de cliente.
	*/
	[Serializable]
	public ref class Person : public Customer {
	public:
		property String^ Dni;
		property String^ Birthday;

		Person() {};
		Person(int id, String^ firstName, String^ lastName, String^ email, String^ dni);
		String^ ToString() override { return Id + " " + FirstName + " " + LastName; }
	};

	/*
		La clase Product modela un producto que se gestiona en el sistema de ventas.
	*/
	[Serializable]
	public ref class Product {
	public:
		property int Id;
		property String^ Name;
		property String^ Description;
		property int StockTotal;
		property double Price;
		property char Status;
		property array<Byte>^ Photo;
		Product();
		Product(int id, String^ name, String^ description, int stockTotal, double price, char status);
	};

	/*
		La clase Book modela un libro como producto para la venta.
		Book hereda de Product, eso significa que un libro es un tipo de producto.
	*/
	[Serializable]
	public ref class Book : public Product {
	public:
		property String^ Author;
		property String^ Title;
		property String^ Edition;
		property String^ Editorial;
		property int Year;
		Book();
		Book(int id, String^ name, String^ description, String^ author, String ^title, double price, 
			int stockTotal, String^ edition, String^ editorial, int year, char status);
	};

	/*
		La interfaz Taxable modela un contrato de obligación para quien implemente o realice la interfaz, debe de programar el método GetTax().
	*/
	public interface class Taxable {
		double GetTax();
	};

	/*
		La clase Electronic modela un producto electrónico para la venta.
		Electronic hereda de Product y Taxable, eso significa que un producto electrónico es un tipo de producto y a la vez es susceptible a impuestos.
	*/
	[Serializable]
	public ref class Electronic : public Product, Taxable {
	public:
		property String^ Brand;
		property String^ Family;
		property String^ Model;
		property int Warranty;
		virtual double GetTax();
	};

	/*
		La clase StoreProduct modela un producto por tienda.
	*/
	[Serializable]
	public ref class StoreProduct
	{
	public:
		property int Stock;
		property int MinStock;
		property double Discount;
		property char Status;
		property Product^ Product;
	};

	/*
		La clase Store modela una tienda.
	*/
	[Serializable]
	public ref class Store {
	public:
		property int Id;
		property String^ Name;
		property String^ Address;
		property String^ PostalCode;
		property List<StoreProduct^>^ StoreProductList;
	};

	/*
		La clase Salesman modela a un vendedor.
		Salesman hereda de User, eso significa que un vendedor es un tipo de usuario del sistema.
	*/
	[Serializable]
	public ref class Salesman : public User {
	public:
		property double Salary;
		property double Quota;
		property Store^ Store;
		property char Status;
		Salesman() {}
		Salesman(int id, String^ firstName, String^ lastName, char gender, double salary, double quota) {
			this->Id = id;
			this->FirstName = firstName;
			this->LastName = lastName;
			this->Gender = gender;
			this->Salary = salary;
			this->Quota = quota;
			this->Status = 'A';
		}
	};


	/*
		La clase SaleDetail modela a un detalle de venta.
	*/
	[Serializable]
	public ref class SaleDetail {
	public:
		property int Quantity;
		property double SubTotal;
		property StoreProduct^ Product;
	};

	/*
		La clase Sale modela a una venta.
	*/
	[Serializable]
	public ref class Sale {
	public:
		property int Id;
		property double Total;
		property char Status;
		property String^ Date;
		property Salesman^ Salesman;
		property Customer^ Customer;
		property Store^ Store;
		property List<SaleDetail^>^ Details; //Puntero a una lista de punteros a SaleDetail
	};


}
