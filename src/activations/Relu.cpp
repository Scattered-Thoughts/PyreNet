#include <algorithm>
#include "Relu.h"

namespace PyreNet {
    const double Relu::activate(double input) {
        return std::max(0.0, input);
    }

    const LayerDefinition::activationType Relu::type() {
        return LayerDefinition::activationType::relu;
    }
}