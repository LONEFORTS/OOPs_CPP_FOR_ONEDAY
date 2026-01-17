//PROGRAM FOR DECLARATION AND CALLING OF FUNCTION.

#include<iostream>
using namespace std;

//function declaration:

int max(int num1,int num2); 

int main(){
int x=150,y=200;
int ret;

//calling function to get max value.

ret=max(x,y) ;
cout<<"Max Value is:"<<ret<<endl;


return 0;
} 

//Function returning the max between two numbers:

int max(int num1, int num2) {
//local variable declaration:

int result;
 if (num1>num2){
 result=num1;
 } 
 else {
 result=num2;
 } 
 return result;
 

}    
