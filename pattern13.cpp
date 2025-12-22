#include <iostream>
using namespace std;

int main()
{
    int x=1;
    for(int i=1;i<=6;i++)
    {
        
        for(int j=1;j<=i-1;j++)
        {
            cout<<x<<" ";
            x = x+1;
            
        } 
        cout<<endl;
     
    } 
    
}