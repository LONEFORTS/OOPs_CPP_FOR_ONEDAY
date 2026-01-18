//Program to Demonstrate inline function
//in CPP,if a function is inline than the compiler places  a copy of the code of that function at each point where the function is called at compile time.
#include<iostream>
using namespace std;
inline int Max(int x, int y) 
{
 return (x>y)?x:y;
} 
int main() 
{
 
   cout<<"Max(20,10):"<<Max(20,10)<<endl;
   cout<<"Max(0,110):"<<Max(0,110)<<endl; 
   cout<<"Max(1010,100):"<<Max(1010,100)<<endl;
   return 0;
}