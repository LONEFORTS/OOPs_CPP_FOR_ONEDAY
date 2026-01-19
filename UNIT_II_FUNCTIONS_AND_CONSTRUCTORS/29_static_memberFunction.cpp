//Program to show static memeber functions;
//Restriction on static member functions of static are : 
//1.only access to static members of the same lass 
//2.They do not have 'this' pointer
//3.There cannot b a static and a non-static version of the sa,me class.

#include<iostream> 
using namespace std;
 
  class display
  {
   private:
     static int count;
   public: 
    
    
      static void disp() 
      {
        count++; //increment count 
        cout<<count<<endl;
      } 
      
     
  }; 
  
    int display:: count; //defining static variables outside a class;
    int main() 
    {
      display obj,obj2,obj4,oj3;
      obj.disp();
      obj2.disp();
      oj3.disp();
      obj4.disp();
      
      //function call with class name 
      display:: disp();
    }