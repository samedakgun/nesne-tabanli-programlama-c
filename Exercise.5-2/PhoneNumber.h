
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std;

class PhoneNumber
{
   friend ostream &operator<<( ostream &output, const PhoneNumber &number );
   friend istream &operator>>( istream &input, PhoneNumber &number );
private:
   string areaCode; 
   string exchange;
   string line; 
}; 

#endif



