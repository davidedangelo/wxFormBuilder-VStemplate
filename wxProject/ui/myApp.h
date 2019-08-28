#pragma once
#include <wx/wx.h>
class MyApp : public wxApp
{
public:
	MyApp();
	virtual ~MyApp();
	virtual bool OnInit() override;
};