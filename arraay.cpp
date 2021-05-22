#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the range of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements into array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maximum=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<maximum) 
        {
            maximum=a[i];
        }
    }
    cout<<"Minimum element in the given array:"<<maximum;
}
