#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include "Date.h"
using namespace std;



Date::Date(int m, int d, int y)
{	
	
	setDate(m, d, y);
}

void Date::setDate(int m, int d, int y)
{
	if(m>=1 && m<=12)
	{
		month = m;
	}
	else
	{
		throw invalid_argument("Month must be between 1-12");
	}
	
	if(y>=1900 && y<=2100)
	{
		year = y;
	}
	else
	{
		throw invalid_argument("Year must be between 1900-2100");
	}
	
	int days[13] ={ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		
	if((month==2 && leapYear(year) && d>=1 && d<=29) || (d>=1 && d<=days[month]))
	{
		day = d;	
	}
	else
	{
		throw invalid_argument("Day is out of range for current month and year");
	}
}

Date &Date::operator++()
{
	helpIncrement();
	return *this;
}

Date Date::operator++(int) 
{
	Date temp = *this;
	helpIncrement();
	return temp;
}

Date &Date::operator+=(int additionalDays)
{
	for (int i=0; i<additionalDays; i++)
	{
		helpIncrement();
	}
	
	return *this;
}


bool Date::leapYear(int y)
{
	if ( y % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::endOfMonth(int testDay) const 
{
	if (month == 2 && leapYear(year))
	{
		return testDay==29;
	}
	else
	{
		int days[13] ={ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		return testDay==days[month];
	}	
	
}

void Date::helpIncrement()
{
	if(!endOfMonth(day))
	{
		day++;
	}
	else
	{
		if (month<12)
		{
			month++;
			day=1;
		}
		else
		{
			year++;
			month=1;
			day=1;
		}
	}
}

ostream &operator<<(ostream &output, Date &d)
{
	string monthName[13] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	output<<monthName[d.month]<<' '<<d.day<<", "<<d.year;
	return output;
}

istream &operator>>(istream &input, Date &d)
{	
	input>>setw(2)>>d.month;
	input.ignore();
	input>>setw(2)>>d.day;
	input.ignore();
	input>>setw(4)>>d.year;	
}



