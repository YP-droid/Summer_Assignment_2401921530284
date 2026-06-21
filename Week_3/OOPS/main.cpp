#include <iostream>
#include <memory>
#include <random>
#include "TrainCoaches.h" 

int main() {
    std::unique_ptr<Compartment> train[10];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 4);

    for (int i = 0; i < 10; ++i) {
        int randomChoice = distrib(gen);

        switch (randomChoice) {
            case 1: train[i] = std::make_unique<FirstClass>(); break;
            case 2: train[i] = std::make_unique<Ladies>(); break;
            case 3: train[i] = std::make_unique<General>(); break;
            case 4: train[i] = std::make_unique<Luggage>(); break;
        }
    }

    std::cout << "--- Train Compartment Notices ---\n\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << "Coach " << (i + 1) << ":\n";
        
        std::cout << train[i]->notice() << "\n\n"; 
    }

    return 0;
}