#pragma once
#include "CharacterCode.h"
class Sjis :
    public CharacterCode
{
public:
    std::string toJis(unsigned char char1, unsigned char char2);
};

