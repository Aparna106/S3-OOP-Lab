/******************************************************************************

                                Name: Aparna Nair
                Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>

using namespace std;

struct phone
{
    int area_code;
    int exchange;
    int number;
};

int main()
{
    phone p2;
    phone p1 = {212, 767, 8900};
    
    cout<<"Enter your area code: ";
    cin>>p2.area_code;
    cout<<"Enter your exchange: ";
    cin>>p2.exchange;
    cout<<"Enter your number: ";
    cin>>p2.number;
    cout<<"My number is: "<<"("<<p1.area_code<<")"<<" "<<p1.exchange<<" "<<p1.number;
    cout<<"\nYour number is: "<<"("<<p2.area_code<<")"<<" "<<p2.exchange<<" "<<p2.number;

    return 0;
}






