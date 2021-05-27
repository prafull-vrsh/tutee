//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    vector<long> v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    cout<<"Leaders are : ";
    long lead=v[n-1];
    cout<<lead<<" ";
    for(long i=n-2;i>=0;i--)
    {
        if(lead<v[i])
        {
            cout<<v[i]<<" ";
            lead=v[i];
        }
    }
    return 0;
}
