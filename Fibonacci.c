#include<stdio.h>

int Fib(int);
int main()
{ int num,op;
    printf("Enter the number\n");
    scanf("%d",&num);
   op=Fib(num);
   printf("%d\n",op);
   return 0;
}
int Fib(int num)
{
    int i;
    if(num==0)
        return 0;
    if(num==1)
        return 1;
    if(num==2)
        return 2;
    else
        return (Fib(num-1)+Fib(num-2));
}
