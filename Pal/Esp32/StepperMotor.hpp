// File: StepperMotor.hpp
//
// Author: Vasilaki Tocili
//
// Date: 20.12.23
//
// Version: 1.0
//
// Description: StepperMotor class for Esp32 platform implementation.
//

#pragma once


namespace Robot4e::Pal::Esp32
{
    class StepperMotor: public Robot4e::Hal::IStepperMotor
    {
    public:
        StepperMotor();
        ~StepperMotor() = default;

        void SetAngle(std::int16_t Angle) final;
    };
}
