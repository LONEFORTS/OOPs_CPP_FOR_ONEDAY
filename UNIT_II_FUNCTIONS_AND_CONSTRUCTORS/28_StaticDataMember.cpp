//Program to demonstrate the static data members.
//static variables are normally used to maintain a values common in class.
#include<iostream>
#include<cstring>
#include<string>
#include<fstream>

using namespace std;

class EMP
{
  char name [10],post[10]; 
  int salary;
  public: 
    static int m_sum,s_sum,w_sum; //variables for 3 posts 
    
   
    void getdata()
    {
     cout << "\n Enter name,post & salary of an employee = " << endl;
     cin>>name;
     cin>>post;
     cin>>salary;
    }  
    
    
    void addsalary()
    {
      int x;
      x = strcmp(post,"manager");
      if(x==0) 
       m_sum=m_sum + salary;
       x= strcmp(post, "supervisor");
      if(x==0) 
       s_sum=s_sum+salary; 
       x=strcmp(post,"worker");
      if(x==0) 
       w_sum=w_sum+salary; 
    } 
    
    
    void displaydata() 
    {
      cout<<"\n"<<name<<post<<salary;
    }
    
    
}; // end of class 

// defining static variables;


  int EMP::m_sum;\
  int EMP::s_sum;
  int EMP::w_sum;
  
  int main()
  {
    
      EMP E[10];
      int N,I ,temp; 
    
      cout << "\n Enter total no.of employees: " << endl;
      cin>>N;
     for(I=0;I<N;I++) 
     {
                                       
        E[I].getdata();
        E[I].addsalary();                
                     
     } 
     
     cout<<"\n Name Poat Salary:"<<endl;
     
     for(I=0;I<N;I++) 
     {
        E[I].displaydata();     
     
    
     } 
     
     cout << "\n Total salary of all managers: " <<EMP::m_sum<< endl; 
     cout << "\n Total salary of all supervisors: " <<EMP::s_sum<< endl;
     cout<<"\n Total salary of all workers: "<<EMP::w_sum<<endl;
     temp=EMP::m_sum+EMP::s_sum+EMP::w_sum;
     cout<<"\n Total salary of Employees int the company"<<temp<<endl;
  } //end of main