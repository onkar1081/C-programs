#include<stdio.h>
main()
{
    int arr[3][3];
    int i,j;
    printf("Enter the matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("%d\t",arr[j][i]);
    }
    printf("\n");
}
}
