#include <iostream>
using namespace std;

class fib4
{

public:
    fib4() {}
    ~fib4() {}

    int fibbonacchi(int n)
    {
        int last = 0, next = 1;
        for (int i = 0; i < n; i++)
        {
            int oldLast = last;
            last = next;
            next = oldLast + next;
        }
        return last;
    }
};

int main()
{

    fib4 f{};
    int result = f.fibbonacchi(4);
    cout << result;
    return 0;
}