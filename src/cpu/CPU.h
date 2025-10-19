#pragma once

#include <cstdint>
#include "Memory.h"

class CPU {
    private:
        Memory* memory;
        uint8_t A, B, C, D, E, F, H, L;
    public:
        CPU(Memory* memory);
        void step(uint8_t opcode);
};