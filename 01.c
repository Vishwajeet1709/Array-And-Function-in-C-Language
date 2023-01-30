//Function to find greatest number from the given array size
#include<stdio.h>
int GreatestNum (int a[])
{
    int i,g=0;

    for(i=0;i<10;i++)
    {
        if(a[i]>g)
            g=a[i];
    }
    return g;
}
int main()
{
    int i,a[10];
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n\t %d is the greatest number.",GreatestNum(a));
    return 0;
}
