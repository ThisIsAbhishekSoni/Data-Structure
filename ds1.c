#include<stdio.h>
int main()
{
    int a[10],sum=0,i,n;
    float avg;
    print("enter no. of student\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%f",avg);
    return 0;
}
