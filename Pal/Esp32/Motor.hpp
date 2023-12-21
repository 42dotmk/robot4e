// File: Motor.hpp
//
// Author: Vasilaki Tocili
//
// Date: 20.12.23
//
// Version: 1.0
//
// Description: Motor class for Esp32 platform implementation.
//

#pragma once

namespace Robot4e::Pal::Esp32
{
    class Motor: public Robot4e::Hal::IMotor
    {
    public:
        Motor();
        ~Motor() = default;

        void SetAngle(std::int16_t Angle);
    };
}
