/* Hecho por Federico Noto
* La siguiente aplicacion permite la navegacion por 3 forms o pantallas
* y tambien permite el filtrado de una base de datos
* */
#include "pch.h"

using namespace System;
using namespace System::Windows::Forms;

int main(cli::array<System::String^>^ args)
{
	/*
	* Se despliega la interfaz gráfica, en particular, la pantalla
	* correspondiente a la clase Screen1 (Scree1.h)
	*/
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TestApp::Screen1 mainScreen;
	Application::Run(% mainScreen);
	return 0;
}
