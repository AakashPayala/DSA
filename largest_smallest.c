#include<stdio.h>
int main()
{
    int n,i,h,s;
    printf("\nenter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter your array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    h=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            h=a[i];
        }
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("highest element is :%d\n ",h);
    printf("smallest element is :%d",s);
    return 0;
}


