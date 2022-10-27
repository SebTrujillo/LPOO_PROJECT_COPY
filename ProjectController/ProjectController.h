#pragma once

using namespace System;
using namespace LPOOPROJECT;
using namespace System::Collections::Generic;
using namespace System::IO;


namespace ProjectController {
	public ref class Controller
	{
		private:
			static List <Product^>^ productList = gcnew List<Product^>();
			static List <SellerCompany^>^ sellerCompanyList = gcnew List<SellerCompany^>();
			static List <Natural^>^ naturalList = gcnew List<Natural^>();
			static List <Company^>^ customerCompanyList = gcnew List<Company^>();



		// TODO: Add your methods for this class here.
		public:

			//CRUD PRODUCTOS
			static int AddProduct(Product^ product); // añadimos un producto nuevo al sistema
			static int UpdateProduct(Product^ product); // actualizamos atributos de un producto EXISTENTE
			static int DeleteProduct(int productId); // borramos un producto existente
			static List<Product^>^ QueryAllProducts(); // consulta todos los productos
			static Product^ QueryProductById(int productId); // consulta solo por el producto que tiene determinado id
			static List<String^>^ QueryProductTypes();
			static String^ QueryTypeByName(String^ typeName);
			static void PersistProducts();
			static void LoadProductsData();
			static List<Product^>^ QueryProductsByNameOrDescription(String^);

			//CRUD EMPRESAS PROVEEDORAS
			static int AddSellerCompany(SellerCompany^ sellerCompany);
			static int UpdateSellerCompany(SellerCompany^ sellerCompany);
			static int DeleteSellerCompany(int sellerCompanyId); 
			static List<SellerCompany^>^ QueryAllSellerCompanies(); 
			static SellerCompany^ QuerySellerCompanyById(int sellerCompanyId);
			static void PersistSellerCompanies();
			static void LoadSellerCompaniesData();

			//CRUD CLIENTES como PERSONA NATURAL
			static int AddCustomerNatural(Natural^ natural);
			static int UpdateCustomerNatural(Natural^ natural);
			static int DeleteCustomerNatural(int naturalId);
			static List<Natural^>^ QueryAllCustomerNaturals();
			static Natural^ QueryCustomerNaturalById(int naturalId);
			static void PersistCustomerNaturals();
			static void LoadCustomerNaturalsData();

			//CRUD CLIENTES como EMPRESA 
			static int AddCustomerCompany(Company^ customerCompany);
			static int UpdateCustomerCompany(Company^ customerCompany);
			static int DeleteCustomerCompany(int customerCompanyId);
			static List<Company^>^ QueryAllCustomerCompanies();
			static Company^ QueryCustomerCompanyById(int customerCompanyId);
			static void PersistCustomerCompanies();
			static void LoadCustomerCompaniesData();
			
			//Autenticación de Vendedor
			static SellerCompany^ LoginCompany(String^ username, String^ password); 
	};
}
