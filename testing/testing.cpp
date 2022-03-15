// testing.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James A Grady
// Data Structures II - Extra Credit
//

#include <iostream>

bool isbitset(uint32_t bitfield, uint32_t bitIndex) {
    if (bitfield & (1 << (bitIndex - 1))) {
        return true;
    }
    return false;
}

void setBit(uint32_t& bitfield, uint32_t bitindex) {
    bitfield |= 1UL << bitindex-1;
}

void clearbit(uint32_t& bitfield, uint32_t bitindex) {
    bitfield &= ~(1UL << bitindex -1);
}

void flipbit(uint32_t& bitfield, uint32_t bitindex) {
    bitfield ^= 1UL << bitindex -1;
}

void EqualByBitmask(unsigned int bitfield1, unsigned int bitfield2, unsigned int bitmask) {
    int mask1 = (bitfield1 & bitmask);
    int mask2 = (bitfield2 & bitmask);
    if (mask1 == mask2) {
        std::cout << "TRUE:  " << std::endl;
    }
    else {
        std::cout << mask2 << std::endl;
    }
}

int main()
{
    EqualByBitmask(85, 255, 80);

    // Will return 0 for false and 1 for true
    unsigned int test = 80;
    std::cout << "\n ~BITWISE FUNCTION TESTING~";
    std::cout << "\n Test1: SetBit: " << isbitset(test, 2);
    setBit(test, 2);
    std::cout << "\n Test1: SetBit: " << isbitset(test, 2);
    std::cout << "\n Test2: SetBit: " << isbitset(test, 1);
    setBit(test, 1);
    std::cout << "\n Test2: SetBit: " << isbitset(test, 1);
    std::cout << "\n Test3: ClearBit: " << isbitset(test, 1);
    clearbit(test, 1);
    std::cout << "\n Test3: ClearBit: " << isbitset(test, 1);




}

