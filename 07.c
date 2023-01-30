//Function to count total number of duplicate elements in an array
#include<stdio.h>
int CountDuplicate(int a[],int n)
{
    int i,j,count=0;
    for(j=0;j<n-1;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(a[j]==a[i])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int i,n;
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter any %d numbers : \n",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\nThere are %d duplicate number(s) in this array.\n\n",CountDuplicate(arr,n));
    return 0;
}
