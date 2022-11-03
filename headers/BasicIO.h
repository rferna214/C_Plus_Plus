// include ore-processor directives
# include <iostream>
# include <string>

#define FIRST_NAME "Ron"
#define LAST_NAME "Fernandez"
#define AGE 22
#define WEIGHT 140

// use C++ standard library namespace
using namespace std;

/* this function will use cout and the insertion operator
 * to write data to stdout */
void output(void){
    // cout is object of the output stram of a c++ application (terminal, file)
    // << is the insertion operator and its used to show output to
    // the output stream
    // a newline character is not appended to the end of the output, so 
    // we must used the endl command
    cout << "Your first name is " << FIRST_NAME << endl;
    cout << "Your last name is " << LAST_NAME << endl;
    cout << "Your weight name is " << WEIGHT << " and your age is " << AGE << endl;
    cout << FIRST_NAME<< " ";
    cout << LAST_NAME << endl;
}

/* this function will use cin and the extraction operator to input
* data from stdin */

void input() {
    //declare variables to store input data
    int age;
    float weight;
    // C++ has the string type
    string name;

    // input an int from stdin
    cout << "Enter your age: ";
    // cin is an object of the input stream of a c++ application
    // >> is the extraction operator and its used to read input from
    // the input stream and place it in a variable
    cin >> age;
    cout << "Entered age is " << age << endl;

    // input a float from stdin
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Entered weight is " << weight << endl;

    // input a float and an int
    cout << "Enter your weight and age sperated by a space: ";
    cin >> weight >> age;
    cout << "Entered weight is " << weight << " and entered age is: " << age << endl;

    // input a string
    cout << "Enter your full name: ";
    // CIN stops reading when it encounters and empty space
    // cin >> name;
    // getline reads a full line from the input stream, including the newline
    // character generated when the Enter key is pushed. This can prevent it
    // from reading the actual input string, so we must call the ignore
    // function before calling getline to ingore the newline character.
    cin.ignore();
    getline(cin,name);
    cout << "Entered full name is " << name << endl;

}