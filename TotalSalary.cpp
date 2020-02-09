/*Total Salary

Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Input format :
Basic salary & Grade (separated by space)*/

#include<iostream>
#include<math.h>

using namespace std;


int main(){
	float basic, hra, da, allow, pf;
	int totalSalary;
	char grade;

	cin>>basic>>grade;

	hra = 0.2 * basic; da = 0.5 * basic; pf = 0.11 * basic;
	allow = (grade == 'A') ? 1700 : (grade == 'B') ? 1500 : (grade == 'C')? 1300 : 1300;
	
	totalSalary=round(basic+hra+da+allow-pf);
	cout<< totalSalary;


	return 0;
}