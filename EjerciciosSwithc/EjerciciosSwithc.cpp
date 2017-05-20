#include "stdafx.h"  //________________________________________ EjerciciosSwithc.cpp
#include "EjerciciosSwithc.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosSwithc app;
	return app.BeginDialog(IDI_EjerciciosSwithc, hInstance);
}

void EjerciciosSwithc::Window_Open(Win::Event& e)
{
}

void EjerciciosSwithc::btCalcular_Click(Win::Event& e)
{
	wchar_t c = tbxEntrada.Text[0];
	switch (c)
	{
	case 'a':
		this->Text = L"Ana";
		break;
	case 'b':
		this->Text = L"Bob";
		break;
	case 'd':
		this->Text = L"Daniel";
		break;
	case 'f':
		this->Text = L"Daniel";
		break;
	default:
		this->Text = L"Error";
	}
}

