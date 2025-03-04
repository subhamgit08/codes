#include<stdio.h>
void main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int r=0,c=0;
    int row[3];
    int col[3];
    for(int i=0;i<3;i++){
        int rmax=a[i][0];
        for(int j=0;j<3;j++){
            if(a[i][j]>=rmax){
                rmax=a[i][j];
            }
        }
        row[r]=rmax;
        r++;
    }
    for(int i=0;i<3;i++){
        int cmax=a[0][i];
        for(int j=0;j<3;j++){
            if(a[j][i]>=cmax){
                cmax=a[j][i];
            }
        }
        col[c]=cmax;
        c++;
    }
    for(int k=0;k<r;k++){
        printf("%d ",row[k]);
    }
    printf("\n");
    for(int l=0;l<3;l++){
        printf("%d ",col[l]);
    }


}