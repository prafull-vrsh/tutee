//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long x,y,n,d=INT_MAX,a1=-1,a2=-1;
    cin>>n;
    vector<long> v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    cin>>x>>y;
    for(long i=0;i<n;i++)
    {
        if(v[i]!=x && v[i]!=y)
            continue;
        if(v[i]==x)
            a1=i;
        else
            a2=i;
        if(a1==-1 || a2==-1)
            continue;
        d=min(d,abs(a1-a2));
    }
    if(d==INT_MAX)
        cout<<"elements are not present\n";
    else
        cout<<d<<"\n";
    return 0;
}
