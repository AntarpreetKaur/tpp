#include <iostream>
using namespace std;

int main()
{
    char x = 'A';
    for(int i=1;i<=5;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            cout<<x<<" ";
            
            
        } 
        x = x+1;
        cout<<endl;
     
    } 
    
}