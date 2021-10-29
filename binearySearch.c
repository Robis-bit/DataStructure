#include<stdio.h>
int binearySearch(int arr[],int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     return -1;
}
int main()
{
int arr[]={4,45,67,78,89,90,91,97,101};
int size=sizeof(arr)/sizeof(int);
int element;
printf("Enter the element:");
scanf("%d",&element);
int searchindex=binearySearch(arr,size,element);
printf("The element %d is found at index at %d",element,searchindex);
}