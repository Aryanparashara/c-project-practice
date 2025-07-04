/*#include<stdio.h>
int main()
{
  int dd,mm,yy;
  printf("Enter date in DD/MM/YYYY format ");
  scanf("%d%d%d",&dd,&mm,&yy);
  if ((yy>=1900)&&(yy<=9999))
  {
   if ((mm>=1)&&(mm<=12))
    {
      if ((dd>=1)&&(dd<=31)&&(mm==1)||(mm==3)||(mm==5)||(mm==5)||(mm==7)||(mm==8)||(mm==10)||(mm==12))
      printf("\n Date is valid. ");
      else if ((dd>=1)&&(dd<=30)&&(mm==4)|| (mm==6)||(mm==9)||(mm==11))
      printf("\n Date is valid. ");
      else if ((dd>=1)&&(dd<=28)&&(mm==2))
      printf("\n Date is valid. ");
      else if ((dd==29)&&(mm==22)&&(yy %4==0))
      printf("\n Date is valid. ");
    }
  }
  else 
  {
    printf("\n month is not valid ");
    printf("\n year is not valid ");
  }
}*/
