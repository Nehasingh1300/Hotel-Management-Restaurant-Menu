#include<iostream>
using namespace std;

int main()
{
	int n,i,opt;
	next:
	cout<<"MENU\n1. ....\n2. ****\n3. ////\n4. ,,,,\n\n";

	for(i=0;i<15;++i)
	{
		cout<<"ENTER YOUR CHOICE:";
		cin>>n;

		
		try
		{ 
      			if (n != 1 && n != 2 && n != 3 && n != 4) 
      			{ 
        			throw n;  
      			} 
   		} 
   		catch (int n ) 
		{ 
      			cout << "Wrong choice opted\n"; 
			goto next; 
   		}

		
		cout<<"Want more tasty stuff?\nClick 1 to continue:";
		cin>>opt;

		if(opt == 1)
			continue;
		
		else 
			break;
	}


	return 0;
}
