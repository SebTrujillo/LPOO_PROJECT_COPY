#include "pch.h"

#include "ProjectController.h"

using namespace System::Xml::Serialization;

void ProjectController::Controller::PersistProducts() {
    XmlSerializer^ writer = gcnew XmlSerializer(productList->GetType());
    StreamWriter^ sw = gcnew StreamWriter("Products.xml");
    writer->Serialize(sw, productList);
    sw->Close();
}

void ProjectController::Controller::LoadProductsData() {
    XmlSerializer^ Reader = gcnew XmlSerializer(productList->GetType());
    StreamReader^ sr = gcnew StreamReader("Products.xml");
    productList = (List<Product^>^) Reader->Deserialize(sr);
    sr->Close();
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

int ProjectController::Controller::AddSellerCompany(SellerCompany^ sellerCompany)
{
    sellerCompanyList->Add(sellerCompany);
    return 1;
}

int ProjectController::Controller::UpdateSellerCompany(SellerCompany^ sellerCompany)
{
    for (int i = 0; i < sellerCompanyList->Count; i++)
        if (sellerCompany->Id == sellerCompanyList[i]->Id) {
            sellerCompanyList[i] = sellerCompany;
            return 1;
        }
    return 0;
}

int ProjectController::Controller::DeleteSellerCompany(int sellerCompanyId)
{
    for (int i = 0; i < sellerCompanyList->Count; i++)
        if (sellerCompanyId == sellerCompanyList[i]->Id) {
            sellerCompanyList->RemoveAt(i);
            return 1;
        }
    return 0;
}

List<SellerCompany^>^ ProjectController::Controller::QueryAllSellerCompanies()
{
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