#include <iostream>
using namespace std;

class fib1
{

public:
    fib1() {}
    ~fib1() {}

    int fibbonacchi(int n)
    {
        cout << n;
        return fibbonacchi(n - 1) + fibbonacchi(n - 2);
    }
};

int main()
{

    fib1 f{};
    int result = f.fibbonacchi(2);
    cout << result;
    return 0;
}
