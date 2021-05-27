//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    vector<long> v(n);
    for(long i=0;i<n;i++)
    {
        cin>>v[i];
        v[i]++;
    }
    for(long i=0;i<n;i++)
    {
        if(v[abs(v[i])-1]<0)
            continue;
        v[abs(v[i])-1]=-v[abs(v[i])-1];
    }
    for(long i=0;i<n;i++)
    {
        if(v[i]<0)
            cout<<i<<" ";
    }
    return 0;
}
