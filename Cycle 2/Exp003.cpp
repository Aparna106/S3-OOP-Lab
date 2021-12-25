/******************************************************************************

                              Name: Aparna Nair
               Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>

using namespace std;

class swapping
{
    public:
    int a;

    void value(swapping num1, swapping num2)
    {
        int temp;
        
        cout<<"Before swapping: "<<endl;
        cout<<"Number 1 is: "<<num1.a<<endl;
        cout<<"Number 2 is: "<<num2.a<<endl;
        
        temp=num1.a;
        num1.a=num2.a;
        num2.a=temp;
        
        
        cout<<"After swapping: "<<endl;
        cout<<"Number 1 is: "<<num1.a<<endl;
        cout<<"Number 2 is: "<<num2.a<<endl;
        
    }

    void address(swapping *num1, swapping *num2)
    {
        int temp;
        
        cout<<"Before swapping: "<<endl;
        cout<<"Number 1 is: "<<num1->a<<endl;
        cout<<"Number 2 is: "<<num2->a<<endl;
        
        temp=num1->a;
        num1->a=num2->a;
        num2->a=temp;
        
        cout<<"After swapping: "<<endl;
        cout<<"Number 1 is: "<<num1->a<<endl;
        cout<<"Number 2 is: "<<num2->a<<endl;
    }

    void reference(swapping &num1, swapping &num2)
    {
        int temp;
        
        cout<<"Before swapping: "<<endl;
        cout<<"Number 1 is: "<<num1.a<<endl;
        cout<<"Number 2 is: "<<num2.a<<endl;
        
        temp=num1.a;
        num1.a=num2.a;
        num2.a=temp;
        
        cout<<"After swapping: "<<endl;
        cout<<"Number 1 is: "<<num1.a<<endl;
        cout<<"Number 2 is: "<<num2.a<<endl;
        
    }

};


int main()
{   
    swapping num1;
    swapping num2;
    int choice;
    
    cout<<"Enter the number 1: ";
    cin>>num1.a;
    cout<<"Enter the number 2: ";
    cin>>num2.a;
    
    cout<<"The options are: "<<endl;
    cout<<"1) Call by Value\n2) Call by reference\n3) Call by address"<<endl;
    cout<<"Please choose your option: ";
    cin>>choice;
    
        switch(choice)
        {
        case 1:
        
        num1.value(num1, num2);
        
        cout<<"\nAfter swapping (main): ";
        cout<<"\nNumber 1 is: "<<num1.a;
        cout<<"\nNumber 2 is: "<<num2.a;
        break;
        
        case 2:
        
        num1.address(&num1, &num2);
        
        cout<<"\nAfter swapping (main): ";
        cout<<"\nNumber 1 is: "<<num1.a;
        cout<<"\nNumber 2 is: "<<num2.a;
        break;
        
        case 3:
        
        num1.reference(num1, num2);
        
        cout<<"\nAfter swapping (main): ";
        cout<<"\nNumber 1 is: "<<num1.a;
        cout<<"\nNumber 2 is: "<<num2.a;
        break;
        
        default:
        cout<<"An error has occurred, please try again later.";
        
    }
    
    return 0;
}



