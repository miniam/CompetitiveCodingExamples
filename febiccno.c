#include<stdio.h>
int fab(int);
int main()
{ int num,op;
    printf("Enter the number\n");
    scanf("%d",&num);
   op=fab(num);
   printf("%d\n",op);
   return 0;
}
int fab(int num)
{
    int i;
    if(num==0)
        return 0;
    if(num==1)
        return 1;
    if(num==2)
        return 2;
    else
        return (fab(num-1)+fab(num-2));
}
