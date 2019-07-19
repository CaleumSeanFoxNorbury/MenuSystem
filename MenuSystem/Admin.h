#pragma once

#include"Player.h"
#include"User.h"

class Admin : public Player {
public:
	Admin(const std::string&, const std::string&, const char);
	~Admin();
};