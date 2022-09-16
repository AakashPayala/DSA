#include <stdio.h>
int main()
{
int i,size,c;
printf("enter the size of array :\n");
scanf("%d",&size);
int a[size];
printf("Enter the elements of the array : \n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("array elements entered are :\n");
for(i=0;i<size;i++)
printf("%d\t",a[i]);
printf("\n");
printf("array elements in reverse are :\n");
for(i=size-1;i>=0;i--)

printf("%d\t",a[i]);
int sum=0,h=0,s,t,j;
for(i=0;i<size;++i)
{
for(j=i+1;j<size;++j)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nhighest element in the array is :%d",a[0]);
printf("\nSecond smallest element is : %d",a[size-2]);
for(i=0;i<size;i++)
{
sum=sum+a[i];
}
printf("\nsum of elements :\t %d \navarage : \t%d",sum,(sum/size));

return 0;
}