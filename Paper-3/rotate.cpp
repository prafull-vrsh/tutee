//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
/*
assumption: d>0
*/
int main()
{
    long n,d;
    cin>>n>>d;
    vector<long> v(n),temp(d);
    for(long i=0;i<n;i++)
    {
        cin>>v[i];
        if(i<d)
            temp[i]=v[i];
    }
    for(long i=0;i<n;i++)
    {
        if(i+d<n)
            v[i]=v[i+d];
        else
            v[i]=temp[(i+d)%n];
    }
    for(long i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
