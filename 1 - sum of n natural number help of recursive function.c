#include<stdio.h>
void fun(int n)
{

   if(n==1)
    return ;
     printf("%d", n+fun(n-1));
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
