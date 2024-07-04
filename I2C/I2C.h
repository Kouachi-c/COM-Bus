//
// Created by ekon-ihc on 7/4/24.
//
#pragma once
#include <iostream>

#ifndef I2C_I2C_H
#define I2C_I2C_H


class I2C {
private:
    int SCL, SDA;
public:
    I2C(int clock, int data);
    void Transmit();
    void Receive();
    ~I2C();

};

/** Constructor */
I2C::I2C(int clock, int data) {
    SCL = clock;
    SDA = data;
}

/** Destroyer*/
I2C::~I2C() {
    /* class destruction */
}

/** Transmitter */
void I2C::Transmit() {
    std::cout<<"I2C : Data transmission" << "\n"<< SDA <<" Transmitted"<<std::endl;
}

/** Receiver */
void I2C::Receive() {
    std::cout<<"I2C : Data reception"<< "\n"<< SDA <<" Received"<<std::endl;
}

#endif //I2C_I2C_H
