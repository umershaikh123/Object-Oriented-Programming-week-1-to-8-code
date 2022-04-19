#include <iostream>
using namespace std;

class Bar{
 
public: 
int z;

public:
    Bar(void) {
        z = 42;
    }
  void print() {cout << " Z = "<< z << endl;}

  void doit() {z += 1;}
  
};
 
 
