#include "MyForm.h"
using namespace TRPOstudents;
using namespace System;

[STAThread]
int main(void) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MyForm form;
	Application::Run(%form);
	return 0;
}
