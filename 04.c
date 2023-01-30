//Write a function to rotate an array N position(s) in D direction
#include<stdio.h>
void LeftShift (int a[],int n);
void RightShift (int a[],int n);
int main()
{
    int i,n,d,arr[10];
    printf("Enter any 10 elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n\t 1 for left shift.\n\t 2 for right shift.\n\t Enter direction : ");
    scanf("%d",&d);
    printf("\n\t Enter how many places you want to shift : ");
    scanf("%d",&n);
    printf("\n\n\t Original Array : ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    if(d==1)
        LeftShift(arr,n);
    else
        RightShift(arr,n);
    return 0;
}
void LeftShift(int a[],int n)
{
    int i,j,first;
    for(j=0;j<n;j++)
    {
        first=a[0];
        for(i=0;i<9;i++)
        {
            a[i]=a[i+1];
        }
        a[i]=first;
    }
    printf("\n\t Array after shifting all digits toward left, %d time(s) : ",n);
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
void RightShift(int a[],int n)
{
    int i,j,last,TempA,TempB;
    for(j=0;j<n;j++)
    {
        last=a[9];
        for(i=9;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=last;
    }
    printf("\n\t Array after shifting all digits towards right, %d time(s) : ",n);
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
