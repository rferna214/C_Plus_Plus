// include pre-processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
// #include "./headers/Circle.h"
#include "./headers/Cylinder.h"

// include C++, a namespace is a collection of related identifiers
// (functions, classes, objects, variables).

// The C++ standard library indentifier are defined in a namespace
// called std.

// A way to bring a specific identifier of the std namespace into
// a C++ application is with the help of the using declaration
// ----------------- using std::cout;--------------------

// A way to bring all the identifers of the std namespace into a
// c++ application as if they were declared globally is with the help of the
// using namespace statement
using namespace std;

int main(){
    // In order to use a C++ standard library identifier, like cout,
    // we need to specifiy that it belongs to the std namespace. One
    // way to do this is by using the scope resolution operator ::
    // -----------std::cout << "Hello world!";--------------------
    // cout << "Hello world!";
    // output();
    // input();
    //decisions1();
    //loops1();
    //congratulate1("Ronald", "C++", "Bjarne Stoustrup");
    //accessStructMembers();
    // declare a Person struct 
    // assign values to its members
    // call the bodyMassIndex function passing the struct as an argument
    // output the return from the bodyMassIndex function

// struct Person person;

//     person.heightInMeters = 1.8;
//     person.weightInKilos = 96;
//     cout << bodyMassIndex(person) << endl;
    // declare and initialize a Circle object using the no-arg constructor
    Circle circle1;

    // // declare local variables that we will use when calling circle1's
    // // getters
    int radius;
    double area;

    cout << "Circle 1: ";
    circle1.printCircle();

    circle1.setRadius(5);
    cout << "Circle 1: ";
    circle1.printCircle();

    circle1.compute();
    cout << "Circle 1: ";
    circle1.printCircle();

    // when calling getter method, must provide local variable
    // as argument. the value in the field will be placed by the
    // getter methid into the address of the local variable
    circle1.getRadius(radius);
    // this allows us to output the value stored to stdout
    cout << "Radius 1: " << radius << endl;

    circle1.getArea(area);
    cout << "Area 1: " << area << endl;

    // declare and initialize Circle object using one-arg constructor
    Circle circle2(3);
    cout << "Circle 2: ";
    circle2.printCircle();

    circle2.compute();
    cout << "Circle 2: ";
    circle2.printCircle();

    cout << "Circle 1 equals Circle 2 ? " << circle1.equalCircle(circle2) << endl;
    cout << "Circle 1 equals Circle 2 ? " <<
        (circle1.equalCircle(circle2) ? "true" : "false") << endl;


    // declare and initialize a Cylinder object using no-arg constructor
    Cylinder cylinder1;

    // declare local variables that will be used when calling the cylinder's getter methods
    int height;
    double volume;

    cout << "Cylinder 1 :";
    cylinder1.printCylinder();

    cylinder1.Circle::setRadius(5);
    cylinder1.Circle::compute();
    cout << "Cylinder 1 :";
    cylinder1.printCylinder();

    cylinder1.setHeight(7);
    cylinder1.compute();
    cout << "Cylinder 1 :";
    cylinder1.printCylinder();

    cylinder1.getHeight(height);
    cout << "Height 1: "<< height << endl;
    
    cylinder1.getVolume(volume);
    cout << "Volume 1: "<< volume << endl;

    // declare and intialize a cylinder using the two-arg constuctor
    // providing 4 for the radius and 8 for the height
    Cylinder cylinder2(4,8);

    // print the cylinder to stdout
    cout << "Cylinder 2 :";
    cylinder2.printCylinder();

    // compute the area
    cylinder2.Circle::compute();
    // print the Cylinder to stdout
    cout << "Cylinder 2 :";
    cylinder2.printCylinder();

    // compute the volume
    
    cylinder2.compute();
    // print the Cylinder to stdout
    cout << "Cylinder 2 :";
    cylinder2.printCylinder();
    //display if the first and second Cylinder are equal
    cout << "Cylinder 1 equals Cylinder 2 ? " <<
        (cylinder1.equalCylinder(cylinder2) ? "true" : "false") << endl;


}
