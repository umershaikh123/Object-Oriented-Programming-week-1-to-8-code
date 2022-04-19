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
    A obja;

    B() {}

    B(int b) : obja(b)
    {

        this->b = b;
    }

    void composition()
    {
        int sum = obja.a + b;
        cout << sum;
    }
};

// Driver code
int main()
{

    B objb(5);
    objb.composition();

    return 0;
}