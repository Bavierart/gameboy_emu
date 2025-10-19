#pragma once

#include "CPU.h"
#include "Memory.h"

class Emulator {
    private:
        Memory memory;
        CPU cpu;
    public:
        Emulator();
        void run();
};