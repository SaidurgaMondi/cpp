#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    int count=0;
    cout<<"Enter a NUmber :";
    cin>>n;
    for(i=1;i<=sqrt(n+1);i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime number";
            count++;
            
        }
    }
    if(count==0)
        cout<<"Given number is Prime";
}
