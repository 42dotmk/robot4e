// File: IMotor.hpp
//
// Author: Vasilaki Tocili
//
// Date: 20.12.23
//
// Version: 1.0
//
// Description: This header file contains the definitions and function declarations for the IMotor class.
//

#pragma once

#include <cstdint>

namespace Robot4e::Hal
{
    class IMotor
    {
    public:
        virtual ~IMotor() = default;

        virtual void SetAngle(std::int16_t Angle) = 0;
    };
}