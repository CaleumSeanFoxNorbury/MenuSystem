#include "Account.h"

Account::Account(const std::string & email, const std::string & password, char Account) : email(email), password(password), account(account)
{
}

Account::~Account()
{
}

void Account::DeleteUser(User * user)
{
	//TODO users.deleteOne(user)
}

User * Account::GetUser(int index) const
{
	return users[index];
}
