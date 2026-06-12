#include "music.h"
#include <iostream>

namespace music {
    namespace string {
        class Veena : public Playable {
        public:
            void play() override {
                std::cout << "Playing the Veena." << std::endl;
            }
        };
    }

    namespace wind {
        class Saxophone : public Playable {
        public:
            void play() override {
                std::cout << "Playing the Saxophone." << std::endl;
            }
        };
    }
}