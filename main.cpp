#include<iostream>
#include"sum.h"
#include"dif.h"
#include"prod.h"
#include<cmath>
#include"div.h"
using namespace std;

int main()
{
cout<<"Hello"<<endl;
int a, b;
cout<<"Enter two numbers->";
cin>>a>>b;
char op;
cout<<"Enter the operetion(+, -, *, ^, /)->";
cin>>op;
switch(op)
{
	case '+':
	cout<<Sum(a,b)<<endl;
	break;
	case '-':
	cout<<Dif(a,b)<<endl;
	break;
	case '*':	
	cout<<Prod(a,b)<<endl;
	break;
	case '^':
	cout<<pow(a,b)<<endl;
	break;
	case '/':
	cout<<Div(a,b)<<endl;
	break;
}
}