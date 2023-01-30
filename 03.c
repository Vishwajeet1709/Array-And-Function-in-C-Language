//Write a function to short an array of any size
#include<stdio.h>
void ShortArray (int arr[])
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf(" %d",arr[i]);
    }
}
int main()
{
    int i,arr[10];
    printf("Enter any 10 values : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nValues after shorting : ");
    ShortArray(arr);
    printf("\n\n");
    return 0;
}
