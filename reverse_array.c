#include<stdio.h>
void main()
{
    int i;
    int arr[5];
    printf("enter numbers\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse array is......\n");
   for(i=4; i>=0; i--)
    {
        printf("%d\n",arr[i]);
    }

    }
