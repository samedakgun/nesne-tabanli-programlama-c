#include <string>
using namespace std;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
	public:
		CreateAndDestroy(int a, string b);
		~CreateAndDestroy();
	private:
		void setID(int a);
		void setMessage(string b);
		int objectID;
		string message;
};
#endif
