// Prafull Varshney
#include<stdio.h>
#define MAX 1000
// assumption: 1) number of element in array is between 2 and 1000; 2) Number of distinct element is at least 2.
int main()
{
    int n,arr[MAX],small,secondsmall,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    small=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[0])
        {
            secondsmall=arr[i];
            break;
        }
    }
    if(secondsmall<small)
    {
        temp=small;
        small=secondsmall;
        secondsmall=temp;
    }
    for(int i=1;i<n;i++)
    {
        if(small>arr[i])
        {
            secondsmall=small;
            small=arr[i];
        }
        else if(secondsmall>arr[i] && arr[i]!=small)
            secondsmall=arr[i];
    }
    printf("Smallest is %d and Second Smallest is %d",small,secondsmall);
    return 0;
}
