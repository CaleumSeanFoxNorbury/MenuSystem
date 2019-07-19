#pragma once

#include"Account.h"
#include"User.h"
#include"Admin.h"

	//TODO::
	//ALL APPLICATION FUCNTIONS AND FILE
class Application {
public:
	void LogIn(Account* acc, User* user);
	void LogOut()
private:
	List<Account*> Accounts_;
	Account* currentaccount;
	User*currentUser;
	bool UserIsLoggedIn = true;

};