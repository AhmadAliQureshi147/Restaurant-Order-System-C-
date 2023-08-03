#include<iostream>
using namespace std;

int main()
{   system("color 5F");
	cout<<"PF Project Presented By "<<"                 Restaurant Order System "<<endl;
	cout<<"Muhammad Ahmad Ali Qureshi"<<endl;

	while (true)
	{

			//int of main menus
string a = "1-Fast Food",b = "2-Dessert",c = "3-Desi Food",d ="        4-Beverages    ",e="     5-exit";
cout<<"\n";

		//below are the strings which will be used in Fast food section


		string a1 = "01-Burger", a2 = "02-Pizza", a3 = "03-Fries", a4 = "04-Pasta", a5 = "05-Sandwiches";

		string burger1 = "01-Beef Burger  150", burger2 = "02-Chicken Burger  250", burger3 = "03-Zinger Burger  450";

		string pizza1 = "01-Pepperoni Pizza  850", pizza2 = "02-Sausage Pizza  950", pizza3 = "03-Chicken Fajita Pizza  1000";

		string fries1 = "01-Simple Fries  100", fries2 = "02-Mayo fries  180", fries3 = "03-Garlic Fries  230";

		string pasta1 = "01-Alfredo Pasta  450", pasta2 = "02-Cheese Pasta  850";

		string sandwich1 = "01-Chicken Sandwich  450", sandwich2 = "02-Club Sandwich  750", sandwich3 = "03-Vietnamese Sandwich  1200";





		// int for fast food section
		int foodselect, fastfood, burgermain1, pizzamain1, friesmain1, pastamain1, sandwichmain1;



		// int for dessert
		int dessertselect;

		//below are the strings for Dessert section

		string b1 = "01- Special Icecream (Flavour is of our choce surprise for you) 180", b2 = "02-Baklava  1000", b3 = "03-Malva Pudding  1200", b4 = "04-Kheer  350";
		
		
		
		
		
		
		
	   //below are the strings for Desi food
	   string c1="01-Karahi",c2="02-Tikka",c3="03-Biryani";
	   	
	string karahi1="01-Chicken Karahi  950",karahi2="02-Mutton Karahi  1800",karahi3="03-Kabab Karahi  800",karahi4="04-Beef Karahi  1200";
	   	
    string bbq1="01-Chicken Tikka  450",bbq2="02-Mutton Tikka  1200",bbq3="03-Beef Tikka  850";
    string biryni1="01-Sindhi Biryani 300" ,biryni2="02-Bombay Biryani 370" ,biryni3="03-Hydrabadi Biryani 400" ;
	   	
	   	//below are the int for desifood
	   	
	   int desifoodselect,karahimain1,bbqmain1,birynimain1;
	   
	   
	   
	   //strings for beverages
	   
	   string d1="01-Cold Drinks",d2="02-Tea",d3="03-coffee";
	   
	   string cd1="01-Coca~Cola  100",cd2="02-Mirinda  100",cd3="03-Dew  100";
	   string tea1="01-Green Tea  80",tea2="02-Pink Tea  130",tea3="03-Black Tea  60";
	   string coffe1="01-Latte  350",coffe2="02-Cappuccino  200",coffe3="03-Mocha  450",coffe4="04-Iced Coffee  480";
	   
	   	//below are the int for desifood
	   	
	 
	   
	   
	   // int for beverages
	   int beverage,coldrinkmain1,teamain1,coffemain1;
	   
	   {
	cout<<"\t\t  --------------------------------------------"<<endl;
	cout<<" \n\t\t\t         Welcome   To          \n";
	cout<<" \n\t\t\t    Humara Pyara Restaurant\n";
		cout<<" \n\t\t\t     (Perfect Fuel for you)          \n";
	cout<<" \t\t  --------------------------------------------"<<endl;
}
cout<<endl<<endl;
		
		
		cout << a << "\t\t" << b << "\t\t" << c << "\t\t" << d<<"\t\t"<<"   \t\t\t"<<e;                                
		cout << endl;                                                               
		cout << endl;                                                               
																				  
		cout << "Enter number to select your Food type:";                    
		cin >> foodselect;                                                          
	 




	 //Fast food coding

		if (foodselect == 1)
		{

			cout << a1 << endl << a2 << endl << a3 << endl << a4 << endl << a5 << endl;

			cout << "Enter number to select your food type:";
			cin >> fastfood;
			if (fastfood == 1)
			{
				cout << burger1 << endl << burger2 << endl << burger3 << endl << endl;
				cout << "Select your burger:";

				cin >> burgermain1;

				switch (burgermain1) {

				case 1:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs150/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	
					break;
				case 2:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs250/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;

				case 3:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs450/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				}

			}
			if (fastfood == 2)
			{
				cout << pizza1 << endl << pizza2 << endl << pizza3 << endl << endl;
				cout << "Select your Pizza:";
				cin >> pizzamain1;
				switch (pizzamain1) {
				case 1:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs850/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 2:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs950/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 3:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs1000/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				}
			}



			if (fastfood == 3) {

				cout << fries1 << endl << fries2 << endl << fries3 << endl << endl;
				cout << "Select your fries";
				cin >> friesmain1;

				switch (friesmain1) {
				case 1:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs100/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 2:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs180/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 3:
				cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs230/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				}

			}



			if (fastfood == 4)
			{

				cout << pasta1 << endl << pasta2 << endl << endl;
				cout << "Select your pasta";
				cin >> pastamain1;
				switch (pastamain1) {

				case 1:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs550/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 2:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs850/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 3:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs490/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;

				}
			}

			if (fastfood == 5)
			{
				cout << sandwich1 << endl << sandwich2 << endl << sandwich3 << endl << endl;
				cout << "Select your Sandwich:";
				cin >> sandwichmain1;
				switch (sandwichmain1) {

				case 1:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs450/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 2:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs750/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;
				case 3:
					cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs1200/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
					break;

				}
			}
		
			}
			
		
		
		
		if (foodselect == 2)
		{

			cout << b1 << endl << b2 << endl << b3 << endl << b4 << endl << endl;

			cout << "Enter number to select your food type:";
			cin >> dessertselect;

			switch (dessertselect) {

			case 1:
				cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs180/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
				break;
			case 2:
				cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs1000/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
				break;
			case 3:
				cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs1200/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
				break;
			case 4:
			cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs350/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
				break;

			}

		}
	
	
			if (foodselect == 3)
		{
	   	
	   	cout << c1 << endl << c2 <<endl << c3 << endl;
	   	
	   	 cout <<"Enter number to select your food type:";	   	 
	      cin >>desifoodselect;
	      
	          if(desifoodselect == 1)
	  {
	  	cout<<karahi1 << endl << karahi2 << endl << karahi3 << endl << karahi4 << endl << endl;
	  	
	  	cout<<"Select your Karahi:";
	  	
	  	cin>>karahimain1;
		  
		  
	  	switch(karahimain1){
	  		
	  		case 1:
	  			cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs950/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	  			break;
	  			
	  		case 2:
	  			cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs1800/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	  			break;
	  		case 3:
	  			cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs800/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	  			break;
	  		case 4:
	  			cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs1200/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	  			break;
		  }
}
		   
		   

		   
		   
		   
		   
		   
		   
		   if(desifoodselect == 2)
	  {
	  	cout<< bbq1 << endl << bbq2 << endl << bbq3 << endl << endl;
	  	cout<<"Select your Tikka:";
	  	cin >> bbqmain1;
		  
		  
		  switch(bbqmain1){
		  	
		  	case 1:
		  		cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs450/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
		  		break;
		  		
		  	case 2:
		  		cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs1200/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
		  		break;
		  		
		  	case 3:
		  	cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs850/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
		  		break;
		  }
		  
}
		if(desifoodselect == 3)
	  {
	  	cout<< biryni1 << endl << biryni2 << endl << biryni3 << endl << endl;
	  	cout<<"Select your Biryani:";
	  	cin >> birynimain1;
		  
		  
		  switch(birynimain1){
		  	
		  	case 1:
		  		cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs300/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
		  		break;
		  		
		  	case 2:
		  		cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs370/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
		  		break;
		  		
		  	case 3:
		  	cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs400/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
		  		break;
		  }
		  
}
		
	   } 
	  
		  
     if(foodselect == 4)
	   {
	   	
	   	cout << d1<<endl<<d2<<endl<<d3<<endl<<endl;
	   	
	   	 cout <<"Enter number to select your Beverage type:";
	  cin >>beverage;
	  
	  	   if(beverage == 1)
		  {
		cout << cd1 <<endl<< cd2 << endl << cd3 << endl << endl;
	  	 
	  	cout<<"Select your Cold~Drink:";
	  	cin>>coldrinkmain1;
		  
		  
	  	switch(coldrinkmain1){
	  		case 1:
	  			cout<<"Price is Rs100/-(1.5 litr)" << endl << endl << endl ;
	  			break;
	  		case 2:
	  			cout<<"Price is Rs100/-(1.5 litr)" << endl << endl << endl;
	  		    break;
	  		case 3:
	  			cout<<"Price is Rs100/-(1.5 litr)" << endl << endl << endl;
	  			break;
		  }
	}

		  
		  if(beverage == 2)
		  {
		cout <<tea1<<endl<<tea2<<endl<<tea3<<endl<<endl;
	  	 
	  	cout<<"Select your Tea:";
	  	cin>>teamain1;
	  
	  	
	  switch(teamain1){
	  	case 1:
	  		cout<<"Price is Rs80/-" << endl << endl << endl;
	  		break;
	  	case 2:
	  		 cout<<"Price is Rs130/-" << endl << endl << endl;
	  		 break;
	    case 3:
	    	cout<<"Price is Rs60/-" << endl << endl << endl;
	    	break;
	  }	
		  
	}

          
     
	 if(beverage == 3)
		  {
		cout <<coffe1<<endl<<coffe2<<endl<<coffe3<<endl<<coffe4<<endl<<endl;
	  	 
	  	cout<<"Select your Coffee :";
	  	cin>>coffemain1; 
		  
	  	switch(coffemain1){
	  		
	  		case 1:
	  			cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs350/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	                break;
	            case 2:
	            	cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs200/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	                break;
	            case 3:
	            	cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs450/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
	  		        break;
	  		    case 4:
	  		    	cout<<"             +___+++++____+"<<endl;
                	cout<<"                        Your order is confirmed it will be Rs480/-"<<endl;
	                cout<<"                      Kindly wait till your order is beign prepaired"<<endl;
	                cout<<"             +___+++++____+"<<endl<<endl<<endl;
		  }
	  	
	  	
}

	   
}
if(foodselect==5)
{
	exit(0);
}

		
	}
	return 0;
}
