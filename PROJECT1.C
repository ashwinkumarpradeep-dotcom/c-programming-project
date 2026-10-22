#include<stdio.h>
int main()
{
float a,b;
char c;

printf("enter the first number");
scanf("%f",&a);
printf("enter a char");
scanf("%c",&c);
printf("enter the second number");
scanf("%f",&b);
switch(c)
{
case'+':
{
printf("add the number%f",a+b);
break;
}
case'-':
{
printf("sub the number%f",a-b);
break;
}
case'*':
{
printf("mul the number%f",a*b);
}
case'/':
{
printf("div the number%f",a/b);
}
}
return 0;
}


