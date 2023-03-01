#include<iostream>
using namespace std;
int main()
{   //#######Simple Calculator Program for Au-STEM Trainee
	int x,y;
	int add,sub,mul,div,mod;
	cout<<"enter the first value"<<endl;
	cin>>x;
	cout<<"enter the second value"<<endl;
	cin>>y;
	add=x+y;
	sub=x-y;
	mul=x*y;
	mod=x%y;
	cout<<"the sum is :"<<add<<endl;
	cout<<"the difference is :"<<sub<<endl;
	cout<<"the product is :"<<mul<<endl;
	cout<<"the module is :"<<mod<<endl;
	return 0;
}
