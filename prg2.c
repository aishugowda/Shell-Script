#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],n,i,key,mid,low,high;
printf("enter the value of n \n");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the search element");
scanf("%d",&key); 
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("array found at loc %d",mid);
exit(0);
}
else if(key>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
printf("search element is not found");
}
