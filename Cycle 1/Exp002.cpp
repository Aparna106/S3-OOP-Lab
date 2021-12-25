/******************************************************************************

                              Name: Aparna Nair
               Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>

using namespace std;

class Date
{
    private:
        int year;
        int month;
        int date;
    
    public:
        void input();
        bool validity();
        void next_date();
};


int main()
{
    Date date;

    date.input();
    date.next_date();
    
}


bool leap_year(int year)   //To check if the year is a leap year or not
{
    if(year%400==0)
    {
        return true;
    }
    if(year%100==0)
    {
        return false;
    }
    if(year%4==0)
    {
        return true;
    }
    
    return false;
}


void Date::input()
{
    cout<<"Enter a date as dd: ";
    cin>>date;
    cout<<"Enter a month as mm: ";
    cin>>month;
    cout<<"Enter a year as yyyy: ";
    cin>>year;
}


void Date::next_date()
{
    bool result = validity();
     
    if(month==2)
    {
       if(leap_year(year))   //February last day on a leap year
       {
            if(date==29)
            {
            date=01;
            month=03;
            }
            
            else
            {
                date++;
            }
        }
        else
        {
            if(date==28)   //February last day on a non-leap year
            {
                date=01;
                month=03;
            }
            else
            {
                date++;
            }
        }
       
    }
    
    else if(month==04 || month==06 || month==9 || month==11)   //30-day months' last day
    {
        if(date==30)
        {
            date=01;
            month++;
        }
        else
        {
            date++;
        }
    }
    
    else if(month==12)   //last day of a year
    {
        if(date==31)
        {
            date=01;
            month=01;
            year++;
        }
        
        else
        {
            date++;
        }
    }
    
    else   //31-day months' last day
    {
        if(date==31)
        {
            date=01;
            month++;
        }
        
        else
        {
            date++;
        }
    }
    

    (result==true)?cout<<"VALID\nNext Date: "<<date<<"/"<<month<<"/"<<year<<endl:cout<<"NOT VALID"<<endl;
    
}


bool Date::validity()
{
    if(month<1 || month>12)
    {
        return false;
    }
    if(date<1 || date>31)
    {
        return false;
    }

    if(month==02)   //February
    {
        if(leap_year(year))
        {
            if(date>29)
            {
                return false;
            }
        }
        
        else
        {
            if(date>28)
            {
                return false;
            }
        }
    }

    if (month==04 || month==06 || month==9 || month==11)   //30 day months
    {
        if(date>30)
        {
            return false;
        }
    }

    return true;
}



