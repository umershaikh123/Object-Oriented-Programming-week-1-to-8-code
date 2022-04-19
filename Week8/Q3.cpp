#include <iostream>
#include <string>
using namespace std;

class Thing
{
private:
    int *x;

public:
    Thing();
    Thing(int Val);
    void set(int val);
    int get();
    ~Thing();
};

Thing::Thing()
{
    cout << "constructing new thing using default constructor " << endl;
}
Thing::Thing(int val)
{
    cout << "constructing new thing with value = " << val << endl;
}

void Thing::set(int val)
{

    cout << "*x = " << val << endl;
    *x = val;
}

int Thing::get()
{
    cout << "*x = " << *x << endl;
    return *x;
}

Thing::~Thing()
{
    cout << "deleting thing with value = " << *x << endl;
}

void Do2(int level)
{
    cout << "Enter Do2 with level = "
         << level << endl;
    Thing TT(level);
}

void Do1(int level)
{
    cout << "Enter Do1 with level = "
         << level << endl;
    Thing TTT(level);
    Do2(level + 1);
}

int main()
{

    Thing T(1);
    cout << endl;
    Do2(2);
    cout << endl;
    Do1(3);
    cout << endl;
    Do2(5);
    cout << endl;
    return 0;
}
