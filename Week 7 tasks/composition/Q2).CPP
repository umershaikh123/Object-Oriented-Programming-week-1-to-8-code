// Composition
// Q2
#include <iostream>
using namespace std;

// Simple class
class A
{
public:
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    int a4 = 4;

    A() {}
};

class B
{

public:
    int b1 = 11;
    int b2 = 22;
    int b3 = 33;
    int b4 = 44;
    A objA;

    B() : objA() {}

    void showParent_Child_Attributes()

    {
        cout << "Attributes of Parent \n";
        cout << "a1 = " << objA.a1 << "\n";
        cout << "a2 = " << objA.a2 << "\n";
        cout << "a3 = " << objA.a3 << "\n";
        cout << "a4 = " << objA.a4 << "\n";

        cout << "Attributes of Child \n";
        cout << "b1 = " << b1 << "\n";
        cout << "b2 = " << b2 << "\n";
        cout << "b3 = " << b3 << "\n";
        cout << "b4 = " << b4 << "\n";
    }
};

int main()
{
    // Creating object of class B
    B objb;
    objb.showParent_Child_Attributes();

    return 0;
}