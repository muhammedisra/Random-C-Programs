#include <stdio.h>
struct poly
{
int e,t;
};
void accept(int,struct poly[]);
void addition(int, struct poly[], int, struct poly[]);
void display(int, struct poly[]);


void accept(int n,struct poly a[10])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the degree of %d term\n",i+1);
        scanf("%d",&a[i].e);
        printf("Enter the coeffecient of %d term\n",i+1);
        scanf("%d",&a[i].t);
    }
}


void display(int n, struct poly a[10])
{
    int i;
    printf("\n");
    printf("%dx^%d",a[0].t,a[0].e);
    for(i=1;i<n;i++)
    if(a[i].t>0)
    printf(" + %dx^%d",a[i].t,a[i].e);
    else
    printf(" - %dx^%d",(-1*a[i].t),a[i].e);
    printf("\n");
}


void addition(int n1, struct poly a[10], int n2, struct poly b[10])
{
    struct poly c[10];
    int x,y,z;
    x=y=z=0;
    while(x<n1 && y<n2)
    {
        if(a[x].e==b[y].e)
        {
            if((a[x].t + b[y].t)!=0)
            {
                c[z].e = a[x].e;
                c[z].t = a[x].t + b[y].t;
                z++;
            }
            x++;
            y++;
        }

    else if(a[x].e>b[y].e)
    {
        c[z]=a[x];
        x++;
        z++;
    }
    else
    {
        c[z]=b[y];
        z++;
        y++;
    }
    }
    for(int i=x;i<n1;i++,z++)
    c[z]=a[i];
    for(int i=y;i<n2;i++,z++)
    c[z]=b[i];
    display(z,c);
}


void main()
{
    struct poly a[10],b[10];
    int n1,n2;
    printf("Enter the number of terms in first polynomial\n");
    scanf("%d",&n1);
    accept(n1,a);
    printf("Enter the number of terms in second polynomial\n");
    scanf("%d",&n2);
    accept(n2,b);
    addition(n1,a,n2,b);
}