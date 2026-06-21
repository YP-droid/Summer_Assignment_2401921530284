#ifndef TRAIN_COACHES_H
#define TRAIN_COACHES_H

#include "Compartment.h"

class FirstClass : public Compartment {
public:
    std::string notice() const override;
};

class Ladies : public Compartment {
public:
    std::string notice() const override;
};

class General : public Compartment {
public:
    std::string notice() const override;
};

class Luggage : public Compartment {
public:
    std::string notice() const override;
};

#endif 