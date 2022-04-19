#include <iostream>
using namespace std;

// Simple class
class A
{
public:
    int a;

    // COnstructor initializing
    // the data members
    A() { a = 0; }

    A(int a)
    {
        cout << "Constructor A(int a) is invoked" << endl;
        this->a = a;
    }

    void fun()
    {
        cout << "Func A";
    }
};

// Complex class
class B
{

public:
    int b;
    A objA;

    // COnstructor initializing the
    // b members
    B(int b) : objA(b)
    {
        this->b = b;
    }

    // Function to print values
    // of b members in class
    // A and B
    void display()
    {
        cout << "Data in object of class B = " << b
             << endl;
        cout << "Data in member object of "
             << "class A in class B = " << objA.a;
    }
};

int main()
{
    // Creating object of class B
    B objb(25);

    // Invoking display function
    objb.display();

    objb.objA.fun();

    return 0;
}