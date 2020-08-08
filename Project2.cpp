#include <iostream>
using namespace std;
int main()
{
	int option;
	int age;
	do
	{
		cout<<"Select from following options:-"<<endl;
		cout<<"1. Check whether you can vote or not."<<endl;
		cout<<"2. Clear Screen."<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enter your Age: ";
				cin>>age;
				if(age>=18)
				{
					cout<<"You are eligible to vote"<<endl;
				}
				else
				{
					cout<<"Sorry, You can't vote"<<endl<<"Try after few years"<<endl;
				}
				break;
			case 2:
			    system("cls");
				break;
			default:
			    cout<<"Entered Age is not valid"<<endl;		
					
		}
		cout<<endl;
		
	}while(option!=0);
	return 0;
}
