/******************************************************************************

                              Name: Aparna Nair
               Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

class triangle
{
    private:
        int side1;
        int side2;
        int side3;
        
    public:
        void input();   //To get access to private data we need a public function
        bool validate();
        void display();
        void area();
        
};

void triangle::input()
{
    cout<<"Enter side 1, side 2 and side 3 of the triangle: ";
    cin>>side1>>side2>>side3;
}

bool triangle::validate()
{
    if(side1<1 || side2<1 || side3<1)
    {
        return false;
    }
    
    if((side1+side2)>side3 && (side2+side3)>side1 && (side1+side3)>side2 )
    {
        return true;
    }
    
    return false;
}

void triangle::area()

{
    double p = (double) (side1+side2+side3)/2;
    double result = p*(p-side1)*(p-side2)*(p-side3);
    double area = sqrt(result);

    cout<<"Area of the triangle is: "<<area<<endl;
}

void triangle:: display()
{
    if(validate())
    {
        cout<<"The triangle IS valid"<<endl;
        cout<<"Sides of the triangle are: "<<side1<<","<<side2<<","<<side3<<endl;
        
        area();
    } else
    
    {
        cout<<"Triangle is NOT valid";
    }
}

int main()
{
    triangle t1;
    t1.input();
    t1.display();
    
    return 0;
}



