#include<stdio.h>
int main()
{
    int a[10],max=0,i,n;
    printf("\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);

        if(a[i]>max){
        max=a[i];
        }
        }
    printf("%d",max);
}
