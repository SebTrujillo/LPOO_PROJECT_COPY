/**
 * Project Untitled
 */
#pragma once
#include "SellerCompany.h"

using namespace System;
namespace  LPOOPROJECT {
    [Serializable]
    public ref class Product {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property double Price;
        property int Stock;
        property array<Byte>^ Photo;
        property String^ Type;
        property String^ IsLearning;
        property int Rating;
        property SellerCompany^ SellerCompany;
    };
    
};
