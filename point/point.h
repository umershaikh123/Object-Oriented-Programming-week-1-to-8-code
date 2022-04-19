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



public: 
    point(); // null constructor
    point(int a , int b); // Parameterized constructor
    point(point &n); // copy Constructor

void show(){}

int add(){} 
void addObjects(point &a , point &b){}

int subtract(){}
void subtractObjects(point &a , point &b){}

int multiply(){}
void multiplyObjects(point &a , point &b){}


   // ~point(); destructor





};

point::point(){ }   

 
  
    // Parameterized constructor
  point::point(int a , int b){ 
    this ->a = a;
    this ->b = b;
    } 
    
     // copy Constructor
   point:: point(point &n){
    this ->a = n.a;
    this ->b = n.b;
    } 


//Functions
void point::show(){
cout << "Number a = " << a << "\n";
cout << "Number b = " << b << "\n";
}

int point:: add(){
    this-> result = a+b;
    return result;
} 

void point:: addObjects(point &point1 , point &point2){
    int r1  =point1.add();
    int r2 = point2.add();
    int FinalResult = r1+r2;
    cout << "Point1 + Point2 = " << FinalResult << "\n";
}

int point:: subtract(){
   this-> result = a-b;
   return result;
}
void point:: subtractObjects(point &point1 , point &point2){
    int r1  = point1.subtract();
    int r2 = point2.subtract();
    int FinalResult = r1-r2;
    cout << "Point1 - Point2 = " << FinalResult << "\n";
}

int point:: multiply(){
   this-> result = a*b;
    return result;
}
void point:: multiplyObjects(point &point1 , point &point2){
    int r1  =point1.multiply();
    int r2 = point2.multiply();
    int FinalResult = r1*r2;
    cout << "Point1 x Point2 = " << FinalResult << "\n";
}



 

 