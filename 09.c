//Write a function to merge to arrays of same size and arrange them in ascending order
#include<stdio.h>
void MergeArray(int a[],int b[],int n)
{
    int i,j,arr[n*2];
    for(i=0;i<n*2;i++)
    {
        if(i<n)
        {
            arr[i]=a[i];
        }
        else
        {
            arr[i]=b[i-n];
        }
    }
    printf("\nArray after merging : ");
    for(i=0;i<n*2;i++)
    {
        printf(" %d",arr[i]);
    }
    for(i=0;i<(n*2)-1;i++)
    {
        for(j=i+1;j<n*2;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    printf("\n\nArray after arranging in ascending order : ");
    for(i=0;i<n*2;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}
int main()
{
    int i,n;
    printf("Enter the number of elements for each array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("\n\nEnter values for first array : ");
    for(i=0;i<n;i++)
    {
        printf("\nElement no %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\nEnter values for second array : ");
    for(i=0;i<n;i++)
    {
        printf("\nElement no %d : ",i+1);
        scanf("%d",&b[i]);
    }
    MergeArray(a,b,n);
    return 0;
}
