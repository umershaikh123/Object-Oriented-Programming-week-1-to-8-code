#include <iostream>
#include <string>
using namespace std;

class point
{
private:
    /* data */
public:
       int a;
       int b;
       int result;



 
 

//Functions
void show(){
cout << "Number a = " << a << "\n";
cout << "Number b = " << b << "\n";
}

int add(){
    this-> result = a+b;
    return result;
} 

void addObjects(point &point1 , point &point2){
    int r1  =point1.add();
    int r2 = point2.add();
    int FinalResult = r1+r2;
    cout << "Point1 + Point2 = " << FinalResult << "\n";
}

int subtract(){
   this-> result = a-b;
   return result;
}
void subtractObjects(point &point1 , point &point2){
    int r1  = point1.subtract();
    int r2 = point2.subtract();
    int FinalResult = r1-r2;
    cout << "Point1 - Point2 = " << FinalResult << "\n";
}

int multiply(){
   this-> result = a*b;
    return result;
}
void multiplyObjects(point &point1 , point &point2){
    int r1  =point1.multiply();
    int r2 = point2.multiply();
    int FinalResult = r1*r2;
    cout << "Point1 x Point2 = " << FinalResult << "\n";
}



   // ~point(); destructor





};

 


 

 