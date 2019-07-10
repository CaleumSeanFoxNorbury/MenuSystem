#pragma once
#include<iostream>

#include"Menu.h"
#include"Utilities.h"

class Menu {
public:
	Menu(const std::string& title);
	void Paint();
	virtual void OutputOptions() = 0;
	virtual bool HandleChoice(char) = 0;
protected:
	//NEED USER
	void Line();
	void Line(const std::string& text);
	void Option(int id, const std::string& option);
	void Option(char id, const std::string& option);
	std::string Question(const std::string& question);
private:
	std::string title_;
	void Header();
	void Footer();
};
