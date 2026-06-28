#include <iostream>

class Point {
private:
    int x;
    int y;

public:
   
    Point() {
        x = 0;
        y = 0;
    }

    
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    
    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    
    void printCoordinates() const {
        std::cout << "Point coordinates: (" << x << ", " << y << ")\n";
    }
};

int main() {
    Point p1; 
    p1.printCoordinates();

    Point p2(10, 20); 
    p2.printCoordinates();

    p1.setXY(5, 15);
    p1.printCoordinates();

    return 0;
}