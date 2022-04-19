#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <functional>
#include <iostream>

using namespace std;

class c
{
public:
  int last = 0, next = 1;

  int func()
  {
    int last = 0, next = 1;
    int oldLast = last;
    last = next;
    next = oldLast + next;
    return oldLast;
  }
};

int fib1(int n)
{
  cout << n;
  return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n)
{
  if (n < 2)
  {
    return n;
  }
  return fib2(n - 1) + fib2(n - 2);
}

int fib3(int n)
{

  static map<int, int> values;
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

int fib4(int n)
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

int main()
{

  int result = fib3(40);
  cout << result;

  return 0;
}

/*
private int last = 0 , next = 1;

public IntStream stream(){

 return IntStream.generate ( () - >{

int oldLast = last;
last = next;
next = oldLast + next;
return oldlast;


 }      );

}

*/