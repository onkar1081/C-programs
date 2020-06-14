#include<stdio.h>
void main()
{
    int i,sum=1;
    int arr[5];
    printf("Enter array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum*arr[i];
    }
        printf("%d is multiplication of array",sum);
}
