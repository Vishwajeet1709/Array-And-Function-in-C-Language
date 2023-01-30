//Read values in array from user, and print in reverse order
#include<stdio.h>
void reverse (int a[],int n)
{
  int i;
      for(i=0;i<n/2;i++)
      {
          a[i]=a[i]+a[n-i-1];
          a[n-i-1]=a[i]-a[n-i-1];
          a[i]=a[i]-a[n-i-1];
      }
      printf("\n\nArray after reversing elements : ");
      for(i=0;i<n;i++)
      {
          printf("%d ",a[i]);
      }
      printf("\n\n");
}
int main()
{
    int i,n;
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter any %d elements : ",n);
    for(i=0;i<n;i++)
    {
        printf("\n %d number of element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEntered array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n\n");
    reverse(arr,n);
    return 0;
}
