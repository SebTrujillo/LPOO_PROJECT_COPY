#include "pch.h"

#include "ProjectController.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

void ProjectController::Controller::PersistProducts() {
    XmlSerializer^ writer = gcnew XmlSerializer(productList->GetType());
    StreamWriter^ sw = gcnew StreamWriter("Products.xml");
    writer->Serialize(sw, productList);
    sw->Close();
}

void ProjectController::Controller::LoadProductsData() {

    /*productList = gcnew List<Product^>();
    //Lectura desde un archivo XML
    Stream^ sr = nullptr;
    try {
        XmlSerializer^ Reader = gcnew XmlSerializer(productList->GetType());
        StreamReader^ sr = gcnew StreamReader("Products.xml");
        productList = (List<Product^>^) Reader->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }*/
    XmlSerializer^ Reader = gcnew XmlSerializer(productList->GetType());
    StreamReader^ sr = gcnew StreamReader("Products.xml");
    productList = (List<Product^>^) Reader->Deserialize(sr);
    sr->Close();
}


void ProjectController::Controller::PersistSellerCompanies() {
    XmlSerializer^ writer = gcnew XmlSerializer(sellerCompanyList->GetType());
    StreamWriter^ sw = gcnew StreamWriter("SellerCompanies.xml");
    writer->Serialize(sw,sellerCompanyList);
    sw->Close();
}

void ProjectController::Controller::LoadSellerCompaniesData() {
    XmlSerializer^ Reader = gcnew XmlSerializer(sellerCompanyList->GetType());
    StreamReader^ sr = gcnew StreamReader("SellerCompanies.xml");
    sellerCompanyList = (List<SellerCompany^>^) Reader->Deserialize(sr);
    sr->Close();
}

SellerCompany^ ProjectController::Controller::LoginCompany(String^ username, String^ password)
{
    /*SellerCompany^ sellercompany;
    if (username == "sebastian" && password == "password") {
        sellercompany = gcnew SellerCompany();
        sellercompany->RUC = "N123456";
        sellercompany->Name = "Paruro";
        sellercompany->Address = "Calle Paruro 123";
        sellercompany->Email = "paruro@gmail.com";
        sellercompany->PhoneNumber = "987654321";
        sellercompany->User= "sebastian";

    }
    else if (username == "jose" && password == "password") {
        sellercompany = gcnew SellerCompany();
        sellercompany->RUC = "N123456";
        sellercompany->Name = "Sodimac";
        sellercompany->Address = "Calle Paruro 123";
        sellercompany->Email = "paruro@gmail.com";
        sellercompany->PhoneNumber = "987654321";
        sellercompany->User = "sebastian";

    }
    else if (username == "maicol" && password == "password") {
        sellercompany = gcnew SellerCompany();
        sellercompany->RUC = "N123456";
        sellercompany->Name = "Maestro";
        sellercompany->Address = "Calle Paruro 123";
        sellercompany->Email = "paruro@gmail.com";
        sellercompany->PhoneNumber = "987654321";
        sellercompany->User = "sebastian";

    }
    return sellercompany;*/
    SellerCompany^ sellerCompany;
    LoadSellerCompaniesData();
    for (int i = 0; i < sellerCompanyList->Count; i++) {
        if (username == sellerCompanyList[i]->User &&
            password == sellerCompanyList[i]->Password) {
            sellerCompany = sellerCompanyList[i];
            return sellerCompany;
        }
    }
    return sellerCompany;
}


int ProjectController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    PersistProducts();
    return 1;
}

int ProjectController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (product->Id == productList[i]->Id) {
            productList[i] = product;
            PersistProducts();
            return 1;
        }
    PersistProducts();
    return 0;
}

int ProjectController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productId == productList[i]->Id) {
            productList->RemoveAt(i);
            PersistProducts();
            return 1;
        }
    PersistProducts();
    return 0;
}

List<Product^>^ ProjectController::Controller::QueryAllProducts()
{
    LoadProductsData();
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Stock > 0) {
            activeProductsList->Add(productList[i]);
        }
    }
    return activeProductsList;
}

Product^ ProjectController::Controller::QueryProductById(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productId == productList[i]->Id) {
            return productList[i];
        }
    return nullptr;
}

List<String^>^ ProjectController::Controller::QueryProductTypes()
{
    List<String^>^ typesList = gcnew List<String^>();
    StreamReader^ sr = gcnew StreamReader("ProductTypes.txt");
    while (!sr->EndOfStream) {
        typesList->Add(sr->ReadLine());
    }
    sr->Close();
    return typesList;
}

String^ ProjectController::Controller::QueryTypeByName(String^ typeName)
{
    List<String^>^ typesList = gcnew List<String^>();
    StreamReader^ sr = gcnew StreamReader("ProductTypes.txt");
    while (!sr->EndOfStream) {
        typesList->Add(sr->ReadLine());
    }
    sr->Close();
    for (int i = 0; i < typesList->Count; i++)
        if (typeName == typesList[i]) {
            return typesList[i];
        }
    return nullptr;
}

List<Product^>^ ProjectController::Controller::QueryProductsByNameOrDescription(String^ value)
{
    LoadProductsData();
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(value) ||
            productList[i]->Description->Contains(value))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

Product^ ProjectController::Controller::QueryProductBySellerCompany(String^ sellerCompanyName)
{
    LoadProductsData();
    for (int i = 0; i < productList->Count; i++) {
        if (sellerCompanyName == productList[i]->SellerCompany->Name) {
            return productList[i];
        }
    }
    return nullptr;
}

List<Product^>^ ProjectController::Controller::QueryAllProductsBySeller(String^ sellerCompanyName)
{
    LoadProductsData();
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->SellerCompany->Name->Contains(sellerCompanyName))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

Product^ ProjectController::Controller::QueryProductByType(String^ productType)
{
    LoadProductsData();
    for (int i = 0; i < productList->Count; i++) {
        if (productType == productList[i]->Type) {
            return productList[i];
        }
    }
    return nullptr;
}

List<Product^>^ ProjectController::Controller::QueryAllProductsByType(String^ productType)
{
    LoadProductsData();
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Type->Contains(productType))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}

int ProjectController::Controller::AddSellerCompany(SellerCompany^ sellerCompany)
{
    sellerCompanyList->Add(sellerCompany);
    PersistSellerCompanies();
    return 1;
}

int ProjectController::Controller::UpdateSellerCompany(SellerCompany^ sellerCompany)
{
    for (int i = 0; i < sellerCompanyList->Count; i++)
        if (sellerCompany->Id == sellerCompanyList[i]->Id) {
            sellerCompanyList[i] = sellerCompany;
            PersistSellerCompanies();
            return 1;
        }
    PersistSellerCompanies();
    return 0;
}

int ProjectController::Controller::DeleteSellerCompany(int sellerCompanyId)
{
    for (int i = 0; i < sellerCompanyList->Count; i++)
        if (sellerCompanyId == sellerCompanyList[i]->Id) {
            sellerCompanyList->RemoveAt(i);
            PersistSellerCompanies();
            return 1;
        }
    PersistSellerCompanies();
    return 0;
}

List<SellerCompany^>^ ProjectController::Controller::QueryAllSellerCompanies()
{
    LoadSellerCompaniesData();
    List<SellerCompany^>^ activeSellerList = gcnew List<SellerCompany^>(); // se asume que todos estan activos si estan
    for (int i = 0; i < sellerCompanyList->Count; i++) { // en el sistema
            activeSellerList->Add(sellerCompanyList[i]);
    }
    return activeSellerList;
}

SellerCompany^ ProjectController::Controller::QuerySellerCompanyById(int sellerCompanyId)
{
    for (int i = 0; i < sellerCompanyList->Count; i++)
        if (sellerCompanyId == sellerCompanyList[i]->Id) {
            return sellerCompanyList[i];
        }
    return nullptr;
}

SellerCompany^ ProjectController::Controller::QuerySellerCompanyByName(String^ sellerCompanyName)
{
    for (int i = 0; i < sellerCompanyList->Count; i++)
        if (sellerCompanyName == sellerCompanyList[i]->Name) {
            return sellerCompanyList[i];
        }
    return nullptr;
}

int ProjectController::Controller::AddCustomerCompany(Company^ customerCompany)
{
    customerCompanyList->Add(customerCompany);
    PersistCustomerCompanies();
    return 1;
}

int ProjectController::Controller::UpdateCustomerCompany(Company^ customerCompany)
{
    for (int i = 0; i < customerCompanyList->Count; i++)
        if (customerCompany->Id == customerCompanyList[i]->Id) {
            customerCompanyList[i] = customerCompany;
            PersistCustomerCompanies();
            return 1;
        }
    PersistCustomerCompanies();
    return 0;
}

int ProjectController::Controller::DeleteCustomerCompany(int customerCompanyId)
{
    for (int i = 0; i < customerCompanyList->Count; i++)
        if (customerCompanyId == customerCompanyList[i]->Id) {
            customerCompanyList->RemoveAt(i);
            PersistCustomerCompanies();
            return 1;
        }
    PersistCustomerCompanies();
    return 0;

}

List<Company^>^ ProjectController::Controller::QueryAllCustomerCompanies()
{
    LoadCustomerCompaniesData();
    List<Company^>^ activeCustomerCompaniesList = gcnew List<Company^>();
    for (int i = 0; i < customerCompanyList->Count; i++) {
        activeCustomerCompaniesList->Add(customerCompanyList[i]);
    }
    return activeCustomerCompaniesList;

    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

Company^ ProjectController::Controller::QueryCustomerCompanyById(int customerCompanyId)
{

    for (int i = 0; i < customerCompanyList->Count; i++) {
        if (customerCompanyId == customerCompanyList[i]->Id)
            return customerCompanyList[i];
    }
    return nullptr;
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

void ProjectController::Controller::PersistCustomerCompanies()
{
    XmlSerializer^ writer = gcnew XmlSerializer(customerCompanyList->GetType());
    StreamWriter^ sw = gcnew StreamWriter("CustomerCompanies.xml");
    writer->Serialize(sw, customerCompanyList);
    sw->Close();
    //throw gcnew System::NotImplementedException();
}

void ProjectController::Controller::LoadCustomerCompaniesData()
{
    XmlSerializer^ Reader = gcnew XmlSerializer(customerCompanyList->GetType());
    StreamReader^ sr = gcnew StreamReader("CustomerCompanies.xml");
    customerCompanyList = (List<Company^>^) Reader->Deserialize(sr);
    sr->Close();
}
int ProjectController::Controller::AddCustomerNatural(Natural^ natural)
{
    naturalList->Add(natural);
    PersistCustomerNaturals();
    return 1;
}

int ProjectController::Controller::UpdateCustomerNatural(Natural^ natural)
{
    for (int i = 0; i < naturalList->Count; i++)
        if (natural->Id == naturalList[i]->Id) {
            naturalList[i] = natural;
            PersistCustomerNaturals();
            return 1;
        }
    PersistCustomerNaturals();
    return 0;
}

int ProjectController::Controller::DeleteCustomerNatural(int naturalId)
{
    for (int i = 0; i < naturalList->Count; i++)
        if (naturalId == naturalList[i]->Id) {
            naturalList->RemoveAt(i);
            PersistCustomerNaturals();
            return 1;
        }
    PersistCustomerNaturals();
    return 0;
}

List<Natural^>^ ProjectController::Controller::QueryAllCustomerNaturals()
{
    LoadCustomerNaturalsData();
    List<Natural^>^ activeNaturalsList = gcnew List<Natural^>();
    for (int i = 0; i < naturalList->Count; i++) {
        activeNaturalsList->Add(naturalList[i]);
    }
    return activeNaturalsList;


    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

Natural^ ProjectController::Controller::QueryCustomerNaturalById(int naturalId)
{
    for (int i = 0; i < naturalList->Count; i++)
        if (naturalId == naturalList[i]->Id) {
            return naturalList[i];
        }
    return nullptr;
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

void ProjectController::Controller::PersistCustomerNaturals()
{
    XmlSerializer^ writer = gcnew XmlSerializer(naturalList->GetType());
    StreamWriter^ sw = gcnew StreamWriter("CustomerNaturals.xml");
    writer->Serialize(sw, naturalList);
    sw->Close();
    //throw gcnew System::NotImplementedException();
}

void ProjectController::Controller::LoadCustomerNaturalsData()
{
    XmlSerializer^ Reader = gcnew XmlSerializer(naturalList->GetType());
    StreamReader^ sr = gcnew StreamReader("CustomerNaturals.xml");
    naturalList = (List<Natural^>^) Reader->Deserialize(sr);
    sr->Close();
    //throw gcnew System::NotImplementedException();
}