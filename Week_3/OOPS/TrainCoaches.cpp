#include "TrainCoaches.h"

std::string FirstClass::notice() const {
    return "Notice: First Class. Only passengers with valid reserved tickets are allowed.";
}

std::string Ladies::notice() const {
    return "Notice: Ladies Compartment. Reserved for female passengers only.";
}

std::string General::notice() const {
    return "Notice: General Compartment. Open to all passengers with unreserved tickets.";
}

std::string Luggage::notice() const {
    return "Notice: Luggage Van. Strictly for authorized cargo and railway staff.";
}