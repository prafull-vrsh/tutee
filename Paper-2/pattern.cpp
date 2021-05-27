//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
/*
Input:- 5

Output:-

*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*/
int main()
{
    long n,limit,cur;
    char ch,ch1;
    cin>>n;
    for(long i=1;i<=2*n;i++)
    {
        for(long j=1;j<=2*n;j++)
        {
            if(j<=n)
            {
                if(i<=n)
                    limit=i;
                else
                    limit=2*n-i+1;
                ch='*';
                ch1=' ';
                cur=j;
            }
            else
            {
                if(i<=n)
                    limit=n-i;
                else
                    limit=i-n-1;
                ch=' ';
                ch1='*';
                cur=j-n;
            }
            if(cur<=limit)
                cout<<ch;
            else
                cout<<ch1;
            cout<<" ";
            if(j==n)
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
