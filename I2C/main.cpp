#include <iostream>
#include "I2C.h"

int main() {
    I2C I2C_Bus(2, 4);
    std::cout << "I2C Test !!!" << std::endl;
    I2C_Bus.Transmit();
    I2C_Bus.Receive();
    return 0;
}
