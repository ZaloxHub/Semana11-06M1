#include "pch.h"
#include "DBController.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

SalesController::UserDB::UserDB() {
}

void SalesController::DBController::SaveUsers()
{
	System::Xml::Serialization::XmlSerializer^ writer =
		gcnew System::Xml::Serialization::XmlSerializer(UserDB::typeid);

	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("users.xml");
	writer->Serialize(file, userDB);
	file->Close();
}

void SalesController::DBController::LoadUsers()
{
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(UserDB::typeid);
	System::IO::StreamReader^ file = nullptr;
	try {
		file = gcnew System::IO::StreamReader("users.xml");
		userDB = (UserDB^)reader->Deserialize(file);
	}	catch (Exception^ ex) {
		
		return;
	} 	finally {
		if (file != nullptr) file->Close();
	}
}

SalesController::ProductDB::ProductDB() {

}

void SalesController::ProductDB::Persist()
{
	Stream^ stream = File::Open("products.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::ProductDB::LoadFromBinaryFile() {
	if (File::Exists("products.bin")) {
		Stream^ stream = File::Open("products.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Product^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}


User^ SalesController::DBController::ValidateUser(String^ username, String^ password) {
	User^ user = nullptr;
	//LoadUsers();
	for (int i = 0; i < userDB->ListDB->Count; i++) {
		if (userDB->ListDB[i]->Username->Equals(username) &&
			userDB->ListDB[i]->Password->Equals(password))
			return userDB->ListDB[i];
	}
	return user;
}

int SalesController::DBController::QueryLastUserId()
{
	return userDB->ListDB[userDB->ListDB->Count-1]->Id;
}

void SalesController::DBController::AddUser(User^ user)
{
	userDB->ListDB->Add(user);
	XmlSerializer^ writer = gcnew XmlSerializer(UserDB::typeid);
	StreamWriter^ file = gcnew StreamWriter("users.xml");
	writer->Serialize(file, userDB);
	file->Close();
}


void SalesController::DBController::SaveAdministrators()
{
	System::Xml::Serialization::XmlSerializer^ writer =
		gcnew System::Xml::Serialization::XmlSerializer(AdministratorDB::typeid);

	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("administrators.xml");
	writer->Serialize(file, administratorDB);
	file->Close();
}

void SalesController::DBController::LoadAdministrators()
{
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(AdministratorDB::typeid);
	System::IO::StreamReader^ file = nullptr;
	try {
		file = gcnew System::IO::StreamReader("administrators.xml");
		administratorDB = (AdministratorDB^)reader->Deserialize(file);
	}
	catch (Exception^ ex) {
		return;
	}
	finally {
		if (file != nullptr) file->Close();
	}
}

void SalesController::DBController::AddAdministrator(Administrator^ administrator)
{
	administratorDB->ListDB->Add(administrator);
	SaveAdministrators();
}

void SalesController::DBController::UpdateAdministrator(Administrator^ administrator)
{
	for (int i = 0; i < administratorDB->ListDB->Count; i++) {
		if (administratorDB->ListDB[i]->Id == administrator->Id)
			administratorDB->ListDB[i] = administrator;
	}
	SaveAdministrators();
}

void SalesController::DBController::DeleteAdministrator(int administratorId) {
	for (int i = 0; i < administratorDB->ListDB->Count; i++) {
		if (administratorDB->ListDB[i]->Id == administratorId)
			administratorDB->ListDB->RemoveAt(i);
	}
	SaveAdministrators();
}

List<Administrator^>^ SalesController::DBController::QueryAllAdministrators()
{
	LoadAdministrators();
	return administratorDB->ListDB;
}

Administrator^ SalesController::DBController::QueryAdministratorById(int administratorId)
{
	LoadAdministrators();
	for (int i = 0; i < administratorDB->ListDB->Count; i++) {
		if (administratorDB->ListDB[i]->Id == administratorId)
			return administratorDB->ListDB[i];
	}
	return nullptr;
}


void SalesController::DBController::AddProduct(Product^ p)
{
	productDB->ListDB->Add(p);
	productDB->Persist();
}

void SalesController::DBController::UpdateProduct(Product^ p)
{
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->Id == p->Id)
			productDB->ListDB[i] = p;
	}
	productDB->Persist();
}

void SalesController::DBController::DeleteProduct(int productId)
{
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->Id == productId)
			productDB->ListDB[i]->Status = 'I';
	}
	productDB->Persist();
}

List<Product^>^ SalesController::DBController::QueryAllProducts()
{
	productDB->LoadFromBinaryFile();
	return productDB->ListDB;
}


int SalesController::DBController::QueryLastProductId()
{
	if (productDB->ListDB->Count > 0)
		return productDB->ListDB[productDB->ListDB->Count - 1]->Id;
	else
		return 0;
}

Product^ SalesController::DBController::QueryProductById(int productId)
{
	productDB->LoadFromBinaryFile();
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->Id == productId)
			return productDB->ListDB[i];
	}
	return nullptr;
}


void SalesController::DBController::Init()
{
}


void SalesController::DBController::AddCustomer(Customer^ c)
{
	customerDB->ListDB->Add(c);
	customerDB->Persist();
}

void SalesController::DBController::UpdateCustomer(Customer^ c)
{

}

void SalesController::DBController::DeleteCustomer(int customerId)
{

}

List<Customer^>^ SalesController::DBController::QueryAllCustomers()
{
	List<Customer^>^ customerList = gcnew List<Customer^>();
	return customerList;
}

List<Person^>^ SalesController::DBController::QueryAllPersons()
{
	customerDB->LoadFromBinaryFile();
	List<Person^>^ list = gcnew List<Person^>();
	for (int i = 0; i < customerDB->ListDB->Count; i++) {
		if (customerDB->ListDB[i]->GetType() == Person::typeid ) { // && customerDB->ListDB[i]->Status == 'A') {
			list->Add(dynamic_cast<Person^>(customerDB->ListDB[i]));
		}
	}
	return list;
}

List<Company^>^ SalesController::DBController::QueryAllCompanies()
{
	customerDB->LoadFromBinaryFile();
	List<Company^>^ list = gcnew List<Company^>();
	for (int i = 0; i < customerDB->ListDB->Count; i++) {
		if (customerDB->ListDB[i]->GetType() == Company::typeid) { // && customerDB->ListDB[i]->Status == 'A') {
			list->Add(dynamic_cast<Company^>(customerDB->ListDB[i]));
		}
	}
	return list;
}

Customer^ SalesController::DBController::QueryCustomerById(int customerId)
{
	Customer^ c;
	return c;
}

void SalesController::DBController::AddSalesman(Salesman^ s)
{
	int newId = 1;
	if (salesmanDB->ListDB->Count > 0)
		newId = salesmanDB->ListDB[salesmanDB->ListDB->Count - 1]->Id + 1;
	s->Id = newId;
	salesmanDB->ListDB->Add(s);
	salesmanDB->Persist();
}

void SalesController::DBController::UpdateSalesman(Salesman^ s)
{
	for (int i = 0; i < salesmanDB->ListDB->Count; i++) {
		if (salesmanDB->ListDB[i]->Id == s->Id) {
			salesmanDB->ListDB[i] = s;
			salesmanDB->Persist();
			return;
		}			
	}	
}

void SalesController::DBController::DeleteSalesman(int salesmanId)
{
	for (int i = 0; i < salesmanDB->ListDB->Count; i++) {
		if (salesmanDB->ListDB[i]->Id == salesmanId) {
			salesmanDB->ListDB->RemoveAt(i);
			salesmanDB->Persist();
			return;
		}			
	}	
}

List<Salesman^>^ SalesController::DBController::QueryAllSalesmen()
{
	salesmanDB->LoadFromBinaryFile();
	return salesmanDB->ListDB;
	/*
	List<Salesman^>^ list = gcnew List<Salesman^>();
	for (int i = 0; i < salesmanDB->ListDB->Count; i++) {
		//if (salesmanDB->ListDB[i]->GetType() == Salesman::typeid) { // && customerDB->ListDB[i]->Status == 'A') {
			list->Add(dynamic_cast<Salesman^>(salesmanDB->ListDB[i]));
		//}
	}
	return list;
	*/
}

Salesman^ SalesController::DBController::QuerySalesmanById(int salesmanId)
{
	salesmanDB->LoadFromBinaryFile();
	Salesman^ s = nullptr;
	for (int i = 0; i < salesmanDB->ListDB->Count; i++) {
		if (salesmanDB->ListDB[i]->Id == salesmanId) {
			s = salesmanDB->ListDB[i];
			return s;
		}
	}
	return s;

}

Book^ SalesController::DBController::QueryBookById(int id)
{
	Book^ s = nullptr;
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->Id == id && productDB->ListDB[i]->GetType() == Book::typeid) {
			s = (dynamic_cast<Book^>(productDB->ListDB[i]));
			return s;
		}
	}
	return s;

}

Electronic^ SalesController::DBController::QueryElectronicById(int id)
{
	Electronic^ s = nullptr;
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->Id == id && productDB->ListDB[i]->GetType() == Electronic::typeid) {
			s = (dynamic_cast<Electronic^>(productDB->ListDB[i]));
			return s;
		}
	}
	return s;
}

void SalesController::DBController::AddStoreProduct(StoreProduct^ sp) {

}

List<Book^>^ SalesController::DBController::QueryAllBooks()
{
	productDB->LoadFromBinaryFile();
	List<Book^>^ list = gcnew List<Book^>();
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->GetType() == Book::typeid && productDB->ListDB[i]->Status=='A') {
			list->Add(dynamic_cast<Book^>(productDB->ListDB[i]));
		}			
	}
	return list;
}

List<Electronic^>^ SalesController::DBController::QueryAllElectronics()
{
	productDB->LoadFromBinaryFile();
	List<Electronic^>^ list = gcnew List<Electronic^>();
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->GetType() == Electronic::typeid && productDB->ListDB[i]->Status == 'A') {
			list->Add(dynamic_cast<Electronic^>(productDB->ListDB[i]));
		}
	}
	return list;
}

List<StoreProduct^>^ SalesController::DBController::QueryAllBooksFromStore(int storeId)
{
	List<StoreProduct^>^ list = gcnew List<StoreProduct^>();
	return list;
}

List<StoreProduct^>^ SalesController::DBController::QueryAllElectronicsFromStore(int storeId)
{
	List<StoreProduct^>^ list = gcnew List<StoreProduct^>();
	return list;
}

StoreProduct^ SalesController::DBController::QueryProductByIdFromStore(int productId)
{
	return nullptr;
}

/*
void SalesController::DBController::SaveStoreProducts(Store^ store)
{
	if (store != nullptr && store->StoreProductList != nullptr && store->StoreProductList->Count > 0) {
		Stream^ stream = File::Open("storeProducts.bin", FileMode::Create);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		bFormatter->Serialize(stream, store->StoreProductList);
		stream->Close();
	}
}
*/
/*
void SalesController::DBController::LoadStoreProducts(Store^ store) {

	if (File::Exists("storeProducts.bin")) {
		Stream^ stream = File::Open("storeProducts.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		store->StoreProductList = (List <StoreProduct^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}

}
*/
void SalesController::DBController::SaveStores()
{
	/* Save stores in an XML file. */
	/*
	System::Xml::Serialization::XmlSerializer^ writer =
		gcnew System::Xml::Serialization::XmlSerializer(StoreDB::typeid);

	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("stores.xml");
	StoreDB^ storeDBWithoutStoreProducts = gcnew StoreDB();
	storeDBWithoutStoreProducts->ListDB = storeDB->ListDB;
	for (int i = 0; i < storeDBWithoutStoreProducts->ListDB->Count; i++) {
		storeDBWithoutStoreProducts->ListDB[i]->StoreProductList = nullptr;
	}
	writer->Serialize(file, storeDBWithoutStoreProducts);
	file->Close();
	*/
	/* Save stores with store products in a binary file. */
	if (storeDB != nullptr) {// && storeDB->StoreProductList != nullptr && store->StoreProductList->Count > 0) {
		Stream^ stream = File::Open("stores.bin", FileMode::Create);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		bFormatter->Serialize(stream, storeDB->ListDB);
		stream->Close();
	}
}

void SalesController::DBController::LoadStores()
{
	/* Load stores from an XML file. */
	/*
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(StoreDB::typeid);
	System::IO::StreamReader^ file = nullptr;
	try {
		file = gcnew System::IO::StreamReader("stores.xml");
		storeDB = (StoreDB^)reader->Deserialize(file);
	}
	catch (Exception^ ex) {
		return;
	}
	finally {
		if (file != nullptr) file->Close();
	}
	*/
	if (File::Exists("stores.bin")) {
		Stream^ stream = File::Open("stores.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		storeDB->ListDB = (List <Store^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}

List<Store^>^ SalesController::DBController::QueryAllStores()
{
	LoadStores();
	return storeDB->ListDB;
}

void SalesController::DBController::AddStore(Store^ store)
{
	storeDB->ListDB->Add(store);
	SaveStores();
}

void SalesController::DBController::UpdateStore(Store^ store)
{
	for (int i = 0; i < storeDB->ListDB->Count; i++) {
		if (storeDB->ListDB[i]->Id == store->Id)
			storeDB->ListDB[i] = store;
	}

	//if (store->StoreProductList == nullptr  )
		SaveStores();
	//else
	//	SaveStoreProducts(store);
}

void SalesController::DBController::DeleteStore(int storeId)
{
	for (int i = 0; i < storeDB->ListDB->Count; i++) {
		if (storeDB->ListDB[i]->Id == storeId)
			storeDB->ListDB->RemoveAt(i);
	}
	SaveStores();
}

int SalesController::DBController::QueryLastStoreId()
{
	LoadStores();
	if (storeDB->ListDB->Count <= 0)
		return 0;
	else
		return storeDB->ListDB[storeDB->ListDB->Count-1]->Id;
}


Store^ SalesController::DBController::QueryStoreById(int storeId)
{
	LoadStores();
	Store^ s = nullptr;
	for (int i = 0; i < storeDB->ListDB->Count; i++) {
		if (storeDB->ListDB[i]->Id == storeId) {
			s = storeDB->ListDB[i];
			return s;
		}
	}
	return s;
}


List<Book^>^ SalesController::DBController::QueryAllBooksByCoincidence(String^ str)
{
	List<Book^>^ list = gcnew List<Book^>();
	return list;
}

List<Electronic^>^ SalesController::DBController::QueryAllElectronicsByCoincidence(String^ str)
{
	List<Electronic^>^ list = gcnew List<Electronic^>();
	return list;
}

void SalesController::DBController::RegisterSale(Sale^ sale)
{
	saleDB->ListDB->Add(sale);
	saleDB->Persist();
}

void SalesController::CustomerDB::Persist()
{
	Stream^ stream = File::Open("customer.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::CustomerDB::LoadFromBinaryFile()
{
	if (File::Exists("customer.bin")) {
		Stream^ stream = File::Open("customer.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Customer^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}

void SalesController::SaleDB::Persist()
{
	Stream^ stream = File::Open("sales.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::SalesmanDB::Persist()
{
	Stream^ stream = File::Open("salesmen.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();

}

void SalesController::SalesmanDB::LoadFromBinaryFile()
{
	if (File::Exists("salesmen.bin")) {
		Stream^ stream = File::Open("salesmen.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Salesman^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
