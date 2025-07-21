/*#include<stdio.h>
int main()
{
  int dd,mm,yy;
  printf("\n Enter the date in DD/MM/YYYY format ");
  scanf("%d%d%d",&dd,&mm,&yy);
  if ((yy>=1900)&&(yy<=9999))
  {
    if((mm>=1)&&(mm<=12))
    {
      if ((dd>=1)&&(dd<=31)&&(mm==1)||(mm==3)||(mm==5)||(mm==7)||(mm==8)||(mm==10)||(mm==12))
      printf(" Date is valid. \n");
      else if ((dd>=1)&&(dd<=30)&&(mm==4)||(mm==6)||(mm==9)||(mm==11))
      printf("\n Date is valid. \n");
      else if ((dd>=1)&&(dd<=28)&&(mm==2))
      printf("Date is valid. \n ");
      else if ((dd==29)&&(mm==2)&&(yy%4==0))
      printf("\n Date is invalid. ");
    }
  }
  else 
  {
    printf("\n Month is not valid. ");
    printf("\n Year is not valid. ");
  }
}*/

/*#include<stdio.h>
int main()
{
  int a=5,b=5;
  // use postfix mode for a and prefix mode for b
  printf("\n %8d%10d",a--,--b);
  printf("\n %8d%10d",a--,--b);
  printf("\n %8d%10d",a--,--b);
  printf("\n %8d%10d",a--,--b);
  printf("\n %8d%10d",a--,--b);
}*/

// without type casting 
/*#include<stdio.h>
int main()
{
  int a;
  a=15/6;
  printf("%d",a);
}*/

// After type casting
/*#include<stdio.h>
int main()
{
  float a;
  a=(float)15/6;
  printf("%f",a);
}*/
