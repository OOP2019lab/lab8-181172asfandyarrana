#include "Date.h"

Date::Date()
{
	month=1;
	day=1;
	year=2000;
	

}
Date::Date(Date& n)
{
	month=n.month;
	day=n.day;
	year=n.year;
	

}
Date::Date(int m,int d, int y)
{
	if(m<13 && m>0 && y>10000 && y< 999 && d>0 && d<31)
	{
	  month=m;
	  day=d;
	  year=y;
	}
	else
	{
		month=1;
	   day=1;
	   year=2000;
	}

}
int Date:: getday()
{

	return day;
}
int Date:: getmonth()
{

return month;
}
int Date :: getyear()
{

return year;
}
void Date::setday(int d)
{
	day=d;

}
ostream & operator << (ostream & out,const Date & c) 
{ 
	out << c.day; 
    out << ",";
	out<<monthNames[c.month];
	out<<","<<c.year<<endl; 
    
    return out; 
} 
istream & operator >> (istream & in, Date & c) 
{ 
	 cout <<endl<< "Enter new date "; 
	 in>>c.day;
   
  return in; 
} 

bool & operator == (Date & out, Date & c) 
{ 
	bool flag=false;
	if((out.day==c.day)&&(out.month==c.month)&&(out.year==c.year))
    {
		flag=true;
		return flag; 
	} 
	else 
	{
		return flag;
	}
}
  
  
Date::~Date()
{
	month=1;
	day=1;
	year=2000;
}
