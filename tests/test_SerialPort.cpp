//
// Created by leonid on 25.12.2019.
//

#include "gtest/gtest.h"

#include "../source/SerialPort.h"

namespace {

    TEST(SerialPortTest, Contructor) {
        EXPECT_NO_THROW (vrs::SerialPort());
    }

}