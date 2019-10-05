#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class item
{
    private:
    	int qty[20];
    	char name[20][20]; 
        char fname[20][20];
        char lname[20][20];
        int empid;
        char department[20][20];
        int code[20];
        int price[20];
        int z;
        char y;
    public:
        void add_(void);
        void issue_(void);
        void delete_(void);
        void display_(void);
        void initial(void)
        {
        	z=0;
		}

};
     void item :: add_(void)
    {
    	cout<<"\nEnter the item code : ";
    	cin>>code[z];
			if(code[z]==10||code[z]==20||code[z]==30||code[z]==40||code[z]==50)
			{
				cout<<"\nEnter the item category : ";
    			cin>>name[z];
    			cout<<"\nEnter the price of the item(Rs.) : ";
    			cin>>price[z];
    			cout<<"\nEnter the quantity of the item : ";
    			cin>>qty[z];
    			cout<<"\nTotal price of the item(s) is :  "<<price[z]*qty[z]<<endl;
    			cout<<"\n~~ITEM ADDED To THE INVENTORY~~"<<endl;
    			z++;
    		}
    		else
    		cout<<"Wrong code entered";
	}
     void item:: issue_(void)
    {
    	int j,i;
    	cout<<"\nEnter the first name of the employee : ";
		cin>>fname[z];
		cout<<"\nEnter the last name of the employee : ";
		cin>>lname[z];
		cout<<"\nEnter the employee id : ";
		cin>>empid;
		cout<<"Enter the employee department :";
		cin>>department[z];
		cout<<"\nEnter the item category to be issued :";
		cin>>name[z];
		cout<<"\nEnter the item code :";
		cin>>i;
		cout<<"\nEnter the price of the item :";
		cin>>price[z];
		for(j=0;j<z;j++)
		{
			if(code[j]==i)
			{
			qty[j]=qty[j]-1;
			cout<<"Item issued to the user";
			break;	
			}
			else
			cout<<"Wrong code entered";			
		}
	}
    void item :: delete_(void)
    {
    int i,j;
    cout<<"\nPlease enter the item code : ";
    cin>>i;
    for(j=0;j<z;j++)
    	{
      	if(code[j]==i)
      		{
        	qty[j]=qty[j]-1;
        	cout<<"\nThe item is deleted from the inventory list.";
        	break;
      		}
      else
      cout<<"Item does not exist in the inventory"<<endl;
    	}
    }
    void item :: display_()	
	{
	   int i,j=1;
       for(i=0;i<z;i++)
       {
        cout<<j<<".Item category is : "<<name[i];
        cout<<"\n  Item code is : "<<code[i];
        cout<<"\n  No. of items left : "<<qty[i];
        j++;
       }
    }
 int main ()
{
	int i;
    item inventory;
    inventory.initial();
	cout<<"Airports Authority of India - Inventory";
	cout<<"\nItem category   item code";
	cout<<"\n Monitor            10 ";
	cout<<"\n Keyboard           20 ";
	cout<<"\n Mouse              30 ";
	cout<<"\n CPU                40 ";
	cout<<"\n UPS                50 ";
    while(1)
    	{	
     		cout<<"\n   What do you want to do?"<<endl;
     		cout<<"\n1: Add a new item.";
      		cout<<"\n2: Delete an item.";
      		cout<<"\n3: Display all items.";
      		cout<<"\n4: Issue items to the users";
      		cout<<"\n5: Exit";
      		cout<<"\n\n Choose an option:";
      		cin>>i;
      		switch(i)
      		{
        		case 1:
        		{
          			inventory.add_();
          			break;
                }
        		case 2:
        		{
          		inventory.delete_();
          		break;
        		}
        		case 3:
        		{
          		inventory.display_();
          		break;
        		}
        		case 4:
        		{
          		inventory.issue_();
        
          		break;
        		}

    			case 5:
        		{
          		cout<<"~~Thank You~~";
          
          		break;
        		}    
      		}
      		if (i==5)
        	break;
      
    	}
    return 0;
    getch();
}
