/******************************************************************************

                              Name: Aparna Nair
               Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

inline float shortest(float data1, float data2, float data3)
{
    if(data1<data2 && data1<data3)
    {
        return data1;
    }
    
    else if(data2 < data3)
    {
        return data2;
    }

    return data3;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    float d1, d2, d3;

    cout<<"Enter x1, y1: ";
    cin>>x1>>y1;
    cout<<"Enter x2, y2: ";
    cin>>x2>>y2;
    cout<<"Enter x3, y3: ";
    cin>>x3>>y3;

    float pow1 = pow((x2-x1),2);
    float pow2 = pow((y2-y1),2); 
    d1 = sqrt(pow1+pow2);

    
    pow1 = pow((x3-x2),2);
    pow2 = pow((y3-y2),2);
    d2 = sqrt(pow1+pow2);

    pow1 = pow((x3-x2),2);
    pow2 = pow((y3-y2),2);
    d3 = sqrt(pow1+pow2);

    cout<<"The shortest distance between the cooridinates is: "<<shortest(d1, d2, d3)<<endl;

    float area = 0.5* (x1 * (y2 - y3)+ x2 * (y3 - y1)+ x3 * (y1 - y2));
    
    if(area==0.0)
    {
        cout<<"Triangle is NOT valid"<<endl;
    }
    
    else
    {
        cout<<"Triangle IS valid"<<endl;
    }

    return 0;
}


