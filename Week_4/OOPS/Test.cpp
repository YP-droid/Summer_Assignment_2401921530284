#include <iostream>

class Test {
public:
    virtual int square(int n) = 0; 
    virtual ~Test() = default;
};


class Arithmetic : public Test {
public:
    int square(int n) override {
        return n * n;
    }
};


class ToTestInt {
public:
    void runTest() {
        Arithmetic mathObj;
        int num = 5;
        std::cout << "Square of " << num << " is: " << mathObj.square(num) << "\n";
    }
};

int main() {
    ToTestInt tester;
    tester.runTest();
    return 0;
}