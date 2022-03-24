#include <stdio.h>
#include <stdlib.h>
void zamien(int * a,int * b)
{
    int pom;
    pom=*a;
    *a=*b;
    *b=pom;
}
void zamien2(int * c,int * d)
{
    int pom2;
    pom2=*c;
    if(*d>*c)
    {
    *c=*d;
    *d=pom2;
    }
}
void zamien3(int n, int *w)
{
    *w=n;
}
double *zamien4()
{
    return malloc (sizeof(double));
}
double *zamien5(int m)
{
    return malloc (m* sizeof(double));
}

int main()
{
    int a=6; int b=7;
    int c=2; int d=3;
    int n=5; int w=7;
    double x=2.9;
    int m=2;
    zamien(&a,&b);
    printf("%d \n",a);
    printf("%d \n",b);
    zamien2(&c,&d);
    printf("%d \n",c);
    printf("%d \n",d);
    zamien3(n,&w);
    printf("%d \n",n);
    printf("%d \n",w);
    printf("%p \n",zamien4());
    zmiana5(m);
    printf("%p",zamien5(m));
    return 0;
}

