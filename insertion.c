#include<stdio.h>
void display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}
 int insertion(int arr[], int size, int element,int index, int capacity)
 {
     if(size>=capacity)
     {
         return -1;
     }
     for (int i = size-1; i>index; i--)
     { 
        arr[i+1]=arr[i];

     }
     arr[index]=element;
     return 1;
 }
int main()
{
    int arr[100]={2,67,89,34,4};
    int size=5, element=67, index=3;
    display(arr,size);
    insertion(arr, size, element,index, 100);
     size +=1;
    display(arr, size);
    return 0;
}