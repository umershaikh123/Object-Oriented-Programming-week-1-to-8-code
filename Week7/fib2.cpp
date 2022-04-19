#include <iostream>
using namespace std;

class fib2
{

public:
    fib2() {}
    ~fib2() {}

    int fibbonacchi(int n)
    {
        if (n < 2)
        {
            return n;
        }
        return fibbonacchi(n - 1) + fibbonacchi(n - 2);
    }
};

int main()
{

    fib2 f{};
    int result = f.fibbonacchi(4);
    cout << result;
    return 0;
}