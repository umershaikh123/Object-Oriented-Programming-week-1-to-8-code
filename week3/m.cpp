#include <iostream>
#include <string>
using namespace std;
 





class ClassA {
public:

    int ivar = 7;

    void m1(){
        cout<<("A's m1 , ");
    }
    void m2(){
        cout<<("A's m2 , ");
    }
    void m3(){
        cout<<("A's m3 , ");
    }

};
class ClassB: public ClassA{
public:

    void m1() {
        cout<<("B's m1 , ");
    }


};
class ClassC: public ClassB{
public:

    void m3() {
        cout<<("C's m3 , "+ this->ivar+6);
    }
} ;


    int main() {
        ClassA a =  ClassA();
        ClassB b =  ClassB();
        ClassC c =  ClassC();


        ClassA a2 = ClassA();
        b.m1();
        b.m2();
        b.m3();

    }