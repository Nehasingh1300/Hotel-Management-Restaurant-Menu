#include<iostream>
using namespace std;


int main()
{			

			int i, opt1, opt2, opt3, cuisine, ind, chi, th, ita, opt4, opt5; int price=0;


			next:
			cout<<"\n\n\t\t\t\t\t\t----CUISINE SELECTION----\n";
			cout<<"1. Indian\n2. Chinese\n3. Thai\n4. Italian\n";
		

			for(i=0;i<15;++i)
			{	
				//next:
				cout<<"\n\n\t\t\tENTER YOUR CHOICE:";
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
					cout<<"\n<<<<<<<<<<<<<<<<<<<<INDIAN MENU>>>>>>>>>>>>>>>>>>>>\n";
					
			//next:
			cout<<"MENU\n VEG***\n\t1. Rogan Josh\t\tRs 460   \n\t2. Makke ki Roti And Sarso ka saag\t\tRs 280   \n\t3. Vada Paav\t\tRs 70   \n\t4. Shai Paneer with Naan\t\tRs 250   \n\t5. Masala Chai\t\tRs 40   \n\t6. Hyderabadi Biryani\t\tRs 200   \n\t7. Dosa\t\tRs 250   \n\t8. Malai Kofta\t\tRs 270   \n\t9. Samosa\t\tRs  80  \nNON VEG***\n\t10. Butter Chicken\t\tRs 200    \n\t11. Tunday Kebab\t\tRs 380   \n\t12. Hilsa Fish Curry\t\tRs 350   \n\t13. Chicken Fry\t\tRs 200   \n\t14. Chicken Shwarma\t\tRs 400   \n\t15. Chicken Biryani\t\tRs 300   \nENTER YOUR CHOICE:";

				for(i=0;i<15;++i)
				{
					cin>>ind;

					try
					{ 
		      				if (ind != 1 && ind != 2 && ind != 3 && ind != 4 && ind != 5 && ind != 6 && ind != 7 && 	ind != 8 && ind != 9 && ind != 10 && ind != 11 && ind != 12 && ind != 13 && ind != 14 && ind != 15) 
		   	   			{ 
		   		     			throw ind;  
		   	   			} 
		   			} 
		   			catch (int ind) 
					{ 
		   	   			cout << "Wrong choice opted\n"; 
						//goto next; 
		   			}

					switch (ind)
					{
				
					case 1:
						price = price + 460;break;
					case 2:
						price = price + 280;break;
					case 3:
						price = price + 70;break;
					case 4:
						price = price + 250;break;
					case 5:
						price = price + 40;break;
					case 6:
						price = price + 200;break;
					case 7:
						price = price + 250;break;
					case 8:
						price = price + 270;break;
					case 9:
						price = price + 80;break;
					case 10:
						price = price + 200;break;
					case 11:
						price = price + 300;break;
					case 12:
						price = price + 350;break;
					case 13:
						price = price + 200;break;
					case 14:
						price = price + 400;break;
					case 15:
						price = price + 300;break;
					}
					cout<<"\n\nPrice is "<<price;
					cout<<"--------------------------------------------------------------------------------";


					cout<<"\n\nWant more tasty stuff?\tClick 1 to continue:";
					cin>>opt2;
	
					if(opt2 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}
				
					else 
						break;

				}	
					break;




				case 2:
					cout<<"\n<<<<<<<<<<<<<<<<<<<<CHINESE MENU>>>>>>>>>>>>>>>>>>>>\n";
					//next:
				cout<<"MENU\n\n\t1. Xian \t\tRs 750   \n\t2. Chengdu\t\tRs 800   \n\t3. Shanghai\t\tRs 800   \n\t4. Hangzhou\t\tRs 900   \n\t5. Sour And Sweet Pork\t\tRs 500   \n\t6. Kung Pao Chicken\t\tRs 600   \n\t7. Ma Po Tufo\t\tRs 500   \n\t8. Wontons\t\tRs 800   \n\t9. Dumplings\t\tRs  500  \n\t10. Chow Mein\t\tRs 300    \n\t11. Spring Rolls\t\tRs 200   \n\t12. Wonton Soup\t\tRs 500  \n\t13. Soup dumplings\t\tRs 300   \n\t14. Hot Pot\t\tRs 700   \n\t15. Steamed Stuffed Buns\t\tRs 900   \nENTER YOUR CHOICE:";

				for(i=0;i<15;++i)
				{
					cin>>chi;
		
					try
					{ 
      						if (chi != 1 && chi != 2 && chi != 3 && chi != 4 && chi != 5 && chi != 6 && chi != 7 && chi != 8 && chi != 9 && chi != 10 && chi != 11 && chi != 12 && chi != 13 && chi != 14 && chi != 15) 
   	   					{ 
   				     			throw chi;  
   	   					} 
   					} 
   					catch (int chi) 
					{ 
   	   					cout << "Wrong choice opted\n"; 
						//goto next; 
   					}

					switch (chi)
					{
				
					case 1:
						price = price + 750;break;
					case 2:
						price = price + 800;break;
					case 3:
						price = price + 800;break;
					case 4:
						price = price + 900;break;
					case 5:
						price = price + 500;break;
					case 6:
						price = price + 600;break;
					case 7:
						price = price + 500;break;
					case 8:
						price = price + 800;break;
					case 9:
						price = price + 500;break;
					case 10:
						price = price + 300;break;
					case 11:
						price = price + 200;break;
					case 12:
						price = price + 500;break;
					case 13:
						price = price + 300;break;
					case 14:
						price = price + 700;break;
					case 15:
						price = price + 900;break;
					}
					cout<<"\n\nPrice is "<<price;
					cout<<"--------------------------------------------------------------------------------";


					cout<<"\n\nWant more tasty stuff?\tClick 1 to continue:";
					cin>>opt5;
		
					if(opt5 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}

					else 
						break;
				}	
				break;
				






				case 3:
					cout<<"\n<<<<<<<<<<<<<<<<<<<<THAI MENU>>>>>>>>>>>>>>>>>>>>\n";
					//next:
				cout<<"MENU\n VEG***\n\t1. Curry And Classic Fried Rice \t\tRs 260   \n\t2. Noodles(gravy and dimsums)\t\tRs 280   \n\t3. Nooddles [stir fry + cirspy spring rolls + tufo satay + dimsums]\t\tRs 300   \n\t4. Veg Noodles with gravy [soft beverages]\t\tRs 290   \n\t5. Veg Tom yum Soup\t\tRs 150   \n\t 6. Veg Thai Coconut Milk Soup\t\tRs 150   \n\t7. Veg Som Turn Salad\t\tRs 150   \n\t8. Glass Noodle salad\t\tRs 200   \n\t9. Crisy Spring Roll\t\tRs  180  \nNON VEG***\n\t10. Chicken Satay\t\tRs 250    \n\t11. Lemongrass Chicken\t\tRs 280   \n\t12. Chicken Crispy Spring Rolls\t\tRs 200  \n\t13. Chicken Tom yum Soup\t\tRs 200   \n\t14. Chicken Clear Soup\t\tRs 150   \n\t15. Chicken Non Veg Nam Tok kai\t\tRs 250   \nENTER YOUR CHOICE:";

				for(i=0;i<15;++i)
				{
					cin>>th;
		
					try
					{ 
		      				if (th != 1 && th != 2 && th != 3 && th != 4 && th != 5 && th != 6 && th != 7 && th != 8 && th != 9 && th != 10 && th != 11 && th != 12 && th != 13 && th != 14 && th != 15) 
		   	   			{ 
		   		     			throw th;  
		   	   			} 
		   			} 
		   			catch (int th) 
					{ 
		   	   			cout << "Wrong choice opted\n"; 
						//goto next; 
		   			}
		
					switch (th)
					{
				
					case 1:
						price = price + 260;break;
					case 2:
						price = price + 280;break;
					case 3:
						price = price + 300;break;
					case 4:
						price = price + 290;break;
					case 5:
						price = price + 150;break;
					case 6:
						price = price + 150;break;
					case 7:
						price = price + 150;break;
					case 8:
						price = price + 200;break;
					case 9:
						price = price + 180;break;
					case 10:
						price = price + 250;break;
					case 11:
						price = price + 280;break;
					case 12:
						price = price + 200;break;
					case 13:
						price = price + 200;break;
					case 14:
						price = price + 150;break;
					case 15:
						price = price + 250;break;
					}
					cout<<"\n\nPrice is "<<price;
					cout<<"--------------------------------------------------------------------------------";


					cout<<"\n\nWant more tasty stuff?\tClick 1 to continue:";
					cin>>opt3;
		
					if(opt3 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}
			
					else 
						break;
				}	
				break;
				






				case 4:
					cout<<"\n<<<<<<<<<<<<<<<<<<<<ITALIAN MENU>>>>>>>>>>>>>>>>>>>>\n";
					//next:
				cout<<"MENU\n\n\t1. Pizza \t\tRs 300   \n\t2. Bottarga\t\tRs 2800   \n\t3. Lasagna\t\tRs 3000   \n\t4. Fiorentinan Steak\t\tRs 2900   \n\t5. Ribollita\t\tRs 1500   \n\t 6. Polenta\t\tRs 1500   \n\t7. Ossobuco\t\tRs 1500   \n\t8. Risotto\t\tRs 2000   \n\t9. Carbonara\t\tRs  1800  \n\n\t10. Truffles\t\tRs 250    \n\t11. Foccacia\t\tRs 2800   \n\t12. Arancini and Suppli\t\tRs 2000  \n\t13. Coffee\t\tRs 200   \n\t14. Gelanto\t\tRs 1500   \n\t15. Tiramisu\t\tRs 2500   \nENTER YOUR CHOICE:";

				for(i=0;i<15;++i)
				{
					cin>>ita;
	
					try
					{ 
      						if (ita != 1 && ita != 2 && ita != 3 && ita != 4 && ita != 5 && ita != 6 && ita != 7 && ita != 8 && ita != 9 && ita != 10 && ita != 11 && ita != 12 && ita != 13 && ita != 14 && ita != 15) 
   	   					{ 
   				     			throw ita;  
   	   					} 
   					} 
   					catch (int ita) 
					{ 
   	   					cout << "Wrong choice opted\n"; 
						//goto next; 
   					}
	
					switch (ita)
					{
				
					case 1:
						price = price + 300;break;
					case 2:
						price = price + 2800;break;
					case 3:
						price = price + 3000;break;
					case 4:
						price = price + 2900;break;
					case 5:
						price = price + 1500;break;
					case 6:
						price = price + 1500;break;
					case 7:
						price = price + 1500;break;
					case 8:
						price = price + 2000;break;
					case 9:
						price = price + 1800;break;
					case 10:
						price = price + 250;break;
					case 11:
						price = price + 2800;break;
					case 12:
						price = price + 2000;break;
					case 13:
						price = price + 200;break;
					case 14:
						price = price + 1500;break;
					case 15:
						price = price + 2500;break;
					}
					cout<<"\n\nPrice is "<<price;
					cout<<"--------------------------------------------------------------------------------";


					cout<<"\n\nWant more tasty stuff?\tClick 1 to continue:";
					cin>>opt4;
		
					if(opt4 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}
				
					else 
						break;
				}	
		
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
