// include pre-processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
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
    accessStructMembers();
}
