// Q5 Association
#include <iostream>
using namespace std;

// Association
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

    B() {}

    B(int b)
    {
        this->b = b;
    }

    /*
    Association is established when we pass an object through
    another class function parameter
    Everything else remains the same.
    we can see the association being performed in the below function
    */
    void association(const A &obja)
    {
        int sum = obja.a + b;
        cout << sum;
    }
};

int main()
{
    // Association in Main
    A obja;
    B objb;
    objb.association(obja);
    return 0;
}