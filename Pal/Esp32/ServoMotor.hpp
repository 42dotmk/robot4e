// File: ServoMotor.hpp
//
// Author: Vasilaki Tocili
//
// Date: 20.12.23
//
// Version: 1.0
//
// Description: ServoMotor class for Esp32 platform implementation.
//

#pragma once


namespace Robot4e::Pal::Esp32
{
    class ServoMotor: public Robot4e::Hal::IServoMotor
    {
    public:
        ServoMotor();
        ~ServoMotor() = default;

        void SetAngle(std::int16_t Angle) final;
    };
}
