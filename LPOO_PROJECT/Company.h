/**
 * Project Untitled
 */


#pragma once


#include "Customer.h"
using namespace System;
namespace LPOOPROJECT {
   public ref class Company : public Customer {
    public:
        property String^ WebPage;
        property String^ RUC;
   };
}


