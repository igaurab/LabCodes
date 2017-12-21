/*
Gaurab Panthee
073/BCT/14

This Program Demonstrates the Use of Inline Function.
Syntax For Creating Inline Function:
    inline Function_Decleration.

*/

#include<iostream>
using namespace std;
//Inline Function.
inline float netSalary(float salary){
    return 0.9*salary;
}

//Main Starts:
int main(){
    float salary;
    cout <<"Enter Salary Of Employee: " << endl;
    cin >> salary;

    cout << "Net Salary: " << netSalary(salary) << endl;

    return 0;
}//Main Cose