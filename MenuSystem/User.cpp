#include "User.h"

User::User(const std::string & username, const std::string & password, char account)
{
}

const std::string & User::GetUsername() const
{
	return username;
}

const std::string & User::GetPassword() const
{
	return password;
}
