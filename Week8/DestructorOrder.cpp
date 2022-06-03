#include <iostream>
#include <string>
using namespace std;

class A
{

public:
    A()
    {
        cout << "A CONSTRUCTOR CALLED " << endl;
    }

    virtual ~A()
    {
        cout << "A DESTRUCTOR CALLED " << endl;
    }
};

class P
{

public:
    P()
    {
        cout << "p CONSTRUCTOR CALLED " << endl;
    }

    virtual ~P()
    {
        cout << "A DESTRUCTOR CALLED " << endl;
    }
};

class B
{

public:
    A objA;
    P *ptr;

    B()
    {
        cout << "B CONSTRUCTOR CALLED " << endl;
    }

    virtual ~B()
    {
        cout << "B DESTRUCTOR CALLED " << endl;
    }
};

class C : public B
{

public:
    C()
    {
        cout << "C CONSTRUCTOR CALLED " << endl;
    }

    virtual ~C()
    {
        cout << "C DESTRUCTOR CALLED " << endl;
    }
};

int main()
{

    B *objB = new C;
    delete objB;
    return 0;
}
