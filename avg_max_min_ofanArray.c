#include<stdio.h>
void main()
{
    int s=0,n,a[10],i;
    printf("limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
    s+=a[i];
    if(a[i]>max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
    }
    printf("max=%d",max);
    printf("min=%d\n",min);
    printf("%d",s/n);


}