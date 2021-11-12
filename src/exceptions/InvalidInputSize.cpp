#include "InvalidInputSize.h"

namespace PyreNet {
    const char* InvalidInputSize::what() const noexcept {
        return "Invalid size supplied to Perceptron.";
    }
}