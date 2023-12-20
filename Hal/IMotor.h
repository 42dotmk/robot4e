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