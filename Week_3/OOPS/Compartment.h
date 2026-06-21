#ifndef COMPARTMENT_H
#define COMPARTMENT_H

#include <string>

class Compartment {
public:
    virtual ~Compartment() = default;

    
    virtual std::string notice() const = 0; 
};

#endif 