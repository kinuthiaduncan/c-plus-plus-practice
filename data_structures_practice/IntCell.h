//
// Created by panther on 3/16/18.
//

#ifndef DATA_STRUCTURES_PRACTICE_INTCELL_H
#define DATA_STRUCTURES_PRACTICE_INTCELL_H


class IntCell {
public:
    explicit IntCell(int initialValue = 0)
    : storedValue {initialValue}
    {

    }
    int read() const
    {
        return storedValue;
    }
    void write(int x)
    {
        storedValue = x;
    }

private:
    int storedValue;
};


#endif //DATA_STRUCTURES_PRACTICE_INTCELL_H
