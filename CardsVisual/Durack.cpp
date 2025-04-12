#include "Durack.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CardsVisual::Durack form;
	Application::Run(% form);
}
