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

    B(int b, A &obja)
    {
        this->obja = obja;
        this->b = b;
    }

    void aggregation()
    {
        int sum = obja.a + b;
        cout << sum;
    }
};

// Driver code
int main()
{
    A obja;
    B objb(5, obja);
    objb.aggregation();

    return 0;
}