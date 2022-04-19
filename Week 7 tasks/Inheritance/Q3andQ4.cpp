// Inheritance
// Q3 and Q4
#include <iostream>
#include <string>
using namespace std;

class A
{

public:
    virtual void m1()
    {
        cout << "A's m1 , ";
    }

    virtual void m2()
    {
        cout << "A's m2 , ";
    }

    virtual void m3()
    {
        cout << "A's m3 , ";
    }
};

class B : public A
{

public:
    virtual void m1() override
    {
        cout << "B's m1 , ";
    }
};

class C : public B
{

public:
    void m3() override
    {
        cout << "C's m3 , ";
    }
};

int main()
{

    C cz;
    A *a2 = new C(); // Conversion Base to Derived
    A *az = &cz;     // Conversion Base to Derived

    A r;
    C *c2 = (C *)&r; // Conversion Derived to Base

    // Overriding ( Dynamic polymorfism)
    a2->m1();
    a2->m2();
    a2->m3();
    cout << "\n";

    az->m1();
    az->m2();
    az->m3();

    cout << "\n";
    c2->m1();
    c2->m2();
    c2->m3();

    return 0;
}
