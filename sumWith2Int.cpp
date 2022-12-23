#include<iostream>
using namespace std;

int main()
{

int num1;
int num2;

cout<<"Enter the number 1: ";
cin>>num1;

cout<<"Enter the number 2: ";
cin>>num2;

num1 = num1+num2;

cout<<"Enter the number 3: ";
cin>>num2;

num2 = num1+num2;

cout<<"Enter the number 4: ";
cin>>num1;

num1 = num1+num2;

cout<<"Enter the number 5: ";
cin>>num2;

num2 = num2+num1;

cout<<"The final answer is: "<<num2;
}