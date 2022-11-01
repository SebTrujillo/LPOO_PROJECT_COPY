/**
 * Project Untitled
 */


#pragma once

#include "Customer.h"

using namespace System;
namespace LPOOPROJECT {
	[Serializable]
	public ref class Natural : public Customer {
	public:
		property String^ DocNumber;
	};
}


