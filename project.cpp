# myprogramming
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class MainMenu
{
public:
	MainMenu();
	virtual void showMenu();

private:

};

MainMenu::MainMenu()
{
	
}

void MainMenu::showMenu()
{
	 cout<<"\nSelect type of food:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                    "<<endl;
     cout<<" -------------------------------\n";
	 cout<<" * '1'  Foods                  *"<<endl;
     cout<<" * '2'  Drinks                 *"<<endl;
     cout<<" * '3'  Dessert                *"<<endl;
     cout<<" * '4'  Exit and show price    *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class MenuOne: public MainMenu
{
public:
	MenuOne();
	void showMenu();

private:

};

MenuOne::MenuOne()
{

}

void MenuOne::showMenu()
{
	 cout<<"\nSelect type of meal:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME              "<<endl;
     cout<<" -------------------------\n";
	 cout<<" * '1'  Chicken          *"<<endl;
     cout<<" * '2'  Meat             *"<<endl;
     cout<<" * '3'  Malagwe          *"<<endl;
     cout<<" * '4'  Vegetables       *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class MenuTwo: public MainMenu
{
public:
	MenuTwo();
	void showMenu();

private:

};

MenuTwo::MenuTwo()
{

}

void MenuTwo::showMenu()
{
	 cout<<"\nSelect type of drinks:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME              "<<endl;
     cout<<" -------------------------\n";
	 cout<<" * '1'  Hot drinks       *"<<endl;
     cout<<" * '2'  Cold drinks      *"<<endl;
     cout<<" * '3'  Soft drinks      *"<<endl;
     cout<<" * '4'  Juices           *"<<endl;
     cout<<" "<<"*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class MenuThree: public MainMenu
{
public:
	MenuThree();
	void showMenu();

private:

};

MenuThree::MenuThree()
{

}

void MenuThree::showMenu()
{
	cout<<"\nSelect type of dessert:"<<endl<<endl;
    cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout<<" BIll   NAME              "<<endl;
    cout<<" -------------------------\n";
	cout<<" * '1'  Cake             *"<<endl;
    cout<<" * '2'  Ice-cream        *"<<endl;
    cout<<" * '3'  Bongo            *"<<endl;
    cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	cout<<"\nYour choice : ";
}

class MealOne: public MainMenu
{
public:
	MealOne();
	void showMenu();

private:

};

MealOne::MealOne()
{

}

void MealOne::showMenu()
{
	 cout<<"\nSelect type of chicken:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                         PRICE      "<<endl;
     cout<<" -----------------------------------------------\n";
     cout<<" * '1'  Deep fried chicken chop     'UGx 7000' *"<<endl;
     cout<<" * '2'  Chicken Luwombo             'UGx 8000' *"<<endl;
     cout<<" * '3'  Chicken Boilled             'UGx 5000' *"<<endl;
     cout<<" * '4'  Sour chicken                'UGx 2000' *"<<endl;
     cout<<" * '5'  Chicken Wings               'UGx 1000' *"<<endl;
     cout<<" * '6'  Exit and show price                    *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class MealTwo: public MainMenu
{
public:
	MealTwo();
	void showMenu();

private:

};

MealTwo::MealTwo()
{

}

void MealTwo::showMenu()
{
	 cout<<"\nSelect type of meat:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                                   PRICE      "<<endl;
     cout<<" --------------------------------------------------------\n";
     cout<<" * '1'  Goat chop                             'UGx 8000' *"<<endl;
     cout<<" * '2'  Mixed grill                           'UGx 2000' *"<<endl;
     cout<<" * '3'  Roast Goat                            'UGx 5000' *"<<endl;
     cout<<" * '4'  Black pepper beef chop                'UGx 3000' *"<<endl;
     cout<<" * '5'  Mutton roast with peppermint sauce    'UGx 4000' *"<<endl;
     cout<<" * '6'  Exit and show price                              *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class MealThree: public MainMenu
{
public:
	MealThree();
	void showMenu();

private:

};

MealThree::MealThree()
{

}

void MealThree::showMenu()
{
	cout<<"\nSelect type of seafood:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                           PRICE      "<<endl;
     cout<<" -------------------------------------------------\n";
     cout<<" * '1'  Fish and chips                'UGx 5000' *"<<endl;
     cout<<" * '2'  Fish curry                    'UGx 5000' *"<<endl;
     cout<<" * '3'  Sweet and sour prawn          'UGx 7000' *"<<endl;
     cout<<" * '4'  Prawn with vegetables         'UGx 8000' *"<<endl;
     cout<<" * '5'  Prawn sambal                  'UGx 4000' *"<<endl;
     cout<<" * '6'  Exit and show price                      *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class MealFour: public MainMenu
{
public:
	MealFour();
	void showMenu();

private:

};

MealFour::MealFour()
{

}

void MealFour::showMenu()
{
	 cout<<"\nSelect type of vegetables:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                                  PRICE     "<<endl;
     cout<<" -------------------------------------------------------\n";
     cout<<" * '1'  Mixed vegetables with beancurd       'UGx 500' *"<<endl;
     cout<<" * '2'  Vegetable kurma                      'UGx 200' *"<<endl;
     cout<<" * '3'  Mushroom chill fry                   'UGx 700' *"<<endl;
     cout<<" * '4'  Mixed vegetables sambal              'UGx 100' *"<<endl;
     cout<<" * '5'  Tapioca with pumpkin                 'UGx 400' *"<<endl;
     cout<<" * '6'  Exit and show price                            *"<<endl;
     cout<<" "<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class DrinkOne: public MainMenu
{
public:
	DrinkOne();
	void showMenu();

private:

};

DrinkOne::DrinkOne()
{

}

void DrinkOne::showMenu()
{
	 cout<<"\nSelect type of hot drinks:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                    PRICE     "<<endl;
     cout<<" -----------------------------------------\n";
     cout<<" * '1'  coffee                 'UGx 100' *"<<endl;
     cout<<" * '2'  milo                   'UGx 200' *"<<endl;
     cout<<" * '3'  nescafe                'UGx 300' *"<<endl;
     cout<<" * '4'  nestum                 'UGx 500' *"<<endl;
     cout<<" * '5'  green tea              'UGx 400' *"<<endl;
     cout<<" * '6'  Exit and show price              *"<<endl;
     cout<<" "<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class DrinkTwo: public MainMenu
{
public:
	DrinkTwo();
	void showMenu();

private:

};

DrinkTwo::DrinkTwo()
{

}

void DrinkTwo::showMenu()
{
   	 cout<<"\nSelect type of cold drinks:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                    PRICE     "<<endl;
     cout<<" -----------------------------------------\n";
     cout<<" * '1'  cold coffee            'UGx 200' *"<<endl;
     cout<<" * '2'  cold milo              'UGx 100' *"<<endl;
     cout<<" * '3'  cold nescafe           'UGx 600' *"<<endl;
     cout<<" * '4'  cold nestum            'UGx 300' *"<<endl;
     cout<<" * '5'  cold green tea         'UGx 400' *"<<endl;
     cout<<" * '6'  Exit and show price              *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class DrinkThree: public MainMenu
{
public:
	DrinkThree();
	void showMenu();

private:

};

DrinkThree::DrinkThree()
{

}

void DrinkThree::showMenu()
{
	 cout<<"\nSelect type of carbonate drinks:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                   PRICE      "<<endl;
     cout<<" -----------------------------------------\n";
     cout<<" * '1'  coca-cola             'UGx 500'  *"<<endl;
     cout<<" * '2'  Pepis cola            'UGx 400'  *"<<endl;
     cout<<" * '3'  sprite                'UGx 600'  *"<<endl;
     cout<<" * '4'  Krest                 'UGx 400'  *"<<endl;
     cout<<" * '5'  Reham                 'UGx 200'  *"<<endl;
     cout<<" * '6'  Exit and show price              *"<<endl;
     cout<<" "<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class DrinkFour: public MainMenu
{
public:
	DrinkFour();
	void showMenu();

private:

};

DrinkFour::DrinkFour()
{

}

void DrinkFour::showMenu()
{
	cout<<"\nSelect type of juices:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                    PRICE     "<<endl;
     cout<<" -----------------------------------------\n";
     cout<<" * '1'  apple juice            'UGx 500' *"<<endl;
     cout<<" * '2'  orange juice           'UGx 500' *"<<endl;
     cout<<" * '3'  watermelon juice       'UGx 400' *"<<endl;
     cout<<" * '4'  mango juice            'UGx 500' *"<<endl;
     cout<<" * '5'  Tropical juice         'UGx 700' *"<<endl;
     cout<<" * '6'  Exit and show price              *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class DessertOne: public MainMenu
{
public:
	DessertOne();
	void showMenu();

private:

};

DessertOne::DessertOne()
{

}

void DessertOne::showMenu()
{
	 cout<<"\nSelect type of cake:"<<endl<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
     cout<<" BIll   NAME                    PRICE     "<<endl;
     cout<<" -----------------------------------------\n";
     cout<<" * '1'  Queen cake             'UGx 200' *"<<endl;
     cout<<" * '2'  Banana cake            'UGx 200' *"<<endl;
     cout<<" * '3'  Mango cake             'UGx 200' *"<<endl;
     cout<<" * '4'  Chocolate cake         'UGx 200' *"<<endl;
     cout<<" * '5'  Fruit cake             'UGx 300' *"<<endl;
     cout<<" * '6'  Exit and show price              *"<<endl;
     cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"\nYour choice : ";
}

class DessertTwo: public MainMenu
{
public:
	DessertTwo();
	void showMenu();

private:

};

DessertTwo::DessertTwo()
{

}

void DessertTwo::showMenu()
{
	  cout<<"\nSelect type of flavour ice-cream:"<<endl<<endl;
      cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
      cout<<" BIll   NAME                  PRICE     "<<endl;
      cout<<" ---------------------------------------\n";
      cout<<" * '1'  Mango                'UGx 500' *"<<endl;
      cout<<" * '2'  Chocolate            'UGx 500' *"<<endl;
      cout<<" * '3'  Banana               'UGx 500' *"<<endl;
      cout<<" * '4'  Vanila               'UGx 500' *"<<endl;
      cout<<" * '5'  Peppermint           'UGx 500' *"<<endl;
      cout<<" * '6'  Exit and show price            *"<<endl;
      cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
      cout<<"\nYour choice : ";
}

class DessertThree: public MainMenu
{
public:
	DessertThree();
	void showMenu();

private:

};

DessertThree::DessertThree()
{

}

void DessertThree::showMenu()
{
	  cout<<"\nSelect type of Mixed:"<<endl<<endl;
      cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
      cout<<" BIll   NAME                    PRICE     "<<endl;
      cout<<" -----------------------------------------\n";
      cout<<" * '1'  Mixed fruit            'UGx 800' *"<<endl;
      cout<<" * '2'  Manggo                 'UGx 800' *"<<endl;
      cout<<" * '3'  Pineapple              'UGx 800' *"<<endl;
      cout<<" * '4'  Milk                   'UGx 700' *"<<endl;
      cout<<" * '5'  Avocado                'UGx 500' *"<<endl;
      cout<<" * '6'  Exit and show price              *"<<endl;
      cout<<" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
      cout<<"\nYour choice : ";
}

void intro();
void menuFunction();
void mainMenu();
void menuOne();
void menuTwo();
void menuThree();
void mealOne();
void mealTwo();
void mealThree();
void mealFour();
void drinkOne();
void drinkTwo();
void drinkThree();
void drinkFour();
void dessertOne();
void dessertTwo();
void dessertThree();
void totalAmount();
void menuConfirmation();


int main()
{
	intro();
    
	menuFunction();
	
	mainMenu();
	
	 
	 cout<<"\n"<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
     cout<<"* Thank you for Trusting Setabi Isaac         *"<<endl;
     cout<<"* Your ordering will be deliver soon          *"<<endl;
     cout<<"* Enjoy your meal, wish you have a good day   *"<<endl;
     cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	 
	system("PAUSE"); 
    return 0;
}

void intro()
{
	cout<<"COMPANY          : TECRA UGANDA LIMITED" <<endl;
	cout<<"                 : TENDO CRAFTS" <<endl;
	cout<<"                 : PURPLE PARROT SCHOOLS LIMITED" <<endl;
	cout<<"Course Name      : Object-oriented Programing"<<endl;
	cout<<"Course Code      : CS1541 / CS5147"<<endl;
	cout<<"Group Project    : 80  "<<endl;
	cout<<"Assignment Number: Final Project" <<endl;
	cout<<"Assignment Name  : Food Packaging Management" <<endl<<endl;
}

    
    
void menuFunction()
{
    char userName[200];
    int contactNumber;
    char userAddress[200];
    
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout<<"* WELCOME to NATARI'S enkoko ebigulaORDERING SYSTEM           *"<<endl;
    cout<<"* There are several food, drink and dessert in our restaurant *"<<endl;
    cout<<"* Our food is cheap and nice                                  *"<<endl;
    cout<<"* Once you ordered, we will sent the food to you              *"<<endl;
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n"<<endl;
    
    cout<<"Please enter your name:";
    cin.get(userName, 200);
    cout<<endl;
    
    cout<<"Please enter your contact number:";
    cin>>contactNumber;
    cout<<endl;
    
    cout<<"Please enter your address that you wish to deliver:";
    cin>>userAddress;
    cout<<endl;
}  

void  mainMenu()
{
     int menu;
     MainMenu a;
	 
	 a.showMenu();
     cin>>menu;


	 if(menu == 1)
		 menuOne();
	 
	 else if(menu == 2)
	     menuTwo();
	
     else if(menu == 3)
	     menuThree();
	  
	 else
	     mainMenu();
}

void menuOne()
{
     int meal;
	 MenuOne b;

	 b.showMenu();
     cin>>meal;

	 if(meal == 1)
		mealOne();
		
   	 else if(meal == 2)
		mealTwo();
		
	 else if(meal == 3)
		mealThree();
		
	 else if(meal == 4)
		mealFour();
		
	else
		menuOne();
}

void menuTwo()
{
	 int drinks;
	 MenuTwo c;
     
     c.showMenu();
     cin>>drinks;

	 if(drinks == 1)
		drinkOne();
     else if(drinks == 2)
		drinkTwo();
     else if(drinks == 3)
        drinkThree();
     else if(drinks == 4)
		drinkFour();
     else
	    menuTwo();
}

void menuThree()
{
	int dessert;
	MenuThree d;

    d.showMenu();
    cin>>dessert;

	if(dessert == 1)
       dessertOne();
	else if(dessert == 2)
	   dessertTwo();
    else if(dessert == 3)
	   dessertThree();
	else
	   menuThree();
}
                   
void mealOne()
{
     int chicken;
	 int quantity1=0, quantity2=0, quantity3=0, quantity4=0, quantity5=0;
	 char purchase;
     MealOne e;
     
	 e.showMenu();
     cin>>chicken;
                            
     switch (chicken)
     {
         case 1:
			cout<<"How many quantity you want: ";
			cin>>quantity1;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
				break;

			
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity2;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity3;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity4;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity5;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
      }
}       
                        
void mealTwo()
{
     int meat;
	 int quantity6=0, quantity7=0, quantity8=0, quantity9=0, quantity10=0;
	 char purchase;
	 MealTwo f;

	 f.showMenu();
     cin>>meat;  
                            
     switch (meat)
     {
          case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity6;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
              
          case 2:
            cout<<"Quantity: ";
			cin>>quantity7;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
          case 3:
            cout<<"Quantity: ";
			cin>>quantity8;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
              
          case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity9;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
              
          case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity10;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                         
          default:
              cout<<" Invalid Choice "<<endl; 
      }    
}
                          
void mealThree()
{
     int seafood;
	 int quantity11=0, quantity12=0, quantity13=0, quantity14=0, quantity15=0;
	 char purchase;
	 MealThree g;

	 g.showMenu();
     cin>>seafood;  
                            
     switch (seafood)
     {
         case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity11;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity12;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity13;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity14;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity15;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
     } 
}
                        
void mealFour()
{
     int vegetables;
     int quantity16=0, quantity17=0, quantity18=0, quantity19=0, quantity20=0;
	 char purchase;
	 MealFour h;
     
	 h.showMenu();
     cin>>vegetables;                
                             
     switch (vegetables)
     {
         case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity16;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity17;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity18;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity19;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity20;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl;  
     } 
}
                       
void drinkOne()
{
     int hotDrinks;
     int quantity21=0, quantity22=0, quantity23=0, quantity24=0, quantity25=0;
	 char purchase;
	 DrinkOne i;
     
     i.showMenu();
     cin>>hotDrinks;
                            
     switch (hotDrinks)
     {
            case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity21;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity22;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity23;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity24;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity25;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
     }
}
                        
void drinkTwo()
{
     int coldDrinks;
     int quantity26=0, quantity27=0, quantity28=0, quantity29=0, quantity30=0;
	 char purchase;
	 DrinkTwo j;
     
     j.showMenu();
     cin>>coldDrinks;  
                            
     switch (coldDrinks)
     {
            case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity26;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity27;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity28;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity29;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity30;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
     }    
}       
                        
void drinkThree()
{
     int carbonateDrinks; 
     int quantity31=0, quantity32=0, quantity33=0, quantity34=0, quantity35=0;
	 char purchase; 
	 DrinkThree k;
     
     k.showMenu();
     cin>>carbonateDrinks;  
                            
     switch (carbonateDrinks)
     {
            case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity31;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity32;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity33;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity34;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity35;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
     }  
} 
                        
void drinkFour()
{ 
     int juices;
     int quantity36=0, quantity37=0, quantity38=0, quantity39=0, quantity40=0;
	 char purchase; 
	 DrinkFour l;
     
     l.showMenu();
     cin>>juices;  
                            
     switch (juices)
     {
        case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity36;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity37;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity38;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity39;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity40;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
     } 
} 
                         
void dessertOne()
{
     int cake;
     int quantity41=0, quantity42=0, quantity43=0, quantity44=0, quantity45=0;
	 char purchase; 
	 DessertOne m;
                       
     m.showMenu();
     cin>>cake;
                            
     switch (cake)
     {
        case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity41;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity42;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity43;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity44;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity45;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
     }  
}
 
 void dessertTwo()
 {
      int iceCream;
      int quantity46=0, quantity47=0, quantity48=0, quantity49=0, quantity50=0;
	  char purchase; 
	  DessertTwo n;
      
      n.showMenu();
      cin>>iceCream;
                            
      switch (iceCream)
      {
         case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity46;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity47;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity48;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity49;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity50;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
      } 
 } 
                        
 void dessertThree()
 { 
      int ABC;
      int quantity51=0, quantity52=0, quantity53=0, quantity54=0, quantity55=0;
	  char purchase; 
	  DessertThree o;
      
      o.showMenu();
      cin>>ABC;
                            
      switch (ABC)
      {
             case 1:
            cout<<"How many quantity you want: ";
			cin>>quantity51;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 2:
            cout<<"How many quantity you want: ";
			cin>>quantity52;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 3:
            cout<<"How many quantity you want: ";
			cin>>quantity53;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
            
         case 4:
            cout<<"How many quantity you want: ";
			cin>>quantity54;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
             
         case 5:
            cout<<"How many quantity you want: ";
			cin>>quantity55;
			cout<<endl;

			cout<<"Do you want to continue purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || 'Y')
				mainMenu();
			
			else if (purchase == 'n' || 'N')
			{
				totalAmount();
				menuConfirmation();
			}
			else
				cout<<"Invalid Choice!"<<endl;
                                        
         default:
            cout<<" Invalid Choice "<<endl; 
      }  
}

void totalAmount()
{
	double amount1, total;
	int quantity1;

	amount1 = quantity1 * 10;

	total = amount1;
}

      
void menuConfirmation()
{
     char userName[200];
     int contactNumber;
     char userAddress[200];
     double govTax = 0;
     double total = 0;
     
     cout << "Customer name : " << userName << endl;
     cout << "Contact number : "<< contactNumber << endl;
	 cout << "Address that wish to deliver: "<< userAddress << endl;
     cout << "Gov tax: RM "<< govTax << endl;
	 cout << "Total : RM" << total << endl;
}
