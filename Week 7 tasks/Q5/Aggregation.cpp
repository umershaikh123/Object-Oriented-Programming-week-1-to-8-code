// Q5 Aggregation

#include <iostream>
using namespace std;

// Aggregation
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
    // Aggregation change : initializing another class object as state variable
    A obja;

    B() {}

    // Aggregation change : Passing the object through constructor
    B(int b, A &obja)
    {
        this->obja = obja;
        this->b = b;
    }

    // Aggregation change : Removing the parameters of object A
    void aggregation()
    {
        int sum = obja.a + b;
        cout << sum;
    }
};
int main()
{

    // Aggregation in Main
    A obja;
    B objb(3, obja);
    objb.aggregation();

    return 0;
}