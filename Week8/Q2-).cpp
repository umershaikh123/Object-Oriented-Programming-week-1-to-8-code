#include <iostream>
#include <string>
using namespace std;

int main()
{

    double *p = new double;
    *p = 35.1;

    double *q = p;
    cout << *p << "  " << *q << endl;

    p = new double;
    *p = 27.1;

    cout << *p << "  " << *q << endl;

    *q = 12.5;
    cout << *p << "  " << *q << endl;

    delete p;
    delete q;

    return 0;
}

/*

    *p = 2;
    // p = 3; error

    *q = 3;

    cout << "P = " << p << "\n"; // address of p
    cout << "*P = " << *p << "\n";
    cout << "q = " << q << "\n";
    cout << "*q = " << *q << "\n";

    *p = a;
    *q = b;
    cout << "After changing a and b"
         << "\n";

    cout << "*P = " << *p << "\n";
    cout << "*q = " << *q << "\n";

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    cout << " changing  "
         << "\n";
    *p = 11;
    *p = a;
    cout << "a = " << a << "\n";

    cout << " changing  "
         << "\n";
    *q = 21;
    *q = b;

    cout << "b = " << b << "\n";

    delete p;
    delete q;
    return 0;
*/