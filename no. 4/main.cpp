#include <iostream>
#include <string>
using namespace std ;

class Car
{
	int yearModel ;
	string make ;
	int speed ;

	public :

	~Car(){}

	Car(int yearModel , string make , int speed)
	{
		this -> yearModel = yearModel ;
		this -> make = make ;
		this -> speed = speed ;
	}

	Car(/*int yearModel , string make , int speed*/)
	{
		this -> yearModel = yearModel ;
		this -> make = make ;
		this -> speed = 0 ;
	}

	int getYearModel()
	{
		return yearModel ;
	}

	string getMake()
	{
		return make ;
	}

	int getSpeed()
	{
		return speed ;
	}

	void accessor();

	int accelerate(int)
	{
		cout<<"speed now = "<<speed <<endl;

		for(int i=0 ; i<5 ; i++)
		{

			speed = speed + 5 ;
			cout << "acceleration " << i+1 <<" = " <<speed<<endl;
		}
	}

	int brake(int)
	{
		cout<<"speed now (after 5x acceleration) = " <<speed <<endl ;

		for(int i=0 ; i<5 ; i++)
		{

			speed = speed - 5 ;
			cout << "brake " << i+1 <<" = " <<speed<<endl;
		}
	}
};



int main()
{
	int year,speed;
	string make ;

	cout<<"input year model : " ;
	cin >> year;

	cout<<"input make : " ;
	cin>> make ;

	cout << "input speed : ";
	cin>> speed ;

	cout<<endl ;

	Car input (year,make,speed) ;

	input.accelerate(input.getSpeed());

	cout<<endl ;

	input.brake(input.getSpeed());


return 0;
}
