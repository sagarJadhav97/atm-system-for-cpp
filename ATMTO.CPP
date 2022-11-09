#include<stdio.h>
#include<conio.h>


long balance=10000,withdraw,deposite,tem,ch_balance;
char cus_name[20];
int pin;

void depositel(){
clrscr();
printf("Enter Amount :- ");
scanf("%lu",&deposite);
balance+=deposite;
printf("Your Current Balance is=%lu",balance);
}
void withdrawl(){
int cash,hlod;
clrscr();
printf("********* Welcome TO Bank Withdraw section*************");
printf("\n\t Enter Amount :- ");
scanf("%d",&cash);
withdraw-=cash;
printf("\n Avalibale Balance is=%lu",withdraw);
}
void cus_namel(){
clrscr();
printf("**********************Welcome TO Bank Service*****************");
printf("\nAccount Holder Name Is = %s",cus_name);
printf("\nCurrent Balance is =%lu",balance);
printf("\nDeposite Amount is =%lu",deposite);
printf("\nWithdraw Amount is =%lu",withdraw);
}
void ch_balancel(){
printf("**********************Welcome To Bank Service*****************");
printf("\nAvalibale Balance Is = %lu",balance);

}
void main(){
clrscr();
int choice;
printf("\n\t|........................................................|");
printf("\n\t|.                                                      .|");
printf("\n\t|.                                                      .|");
printf("\n\t|.            Welcome to Bank Service ATM               .|");
printf("\n\t|.                                                      .|");
printf("\n\t|.                                                      .|");
printf("\n\t|........................................................|");

// this section is a user enter for details
printf("\nEnter your name :- ");
gets(cus_name);
while(pin != 1111){
printf("\nEnter your pin number");
scanf("%lu",&pin);
if(pin != 1111){
printf("\nEnter right pin number this not secret pin\n");
}}
printf("\t                 * Welcome to ATM SERVIC *                  ");
printf("\n\n");
printf("\n|********************************************************|\n");
printf("1.Check Balance\n");
printf("2.deposite Amount\n");
printf("3.withdraw\n");
printf("4.user deatails\n");
printf("\n|********************************************************|\n");
printf("Enter Choice for you processing :- ");
scanf("%d",choice);
switch(choice){
	case 1 :
		 ch_balancel();
		 break;
	case 2 :
		 depositel();
		break;
	case 3 :
		 withdrawl();
		break;
	case 4 :
		 cus_namel();
		break;
	default:
	       printf("Invalide choice");





}



getch();
}
