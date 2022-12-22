#include<stdio.h>
int pow(int n,int m)
{
    if(m==0)
        return 1;
    return(n*pow(n,m-1));
}
int main()
{
    int n,m;
    printf("Enter two number ");
    scanf("%d%d",&n,&m);
    printf("%d",pow(n,m));
    return 0;
}
