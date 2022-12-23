#include<iostream>
using namespace std;

int main()
{

int size;
int cost;
int area;
int pounds;
int sqFeet;


cout<<"Enter the bag size in pounds: ";
cin>>size;

cout<<"Enter the cost of the bag: ";
cin>>cost;

cout<<"Enter area covered by each bag in square feet: ";
cin>>area;

pounds = cost/size;
sqFeet = size*area;

cout<<"Cost of the fertilizer per pounds is: "<<pounds<<endl;
cout<<"Cost of fertilizing the area per square feet is: "<<sqFeet;
}