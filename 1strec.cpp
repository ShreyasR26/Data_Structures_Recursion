#include <iostream>
using namespace std;
int rec(int n)
{
	if(n>0)
	{
		rec(n-1);
		cout<<n<<endl;
		
	}
}
int main(int argc, char** argv) 
{
	rec(3);
	return 0;
}
