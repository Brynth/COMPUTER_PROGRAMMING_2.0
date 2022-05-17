#include<stdio.h>

int main()
{
    //a[5]= 0 1 2 3 4 5 ---> 15
    int a[5],sum=0,i;
    printf("Enter the size of array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum of all array elements :");
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
