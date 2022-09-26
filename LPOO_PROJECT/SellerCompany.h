/**
 * Project Untitled
 */

#pragma once
#include "Person.h"

using namespace System;
namespace LPOOPROJECT {
    public ref class SellerCompany : public Person {
    public:
        property String^ RUC;
        property bool Sent_Invoice;
    };
}

