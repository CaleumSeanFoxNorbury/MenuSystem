#pragma once
#include<string>
#include"List.h"
#include"User.h"

class Account {
public:
	Account(const std::string&, const std::string&, char);
	~Account();
	void DeleteUser(User*);
	User* GetUser(int) const;
private:
	List<User*> users;
	std::string email;
	std::string password;
	char account;
};