#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"
using namespace std;

class Employee
{
public:
   Employee( const string &, const string &, 
      const Date &, const Date & );
   void print() const;
   ~Employee(); 
private:
   string firstName; // composition: member object
   string lastName; // composition: member object
   const Date birthDate; // composition: member object
   const Date hireDate; // composition: member object
}; 
#endif
