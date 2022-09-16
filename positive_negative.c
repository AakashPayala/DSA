#include<stdio.h>
int main()
{
    int n,i,c=0,d=0;
    printf("enter the size of array :- ");
    scanf("%d",&n);
    int a[n],x[n],y[n];
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        x[c++]=a[i];
        else
        y[d++]=a[i];
        
    }
    printf("new array :\n");
    for(i=0;i<c;i++)
    {
        printf("%d ",x[i]);
    }
    for(i=0;i<d;i++)
    {
        printf("%d ",y[i]);
    }
return 0;
}