// include pre-processor directives
#include <iostream>
#include <stdexcept> // needed to throw exceptions
#include <iomanip>   // needed to format output
#include <math.h>    // needed to perform area computation
#include "Geometry.h"

#define PI 3.141592653589793238

// use C++ standard library namespace
using namespace std;

// declare the Circle class and specify that its a 
// subclass of Geometry
class Circle : Geometry
{
    private:
        // declare fields
        int radius;
        double area;
    public:
        //declare constructors
        Circle();
        Circle(int);
        // declare setter and getter method for the radius field
        void setRadius(int);
        // the const keyword at the end of the method declaress tjat
        // the method won't change any of the field values.
        // attempting to do so will result in a compiler error.
        void getRadius(int&) const;
        // declare a getter for the area field
        void getArea(double&) const;
        void compute() override;
        void printCircle() const;
        bool equalCircle(const Circle&) const;
};

// class constructor and methods may be defined inside the class
// where they're declared. They may also be defined outside of the
// body of the class, but when they are theur names must be prefixed
// with the name of the class and the resolution operator ::
Circle::Circle(){
    radius = 0;
}
Circle::Circle(int radius){
    // check if we've been given invalid argument - radius less than zero
    if(radius < 0){
        // throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero."); 
    }
// this means we are refrencing the object
    this->radius = radius;
}

void Circle::setRadius(int radius){
    if (radius < 0){
        throw invalid_argument("Radius must be greater than or equal to zero."); 
    }
    this->radius = radius;
}

void Circle::getRadius(int& radius) const {
    // place radius field value in specified radius
    radius = this->radius;
}

void Circle::getArea(double& area) const {
    // place radius field value in specified radius
    area = this->area;
}

void Circle::compute(){
    area = M_PI * pow(radius,2);
}

void Circle::printCircle() const{
    cout << fixed << showpoint;
    cout << setprecision(5);
    cout << "radius=" << radius << ". area=" << area << endl;
}

bool Circle::equalCircle(const Circle& otherCircle) const{
    return (radius == otherCircle.radius && area == otherCircle.area);
}