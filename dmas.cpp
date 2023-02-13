#include<iostream>
#include<conio.h>
using namespace std;
int fun(char s)
{
	int n;
	if(s =='+'){
		n=1;
	}
	else if(s =='-'){
		n=2;
	}
	else if(s=='*'){
		n=3;
	}
	else if(s=='/'){
		n=4;
	}
	else{
		cout<<"Wrong input"<<endl; getch();
	}
	return n;
}
int main()
{
	int a,b,c;
	char d,s;
	again:
	cout<<"Enter your first number"<<endl;
	cin>>a;
	cout<<"Enter your operation"<<endl;
	cin>>s;
	cout<<"Enter your second number"<<endl;
	cin>>b;
	c = fun(s);
	switch(c)
	{
		case 1: cout<<"Sum is : "<<a+b<<endl; break;
		case 2 : cout<<"Differnce is :"<<a-b<<endl; break;
		case 3 : cout<<"Multiplication is :"<<a*b<<endl; break;
		case 4 : cout<<"Divide is :"<<a/b<<endl; break;
		default : goto again;
		}
	again1:
	cout<<"Enter 'R' to restart and 'E' to exit"<<endl;
	cin>>d;
	if(d=='r'){
		goto again;
	}
	else if(d=='e'){
		return 0;
	}
	else{
		cout<<"Wrong input please try again"<<endl; getch(); goto again1;
	}
}
