#include<stdio.h>
int add(int x,int y)
{
    int u;
    u=x+y;
    return u;
}
int main()
{
    int r=89,e=45,p;
    p=add(r,e);
    printf("%d",p);
}