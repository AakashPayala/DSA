#include<stdio.h>
int main()
{
    int n,i,lb,ub,m,mid,f=-1;
    printf("\n enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter your array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element to be searched :");
    scanf("%d",&m);
    lb=0;
    ub=n-1;
    while(lb<ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==m)
        {
            f=mid;
            break;
        }
        else if(a[mid]>m)
        {
            ub=mid-1;
        }
        else if(a[mid]<m)
        {
            lb=mid+1;
        }
    }
    if(f>0)
    printf("element found at : %d",f+1);
    else
    printf("element not found");
    return 0;
}

