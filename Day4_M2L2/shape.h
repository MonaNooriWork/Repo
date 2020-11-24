#include <iostream>
#include <cmath>

class Shape {
    protected:
        int width, heighth;
    public:
        virtual int area() = 0;
        virtual int perimeter() = 0;
        bool operator<(Shape &other) {
            if (this->area() < other.area()){
                if(this->perimeter() < other.perimeter()){
                    return 1;
                }
                else{
                    return 0;
                }
            }
            else{
                return 0;
            }
       }
        bool operator>(Shape &other) {
            if (this->area() > other.area()){
                if(this->perimeter() > other.perimeter()){
                    return 1;
                }
                else{
                    return 0;
                }
            }
            else{
                return 0;
            }
        }
        bool operator==(Shape &other) {
            if (this->area() == other.area()){
                if(this->perimeter() == other.perimeter()){
                    return 1;
                }
                else{
                    return 0;
                }
            }
            else{
                return 0;
            }
       }         
};


class Circle: public Shape {
    public:
        int area(){
            return (3 * std::pow(width,2));
        }
        int perimeter(){
            return (2*3*width);
        }
        Circle(int a){
            width = a;
        };
};


class Rectangle: public Shape {
    public:
        int area(){
            return (width*heighth);
        }
        int perimeter(){
            return 2*(width*heighth);
        }
        Rectangle(int a, int b){
            width = a;
            heighth = b;
        };
};

class Triangle: public Shape {
    public:
        int area(){
            return (width*heighth)/2;
        }
        int perimeter(){
            return (3*width);
        }
        Triangle(int a){
            width = a;
            heighth = a;
        };
};

class Square: public Shape {
    public:
        int area(){
            return (width*heighth);
        }
        int perimeter(){
            return 2*(width*heighth);
        }
        Square(int a){
            width = a;
            heighth = a;
        };
};




