#pragma once
#include<string>

class User {
public:
	User(const std::string&, const std::string&, char);
	const std::string& GetUsername() const;
	const std::string& GetPassword() const;
private:
	std::string username;
	std::string password;
	std::string NickName;
};