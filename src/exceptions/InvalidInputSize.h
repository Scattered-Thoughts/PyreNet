#ifndef PYRENET_INVALIDINPUTSIZE_H
#define PYRENET_INVALIDINPUTSIZE_H

#include <exception>

namespace PyreNet {
    class InvalidInputSize : public std::exception {
    public:
        const char *what() const noexcept override;
    };
}

#endif //PYRENET_INVALIDINPUTSIZE_H