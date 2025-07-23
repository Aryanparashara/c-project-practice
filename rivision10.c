/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int aoc,si,voc,c,s,r,p,t,h,n,ch;
  printf("\n enter 1 for area of circle ");
  printf("\n enter 2 for simple interest ");
  printf("\n enter 3 for volume of cone ");
  printf("\n enter 4 for cube of any no. ");
  printf("\n enter 5 for square of any no. ");
  printf("\n enter 6 for exit ");
  printf("\n Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    printf("\n enter the radius ");
    scanf("%d",&r);
    aoc = (3.1*r*r);
    printf("\n area of circle is %d",aoc);
    break;
    case 2:
    printf("\n enter the principle amount ");
    scanf("%d",&p);
    printf("\n enter the rate ");
    scanf("%d",&r);
    printf("\n enter the time ");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("\n simple interest is %d",si);
    break;
    case 3:
    printf("\n enter the radius ");
    scanf("%d",&r);
    printf("\n enter the height ");
    scanf("%d",&h);
    voc=(3.14*r*r*h)/3;
    printf("\n volune of cone is %d",voc);
    break;
    case 4:
    printf("\n enter the number ");
    scanf("%d",&n);
    c=(n*n*n);
    printf("\n cube is %d",c);
    break;
    case 5:
    printf("\n enter the number ");
    scanf("%d",&n);
    s=(n*n);
    printf("\n square is %d",s);
    break;
    case 6:
    exit(0);
    break;
    default:
    printf("\n Invalid choice ");
    printf("\n enter 1,2,3,4,5,6 ");
    break;
  }
}*/
