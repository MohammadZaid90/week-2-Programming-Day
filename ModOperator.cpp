#include<iostream>
using namespace std;

int main()
{

int number;
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int k;
int l;
int m;
int n;
int o;
int sum;

cout<<"Enter the 8 digit number: ";
cin>>number;

a = number%10;
b = number/10;

c = b%10;
d = b/10;

e = d%10;
f = d/10;

g = f%10;
h = f/10;

i = h%10;
j = h/10;

k = j%10;
l = j/10;

m = l%10;
n = l/10;

o = n%10;



sum = a+c+e+g+i+k+m+o;

cout<<sum;

}