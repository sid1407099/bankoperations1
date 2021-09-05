        -:    0:Source:function.c
        -:    0:Graph:function.gcno
        -:    0:Data:function.gcda
        -:    0:Runs:1
        -:    1:#include "stdio.h"
        -:    2:#include "function.h"
        -:    3:
        -:    4:int a=0,i = 101;
        -:    5:struct bank
        -:    6:{
        -:    7:int no;
        -:    8:char name[20];
        -:    9:float bal;
        -:   10:float dep;
        -:   11:}s[20];
        -:   12:
        -:   13:
        -:   14:
        1:   15:void creation()
        -:   16:{
        1:   17:printf("\n*************************************");
        1:   17-block  0
        1:   18:printf("\n ACCOUNT CREATION ");
        1:   19:printf("\n*************************************");
        1:   20:printf("\nYour Account Number is :%d",i);
        1:   21:s[a].no = i;
        1:   22:printf("\nEnter your Name:");
        1:   23:scanf("%s",s[a].name);
        1:   24:printf("\nYour Deposit is Minimum Rs.500");
        1:   25:s[a].dep=500;
        1:   26:a++;
        1:   27:i++;
        -:   28:
        1:   29:}
        3:   30:void deposit()
        -:   31:{
        3:   32:int no,b=0,m=0;
        -:   33:float aa;
        3:   34:printf("\n*************************************");
        3:   34-block  0
        3:   35:printf("\n DEPOSIT ");
        3:   36:printf("\n*************************************");
        3:   37:printf("\nEnter your Account Number");
        3:   38:scanf("%d",&no);
      307:   39:for(b=0;b<i;b++)
      304:   39-block  0
      307:   39-block  1
        -:   40:{
      304:   41:if(s[b].no == no)
      304:   41-block  0
        1:   42:m = b;
        1:   42-block  0
        -:   43:}
        3:   44:if(s[m].no == no)
        3:   44-block  0
        -:   45:{
        1:   46:printf("\n Account Number : %d",s[m].no);
        1:   46-block  0
        1:   47:printf("\n Name : %s",s[m].name);
        1:   48:printf("\n Deposit : %f",s[m].dep);
        1:   49:printf("\n How Much Deposited Now:");
        1:   50:scanf("%f",&aa);
        1:   51:s[m].dep+=aa;
        1:   52:printf("\nDeposit Amount is :%f",s[m].dep);
        -:   53:
        -:   54:}
        -:   55:else
        -:   56:{
        2:   57:printf("\nACCOUNT NUMBER IS INVALID");
        2:   57-block  0
        -:   58:
        -:   59:}
        3:   60:}
        3:   61:void withdraw()
        -:   62:{
        3:   63:int no,b=0,m=0;
        -:   64:float aa;
        3:   65:printf("\n*************************************");
        3:   65-block  0
        3:   66:printf("\n WITHDRAW ");
        3:   67:printf("\n*************************************");
        3:   68:printf("\nEnter your Account Number");
        3:   69:scanf("%d",&no);
      308:   70:for(b=0;b<i;b++)
      305:   70-block  0
      308:   70-block  1
        -:   71:{
      305:   72:if(s[b].no == no)
      305:   72-block  0
        2:   73:m = b;
        2:   73-block  0
        -:   74:}
        3:   75:if(s[m].no == no)
        3:   75-block  0
        -:   76:{
        2:   77:printf("\n Account Number : %d",s[m].no);
        2:   77-block  0
        2:   78:printf("\n Name : %s",s[m].name);
        2:   79:printf("\n Deposit : %f",s[m].dep);
        2:   80:printf("\n How Much Withdraw Now:");
        2:   81:scanf("%f",&aa);
        2:   82:if(s[m].dep<aa+500)
        -:   83:{
        1:   84:printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE");
        1:   84-block  0
        -:   85:
        -:   86:}
        -:   87:else
        -:   88:{
        1:   89:s[m].dep-=aa;
        1:   90:printf("\nThe Balance Amount is:%f",s[m].dep);
        1:   90-block  0
        -:   91:}
        -:   92:}
        -:   93:else
        -:   94:{
        1:   95:printf("INVALID");
        1:   95-block  0
        -:   96:
        -:   97:}
        -:   98:
        3:   99:}
        2:  100:void bal()
        2:  101:{ int no,b=0,m=0;
        -:  102:float aa;
        2:  103:printf("\n*************************************");
        2:  103-block  0
        2:  104:printf("\n BALANCE ENQUIRY ");
        2:  105:printf("\n*************************************");
        2:  106:printf("\nEnter your Account Number");
        2:  107:scanf("%d",&no);
      205:  108:for(b=0;b<i;b++)
      203:  108-block  0
      205:  108-block  1
        -:  109:{
      203:  110:if(s[b].no == no)
      203:  110-block  0
        1:  111:m = b;
        1:  111-block  0
        -:  112:}
        2:  113:if(s[m].no==no)
        2:  113-block  0
        -:  114:{
        1:  115:printf("\n Account Number : %d",s[m].no);
        1:  115-block  0
        1:  116:printf("\n Name : %s",s[m].name);
        1:  117:printf("\n Deposit : %f",s[m].dep);
        -:  118:
        -:  119:}
        -:  120:else
        -:  121:{
        1:  122:printf("INVALID");
        1:  122-block  0
        -:  123:
        -:  124:}
        2:  125:}
        -:  126:
        -:  127: void exit();
