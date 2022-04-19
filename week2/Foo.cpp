#include <iostream>
#include "Bar.h"
#include <string>
using namespace std;
class Foo {

    int x;
    int y ;
    public:
    Foo(int a , int b) {
        x = a;
        y = b ;

    }

    Foo (void) {
        x = -1; 
        y =-2;
    }

void print(){
    cout << x << ' ' << y << endl;
}

};


void doit(Bar b ) {
    b.doit();
}


int main(void) {
   Bar b;
   b.print();
   b.doit();
   doit(b);
   b.print();
    
    return 0;
}

 
/*

int main(void) {
    Foo f(6,10);
    Bar* b = (Bar*) &f;

    
  
    
    b ->print();
    
    b += 1; 

    b ->print();
    

    
    return 0;
}
*/