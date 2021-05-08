#pragma once

#include <string>

class CharacterCode
{
public:
	virtual std::string toJis(unsigned char char1, unsigned char char2);
};

