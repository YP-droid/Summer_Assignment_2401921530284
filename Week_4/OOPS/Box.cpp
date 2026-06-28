#include <iostream>

class Box {
protected:
    double length;
    double breadth;

public:
    
    Box(double l, double b) : length(l), breadth(b) {}

  
    void setLength(double l) { length = l; }
    void setBreadth(double b) { breadth = b; }

   
    double getArea() const {
        return length * breadth;
    }
};


class Box3D : public Box {
private:
    double height;

public:
   
    Box3D(double l, double b, double h) : Box(l, b), height(h) {}

    
    void setHeight(double h) { height = h; }

   
    double getVolume() const {
        /
        return length * breadth * height; 
    }
};

int main() {
    Box3D myBox(5.0, 4.0, 3.0);
    
    std::cout << "Base Area (Length * Breadth): " << myBox.getArea() << "\n";
    std::cout << "Volume (Length * Breadth * Height): " << myBox.getVolume() << "\n";
    
    myBox.setHeight(10.0);
    std::cout << "New Volume after changing height: " << myBox.getVolume() << "\n";

    return 0;
}