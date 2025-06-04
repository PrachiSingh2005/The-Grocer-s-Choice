#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,m;
    printf("Enter any Number :");
    scanf("%d",&n);
    i=10;
    while(i>=1)
    {
        m=n*i;
        printf("%d*%d=%d",n,i,m);
        i=i-1;
    }
    getch();
}