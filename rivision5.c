/*#include<stdio.h>
int main()
{
  int unit,bill,totalbill;
  printf("\n Enter the unit ");
  scanf("%d",&unit);
  printf("\n Monthly charges will be \u20B9550 ");
  if ((unit>=0)&&(unit<=100))
  {
    bill=(unit*5);
    printf("\n bill will be \u20B9%d",bill);
  }
  else if ((unit>100)&&(unit<300))
  {
    bill=(unit-100)*8+(100*5);
    printf("\n bill will be \u20B9%d",bill);
  }
  else
  {
    bill=(unit-300)*11+(100*5)+(200*8);
    printf("\n bill will be \u20B9%d",bill);
  }
  totalbill=(bill+550);
  printf("\n Total bill will be \u20B9%d",totalbill);
}*/

/*#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,choice;
  printf("\n choice 1 is sum,choice 2 is sub, choice 3 is product, choice 4 is division ");
  printf("\n Enter your choice ");
  scanf("%d",&choice);
  if (choice==1)
  {
    printf("\n Enter two no.s ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n sum is %d",c);
  }
  else if (choice==2)
  {
    printf("\n Enter two no.s ");
    scanf("%d%d",&a,&b);
    d=a-b;
    printf("\n sub is %d",d);
  }
  else if (choice==3)
  {
    printf("\n Enter two no.s ");
    scanf("%d%d",&a,&b);
    e=a*b;
    printf("\n product is %d",e);
  }
  else if (choice==4)
  {
    printf("\n Enter two no.s ");
    scanf("%d%d",&a,&b);
    f=a/b;
    printf("\n division is %d",f);
  }
  else 
  {
    printf("\n Invalid choice ");
    printf("\n Enter 1,2,3,4 ");
  }
}*/
