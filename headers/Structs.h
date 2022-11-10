// include pre-processor directives
#include <iostream>

// a struct is a collection of related data (memebrs)
// the members may be only fields (variables)
// the members may be of different types
// declare a struct for a Person
struct Person
{
    // declare two members in the Person struct
    float heightInMeters;
    int weightInKilos;
};

// declare another struct for a Person using
// a type definition. A type definition defines
// an alias for a struct that allows the alias
// to be used like a primitive data type
typedef struct {
    // declare two members in the Person struct
    float heightInMeters;
    int weightInKilos;
} PersonType; // this is the alias 

// use C++ standard library namespace
using namespace std;

/* this function uses the Person struct for purposes
 * of displaying the values in its members*/
void accessStructMembers(void){
    // declare a Person stuct
    struct Person person;

    // assign values to the members of the Person struct
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    //display values in members

    cout << "Person's weight is " << person.weightInKilos << " kilograms " << endl;
    cout << "Person's Height is " << person.heightInMeters << " meters " << endl;

    // declare a Person struct using the alias (type definition)
    PersonType p;

    // assign values to the members of the Person struct
    p.heightInMeters = 1.8;
    p.weightInKilos = 96;

    // display values in members
    cout << "Person's weight is " << p.weightInKilos << " kilograms " << endl;
    cout << "Person's Height is " << p.heightInMeters << " meters " << endl;
}

/* this function will have a Person struct as a parameter. it will compute and return
 * BMI of the Person struct*/
float bodyMassIndex(struct Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
};


