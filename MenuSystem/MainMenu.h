#pragma once
#include<iostream>

#include "Menu.h"

class MainMenu : public Menu {
public:
	MainMenu(const std::string& title);
	void OutputOptions() final;
	bool HandleChoice(char choice) final;
};