#include<iostream>
using namespace std;

int main()
{
	int n,i,o;
	
	cout<<"MENU\n1. ....\n2. ****\n3. ////\n4. ,,,,\n\nENTER YOUR CHOICE:";

	for(i=0;i<15;++i)
	{
		cin>>n;
		cout<<"Want more tasty stuff?\t\t\t\t\tClick 1 to continue:";
		cin>>o;
		if(o == 1 )
			continue;
		else 
			break;
	}

	return 0;
}
