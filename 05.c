//function to find first occurrence of a duplicate value
#include<stdio.h>
int DuplivateValue(int a[])
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
                continue;
            else if(a[i]==a[j])
            {
                return a[i];
            }
        }
    }
    return 0;
}
int main()
{
    int arr[10],i;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(DuplivateValue(arr))
        printf("\n\n In this given array %d is the first duplicate value.\n\n",DuplivateValue(arr));
    else
        printf("\n\nIn this given array there is no any duplicate values.\n\n");
    return 0;
}
