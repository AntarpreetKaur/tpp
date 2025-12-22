#include <iostream>
using namespace std;

int main()
{
    int x=6;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<j;
        }
        
        for(int k=1;k<x;k++)
        {
            
            cout<<" ";
        }
        for(int k=1;k<x;k++)
        {
            
            cout<<" ";
        }
        x=x-1;
        for(int k=i-1;k>0;k--)
        {
            cout<<k;
        }
        
        cout<<endl;
     
    } 
    
}