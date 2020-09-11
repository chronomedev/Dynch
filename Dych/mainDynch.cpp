#include "mainDynch.h"
#include <Windows.h>
#include <string>
#include <iostream>
//Dynch Chat App Main entry source file
//written in C++
//Copy Right HSD Corp 2018

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	cout << "Dynch Beta App Console @2018 Hansrenee " << endl << "Console untuk debug";
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	Dych::mainDynch form1;
	Application::Run(%form1);
	return 0;
}

