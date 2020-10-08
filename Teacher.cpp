#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class staff
{
	char* code_name[30];
	public:
		char get_code_name();
		
};
char staff :: get_code_name()
{
	cout<<"Enter code name:"<<endl;
	cin.getline(code_name,30);
	return code_name;
}
class teacher:public staff
{

char subject[30];
char publication[30];
public:
	char get_subject();
	char get_publication();
};
char teacher::get_subject()
{
	cout<<"Enter subject:"<<endl;
	cin.getline(code_name,30);
	return subject;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	teacher t;
	t.get_code_name();
	t.get_subject();
	
	return 0;
} 
