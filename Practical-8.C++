//Create Class methods//
#include <iostream>
using namespace std; 
class Classroom 
{ 
    public:
   void world() 
{ 
     
    cout<<"Classroom name: Rockstar"; 
 } 

  void form() 
 { 
    
cout<<"Class teacher: Sandhya Mam";
  }
 
  void students(int num)
 {
  
 cout<<"Number of students:"<<num;

  } 
 

   };

     int main() 
  { 
    Classroom ob; ob.world(); ob.form(); ob.students(62);
  
      return 0;

}
