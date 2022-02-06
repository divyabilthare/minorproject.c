#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
float a,b,c;
char ch;
printf("enter the first number :");
scanf("%f",&a);
printf("enter the operation:");
scanf(" %c",&ch);
printf("enter the second number:");
scanf("%f",&b);
switch(ch)
{
case  '+':c=a+b;
printf("%f",c);
break;
case  '-':c=a-b;
printf("%f",c);
break;
case '*':c=a*b;
printf("%f",c);
break;
case '/':c=a/b;
default :
printf("the operator is not valid:");
}
return 0;
}

