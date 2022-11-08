// include pre-processor directives
#include <iostream>
#include <string>

// use C++ standard library namespace
using namespace std;

/* this function has 3 parameters and to also has a local variable*/
void congratulate2(string student, string course, string programmer){
    // The C strlen cannot be used with the string type in C++
    // the C++ function length must be used instead
    int days = programmer.length();
    
    // the C++ string type may not be formatted using the %s format specifier
    // the strong type must be converted to a const char * using the c_str()
    // function before it may be formatted using the %s
    // the preferred way to output the C++ string type is by using cout
  printf("%s has done as much %s programming as %s could fit into %d days.\n",
        student.c_str(), course.c_str(), programmer.c_str(), days);
}

void congratulate1(string student, string course, string programmer){
    cout << student << " has done as much " << course << " programming as "<< programmer << "."<<endl;
    // function declarations must appear in a file before
    // calls may be made to the function
    congratulate2(student, course, programmer);
}



