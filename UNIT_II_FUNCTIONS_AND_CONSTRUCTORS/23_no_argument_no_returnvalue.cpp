//Program for No arguments passed but no return value

#include<iostream>
using namespace std;

//function declaration
void check_even_odd();
int main(){
check_even_odd();
return 0;
} 
void check_even_odd(){
int num;

cout << "Enter A a integer to check: " << endl;
cin>>num;
if(num%2==0){
  cout<<"Your Number is: "<<num<<" and it is Even"<<endl;
} 
else {
  cout<<"Your Number is:8 "<<num<<" and it is Odd"<<endl;
}

}