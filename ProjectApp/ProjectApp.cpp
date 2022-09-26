#include "pch.h"
#include "Main.h"
using namespace System;
using namespace LPOOPROJECT;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectApp::Main form;
    Application::Run(% form);
}

