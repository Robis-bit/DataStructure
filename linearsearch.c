#include<stdio.h>
int linearSearch(int arr[],int size, int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }return -1;
}
int main()
{
int arr[]={4,45,67,78,89,90,91,97,101};
int size=sizeof(arr)/sizeof(int);
int element=67;
int searchindex=linearSearch(arr,size,element);
printf("The element %d is found at index at %d",element,searchindex);
}