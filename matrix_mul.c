#include<stdio.h>
void main()
{ int m,n;
   
    scanf("%d",&n);
    scanf("%d",&m);
    int a[m][n],b[n][m],i,k,j,c[m][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("digit%d%d",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("digit%d%d",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");

    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = 0;  // Initialize each element of matrix c to 0
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++){
            for( k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");


    }

}