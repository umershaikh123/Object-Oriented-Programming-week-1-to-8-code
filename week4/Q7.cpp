#include <iostream>
#include <string>
 
#include<list> 
using namespace std;

int static count  = 0;
class Student {
 
public:
    
   string courses[6];
   
 

Student(){
}

Student(const Student& other){
 

      for (int i=0; i<6; i++){
          other.courses[i] == this->getCourse(i);
      }   
}


void setCourse(int index , string courseName ){
    if (index >= 0 && index <=5){
    courses[index] = courseName;
    }
    else{
        cout << "Please enter the right index";
    }
}

string getCourse(int i){
       return courses[i];
}

 void addCourse(string courseName){
     if (count < 6) {
      courses[count] = courseName; 
      count ++;}

      else {
          cout << " You can't enroll more than 6 courses";
      }
 }

//  friend ostream& operator << (ostream&out,  const Student& s) error
 friend ostream& operator << (ostream&out,  const Student& s){
    string course1 = s.courses[0];
    string course2 = s.courses[1];
    string course3 = s.courses[2];
    string course4 = s.courses[3];
    string course5 = s.courses[4];
    string course6 = s.courses[5];
 
    
     out << " \n You are currently enrolled in \n" 
      << course1 << "\n"
      << course2 << "\n" 
      << course3 << "\n"
      << course4 << "\n" 
      << course5 << "\n" 
      << course6 << "\n";
 
     return out;
 }


 int operator= (const Student& other) {
      for (int i=0; i<6; i++){
          other.courses[i] == this->getCourse(i);
      }   
 }

 ~Student(){
     cout << "Destructor"; 
     }



};



int main(){

Student Salman;
 Student Akbar(Salman);

 Salman.addCourse("BSCS 413");
 cout<< Akbar.getCourse(0);

 Akbar = Salman;
 cout<< Akbar;
 cout << Salman;
 // B20102116
return 0;
}







 
  //  string * c = new string[6];
  /*    string c[6];
     for (int i=0; i<6; i++){
         c[i] == s.getCourse[i];
        
      }    

       out << " You are currently enrolled in \n" ;
           if (c[0] == "") {
                out <<" 0 courses \n";
                return out;
            }

        for (int i=0; i<6; i++){
            out << c[i] << "\n";       
    }   */





          //string* c = new string[6];
     /* string c[6];
      for (int i = 0; i<=c->length(); i++){
      c[i] = courses[i];
      other->courses[i] = c[i];
      } */