#include<stdio.h>
int main(){
    int arr[100], n, i, j, k;
    printf("Enter number of element you want enter in array: ");
    scanf("%d", &n);
    printf("Enter the element of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1; i<n; i++)
    {
        k=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>k
        ){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=k;
    }
    for(i=0;i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
}