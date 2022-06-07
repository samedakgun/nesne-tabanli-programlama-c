#include <string>
#include <iostream>
#include "Create.h"
using namespace std;

CreateAndDestroy::CreateAndDestroy(int a, string b)
{
	setID(a);
	setMessage(b);
	cout<<"Object "<<objectID<<" "<<message<<" is created by constructor"<<endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
	cout<<"Object "<<objectID<<" "<<message<<" is destroyed by destructor"<<endl;
}

void CreateAndDestroy::setID(int a)
{
	objectID=a;
}

void CreateAndDestroy::setMessage(string b)
{
	message=b;
}


