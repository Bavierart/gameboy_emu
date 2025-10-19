#pragma once

#include <cstdint>

class Memory {
    private:
        static const int SIZE = 0x10000;
        uint8_t data[SIZE];
    public:
        Memory();
        uint8_t read(uint16_t address) const;
        void write(uint16_t address, uint8_t value);
        void reset();
};