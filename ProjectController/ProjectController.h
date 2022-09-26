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

			//CRUD EMPRESAS PROVEEDORAS
			static int AddSellerCompany(SellerCompany^ sellerCompany);
			static int UpdateSellerCompany(SellerCompany^ sellerCompany);
			static int DeleteSellerCompany(int sellerCompanyId); 
			static List<SellerCompany^>^ QueryAllSellerCompanies(); 
			static SellerCompany^ QuerySellerCompanyById(int sellerCompanyId);
	};
}
