#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    if(a<0 || (a%10==0 && a!=0))
    {
        return 0;
    }

    int rev = 0;

    while(a>rev)
    {
        rev = rev * 10 + a%10;
        a = a/10;
    }

    if(a==rev || a==rev/10)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }
}