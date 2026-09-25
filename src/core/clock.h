#pragma once

#include <chrono>
#include "core/types.h"

namespace exchange::core
{
    class LogicalClock
    {

    public:
        [[nodiscard]] Timestamp next() noexcept { return ++current_; }
        [[nodiscard]] Timestamp current() const noexcept { return current_; }
        void reset() noexcept
        {
            current_ = 0;
        }

    private:
        Timestamp current_{0};
    };
}