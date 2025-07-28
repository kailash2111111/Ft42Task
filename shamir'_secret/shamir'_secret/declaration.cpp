#include "declaration.h"

declaration::declaration() {
    threshold = 0;
    split = 0;
}

declaration::declaration(int threshold, int split) {
    this->threshold = threshold;
    this->split = split;
}

int declaration::getThreshold() const {
    return threshold;
}

int declaration::getSplit() const {
    return split;
}
