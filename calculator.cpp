#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,ch;

printf("\n1.add\n2.subtract\n3.multiply\n4.division\n5.remainder\n");
printf("\nenter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter values of a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("\nthe answer is %d",c);
break;
case 2:
printf("\nenter values of a and b\n");
scanf("%d%d",&a,&b);
c=a-b; 
printf("\nthe answer is %d",c);
break;
case 3:
printf("\nenter values of a and b\n");
scanf("%d%d",&a,&b);
c=a*b; 
printf("\nthe answer is %d",c);
break;
case 4:
printf("\nenter values of a and b\n");
scanf("%d%d",&a,&b);
c=a/b; 
printf("\nthe answer is %d",c);
break;
case 5:
printf("\nenter values of a and b\n");
scanf("%d%d",&a,&b);
c=a%b; 
printf("\nthe answer is %d",c);
break;
default:
printf("\nenter the correct choice");
break;
}
getch();
}
