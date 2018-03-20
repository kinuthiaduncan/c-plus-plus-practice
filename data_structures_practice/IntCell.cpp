//
// Created by panther on 3/16/18.
//
#include "IntCell.h"

IntCell::IntCell(int initialValue)
    { storedValue = new int{ initialValue }; }

int IntCell::read() const
{
    return *storedValue;
}

void IntCell::write(int x)
{
    *storedValue = x;
}

