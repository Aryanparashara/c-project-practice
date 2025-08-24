// do while  programs 2.c

/*#include<stdio.h>
int main()
{
  int i=1;
  do
  {
    printf("\n %d ",i);
    if(i==5)
    break;
    i++;
  }
  while(i<=10);
  printf("\n came outside of loop i=%d",i);
}*/

/*#include<stdio.h>
int main()
{
  int i=1;
  do
  {
     printf("\n %d",i);
     i++;
    if(i==5)
    continue;
  }
  while(i<=10);
}*/

/*#include<stdio.h>
int main()
{
  int i=1,n,ans;
  printf("\n Enter the number: ");
  scanf("%d",&n);
  do
  {
    ans=n*i;
    printf("\n %d",ans);
    i++;  
  }
  while(i<=10);
}*/

/*#include<stdio.h>
int main()
{
  int i=1,n,ans;
  printf("\n Enter the number: ");
  scanf("%d",&n);
  do 
  {
    ans=n*i;
    printf("\n %d*%d=%d",n,i,ans);
    i++;
  }
  while(i<=10);
}*/
