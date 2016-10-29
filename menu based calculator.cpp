//program for a menu driven calculator
#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter two numbers \n";
	int a,b;char o;
	cin>>a>>b;

	cin>>o;
	switch(o)
	{
		case '+': cout<<a<<" + "<<b<<" = "<<a+b;
		break;
		case '-': cout<<a<<" - "<<b<<" = "<<a-b;
		break;
		case '*': cout<<a<<" * "<<b<<" = "<<a*b;
		break;
		case '/': cout<<a<<" / "<<b<<" = "<<a/b;
		break;
		case '%': cout<<a<<" % "<<b<<" = "<<a%b;
		break;
		default:
			cout<<" Invalid input";
		
	}
}
