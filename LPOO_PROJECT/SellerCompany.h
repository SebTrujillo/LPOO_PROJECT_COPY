/**
 * Project Untitled
 */

#pragma once
#include "Person.h"

using namespace System;
namespace LPOOPROJECT {
    [Serializable]
    public ref class SellerCompany : public Person {
    public:
        property String^ RUC;
        property bool Sent_Invoice;
        property String^ Username_Company;
        property String^ Password_Company;
    };
}

