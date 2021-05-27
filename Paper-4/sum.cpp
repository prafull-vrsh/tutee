//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
// assumption: n>1
long bsearch(long start,long en,long value,vector<long> &v)
{
    long ans=-1,mid;
    while(start<=en)
    {
        mid=start+(en-start)/2;
        if(v[mid]<=value)
        {
            ans=mid;
            start=mid+1;
        }
        else
            en=mid-1;
    }
    return ans;
}
int main()
{
    long n,temp,m;
    cin>>n;
    vector<long> neg,rest;
    for(long i=0;i<n;i++)
    {
        cin>>temp;
        if(temp<0)
            neg.push_back(-temp);
        else
            rest.push_back(temp);
    }
    sort(neg.begin(),neg.end());
    sort(rest.begin(),rest.end());
    n=neg.size();
    m=rest.size();
    long d=INT_MAX,a1=0,a2=0;
    for(long i=0;i<n;i++)
    {
        temp=bsearch(0,m-1,neg[i],rest);
        if(temp==-1)
            temp=0;
        if(temp>=m)
            continue;
        if(abs(-neg[i]+rest[temp])<d)
        {
            d=abs(-neg[i]+rest[temp]);
            a1=-neg[i];
            a2=rest[temp];
        }
        temp++;
        if(temp>=m)
            continue;
        if(abs(-neg[i]+rest[temp])<d)
        {
            d=abs(-neg[i]+rest[temp]);
            a1=-neg[i];
            a2=rest[temp];
        }
    }
    for(long i=0;i<m;i++)
    {
        temp=bsearch(0,n-1,rest[i],neg);
        if(temp==-1)
            temp=0;
        if(temp>=n)
            continue;
        if(abs(-neg[temp]+rest[i])<d)
        {
            d=abs(-neg[temp]+rest[i]);
            a1=-neg[temp];
            a2=rest[i];
        }
        temp++;
        if(temp>=n)
            continue;
        if(abs(-neg[temp]+rest[i])<d)
        {
            d=abs(-neg[temp]+rest[i]);
            a1=-neg[temp];
            a2=rest[i];
        }
    }
    if(n>=2)
    {
        if(abs(-neg[0]-neg[1])<d)
        {
            d=abs(-neg[0]-neg[1]);
            a1=-neg[0];
            a2=-neg[1];
        }
    }
    if(m>=2)
    {
        if(abs(rest[0]+rest[1])<d)
        {
            d=abs(rest[0]+rest[1]);
            a1=rest[0];
            a2=rest[1];
        }
    }
    cout<<a1<<" "<<a2;
    return 0;
}
