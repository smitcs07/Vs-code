#include <iostream>
#include <string> // Include this for using string
using namespace std;

class A {
    int roll_no;
public:
    int marks;
    int total;
    void setdata(int roll) { roll_no = roll; } // Corrected setdata function
};

class B {
public:
    string name;
};

class C : public A, public B {
public:
    int a;
    void getdata(int m, int roll) {
        marks = m;
        setdata(roll);
        a = roll;
    }
    void setname() {
        name = "smit"; // Direct assignment of string
    }
    void display() {
        cout << "Name is: " << name << " Roll_no is: " << A::roll_no << endl; // Accessing roll_no via A::
    }
};

int main() {
    C obj;
    obj.getdata(98, 34);
    obj.setname(); // Call setname to set the name
    obj.display();
    return 0;
}
