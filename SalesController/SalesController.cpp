#include "pch.h"

#include "SalesController.h"
#include "DBController.h"


using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace SalesModel;
using namespace System::Data::SqlClient;


User^ SalesController::SalesManager::ValidateUser(String^ username, String^ password)
{
	return DBController::ValidateUser(username, password);
}

void SalesController::SalesManager::AddUser(User^ user)
{
	DBController::AddUser(user);
}

int SalesController::SalesManager::QueryLastUserId()
{
	return DBController::QueryLastUserId();
}
void SalesController::SalesManager::AddAdministrator(Administrator^ administrator) {
	DBController::AddAdministrator(administrator);
}
void SalesController::SalesManager::UpdateAdministrator(Administrator^ administrator) {
	DBController::UpdateAdministrator(administrator);
}
void SalesController::SalesManager::DeleteAdministrator(int administratorId) {
	DBController::DeleteAdministrator(administratorId);
}
List<Administrator^>^ SalesController::SalesManager::QueryAllAdministrators()
{
	return DBController::QueryAllAdministrators();
}
Administrator^ SalesController::SalesManager::QueryAdministratorById(int administratorId) {
	return DBController::QueryAdministratorById(administratorId);
}
/*
int SalesController::SalesManager::QueryLastAdministratorId()
{
	return DBController::QueryLastAdministratorId();
}
*/
void SalesController::SalesManager::AddProduct(Product^ product)
{
	/* Algoritmo para agregar un producto */
	DBController::AddProduct(product);
}

void SalesController::SalesManager::UpdateProduct(Product^ product)
{
	DBController::UpdateProduct(product);
}

void SalesController::SalesManager::DeleteProduct(int productId)
{
	DBController::DeleteProduct(productId);
}

Product^ SalesController::SalesManager::QueryProductById(int productId)
{
	return DBController::QueryProductById(productId);
}

Book^ SalesController::SalesManager::QueryBookById(int productId)
{
	return DBController::QueryBookById(productId);
}

Electronic^ SalesController::SalesManager::QueryElectronicById(int productId)
{
	return DBController::QueryElectronicById(productId);
}

StoreProduct^ SalesController::SalesManager::QueryProductByIdFromStore(int productId)
{
	return DBController::QueryProductByIdFromStore(productId);
}

List<Product^>^ SalesController::SalesManager::QueryProductsByName(String^ name)
{
	List<Book^> ^bookList =  DBController::QueryAllBooksByCoincidence(name);
	List<Electronic^>^ electronicList = DBController::QueryAllElectronicsByCoincidence(name);
	List<Product^>^ productList = gcnew List<Product^>();

	for (int i = 0; i < bookList->Count; i++)
		productList->Add(bookList[i]);
	for (int i = 0; i < electronicList->Count; i++)
		productList->Add(electronicList[i]);

	return productList;
}

List<Product^>^ SalesController::SalesManager::QueryProductsByDescription(String^ description)
{
	List<Book^>^ bookList = DBController::QueryAllBooksByCoincidence(description);
	List<Electronic^>^ electronicList = DBController::QueryAllElectronicsByCoincidence(description);
	List<Product^>^ productList = gcnew List<Product^>();

	for (int i = 0; i < bookList->Count; i++)
		productList->Add(bookList[i]);
	for (int i = 0; i < electronicList->Count; i++)
		productList->Add(electronicList[i]);

	return productList;
}

List<Product^>^ SalesController::SalesManager::QueryAllProducts()
{
	return DBController::QueryAllProducts();
}

List<Book^>^ SalesController::SalesManager::QueryAllBooks()
{
	return DBController::QueryAllBooks();
}

List<Electronic^>^ SalesController::SalesManager::QueryAllElectronics()
{
	return DBController::QueryAllElectronics();
}

int SalesController::SalesManager::QueryLastProductId()
{
	return DBController::QueryLastProductId();
}

void SalesController::SalesManager::AddSalesman(Salesman^ salesman)
{
	DBController::AddSalesman(salesman);
}

void SalesController::SalesManager::UpdateSalesman(Salesman^ salesman)
{
	DBController::UpdateSalesman(salesman);
}

void SalesController::SalesManager::DeleteSalesman(int salesmanId)
{
	DBController::DeleteSalesman(salesmanId);
}

List<Salesman^>^ SalesController::SalesManager::QueryAllSalesmen()
{
	return DBController::QueryAllSalesmen();
}

Salesman^ SalesController::SalesManager::QuerySalesmanById(int salesmanId)
{
	return DBController::QuerySalesmanById(salesmanId);
}

void SalesController::SalesManager::AddCustomer(Customer^ customer)
{
	DBController::AddCustomer(customer);
}

void SalesController::SalesManager::UpdateCustomer(Customer^ customer)
{
	DBController::UpdateCustomer(customer);
}

void SalesController::SalesManager::DeleteCustomer(int customerId)
{
	DBController::DeleteCustomer(customerId);
}

List<Customer^>^ SalesController::SalesManager::QueryAllCustomers() {
	return DBController::QueryAllCustomers();
}

List<Person^>^ SalesController::SalesManager::QueryAllPersons()
{
	return DBController::QueryAllPersons();
}

List<Company^>^ SalesController::SalesManager::QueryAllCompanies()
{
	return DBController::QueryAllCompanies();
}

Customer^ SalesController::SalesManager::QueryCustomerById(int customerId) {
	return DBController::QueryCustomerById(customerId);
}

List<Store^>^ SalesController::SalesManager::QueryAllStores()
{
	return DBController::QueryAllStores();
}

void SalesController::SalesManager::AddStore(Store^ store)
{
	DBController::AddStore(store);
}

void SalesController::SalesManager::UpdateStore(Store^ store)
{
	DBController::UpdateStore(store);
}

void SalesController::SalesManager::DeleteStore(int storeId)
{
	DBController::DeleteStore(storeId);
}

int SalesController::SalesManager::QueryLastStoreId()
{
	return DBController::QueryLastStoreId();
}

Store^ SalesController::SalesManager::QueryStoreById(int storeId) {
	return DBController::QueryStoreById(storeId);
}


void SalesController::SalesManager::RegisterSale(Sale^ sale)
{
	DBController::RegisterSale(sale);
}


SalesController::SaleDB::SaleDB()
{
	
}
