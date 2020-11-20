#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;

namespace SalesController {

	public ref class SalesManager {
		public:
			static User^ ValidateUser(String^ username, String^ password);
			static void AddUser(User ^);
			static int QueryLastUserId();
			static void AddAdministrator(Administrator^);
			static void UpdateAdministrator(Administrator^);
			static void DeleteAdministrator(int);
			static Administrator^ QueryAdministratorById(int);
			static List<Administrator^>^ QueryAllAdministrators();
			
			static void AddProduct(Product^ );
			static void UpdateProduct(Product^ );
			static void DeleteProduct(int );
			static Product^ QueryProductById(int);
			static Book^ QueryBookById(int);
			static Electronic^ QueryElectronicById(int);
			static StoreProduct^ QueryProductByIdFromStore(int productId);
			static List<Product^>^ QueryProductsByName(String^ name);
			static List<Product^>^ QueryProductsByDescription(String ^ description);

			static List<Product^> ^QueryAllProducts();
			static List<Book^>^ QueryAllBooks();
			static List<Electronic^>^ QueryAllElectronics();
			static int QueryLastProductId();

			static void AddSalesman(Salesman^);
			static void UpdateSalesman(Salesman^);
			static void DeleteSalesman(int salesmanId);
			static Salesman^ QuerySalesmanById(int salesmanId);
			static List<Salesman^>^ QueryAllSalesmen();

			static void AddCustomer(Customer^);
			static void UpdateCustomer(Customer^);
			static void DeleteCustomer(int customerId);
			static List<Customer^>^ QueryAllCustomers();
			static List<Person^>^ QueryAllPersons();
			static List<Company^>^ QueryAllCompanies();
			static Customer^ QueryCustomerById(int customerId);

			static List<Store^>^ QueryAllStores();
			static void AddStore(Store^);
			static void UpdateStore(Store^);
			static void DeleteStore(int storeId);
			static Store^ QueryStoreById(int storeId);
			static int QueryLastStoreId();

			static void RegisterSale(Sale^);

	};

	
}
