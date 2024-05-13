#include <stdio.h>
void main()
{
    int a,b,c,i;
    a=0;
    b=1;
    printf("%d\t%d\t",a,b);
    c=a+b;
    for(i=1;i<=18;i++)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
}