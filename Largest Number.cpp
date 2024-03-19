/* MUHAMMAD HAYYAN
23I-2041___CY-A
Assignment#04_____Q1*/

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
		//Program that gives largest number
	int x, n1, n2, n3, n4, n5;
	
	//Displaying menu
	cout<< "\n 1. Input four numbers and check greatest\n";
	cout<< "\n 2. Input three numbers and two random numbers and check largest\n";
	cout<< "\n Please select any one option (1 or 2): ";
	cin>> x;
	
	//Option 1
	if (x==1)
	{
		//taking inputs
		cout<< "\n\n Enter first number:  ";
		cin>> n1;
		cout<< "\n\n Enter second number: ";
		cin>> n2;
		cout<< "\n\n Enter third number:  ";
		cin>> n3;
		cout<< "\n\n Enter forth number:  ";
		cin>> n4;
		cout<<endl<<endl;
		cout<< " ";
		
		//Checking conditions
		(n1>n2 && n1>n3 && n1>n4)? cout<<n1<<" is largest": (n2>n1 && n2>n3 && n2>n4)? cout<<n2<< " is largest": (n3>n1 && n3>n2 && n3>n4)? cout<<n3<< " is largest": cout<<n4<< " is largest";
		cout<<endl;
	}
	else if (x==2)
	{
	
		//taking inputs
		cout<< "\n\n Enter first number:  ";
		cin>> n1;
		cout<< "\n\n Enter second number: ";
		cin>> n2;
		cout<< "\n\n Enter third number:  ";
		cin>> n3;
		
		//generating two random numbers
		srand(time(NULL));
		n4 = rand();
		cout<< "\n\n First random number is: "<<n4<<endl;
		n5 = rand();
		cout<< "\n Second random number is: "<<n5<<endl;
		cout<<endl<<endl;
		cout<< " ";
		
		//checking conditions
		(n1>n2 && n1>n3 && n1>n4 && n1>n5)? cout<<n1<<" is largest": (n2>n1 && n2>n3 && n2>n4 && n2>n5)? cout<<n2<< " is largest": (n3>n1 && n3>n2 && n3>n4 && n3>n5)? cout<<n3<< " is largest": (n4>n1 && n4>n2 && n4>n3 && n4>n5)? cout<<n4<< " is largest": cout<<n5<< " is largest";
	}
	else 
		cout<<"\n\nInvalid input! Please enter 1 or 2 only\n";
		
	return 0;
}
		
