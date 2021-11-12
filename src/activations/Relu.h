#ifndef PYRENET_RELU_H
#define PYRENET_RELU_H

#include "Activation.h"

namespace PyreNet {
    class Relu : public Activation {
    public:
        const double activate(double) override;
        const LayerDefinition::activationType type() override;
    };
}


#endif //PYRENET_RELU_H