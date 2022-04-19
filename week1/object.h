#include <iostream>
#include <string>
 
using namespace std;

class object {   

  public:              
    int myNum;        
    string myString;   
    

     void myfun(){
     object o1;
     o1.myNum = 10;
     o1.myString = "String";
     cout << "My number = " << o1.myNum << "\n";
     cout << "My String = " << o1.myString << "\n";
 }

 // function to be implemented
 void cppFun();
 

};


// outside class implementation of functtion
 void object::cppFun(){
 cout << "cpp Function";
 }
 




