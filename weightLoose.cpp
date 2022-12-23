#include<iostream>
using namespace std;

int main()
{
 float weight;
 float days = 15;
 float loose;

cout<<"Enter weight that you want to loose: ";
cin>>weight;

loose = weight*days;

cout<<"It will take you "<<loose<<" Days to loose "<<weight<<" KGs";
}