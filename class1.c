#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int j;
    for (i=0;i<5;i++){
        scanf("%d",&j);
        a[i]=j;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}