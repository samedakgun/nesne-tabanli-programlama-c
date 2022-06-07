#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date d1(12, 27, 2010);
	Date d2;
	Date d3;
	
	cout<<"Please enter a day in a format mm.dd.yyyy ";
	cin>>d3;
	cout<<endl;
	cout<<"d3 is "<<d3<<endl;
	
	cout<<"d1 is "<<d1<<endl;
	cout<<"d2 is "<<d2<<endl;
	
	d2.setDate(2,28,2008);
	cout<<"d2 is "<<d2<<endl;
	cout<<"++d2 is "<<++d2<<endl;
	
	d2.setDate(12,31,2010);
	cout<<"Testing the prefix increment operator: \nd3 is  "<<d2<<endl;
	cout<<"++d2 is "<<++d2<<endl;
	cout<<"d2 is "<<d2<<endl;
	
	
}
