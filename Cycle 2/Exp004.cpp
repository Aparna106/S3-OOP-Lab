/******************************************************************************

                              Name: Aparna Nair
               Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>

using namespace std;

class doub
{
    public:
        
        double power(double, int );
        int power(int, int);
        char power(char, int);
};

double doub::power(double n, int p)
{
    double result = n;

    for(int i=1; i<p; i++)
    {
        result = result *n;
    }
    return result;
}

int doub::power(int n, int p)
{
    int result = n;

    for(int i=1; i<p; i++)
    {
        result = result*n;
    }
    return result;
}

char doub::power(char n, int p)
{
    char result = n;

    for(int i=1; i<p; i++)
    {
        result = result *n;
    } 
    return result;
}

int main()
{
    double d;
    int p;
    char c;
    int data;

    //object of doub class
    doub obj;

    //read datas
    cout<<"Enter value of p: ";
    cin>>p;
    cout<<"Enter double value of n: ";
    cin>>d;
    cout<<"Enter char value of n: ";
    cin>>c;
    cout<<"Enter int value of n: ";
    cin>>data;

    //function calls
    cout<<"Passing double n and integer p to power function, result = "<<obj.power(d, p)<<endl;
    cout<<"Passing integer n and integer p to power function, result = "<<obj.power(data, p)<<endl;
    cout<<"Passing character n and integer p to power function, result = "<<obj.power(c, p)<<endl;
   

    return 0;
}


