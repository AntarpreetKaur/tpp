#include <iostream>
using namespace std;

int main()
{
    
    for(int i=6;i>1;i--)
    {
        char x = 'A';
        
        for(int j=1;j<=i-1;j++)
        {
            cout<<x<<" ";
            x = x+1;
            
        } 
        cout<<endl;
     
    } 
    
}