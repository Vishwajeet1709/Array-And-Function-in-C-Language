//Function to print all unique value in array
#include<conio.h>
void PrintUnique (int a[],int n)
{
    int i,j,count;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
             if(a[i]==a[j] && i>j)
                {
                    count++;
                    break;
                }
        }
        if(count==0)
            printf("%d ",a[i]);
    }
    printf("\n\n");
}
int main()
{
    int i, n;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter any %d numbers : \n");
    for(i=0;i<n;i++)
    {
        printf("\n Element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\nArray values after removing duplicates : ");
    PrintUnique(arr,n);
    return 0;
}
