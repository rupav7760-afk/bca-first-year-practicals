#include<stdio.h>
#include<conio.h>
void main()
{
  int n,fact=1;
  clrscr();
    printf("\n Enter the number:");
    scanf("%d",&n);
while(n>=1)
{
fact=fact*n;
n--;
}
    printf("\n Factorial of number is %d",fact);
getch();

}
