#include<stdio.h>
void main()
{
    int i,sum=0;
    int arr[5],arr1[5];
    printf("Enter array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        arr1[i]=arr[i];
    }
    printf("Your array.......\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n",arr1[i]);
    }
}
