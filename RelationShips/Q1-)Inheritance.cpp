#include <iostream>
using namespace std;

class A
{

public:
     int a;
     int b;
     A()
     {
          cout << "A Null constructor invoked"
               << "\n";
     }
     A(int a, int b)
     {
          this->a = a;
          this->b = b;
          cout << "A parameterized constructor invoked"
               << "\n";

          cout << "a :" << a
               << "\n";

          cout << "b :" << b
               << "\n";
     }

     ~A() {}
};

class B : public A
{

public:
     int d;
     int e;
     B() : A()
     {
          cout << "B Null constructor invoked"
               << "\n";
     }

     B(int d, int e, int g, int h) : A(g, h)
     {
          this->d = d;
          this->e = e;
          cout << "B parameterized constructor invoked"
               << "\n";
          cout << "d :" << d
               << "\n";

          cout << "e :" << e
               << "\n";
     }

     ~B() {}
};

class C : public B
{

public:
     int d;
     int e;
     C() : B()
     {
          cout << "C Null constructor invoked"
               << "\n";
     }

     C(int d, int e, int f, int g, int h, int j) : B(f, g, h, j)
     {
          this->d = d;
          this->e = e;
          cout << "C  parameterized constructor invoked"
               << "\n";
          cout << "d :" << d
               << "\n";

          cout << "e :" << e
               << "\n";
     }

     ~C() {}
};

int main()
{

     // C c1;
     C c2(1, 2, 3, 4, 5, 6);

     return 0;
}

/*

#include <iostream>
using namespace std;

class A
{

public:
     int a;
     int b;
     A()
     {
          cout << "A Null constructor invoked"
               << "\n";
     }
     A(int a, int b)
     {
          this->a = a;
          this->b = b;
          cout << "A parameterized constructor invoked"
               << "\n";

          cout << "a :" << a
               << "\n";

          cout << "b :" << b
               << "\n";
     }

     A(int a)
     {
          this->a = a;

          cout << "A 2nd parameterized constructor invoked"
               << "\n";

          cout << "a :" << a
               << "\n";
     }
     ~A() {}
};

class B : public A
{

public:
     int d;
     int e;
     B() : A()
     {
          cout << "B Null constructor invoked"
               << "\n";
     }

     B(int d, int e, int g, int h) : A(g, h)
     {
          this->d = d;
          this->e = e;
          cout << "B parameterized constructor invoked"
               << "\n";
          cout << "d :" << d
               << "\n";

          cout << "e :" << e
               << "\n";
     }

     B(int d, int e, int g) : A(g)
     {
          this->d = d;
          this->e = e;
          cout << "B 2nd parameterized constructor invoked"
               << "\n";
          cout << "d :" << d
               << "\n";

          cout << "e :" << e
               << "\n";
     }
     ~B() {}
};

class C : public B
{

public:
     int d;
     int e;
     C() : B()
     {
          cout << "C Null constructor invoked"
               << "\n";
     }

     C(int d, int e, int f, int g, int h, int j) : B(f, g, h, j)
     {
          this->d = d;
          this->e = e;
          cout << "C  parameterized constructor invoked"
               << "\n";
          cout << "d :" << d
               << "\n";

          cout << "e :" << e
               << "\n";
     }

     C(int d, int e, int f, int g, int h) : B(f, g, h)
     {
          this->d = d;
          this->e = e;
          cout << "C 2nd parameterized constructor invoked"
               << "\n";
          cout << "d :" << d
               << "\n";

          cout << "e :" << e
               << "\n";
     }

     ~C() {}
};

int main()
{

     // C c1;
     // C c2(1, 2, 3, 4, 5, 6);
     C c3(11, 22, 33, 44, 55);
     return 0;
}

*/