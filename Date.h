#pragma once
#include <string>
using namespace std;
#include <iostream>
using namespace std;
class Date
{
	int day; 
	int month; 
	int year;
	
public:
	static string monthNames[13];
	Date(int ,int , int );
	Date(Date&);
	Date();
	int getday();
	int getmonth();
	int getyear();
	void setday(int);
	friend ostream & operator << (ostream &, const Date &); 
	friend istream & operator >> (istream &, Date &); 
	friend bool & operator == (Date &, Date &); 
    ~Date();
	friend Date operator + (Date & n, int c) 
{ 
	Date box;
	n.day=n.day+c;
   
  return n; 
}
Date Date:: operator = (Date & a)
{
	this->day=a.day;
	this->month=a.month;
	this->year=a.year;

	return *this;
}
Date& Date:: operator --()
{
	
	if(this->day==1 && this->month==1)
	{
		this->month=12;
		this->day=30;
		this->year=this->year-1;
	}
	else if(this->day==1 )
	{
		this->day=30;
		this->month=this->month-1;
	}
	else		
	    this->day=this->day-1;

	return *this;
}

const Date Date:: operator --(int c)
{
	Date temp=*this;
	if(this->day==1 && this->month==1)
	{
		this->month=12;
		this->day=30;
		this->year=this->year-1;
	}
	else if(this->day==1 )
	{
		this->day=30;
		this->month=this->month-1;
	}
	else		
	    this->day=this->day-1;

	return temp;
}
int Date:: operator[](int index)
{
	if (index==0)
	{
		return this->day;
	}
	if (index==1)
	{
		return this->month;
	}
	if (index==2)
	{
		return this->year;
	}


}

};

static string monthNames[13]={ "", "January", "February", "March",
"April", "May", "June", "July", "August", "September", "October",
"November", "December"};