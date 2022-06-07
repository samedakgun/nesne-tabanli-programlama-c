//
//  PhoneNumber.h
//  cemhocayleegzersiz18.05
//
//  Created by Samed Akgün on 21.05.2022.
//

#ifndef PhoneNumber_h
#define PhoneNumber_h
class PhoneNumber
{
   friend ostream &operator<<( ostream &output, const PhoneNumber &number );
   friend istream &operator>>( istream &input, PhoneNumber &number );
private:
   string areaCode;
   string exchange;
   string line;
};

#endif /* PhoneNumber_h */
