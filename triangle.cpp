#include <iostream>

class Triangle {
    private: 
    double side1, side2, side3;

    public:
    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c) {}

    bool isEquilateral() {
        return side1 == side2 && side2 == side3;
    }

    bool isIsosceles() {
        return side1 == side2 || side2 == side3 || side1 == side3;
    }

    bool isScalene() {
        return !isEquilateral() || !isIsosceles();
    }
    void printType() {
        if (isEquilateral()) {
            std::cout << "Equilateral" << std::endl;
        } else if (isIsosceles()) {
            std::cout << "Isosceles" << std::endl;
        } else {
            std::cout << "Scalene" << std::endl;
        }
    }
};
int main() {
    Triangle t1(3, 3, 3);
    Triangle t2(3, 4, 4);
    Triangle t3(3, 4, 5);
    
    t1.printType();
    t2.printType();
    t3.printType();
    return 0;
}