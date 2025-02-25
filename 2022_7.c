#include<stdio.h>

int main(){
    int arr[100] , n , element;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element) 
        {
            printf("The index of the element is %d\n",i);
            break;
        }
    }
    
    return 0;
}