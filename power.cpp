#include<iostream>
using namespace std;
int power(int n, int m)
{
	if(n==0)
		return 1;
	return power(n,m-1)*n;
}
int main()
{
	int n,m;
	int r;
	r=power(2,3);
	cout<<r;
}
