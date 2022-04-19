#include <iostream>
#include <string>
using namespace std;


 
struct coffeeBean
{
     string name;
     string country;
     int strength;
};

 enum Day { Sunday = 1, Monday = 2, Tuesday = 3,  Wednesday =4 , Thursday = 5, Friday = 6, Saturday = 7 };


int main() {

coffeeBean myBean = { "Strata", "Colombia", 10 };
coffeeBean newBean;
newBean.name = "Flora";
newBean.country = "Mexico";
newBean.strength = 9;
cout << "Coffee bean " + newBean.name + " is from " + newBean.country << endl;

Day day1 = Sunday;

switch (day1){

case Sunday:
cout << "Sunday";
break;

default:
  break;
}



union numericUnion
{
     int intValue;
     long longValue;
     double doubleValue;
};

numericUnion myUnion;
myUnion.intValue = 3;
cout << myUnion.intValue << endl;
myUnion.doubleValue = 4.5;
cout << myUnion.doubleValue << endl;
cout << myUnion.intValue; cout << endl;



  return 0;
}





void myFunction() {
  cout << "I just got executed!";
}
