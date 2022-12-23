#include<iostream>
using namespace std;

int main()
{
 float vegPrice;
 float fruitPrice;
 int vegKgs;
 int fruitKgs;
 float coinRate = 1.94;
 float cost1;
 float cost2;
 float sum;
 float convert;

cout<<"Enter the vegetable Price: "<<endl;
cin>>vegPrice;

cout<<"Enter the Fruits price: "<<endl;
cin>>fruitPrice;

cout<<"Enter the amount of vegetable in kgs: ";
cin>>vegKgs;

cout<<"Enter the amount of fruits in kgs: ";
cin>>fruitKgs;

cost1 = vegPrice*vegKgs;
cost2 = fruitPrice*fruitKgs;

sum = cost1+cost2;

convert = sum/coinRate;

cout<<"The total earning in Rp = "<<convert;



}