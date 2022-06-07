
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std;

class PhoneNumber
{
   friend ostream &operator<<( ostream &output, const PhoneNumber &number2 );
   friend istream &operator>>( istream &input, PhoneNumber &number2 );
private:
   string areaCode; 
   string exchange;
   string line; 
}; 

#endif



