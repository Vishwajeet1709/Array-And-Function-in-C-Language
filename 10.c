//Write a function to print the frequency of each element present in an array
#include<stdio.h>
void PrintFrequency(int a[],int n)
{
    int i,j,count;
    printf("\n     Element   Frequency");
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j] && i>j)
                {
                    count--;
                    break;
                }
                else if(a[i]==a[j])
                    count++;
            }
        }
        if(count>0)
        printf("\n\t%d\t%d",a[i],count);
    }
}
int main()
{
    int i,n;
    printf(" Enter the number of element you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements : ");
    for(i=0;i<n;i++)
    {
        printf("\n Element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    PrintFrequency(arr,n);
    printf("\n\n");
    return 0;
}
