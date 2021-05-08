#pragma once
#include "CharacterCode.h"
class Euc :
    public CharacterCode
{
    std::string toJis(unsigned char char1, unsigned char char2);
};

