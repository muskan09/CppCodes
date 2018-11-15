#include<stdio.h>
int main(){
int hrs,min,sec,n,x,y,z;
printf("enter time in sec \n");
scanf("%d",&sec);
min=sec/60;
printf("%d min= \n",min);
sec=sec%60;
printf("%d sec= \n",sec);
hrs=min/60;
printf("%d hrs= \n",hrs);
min=min-(hrs*60);
printf("%d min= \n",min);
return 0;
}

