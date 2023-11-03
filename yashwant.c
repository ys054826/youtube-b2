#include<stdio.h>
int main()
{
int clrscr();
int a, b;
int sum,sub,mul;
float div;

printf("enter the number");
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;

printf("sum=%d\n",sum);
printf("sub=%d\n",sub);
printf("mul=%d\n",mul);
printf("div=%d\n",div);




    return 0;
}
