#include "MainMenu.h"

MainMenu::MainMenu(const std::string & title) : Menu(title)
{
	Paint();
}

void MainMenu::OutputOptions()
{
	Line("Please choice A branch I can help you with: ");
	Line(" ");
	Option(1, "OPTION 1");				//Branch One 
	Option(2, "OPTION 2");				//Branch Two
	Option(3, "OPTION 3");				//Branch Three
}

bool MainMenu::HandleChoice(char choice)
{
	switch (choice) {
	case 1: {
		//BRANCH ONE

	}break;
	}
	return false;
}