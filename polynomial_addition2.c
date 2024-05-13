#include <stdio.h>
struct poly
{
int e,t;
};
void accept(int ,int, struct poly[]);
void addition(int, int, int, int,  struct poly[]);
void display(int, int,struct poly[]);


void accept(int n,int n1,struct poly a[10])
{
    for(int i=n;i<n1;i++)
    {
        printf("Enter the degree of %d term\n",i+1);
        scanf("%d",&a[i].e);
        printf("Enter the coeffecient of %d term\n",i+1);
        scanf("%d",&a[i].t);
    }
}


void display(int n, int n1, struct poly a[10])
{
    int i;
    printf("\n");
    printf("%dx^%d",a[n].t,a[n].e);
    for(i=n;i<n1;i++)
    if(a[i].t>0)
    printf(" + %dx^%d",a[i].t,a[i].e);
    else
    printf(" - %dx^%d",(-1*a[i].t),a[i].e);
    printf("\n");
}


void addition(int x,int n1,int y, int n2, struct poly a[10])
{
    int z,c;
    c=z=n2;
    struct poly c[10];
    while(x<n1 && y<n2)
    {
        if(a[x].e==a[y].e)
        {
            if((a[x].t + a[y].t)!=0)
            {
                a[z].e = a[x].e;
                a[z].t = a[x].t + a[y].t;
                z++;
            }
            x++;
            y++;
        }

    else if(a[x].e>a[y].e)
    {
        a[z]=a[x];
        x++;
        z++;
    }
    else
    {
        a[z]=a[y];
        z++;
        y++;
    }
    }
    for(int i=x;i<n1;i++,z++)
    a[z]=a[i];
    for(int i=y;i<n2;i++,z++)
    a[z]=a[i];
    display(c,z,a);
}


void main()
{
    struct poly a[10];
    int n1,n2;
    printf("Enter the number of terms in first polynomial\n");
    scanf("%d",&n1);
    accept(0,n1,a);
    printf("Enter the number of terms in second polynomial\n");
    scanf("%d",&n2);
    accept(n1,n1+n2,a);
    addition(0,n1,n2,n1+n2,a);
}