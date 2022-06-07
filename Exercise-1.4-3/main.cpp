#include <iostream>
#include "Create.h"
using namespace std;

void create(void);

CreateAndDestroy first(1, "Global object before main function");

int main()
{
	cout<<"Inside main function, execution starts"<<endl;
	CreateAndDestroy second(2, "Local object inside main function");
	static CreateAndDestroy third(3, "Local static object inside main function");
	
	create();
	
	cout<<"Main function excecution resumes"<<endl;
	CreateAndDestroy fourth(4, "Local object inside main function");
	cout<<"Main function execution ends"<<endl;
}

void create(void)
{
	cout<<"Create function execution begins"<<endl;
	CreateAndDestroy fifth(5, "Local object inside the create function");
	static CreateAndDestroy sixth(6, "Local static object inside the create function");
	CreateAndDestroy seventh(7, "Local object inside the create function");
	cout<<"Create function execution ends"<<endl;
}
