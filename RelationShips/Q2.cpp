#include <iostream>
using namespace std;

class A
{

public:
    int a = 0;
    int b = 1;

    A()
    {
    }
    A(int a)
    {
        cout << "Parameter of A";
    }
    friend ostream &operator<<(ostream &out, A obja)
    {
        cout << "Class A attribute a = " << obja.a << "\n";
        cout << "Class A attribute b = " << obja.b << "\n";
    }
};

class B : public A
{

public:
    int c = 3;
    int d = 4;

    B()
    {
    }
    B(int a)
    {
        cout << "PARAMETER OF B";
    }
    void show()
    {
        cout << "Class A attribute a = " << A::a << "\n";
        cout << "Class A attribute b = " << A::b << "\n";
        cout << "Class B attribute c = " << c << "\n";
        cout << "Class B attribute d = " << d << "\n";
    }

    friend ostream &operator<<(ostream &out, B objb)
    {
        cout << "Class A attribute a = " << objb.a << "\n";
        cout << "Class A attribute b = " << objb.b << "\n";
        cout << "Class B attribute c = " << objb.c << "\n";
        cout << "Class B attribute d = " << objb.d << "\n";
    }
};

class C : public B
{

public:
    int f = 5;
    int g = 6;

    C()
    {
    }

    C(int a) : B(4)
    {
        cout << "PARAMETER OF C";
    }

    void show()
    {
        cout << "Class A attribute a = " << A::a << "\n";
        cout << "Class A attribute b = " << A::b << "\n";
        cout << "Class B attribute c = " << B::c << "\n";
        cout << "Class B attribute d = " << B::d << "\n";
        cout << "Class C attribute f = " << f << "\n";
        cout << "Class C attribute g = " << g << "\n";
    }

    friend ostream &operator<<(ostream &out, C objC)
    {
        cout << "Class A attribute a = " << objC.a << "\n";
        cout << "Class A attribute b = " << objC.b << "\n";
        cout << "Class B attribute c = " << objC.c << "\n";
        cout << "Class B attribute d = " << objC.d << "\n";
        cout << "Class C attribute f = " << objC.f << "\n";
        cout << "Class C attribute g = " << objC.g << "\n";
    }
};

int main()
{

    // In inheritance all null constructor are default called
    //
    // Error in default value constructor
    C objC(2);
    A objA;
    cout << objC;
    cout << objA;
    return 0;
}
