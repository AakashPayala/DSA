#include<stdio.h>
int main()
{
    int n,i,f=0,m;
    printf("\nenter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter your array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element to be searched :");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            f=i+1;
            break;
        }
    }
    if(f>0)
printf("ELEMENT FOUND AT : %d",f);
else
printf("ELEMENT NOT FOUND");
return 0;
}