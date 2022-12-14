#include <stdio.h>

void main() {
int c1,c2,n,c3;
printf("MENU: \n");
printf("1.scissor \n");
printf("2.stone \n");
printf("3.paper \n");
printf("enter number of people:");
scanf("%d",&n);
if(n==2)
{
printf("enter option 1,2,3 for 1st person and 2nd person:");
scanf("%d%d",&c1,&c2);
 if((c1==1 && c2==2) || (c1==2 && c2==1))
 printf("stone is winner");
 else if((c1==1 && c2==3) || (c1==3 && c2==1))
 printf("scissor is winner");
 else if((c1==3 && c2==2) || (c1==2 && c2==3))
 printf("paper is winner");
 else if((c1==1 && c2==1)||(c1==2 && c2==2)||(c1==3 && c2==3))
 printf("no one wins");
}
if(n==3)
{
printf("enter option for 1st,2nd,3rd person:");
scanf("%d%d%d",&c1,&c2,&c3);
 if((c1==1 && c2==2 && c3==3)||(c1==1 && c2==3 && c3==2)||(c1==2 && c2==1 && c3==3)||(c1==2 && c2==3 && c3==1)||(c1==3 && c2==1 && c3==2)||(c1==3 && c2==2 && c3==1))
 printf("no one wins");
 else if((c1==1 && c2==1 && c3==1)||(c1==2 && c2==2 && c3==2)||(c1==3 && c2==3 && c3==3))
 printf("no one wins");
 else if((c1==3 && c2==1 && c3==1)||(c1==1 && c2==3 && c3==1)||(c1==1 && c2==1 && c3==3))
 printf("scissor is winner");
 else if((c1==2 && c2==1 && c3==1)||(c1==1 && c2==2 && c3==1)||(c1==1 && c2==1 && c3==2))
 printf("stone is winner");
 else if((c1==1 && c2==3 && c3==3)||(c1==3 && c2==1 && c3==3)||(c1==3 && c2==3 && c3==1))
 printf("scissor is winner");
 else if((c1==1 && c2==2 && c2==2)||(c1==2 && c2==1 && c3==2)||(c1==2 && c2==2 && c3==1))
 printf("stone is winner");
 else if((c1==3 && c2==2 && c3==2)||(c1==2 && c2==3 && c3==2)||(c1==2 && c2==2 && c3==3))
 printf("paper is winner");
 else if((c1==2 && c2==3 && c3==3)||(c1==3 && c2==2 && c3==3)||(c1==3 && c2==3 && c3==2))
 printf("paper is winner");
 if(n==1 || n>3)
    printf("not possible");
}
}



