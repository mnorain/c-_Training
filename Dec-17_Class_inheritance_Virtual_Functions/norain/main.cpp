#include<iostream>

//Base class
class Shape{
    public:
        std::string color;
        std::string name;
        float area{0};

        virtual void printInfo(){
            std::cout<<" Printing the information of the shape "<<name<<" : "<<std::endl;
            std::cout<<"        the color of this "<<name<<" is "<<color<<std::endl;
            std::cout<<"        the area of this "<<name<<" is "<<area<<std::endl;
        }
        virtual void calculateArea() = 0;
};

//Derived classes (Square, Circle)
class Square: public Shape{
    public:
        float side;
        //Square constructor
        Square(std::string colorX, std::string nameX, float sideX){
            color = colorX;
            name = nameX;
            side = sideX;
            calculateArea();
        }
        void calculateArea(){
            area= side * side;
        }
};

class Circle: public Shape{
    public:
        float radius;
        //Square constructor
        Circle(std::string colorX, std::string nameX, float r){
            color = colorX;
            name = nameX;
            radius = r;
            calculateArea();
        }

        void calculateArea(){
            area= 3.41 * radius * radius;
        }
};

int main(){
    Square norain_square("red", "square1", 12.1);
    Circle norain_circle("black", "circle1", 3);
    norain_square.printInfo();
    norain_circle.printInfo();
    return 0;
}