#include <iostream>
#include <string>
#include<list> 
using namespace std;

 
 
class Fib1
{
private:
  
public:
    Fib1() {}
};

int fib1(int n) {
    cout << n;
    return fib1(n-1) + fib1(n-2);
    }

int main(){

cout << fib1(4);
 
return 0;
}



