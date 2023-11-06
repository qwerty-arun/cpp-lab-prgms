#include <iostream>
#include <cmath>

class SHAPE {
public:
//creating virtual functions to read, compute area and display
    virtual void readDimensions() = 0;
    virtual void computeArea() = 0;    
    virtual void displayArea() = 0;    
};

class CIRCLE : public SHAPE {
private:
    double radius;
    double area;

public:
    CIRCLE() {
        radius = 0;
        area = 0;
    }

    void readDimensions() override {
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
    }

    void computeArea() override {
        area = 3.141592 * radius * radius;
    }

    void displayArea() override {
        std::cout << "Area of the circle is: " << area << std::endl;
    }
};

class RECTANGLE : public SHAPE {
private:
    double length;
    double width;
    double area;

public:
    RECTANGLE() {
        length = 0;
        width = 0;
        area = 0;
    }

    void readDimensions() override {
        std::cout << "Enter the length of the rectangle: ";
        std::cin >> length;
        std::cout << "Enter the width of the rectangle: ";
        std::cin >> width;
    }

    void computeArea() override {
        area = length * width;
    }

    void displayArea() override {
        std::cout << "Area of the rectangle is: " << area << std::endl;
    }
};

class SQUARE : public SHAPE {
private:
    double side;
    double area;

public:
    SQUARE() {
        side = 0;
        area = 0;
    }

    void readDimensions() override {
        std::cout << "Enter the side length of the square: ";
        std::cin >> side;
    }

    void computeArea() override {
        area = side * side;
    }

    void displayArea() override {
        std::cout << "Area of the square is: " << area << std::endl;
    }
};

int main() {
    //creating objects of each derived class and calling their functions
    CIRCLE circle;
    RECTANGLE rectangle;
    SQUARE square;

    circle.readDimensions();
    circle.computeArea();
    circle.displayArea();

    rectangle.readDimensions();
    rectangle.computeArea();
    rectangle.displayArea();

    square.readDimensions();
    square.computeArea();
    square.displayArea();

    return 0;
}
