#include <iostream>
using namespace std;

int main ()
{
	int x;
	cout <<"masukan bilangan = ";
	cin >>x;
	
	// script menentukan bilangan habis di bagi 5 dan 3 atau tidak
	
	if (x %5== 0)
	{
		cout <<"\nbilangan tersebut bisa habis di bagi 5"<<endl;
	}
	else
	{
		cout <<"\nbilangan tersebut tidak habis di bagi 5"<<endl;
	}
	
	if (x %3 == 0)
	{
		cout <<"\nbilangan tersebut bisa habis di bagi 3"<<endl;
	}
	else
	{
		cout <<"\nbilangan tersebut tidak habis di bagi 3"<<endl;
	}
	
	return 0;
}
