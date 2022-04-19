#include <iostream>
#include <string>
using namespace std;

class A
{

    // protected:
public:
    int ivar = 7;
    int a = 10;

public:
    void extra()
    {
        cout << "A's Extra , ";
    }
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
    int c = 15;
    void extraC()
    {
        cout << "C's Extra , ";
    }
    void m3() override
    {
        cout << "C's m3 , " << (ivar + 6);
    }
};

int main()
{
    A a;
    B b;
    C c;
    A *a2 = new C(); // Base to Derived
    A r;
    C *c2 = (C *)&r; // Derived to Base

    a2->m1();
    a2->m2();
    a2->m3();

    cout << "\n"
         << a2->ivar;

    c2->c = 1100;
    c2->ivar;

    cout << "\n"
         << c2->ivar;
    cout << "\n"
         << c2->c;
    c2->extraC();
    c2->m1();
    c2->m2();
    c2->m3();
    c2->extra();

    return 0;
}
