#pragma once
#include<iostream>

#include "Menu.h"
#include "Utilities.h"

class MainMenu : public Menu {
public:
	MainMenu(const std::string& title);
	void OutputOptions() final;
	bool HandleChoice(char choice) final;
};