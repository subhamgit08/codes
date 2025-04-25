#include<stdio.h>
void maximum(int rows, int cols, int arr[rows][cols]){
    int max = 0 , ind_row = 0 , ind_col = 0;
    for(int j=0;j<rows;j++){
        for(int k=0;k<cols;k++){
            if(arr[j][k] > max){
                max = arr[j][k];
                ind_row = j;
                ind_col = k;
            }
        }
    }
    printf("The maximum value is : %d\n",max);
    printf("The row index is : %d\n",ind_row);
    printf("The column index is : %d\n",ind_col);
}
int main(){
    int i;
    printf("Enter the number of columns: ");
    scanf("%d",&i);
    int arr[2][i];
    for(int j=0;j<2;j++){
        for(int k=0;k<i;k++){
            printf("Enter the number [%d][%d]: ",j,k);
            scanf("%d",&arr[j][k]);
        }
    }
    maximum(2,i,arr);
}