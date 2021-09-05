/**
 * @file function.c
 * @author siddharth.jain@ltts.com
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdio.h"
#include "function.h"

int a=0,i = 101;
struct bank
{
int no;
char name[20];
float bal;
float dep;
}s[20];



void creation()
{
printf("\n*************************************");
printf("\n ACCOUNT CREATION ");
printf("\n*************************************");
printf("\nYour Account Number is :%d",i);
s[a].no = i;
printf("\nEnter your Name:");
scanf("%s",s[a].name);
printf("\nYour Deposit is Minimum Rs.500");
s[a].dep=500;
a++;
i++;

}
void deposit()
{
int no,b=0,m=0;
float aa;
printf("\n*************************************");
printf("\n DEPOSIT ");
printf("\n*************************************");
printf("\nEnter your Account Number");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no == no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Name : %s",s[m].name);
printf("\n Deposit : %f",s[m].dep);
printf("\n How Much Deposited Now:");
scanf("%f",&aa);
s[m].dep+=aa;
printf("\nDeposit Amount is :%f",s[m].dep);

}
else
{
printf("\nACCOUNT NUMBER IS INVALID");

}
}
void withdraw()
{
int no,b=0,m=0;
float aa;
printf("\n*************************************");
printf("\n WITHDRAW ");
printf("\n*************************************");
printf("\nEnter your Account Number");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no == no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Name : %s",s[m].name);
printf("\n Deposit : %f",s[m].dep);
printf("\n How Much Withdraw Now:");
scanf("%f",&aa);
if(s[m].dep<aa+500)
{
printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE");

}
else
{
s[m].dep-=aa;
printf("\nThe Balance Amount is:%f",s[m].dep);
}
}
else
{
printf("INVALID");

}

}
void bal()
{ int no,b=0,m=0;
float aa;
printf("\n*************************************");
printf("\n BALANCE ENQUIRY ");
printf("\n*************************************");
printf("\nEnter your Account Number");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no==no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Name : %s",s[m].name);
printf("\n Deposit : %f",s[m].dep);

}
else
{
printf("INVALID");

}
}

 void exit();
