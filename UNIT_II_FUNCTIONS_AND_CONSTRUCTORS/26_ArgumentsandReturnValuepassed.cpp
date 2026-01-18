#include<iostream>
using namespace std;
bool check_even_odd(int);
int main(){
int num;
cout << "Enter a integer to check:" << endl;
cin>>num;

bool c=check_even_odd(num);
 if(c) 
 cout<<num<<": Is Even Number."<<endl;
 else 
 cout <<num<<":Is Odd Number." << endl;
 return 0;
} 
bool check_even_odd(int num){
 if(num%2==0) 
   return true;
 else 
   return false; 
}

