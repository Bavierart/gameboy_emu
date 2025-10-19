#include "Memory.h"
#include <cstring>

Memory::Memory() {
    reset();
}

uint8_t Memory::read(uint16_t address) const {
    return data[address];
}

void Memory::write(uint16_t address, uint8_t value) {
    data[address] = value;
}

void Memory::reset() {
    memset(data, 0, SIZE);
}