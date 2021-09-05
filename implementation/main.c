/**
 * @file main.c
 * @author siddharth.jain@ltts.com
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "function.c"
#include "function.h"



void main(){
int ch;
while(1)
{

printf("\n*********************");
printf("\n BANKING ");
printf("\n*********************");
printf("\n1-Creation");
printf("\n2-Deposit");
printf("\n3-Withdraw");
printf("\n4-Balance Enquiry");
printf("\n5-Exit");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: creation();
break;
case 2: deposit();
break;
case 3: withdraw();
break;
case 4: bal();
break;
case 5: exit(0);
defalut: printf("Enter 1-5 only");

}
}
}
