#include<stdio.h>
int fun(int n1,int n2)
{
    if(n2==0)
        return n1;
   else
     {
     return fun(n2,n1%n2);
        }
}
int main()
{
    int n1,n2;
    printf("Enter first number small : ");
    scanf("%d %d",&n1,&n2);
    printf("%d",fun(n1,n2));
    return 0;
}
