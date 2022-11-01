/**
 * Project Untitled
 */
#pragma once

using namespace System;
namespace LPOOPROJECT {
    [Serializable]
    public ref class Person {
    public:
        property int Id;
        property String^ Name;
        property String^ Address;
        property String^ PhoneNumber;
        property String^ Email;
        property String^ User;
        property String^ Password;
    };
    
};

