#include <iostream>
using namespace std;

/*
Classes :
1-) UNique name of class
2-) Attributes
3-) Methods


Object :
1-) Identity
2-) State
3-) Behaviour

*/

// Private attributes by default
class object1
{

    // Private
    int a = 1;

private:
    int b = 2;

public:
    int c = 3;

    object1();
    object1(int c);
    ~object1();
    void show();
    void add();
};

object1::object1()
{
}

object1::object1(int c)
{
    this->c = c;
}

object1::~object1()
{
}

void object1::show()
{
    cout << "show";
}

void object1::add()
{
}

int main()
{
    // Object ko initialize
    object1 obj1{};

    cout << obj1.c;
    obj1.show();

    return 0;
}
