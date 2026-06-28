#include <iostream>

class Outer {
public:
    void display() {
        std::cout << "Display function in the Outer class.\n";
    }
    
   
    class Inner {
    public:
        void display() {
            std::cout << "Display function in the Inner class.\n";
        }
    };
};

int main() {
    
    Outer outObj;
    outObj.display();

    
    Outer::Inner inObj;
    inObj.display();

    return 0;
}