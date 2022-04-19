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

    cout << " setter called " << endl;
    cout << "*x = " << val << endl
         << endl;
    *x = val;
}

int Thing::get()
{
    cout << " Getter called " << endl;
    cout << "*x = " << *x << endl
         << endl;
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

void Do(Thing Tcopy, int level)
{
    Tcopy.set(level);
}

int main()
{

    Thing T(1);
    cout << endl;
    Thing TT = T;

    cout << "*(T.x) == " << T.get() << endl
         << endl;
    cout << "*(TT.x) == " << TT.get() << endl
         << endl;
    T.set(2);
    cout << "*(T.x) == " << T.get() << endl
         << endl;
    cout << "*(TT.x) == " << TT.get() << endl
         << endl;

    Do(T, 3);

    cout << "After calling Do(T,3)  *(T.x) == " << T.get();
    cout << endl
         << endl;

    cout << "*(TT.x) == " << TT.get();
    cout << endl
         << endl;
    return 0;
}
