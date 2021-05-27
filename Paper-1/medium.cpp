//Prafull Varshney
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long element,n1=0,n2=0,cur_med;
    /* n1 : number of element in max heap
       n2 : number of element in min heap */
    priority_queue<long> p_max;
    priority_queue<long,vector<long>,greater<long>> p_min;
    while(cin>>element)
    {
        if(n1==0)
        {
            n1++;
            p_max.push(element);
        }
        else
        {
            if(p_max.top()>=element)
            {
                n1++;
                p_max.push(element);
            }
            else
            {
                n2++;
                p_min.push(element);
            }
        }
        if(n1<n2)
        {
            p_max.push(p_min.top());
            p_min.pop();
            n2--;
            n1++;
        }
        else if(n1>n2+1)
        {
            p_min.push(p_max.top());
            p_max.pop();
            n2++;
            n1--;
        }
        if((n1+n2)%2==0)
            cur_med=(p_min.top()+p_max.top())/2;
        else
            cur_med=p_max.top();
        cout<<"Current Median = "<<cur_med<<"\n";
    }
    return 0;
}
