//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
/*
assumption: n1>0, n2>0
*/
int main()
{
    long n1,n2;         // size of arrays
    cin>>n1>>n2;
    vector<long> v1(n1),v2(n2);
    for(long i=0;i<n1;i++)
        cin>>v1[i];
    for(long i=0;i<n2;i++)
        cin>>v2[i];
    long itr1=0,itr2=0;
    vector<long> uni,inter;
    while(1)
    {
        if(itr1>=n1 && itr2>=n2)
            break;
        else if(itr2>=n2)
        {
            while(itr1<n1)
            {
                if(itr1==0)
                    uni.push_back(v1[itr1]);
                else if(v1[itr1-1]!=v1[itr1])
                    uni.push_back(v1[itr1]);
                itr1++;
            }
            break;
        }
        else if(itr1>=n1)
        {
            while(itr2<n2)
            {
                if(itr2==0)
                    uni.push_back(v2[itr2]);
                else if(v2[itr2-1]!=v2[itr2])
                    uni.push_back(v2[itr2]);
                itr2++;
            }
            break;
        }
        else
        {
            if(v1[itr1]<v2[itr2])
            {
                if(itr1==0 || v1[itr1-1]!=v1[itr1])
                    uni.push_back(v1[itr1]);
                itr1++;
            }
            else if(v1[itr1]>v2[itr2])
            {
                if(itr2==0 || v2[itr2-1]!=v2[itr2])
                    uni.push_back(v2[itr2]);
                itr2++;
            }
            else
            {
                if(itr1==0 && itr2==0)
                {
                    inter.push_back(v1[itr1]);
                    uni.push_back(v2[itr2]);
                }
                else if(itr1==0)
                {
                    if(v2[itr2-1]!=v2[itr2])
                    {
                        inter.push_back(v1[itr1]);
                        uni.push_back(v2[itr2]);
                    }
                }
                else if(itr2==0)
                {
                    if(v1[itr1-1]!=v1[itr1])
                    {
                        inter.push_back(v1[itr1]);
                        uni.push_back(v2[itr2]);
                    }
                }
                else
                {
                    if(v1[itr1-1]!=v1[itr1] && v2[itr2-1]!=v2[itr2])
                    {
                        inter.push_back(v1[itr1]);
                        uni.push_back(v2[itr2]);
                    }
                }
                itr1++;
                itr2++;
            }
        }
    }
    cout<<"Union : ";
    for(long i=0;i<uni.size();i++)
        cout<<uni[i]<<" ";
    cout<<"\n";
    cout<<"Intersection : ";
    if(inter.size()==0)
        cout<<" No common\n";
    for(long i=0;i<inter.size();i++)
        cout<<inter[i]<<" ";
    return 0;
}
