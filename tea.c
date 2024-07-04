#include<stdio.h>
int main()
{
   int m ,q ,amt ,change;
   float bill;
   char ch;
   printf("Welcome to tea stole\n\n");

   printf("Menu\n");

   order:
   printf("enter 1 for tea \n");
   printf("enter 2 for coffee\n");
   printf("enter 3 for cold coffee\n");
   scanf("%d",&m);

   if(m==1)
   {
    printf("How many cups of aromatic tea?\n");
    scanf("%d",&q);
    bill=q*10;
    
   }
   else if(m==2)
   {
      printf("How many cups of aromatic coffee?\n");
      scanf("%d",&q);
      bill=q*20;

   }
   else if(m==3)
   {
      printf("How many cups of aromatic clod coffee?\n");
      scanf("%d",&q);
      bill=q*50;
   }
   

   printf("Enter your payment amount: Rs.\n");
   scanf("%d",&amt);
   if(bill<amt)
   {
       change=amt-bill;
   }
   else if(bill>=amt)
   {
      change=amt-bill;
      //printf("No cahnge \n");
   }
    
   printf("If user doesn't want to continue\n than press Y or y and  N or n for No\n");
   scanf(" %c",&ch);
   if(ch=='Y'||ch=='y')
   {
      printf("welcome again\n");
      goto order;
   }
   else if(ch=='N'||ch=='n')
   {
      printf("Thank you for visiting\n");
   }
   else
   {
       printf("invalid input \n");
   }

   printf("total quntity=%d\n",q);
   printf("your total bill=%.2f\n\n",bill);
   printf("your change is=%d\n",change);
   printf("Press Y for and N for no\n %c",ch);
   
}
