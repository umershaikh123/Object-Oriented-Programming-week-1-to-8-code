#include <iostream>
#include <string>
using namespace std;

class Rational
{

public:
    Rational() {}
    Rational(int numer, int denom)
    {
        this->numerator = numer;
        this->denomanator = denom;
    }

    int const getNumerator()
    {
        return numerator;
    }

    int const getDenomanator()
    {
        return denomanator;
    }

    friend Rational &operator+(const Rational &left, int right);

    friend ostream &operator<<(ostream &out, const Rational &object);

   
    friend bool operator<(int a, const Rational &left)
    {
        if (a < left)
        {
            cout << "True";
        }
        cout << "True";
        return true;
    }

 

private:
    int numerator;
    int denomanator;
};

int main()
{

    Rational myRational(2, 3);
    int a;
    if (a < myRational)
    {
    }
    return 0;
}
