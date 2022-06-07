#include <iostream>
#include "Employee.h" 
using namespace std;

int main()
{
   Date birth( 24, 7, 1949 );
   Date hire( 12, 3, 1988 );
   Employee manager( "Bob", "Blue", birth, hire );

   cout << endl;
   manager.print();
} 
