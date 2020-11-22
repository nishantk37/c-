//Create object of a class and access class attributes//
#include <iostream>
#include <string>
using namespace std; 


class Student {
public:
   int RollNo; 
   string STDName; 
   string Branch; 
 }; 

int main()
{ 
   Student std; 


   std.rollNo = 43; 
   std.stdName = "NISHANT SHARMA"; 
   std.Branch = "EXTC"; 

      cout << "Student's Roll No.: " << std.rollNo << "\n"; 
      cout << "Student's Name: " << std.stdName << "\n"; 
      cout << "Student's Branch: " << std.Branch << "\n"; 
    return 0;
 
}
