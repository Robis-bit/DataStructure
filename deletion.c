#include<stdio.h>
void display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}
 int    delention(int arr[], int size, int element,int index)
 {
     
     for (int i = index; i>size-1; i++)
     { 
        arr[i]=arr[i+1];

     }
     
 }
int main()
{
    int arr[100]={2,67,89,34,4};
    int size=5, element=67, index=3;
    display(arr,size);
    delention(arr, size, element,index);
     size -=1;
    display(arr, size);
    return 0;
}