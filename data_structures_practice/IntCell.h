//
// Created by panther on 3/16/18.
//

#ifndef DATA_STRUCTURES_PRACTICE_INTCELL_H
#define DATA_STRUCTURES_PRACTICE_INTCELL_H


class IntCell {
public:
    explicit IntCell(int initialValue = 0);
    int read() const;
    void write(int x);
private:
    int storedValue;
};


#endif //DATA_STRUCTURES_PRACTICE_INTCELL_H
