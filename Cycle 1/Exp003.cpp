/******************************************************************************

                              Name: Aparna Nair
               Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>

using namespace std;

class Bank_account
{
    private:
    char depositor_name[20];
    int account_number;
    char account_type[20];
    int balance_amount;
    
    public:
    void a()
    {
        cout<<"Enter the depositor's name: ";
        cin>>depositor_name;
        cout<<"Enter the account no: ";
        cin>>account_number;
        cout<<"Enter the account type: ";
        cin>>account_type;
        cout<<"Enter the account balance: ";
        cin>>balance_amount;
        
    }
    
    void b()
    {
        int deposit_amount;
        
        cout<<"\nEnter the amount you want to deposit: ";
        cin>>deposit_amount;
        balance_amount = balance_amount + deposit_amount;
        cout<<"Your balance amount is: "<<balance_amount;
    }
    
    void c()
    {
        int withdraw_amount;
        
        cout<<"\nEnter the amount you want to withdraw: ";
        cin>>withdraw_amount;
        balance_amount = balance_amount - withdraw_amount;
        cout<<"Your balance amount is: "<<balance_amount;
    }
    
    void d()
    {
        cout<<"\nName of Depositor: "<<depositor_name;
        cout<<"\nYour Account balance is: ";
        cout<<balance_amount;
    }
    
};
    
int main()
{
    Bank_account account1;
    int choice;
    
    account1.a();
    
    
    do{
        
        cout<<"\n Menu:";
        cout<<"\n 1) To make a deposit\n 2) To make a withdrawal\n 3) To check your balance\n 4) Exit\nPlease choose an option: ";
        
        cin>>choice;
        
        switch(choice)
        {
            case 1:
                account1.b();
                break;
        
            case 2:
                account1.c();
                break;
                
            case 3:
                account1.d();
                break;
                    
            case 4:
                exit(1);
                break;
                
            default: 
                cout<<"\nAn error has occured, please try again.";
        
        }
        
        cout<<"\n";
            
    }while(choice<4);
    
    return 0;

}

