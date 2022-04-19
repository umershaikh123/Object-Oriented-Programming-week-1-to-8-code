#include <iostream>
#include <string>
#include "point copy.h"

using namespace std;

 
int main() { 
 
point p1(1,2);
point p2(6,5 , 3);

point p3 = p1;

point p4 = p2;

p3.a = 10;
p3.b = 10;

cout << "Number a = " << p3.a << "\n";
cout << "Number b = " << p3.b << "\n";

cout << "Number a = " << p4.a << "\n";
cout << "Number b = " << p4.b << "\n";
cout << "Number c = " << p4.c << "\n";



return 0;


}
 


/*
point p1();
point np{};
 
point p2(10 , 20);

p2.show();
point p3(p2);
p3.show();

point p4(30,40);
p4.addObjects(p2 , p3);

np.addObjects(p2 , p3 );

 
*/
