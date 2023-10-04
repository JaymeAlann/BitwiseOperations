// This file contains the 'main' function. Program execution begins and ends there.
// James A Grady
// Data Structures II - Extra Credit

#include <iostream>

bool isbitset(uint32_t bitfield, uint32_t bitIndex) {
    return (bitfield & (1U << (bitIndex - 1))) != 0;
}

void setBit(uint32_t& bitfield, uint32_t bitindex) {
    bitfield |= 1U << (bitindex - 1);
}

void clearBit(uint32_t& bitfield, uint32_t bitindex) {
    bitfield &= ~(1U << (bitindex - 1));
}

void flipBit(uint32_t& bitfield, uint32_t bitindex) {
    bitfield ^= 1U << (bitindex - 1);
}

void equalByBitmask(uint32_t bitfield1, uint32_t bitfield2, uint32_t bitmask) {
    int mask1 = (bitfield1 & bitmask);
    int mask2 = (bitfield2 & bitmask);
    if (mask1 == mask2) {
        std::cout << "TRUE" << std::endl;
    } else {
        std::cout << "FALSE" << std::endl;
    }
}

int main() {
    equalByBitmask(85, 255, 80);

    // Will return 0 for false and 1 for true
    uint32_t test = 80;
    std::cout << "\n~BITWISE FUNCTION TESTING~";
    std::cout << "\nTest1: SetBit: " << isbitset(test, 2);
    setBit(test, 2);
    std::cout << "\nTest1: SetBit: " << isbitset(test, 2);
    std::cout << "\nTest2: SetBit: " << isbitset(test, 1);
    setBit(test, 1);
    std::cout << "\nTest2: SetBit: " << isbitset(test, 1);
    std::cout << "\nTest3: ClearBit: " << isbitset(test, 1);
    clearBit(test, 1);
    std::cout << "\nTest3: ClearBit: " << isbitset(test, 1);

    return 0;
}

