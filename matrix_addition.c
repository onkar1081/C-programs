#include<stdio.h>
void main()
{int i,j;
int arr1[3][3];
int arr2[3][3];
int arr3[3][3];
printf("Enter 1 mat\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
 printf("Enter 2 mat\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
    }
}
