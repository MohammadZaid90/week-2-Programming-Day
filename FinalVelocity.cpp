#include<iostream>
using namespace std;

int main()
{

int initial;
int Final;
int time;
int acceleration;


cout<<"Enter the initial velocity: ";
cin>>initial;

cout<<"Enter the Acceleration: ";
cin>>acceleration;

cout<<"Enter the Time: ";
cin>>time;


//Formula of Final velocity = (((initial velocity)/time) +acceleration)*time;

Final = ((acceleration+(initial/time))*time);

cout<<"The final Velocity is: "<<Final;
}