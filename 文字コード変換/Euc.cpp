#include "pch.h"
#include "Euc.h"

std::string Euc::toJis(unsigned char c1, unsigned char c2) {
    if (c1 >= 0xe0) { c1 = c1 - 0x40; }
    if (c2 >= 0x80) { c2 = c2 - 1; }
    if (c2 >= 0x9e) {
        c1 = (c1 - 0x70) * 2;
        c2 = c2 - 0x7d;
    }
    else {
        c1 = ((c1 - 0x70) * 2) - 1;
        c2 = c2 - 0x1f;
    }
    return "";
}