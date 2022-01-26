// #Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
//     totalSalary = basic + hra + da + allow – pf
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.

#include<iostream>
using namespace std;
int main(){
    int salary;
    char grade;
    cin>>salary>>grade;
    int allow;
    float hra = (20.0/100)*salary;
    float da = (50.0/100)*salary;
    float pf = (11.0/100)*salary;

    if(grade=='A'){
        allow = 1700;
    }else if(grade=='B'){
        allow = 1500;
    }else{
        allow=1300;
    }
    float totalSalary = salary + hra + da + allow - pf;
    int x = (int) totalSalary ; // type casted to integer, x will hold integral part of totalsalary
    if(totalSalary - x > 0.5){
    totalSalary = x+1;
    }else{
         totalSalary = x;
    }
    cout<<totalSalary;
    return 0;
}