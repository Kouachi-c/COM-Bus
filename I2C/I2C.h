//
// Created by ekon-ihc on 7/4/24.
//
#pragma once
#include <iostream>


#ifndef I2C_I2C_H
#define I2C_I2C_H

#define uint8 unsigned char
#define int8 char
#define uint16 unsigned short
#define int16 short

class I2C {
private:
    uint8 SCL, SDA;
public:
    I2C(uint8 clock, uint8 data);
    void Write();
    void Read();
    ~I2C();

};

/** Constructor */
I2C::I2C(uint8 clock, uint8 data) {
    SCL = clock;
    SDA = data;
}

/** Destroyer*/
I2C::~I2C() {
    /* class destruction */
}

/** Writer */
void I2C::Write() {
    std::cout<<"I2C : Data writing" << "\n"<< (int)SDA <<" wrote"<<std::endl;
}

/** Reader */
void I2C::Read() {
    std::cout<<"I2C : Data reading"<< "\n"<< (int)SDA <<" Read"<<std::endl;
}

#endif //I2C_I2C_H
