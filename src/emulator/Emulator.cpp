#include "Emulator.h"
#include <iostream>

Emulator::Emulator() : cpu(&memory) {

}

void Emulator::run() {
    std::cout << "Running...\n";
    while(true) {
        cpu.step(1);
    }
}