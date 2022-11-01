/**
 * Project Untitled
 */

#pragma once
using namespace System;
namespace LPOOPROJECT {
    [Serializable]
    public ref class Sale {
    public:
        property int Id;
        property String^ TxnDate;
        property char Status;
        property double Total;
    };
}


