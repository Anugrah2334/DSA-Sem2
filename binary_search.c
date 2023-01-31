#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,first,last,mid,search,array[1000];
printf("Enter number of elements:\n");
scanf("%d",&n);
printf("Enter %d integers:\n",n);
for(i=0;i<n;i++)
scanf("%D",&array[i]);
printf("Enter value you want to search:\n");
scanf("%d",&search);
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{
    if(array[mid]<search)
    first=mid+1;
    else if(array[mid]==search)
    {
        printf("%d found at location %d.\n",search,mid+1);
        break;
    }
    else
    last=mid-1;
    mid=(first+last)/2;
}
if(first>last)
printf("%d is not found",search);
}
