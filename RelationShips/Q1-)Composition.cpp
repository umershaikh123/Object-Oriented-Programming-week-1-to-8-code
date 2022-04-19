#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A() { this->a = 0; }

    A(int a) { this->a = a; }
};

class B
{
public:
    int b;
    A objA;
    B() { this->b = 0; }

    B(int b)
    {
        this->b = b;
        objA.a = b;
    }

    void display()
    {
        cout << "B = " << b << "\n";
        cout << "A = " << objA.a << "\n";
    }

    ~B()
    {
    }
};

// Driver code
int main()
{
    // Creating object of class B
    B objb(25);

    // Invoking display function
    objb.display();
    return 0;
}