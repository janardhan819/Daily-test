
#include<stdio.h>
#include<stdlib.h>
 
int cmpfunc(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b)
int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
 
    printf("Enter elements in the array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
 
    if(n==0)
    {
        printf("No element inside the array.");
        exit(0);
    }
 
    printf("\nArray Before Removing Duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
 
    qsort(arr,n,sizeof(int),cmpfunc);
    int temp[n];
    int i = 0, j = 0;
    temp[j++] = arr[i++];
    for( ; i<n; i++)
    {
        if(arr[i] != arr[i-1])
        {
            temp[j++] = arr[i];
        }
    }
 
    printf("\nArray After Removing Duplicates: ");
    for(i=0;i<j;i++)
        printf("%d ",temp[i]);
 
    return 0;
}
