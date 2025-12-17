#include <iostream>
#include <climits>
using namespace std;
int smallest=INT_MAX;
int largest=INT_MIN;
int main()

{
    int n;
    
    cout<<"enter the size of array \n";
    cin>>n;
    int arr[n];
    cout<<"\n enter all the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"smallest element in array is :"<<smallest;
    cout<<"\nlargest element in array is :"<<largest<<"\n";
    
    int a=5;
    cout<<&a;
    cout<<"\n"<<sizeof(double);
    return 0;
}