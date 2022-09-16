#include<stdio.h>  
 int main()    
{    
int n,r,s=0,no;    
printf("enter number=");    
scanf("%d",&n);    
no=n;    
while(no>0)    
{    
r=no%10;    
s=s+(r*r*r);    
no=no/10;    
}    
if(n==s)    
printf("armstrong  number ");    
else    
printf("not armstrong number");  


return 0;  
}   