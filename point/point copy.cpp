#include <iostream>
#include <string>
#include "point copy.h"
using namespace std;


int main() { 
 
point p1();
point p2(10 , 20);

p2.show();
point p3(p2);
p3.show();

point p4(30,40);
p4.addObjects(p2 , p3);

p1.addObjects(p2 , p3);

 
return 0;


}