// Q5 Composition
#include <iostream>
using namespace std;

// Composition
class A
{
public:
    int a = 10;

    A() {}

    A(int a) { this->a = a; }
};

class B
{

public:
    int b = 3;
    // same as aggregation
    A obja;

    B() {}

    // composition changes : object A instance 'obja' constructor invoked
    B(int b, int a) : obja(a)
    {
        this->b = b;
    }

    void composition()
    {
        int sum = obja.a + b;
        cout << sum;
    }
};

int main()
{

    // Composition in Main
    // Changes : we don't need to initialize Object A instance
    B objb(3, 10);
    objb.composition();

    return 0;
}