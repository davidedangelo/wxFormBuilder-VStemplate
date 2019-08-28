#include <wx/wx.h>
#include "myApp.h"
#include "myFrame.h"

MyApp::MyApp()
{
}

MyApp::~MyApp()
{
}

bool MyApp::OnInit()
{
	wxFrame* mainFrame = new MyFrame(nullptr);
	mainFrame->Show(true);
	return true;
}

wxIMPLEMENT_APP(MyApp);