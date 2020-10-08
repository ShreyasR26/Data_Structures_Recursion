#include<iostream>
using namespace std;
int fact(int n)
{
	if(n>0)
	{
		return fact(n-1)*n;
	}
	else
	return 1;
}
int main()
{
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Factorial = ";
	cout<<fact(n);
}
