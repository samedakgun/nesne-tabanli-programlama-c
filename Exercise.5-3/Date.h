#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
		friend ostream &operator<<(ostream &output, Date &date);
		friend istream &operator>>(istream &input, Date &date);
	public:
		explicit Date(int m=1, int d=1, int y=2000);
		void setDate(int m, int d, int y);
		Date &operator++();
		Date operator++(int);
		Date &operator+=(int additionalDays);
		static bool leapYear(int y);
		bool endOfMonth(int testDay) const;
	private:	
		int month;
		int day;
		int year;
		
		void helpIncrement();
};
#endif
