#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;
using namespace SalesModel;

namespace SalesController {
	[Serializable]
	public ref class UserDB {
	public:
		List <User^>^ ListDB = gcnew List<User^>();
		UserDB();
	};

	[Serializable]
	public ref class AdministratorDB {
	public:
		List <Administrator^>^ ListDB = gcnew List<Administrator^>();
	};

	public ref class ProductDB {
	public:
		List <Product^>^ ListDB = gcnew List<Product^>();
		ProductDB();
		void Persist();
		void LoadFromBinaryFile();
	};

	public ref class StoreDB {
	public:
		List <Store^>^ ListDB = gcnew List<Store^>();
	};

	public ref class StoreProductDB
	{
	public:
		List <StoreProduct^>^ ListDB = gcnew List<StoreProduct^>();
	};

	public ref class SalesmanDB
	{
		public:
			List <Salesman^>^ ListDB = gcnew List<Salesman^>();
			void Persist();
			void LoadFromBinaryFile();
	};

	public ref class CustomerDB {
		public:
			//List<Person^>^ PersonListDB = gcnew List<Person^>();
			//List<Company^>^ CompanyListDB = gcnew List<Company^>();
			List <Customer^>^ ListDB = gcnew List<Customer^>();
			void Persist();
			void LoadFromBinaryFile();
	};

	public ref class SaleDB {
		public:
			List<Sale^>^ ListDB = gcnew List<Sale^>();
			void Persist();
			SaleDB();
	};

	public ref class DBController {
		private:
			static UserDB^ userDB = gcnew UserDB();
			static AdministratorDB^ administratorDB = gcnew AdministratorDB();
			static ProductDB^ productDB = gcnew ProductDB();
			static StoreDB^ storeDB = gcnew StoreDB();
			static StoreProductDB^ storeProductDB = gcnew StoreProductDB();
			static SalesmanDB^ salesmanDB = gcnew SalesmanDB();
			static CustomerDB^ customerDB = gcnew CustomerDB();
			static SaleDB^ saleDB = gcnew SaleDB();

		public:
			static void Init();
			static void SaveUsers();
			static void LoadUsers();

			static User^ ValidateUser(String^ username, String^ password);
			static int QueryLastUserId();
			static void AddUser(User ^);
			static void AddAdministrator(Administrator^);
			static void UpdateAdministrator(Administrator^);
			static void DeleteAdministrator(int administratorId);
			static Administrator^ QueryAdministratorById(int administratorId);
			static List<Administrator^>^ QueryAllAdministrators();
			static void SaveAdministrators();
			static void LoadAdministrators();
			
			/*Customer*/
			static void AddCustomer(Customer^);
			static void UpdateCustomer(Customer^);
			static void DeleteCustomer(int customerId);
			static List<Customer^>^ QueryAllCustomers();
			static List<Person^>^ QueryAllPersons();
			static List<Company^>^ QueryAllCompanies();
			static Customer^ QueryCustomerById(int customerId);

			/*Salesman*/
			static void AddSalesman(Salesman^);
			static void UpdateSalesman(Salesman^);
			static void DeleteSalesman(int salesmanId);
			static List<Salesman^>^ QueryAllSalesmen();
			static Salesman^ QuerySalesmanById(int salesmanId);

			/* Product */
			static Product^ QueryProductById(int);
			static List<Product^>^ QueryAllProducts();
			static int QueryLastProductId();
			static Book^ QueryBookById(int);
			static Electronic^ QueryElectronicById(int);
			static void AddProduct(Product^);
			static void UpdateProduct(Product^);
			static void DeleteProduct(int productId);
			static void AddStoreProduct(StoreProduct^);
			static List<Book^>^ QueryAllBooks();
			static List<Electronic^>^ QueryAllElectronics();
			static List<StoreProduct^>^ QueryAllBooksFromStore(int storeId);
			static List<StoreProduct^>^ QueryAllElectronicsFromStore(int storeId);
			static StoreProduct^ QueryProductByIdFromStore(int productId);
			//static void SaveStoreProducts(Store^);
			//static void LoadStoreProducts(Store^);

			/* Store */
			static void SaveStores();
			static void LoadStores();
			static List<Store^>^ QueryAllStores();
			static void AddStore(Store^);
			static void UpdateStore(Store^);
			static void DeleteStore(int storeId);
			static Store^ QueryStoreById(int storeId);
			static int QueryLastStoreId();

			static List<Book^>^ QueryAllBooksByCoincidence(String^);
			static List<Electronic^>^ QueryAllElectronicsByCoincidence(String^);

			static void RegisterSale(Sale^);
	};
}

