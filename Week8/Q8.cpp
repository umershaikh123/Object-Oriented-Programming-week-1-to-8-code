
#include <iostream>
#include <string>
using namespace std;

class CD
{

public:
    int a;
    static int b;
    CD()
    {
        cout << "Constructor called , " << endl;
    }
    ~CD()
    {
        cout << "Destructor called , " << endl;
    }

    static const void fun(int c)
    {

        cout << b;
    }

    void fun2()
    {
        cout << a;
    }
};

int main()
{

    for (int i = 1; i <= 2; i++)

        CD c;

    return 0;
}
