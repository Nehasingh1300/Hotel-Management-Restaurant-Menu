#include<iostream>
using namespace std;


int main()
{
	int i, opt1;
	int cuisine;

	next:
	cout<<"\n\n\t\t\t\t\t\t----CUISINE SELECTION----\n";
	cout<<"1. Indian\n2. Chinese\n3. Thai\n4. Italian\n";
	

	for(i=0;i<15;++i)
	{	
		//next:
		cout<<"\n\n\t\tENTER YOUR CHOICE:";
		cin>>cuisine;

		//to restrict user's input
		try
		{ 
      			if (cuisine != 1 && cuisine != 2 && cuisine != 3 && cuisine != 4) 
      			{ 
        			throw cuisine;  
      			} 
   		} 
   		catch (int cuisine) 
		{ 
      			cout << "Wrong choice opted\n"; 
			goto next; 
   		}

	//inside specific cuisine  
	switch(cuisine)
	{
	case 1:
		cout<<"\ninside indian\n";
		//indian();
		break;
	case 2:
		cout<<"\ninside chinese\n";
		//chinese();
		break;
	case 3:
		cout<<"\ninside thai\n";
		//thai();
		break;
	case 4:
		cout<<"\ninside italian\n";
		//italian();
		break;
	default:
		cout<<"Wrong option\n";
		break;
	}

	//asking users for other cuisine options
	cout<<"Do you want to try other cuisines also?\tClick 1 to continue:";
		cin>>opt1;

		if(opt1 == 1)
			continue;
		
		else 
			break;

	}

	return 0;
}
