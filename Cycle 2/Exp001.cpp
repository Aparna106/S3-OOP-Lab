/******************************************************************************

                              Name: Aparna Nair
               Register No: 20220021        Roll no: 21

*******************************************************************************/

#include <iostream>

using namespace std;

class Numbers
{
private:
    static int array[50];
    static int n;
    
public:

    void input()
    {
        cout<<"Enter the number of elements in the array: ";
        cin>>n;
        
        cout<<"Enter elements of the array: ";
        for(int i=0; i<n; i++)
        {
            std::cin>>array[i];
        }

    }

    void static average()
    {
        float sum =0;
        
        for(int i=0; i<n; i++)
        {
            sum+=array[i];
            
        }
       
        cout<<"The average of the array is: "<<(sum/n)<<std::endl;
    }
    void multiplier(int k)
    {
        for(int i=0; i<n; i++)
        {
            array[i] = array[i]*k;
        }
        
    }
    void display()
    {
        cout<<"The sorted array elements are: "<<std::endl;
        for(int i=0; i<n; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<std::endl;
    }
    
    void sort(int k)
    {
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(array[i] > array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j ]= temp;
                }
            }
        }
        
        display();
        
        for(int i=0; i<n; i++)
        {
            array[i] = array[i]/k;
        }

        display();



    }
    
};

int Numbers::array[];
int Numbers::n;


int main()
{
    int constant;
    
    Numbers obj1;
    Numbers obj2;
    Numbers obj3;
    
    obj1.input();
    obj1.average();
    
    cout<<"Enter the constant to multiply the array with: ";
    cin>>constant;
    
    obj2.multiplier(constant);
    obj1.average();
    obj3.sort(constant);
    

    return 0;
    
}


