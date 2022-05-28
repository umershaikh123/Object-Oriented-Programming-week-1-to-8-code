#include <iostream>
#include <map>
using namespace std;

class fib3
{

private:
  static map<int, int> values; 

public:
    fib3() {}
    ~fib3() {}

int fib3(int n)
{

  
  if (n == 0 || n == 1)
  {
    return n;
  }

  map<int, int>::iterator iter = values.find(n);

  if (iter == values.end())
  {
    return values[n] = fib3(n - 1) + fib3(n - 2);
  }

  else
  {
    return iter->second;
  }
}
};

int main()
{

    fib3 f;
    int result = f.fib3(4);
    cout << result;
    return 0;
}
