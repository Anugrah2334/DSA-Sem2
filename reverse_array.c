#include<stdio.h>
#define N 5
int main()
{
    int i,a[N];
    printf("Enter %d integer elements\n",N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("Elements of the array are:\n");
    for(i=N-1;i>=0;i--)
    printf("%d\n",a[i]);
    return 0;
}