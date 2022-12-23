#include<iostream>
using namespace std;

int main()
{
 string name;
 int aPrice;
 int cPrice;
 int aSold;
 int cSold;
 int charity;
 int total1;
 int total2;
 int sum;
 int remain;

cout<<"Enter the name of movie: ";
cin>>name;

cout<<"Enter the price of adult Ticket: ";
cin>>aPrice;

cout<<"Enter the price of child Ticket: ";
cin>>cPrice;

cout<<"Enter the number adult ticket sold: ";
cin>>aSold;

cout<<"Enter the number of child ticket sold: ";
cin>>cSold;

cout<<"Enter the charity percentage: ";
cin>>charity;

total1 = aPrice*aSold;
total2 = cPrice*cSold;

sum=total1+total2;

remain=sum-(sum*charity)/100;

cout<<"Total ammount Generated: "<<sum<<endl;
cout<<"Amount after Donation: "<<remain;
}