/*#include<stdio.h>
int main()
{
  int year;
  printf("\n enter the year ");
  scanf("%d",&year);
  if(year%4==0)
  printf("\n leap year ");
  else 
  printf("\n not a leap year ");
}*/
/*#include<stdio.h>
int leapyear(int x)
{
  if(x%4==0)
  printf("\n leap year ");
  else 
  printf("\n not a leap year ");
}
int main()
{
  int x;
  printf("\n enter the year ");
  scanf("%d",&x);
  leapyear(x);
  return 0;
}*/
/*#include<stdio.h>
int leapyear();
void main()
{
  leapyear();
}
int leapyear()
{
  int year;
  printf("\n enter the year ");
  scanf("%d",&year);
  if(year%4==0)
  printf("\n leap year ");
  else 
  printf("\n not a leap year ");
  return 0;
}*/
/*#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\n enter 3 numbers ");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
  printf("\n a is greater ");
  else if((b>a)&&(b>c))
  printf("\n b is greater ");
  else 
  printf("\n c is greater ");
}*/
/*#include<stdio.h>
int greater(int x,int y,int z)
{
  if((x>y)&&(x>z))
  printf("\n x is greater ");
  else if((y>x)&&(y>z))
  printf("\n y is greater ");
  else 
  printf("\n z is greater ");
}
int main()
{
  int a,b,c;
  printf("\n enter three numbers ");
  scanf("%d%d%d",&a,&b,&c);
  greater(a,b,c);
  return 0;
}*/
/*#include<stdio.h>
greater();
int main()
{
  greater();
}
greater()
{
  int a,b,c;
  printf("\n enter three numbers ");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
  printf("\n %d is greater ",a);
  else if((b>a)&&(b>c))
  printf("\n %d is greater ",b);
  else 
  printf("\n %d is greater ",c);
}*/
