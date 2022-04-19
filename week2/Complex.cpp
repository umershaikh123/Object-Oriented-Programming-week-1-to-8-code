#include <iostream>
#include <string>
using namespace std;
class Complex{
private:
    /* data */
public:
     int real = 0;
     float imaginary = 0;

 //    friend ostream &operator<<(  Complex& obj , ostream& out ) {
//           out << obj.real << obj.imaginary ;
//           return out;
//     }
   
  

};


  ostream &operator<<(  Complex& obj , ostream& out ) {
           out << obj.real << obj.imaginary ;
           return out;
 }


//int main() {

 
 
  //  return 0; }
 

 