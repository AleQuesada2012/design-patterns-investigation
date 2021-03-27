#include <iostream>

class Shape {
public:
    Shape() {
        id_ = total_++;
    }
    virtual void draw() = 0;
protected:
    int id_;
    static int total_;
};
int Shape::total_ = 0;

class Circle : public Shape {
public:
    void draw() {
        std::cout << "circle " << id_ << ": draw" << std::endl;
    }
};
class Square : public Shape {
public:
    void draw() {
        std::cout << "square " << id_ << ": draw" << std::endl;
    }
};
class Ellipse : public Shape {
public:
    void draw() {
        std::cout << "ellipse " << id_ << ": draw" << std::endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() {
        std::cout << "rectangle " << id_ << ": draw" << std::endl;
    }
};

class Factory {
public:
    virtual Shape* createCurvedInstance() = 0;
    virtual Shape* createStraightInstance() = 0;
};

class SimpleShapeFactory : public Factory {
public:
    Shape* createCurvedInstance() {
        return new Circle;
    }
    Shape* createStraightInstance() {
        return new Square;
    }
};
class RobustShapeFactory : public Factory {
public:
    Shape* createCurvedInstance()   {
        return new Ellipse;
    }
    Shape* createStraightInstance() {
        return new Rectangle;
    }
};

int main() {
    Shape* shapesSimple[3];

    Shape* shapesRobust[3];

    Factory* Sfactory = new SimpleShapeFactory;

    Factory* Rfactory = new RobustShapeFactory;

    shapesSimple[0] = Sfactory->createCurvedInstance();   // shapes[0] = new Ellipse;
    shapesSimple[1] = Sfactory->createStraightInstance(); // shapes[1] = new Rectangle;
    shapesSimple[2] = Sfactory->createCurvedInstance();   // shapes[2] = new Ellipse;

    shapesRobust[0] = Rfactory->createCurvedInstance();   // shapes[0] = new Ellipse;
    shapesRobust[1] = Rfactory->createStraightInstance(); // shapes[1] = new Rectangle;
    shapesRobust[2] = Rfactory->createCurvedInstance();   // shapes[2] = new Ellipse;

    for (int i=0; i < 3; i++) {
        shapesSimple[i]->draw();
    }

    for (int i=0; i < 3; i++){
        shapesRobust[i]->draw();
    }
}