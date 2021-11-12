#include "InvalidLayer.h"

#include <string>

namespace PyreNet {
    const char* InvalidLayer::what() const noexcept {
        return "Invalid layer selection passed to network.";
    }
}