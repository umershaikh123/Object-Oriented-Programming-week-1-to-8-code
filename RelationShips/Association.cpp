#include <iostream>
using namespace std;

// Simple class
class A
{
public:
    int a = 10;

    A() {}

    A(int a)
    {
        this->a = a;
    }
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

    void association(const A &obja)
    {
        int sum = obja.a + b;
        cout << sum;
    }
};

// Driver code
int main()
{
    A obja;
    B objb;
    objb.association(obja);
    return 0;
}