#include <iostream>
#include <string>
 
using namespace std;

class object2 {   

  public:              
    int myNum2 = 100;        
    string myString2 = "s";   
    
    object2(){
    }

    object2(int n , string s){
        myNum2 = n;
        myString2 = s;
    }

     void myfun2(){
     object2 o1;
    // o1.myNum2 = 10;
   //  o1.myString2 = "String";
     cout << "My number = " << o1.myNum2 << "\n";
     cout << "My String = " << o1.myString2 << "\n";
 }

     void show(){
      
     cout << "My number = " << myNum2 << "\n";
     cout << "My String = " << myString2 << "\n";
 }

 

};