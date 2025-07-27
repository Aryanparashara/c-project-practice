/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int ch,amount,balance=5000;
  printf("\n your balance is \u20B95000 ");
  printf("\n 1.Deposit ");
  printf("\n 2.withdraw ");
  printf("\n 3.Exit ");
  printf("\n Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    printf("\n enter amount to deposit ");
    scanf("%d",&amount);
    if (amount>=0)
    {
      balance=5000+amount;
      printf("\n balance is %d",balance);
    }
    else 
    {
      printf("\n Invalid amount to deposit ");
    }
    break;
    case 2:
    printf("\n enter amount to withdraw ");
    scanf("%d",&amount);
    if ((amount>=0)&&(amount<5000))
    {
      balance=5000-amount;
      printf("\n balance is %d",balance);
    }
    else if (amount>=5000)
    {
      printf("\n Insufficient balance ");
    }
    else 
    {
      printf("\n Invalid amount to withdrawn ");
    }
    break;
    case 3:
    exit(0);
    break;
    default:
    printf("\n Invalid choice ");
    printf("\n enter 1,2,3 ");
  }
}*/
