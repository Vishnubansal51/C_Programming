#include<iostream>

using namespace std;
int main()
{
     float bas_salary,per_allownace,per_deduction,net_salary;
     cout<<"enter basic salary";
     cin>>bas_salary;
     cout<<"enter percentage allowance";
     cin>>per_allownace;
     cout<<"enter perecentage deduction";
     cin>>per_deduction;
     net_salary= bas_salary + bas_salary*per_allownace/100 - bas_salary*per_deduction/100;
     cout<<"net salary is"<<net_salary;
     
     return 0;
    
     
 }