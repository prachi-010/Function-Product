#include<stdio.h>
#include<conio.h>

int prod(int x,int y);

void main()
{
int a,b,c;
clrscr();

printf("Enter first number \n");
scanf("%d",&a);
printf("enter second number \n");
scanf("%d",&b);

c=prod(a,b);
printf("The product of 2 numbers is : %u",c);
getch();
}

int prod(int x,int y)
{
int i;
i=x*y;
return i;
}
