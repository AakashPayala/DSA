#include<stdio.h>
int main()
{
    int array1[1000];
    int m,n,i,c=0;
    printf("enter size of array1 and array 2 :");
    scanf("%d%d",&m,&n);
    int array2[n];
    printf("enter array1 :");
    for(i=0;i<m;i++)
    {
       scanf("%d",&array1[i]);
    }
    printf("enter array2 :");
    for(i=0;i<n;i++)
    {
       scanf("%d",&array2[i]);
    }
    for(i=m;i<n+m;i++)
    {
        array1[i]=array2[c++];
    }
    printf("merged array :\n");
    for(i=0;i<m+n;i++)
    {
        printf("%d  ",array1[i]);
    }
    return 0;
}
