#include<iostream>
using namespace std;

int main()
{
  string Name;
  float sub1;
  float sub2;
  float sub3;
  float sub4;
  float sub5;
  float total;
  float sum;
  float percent;

cout<<"Enter your Name: ";
cin>>Name;

cout<<"Enter the subject 1 marks: ";
cin>>sub1;

cout<<"Enter the subject 2 marks: ";
cin>>sub2;

cout<<"Enter the subject 3 marks: ";
cin>>sub3;

cout<<"Enter the subject 4 marks: ";
cin>>sub4;

cout<<"Enter the subject 5 marks: ";
cin>>sub5;

total = 500;

sum = sub1+sub2+sub3+sub4+sub5;

percent = (sum/total)*100;

cout<<"Dear "<<Name<<" congratulation you have got "<<percent<<"% Marks out of 500";
}

