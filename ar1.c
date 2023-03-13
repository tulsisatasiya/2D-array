#include <stdio.h>
int main()
{
    int m,n;
    printf("How many columns?:");
    scanf("%d",&m);
    printf("How many row?:");
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}
