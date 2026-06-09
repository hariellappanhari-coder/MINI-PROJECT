#include<stdio.h>

int balance=50000;

void withdraw(){
    int amt;
    printf("Enter the amount to withdraw:");
    scanf("%d",&amt);
    if(amt<=balance){
        balance-=amt;
        printf("The amount withdraw successfully done\n");
        printf("Now the Balance amount is:%d",balance);
    }
    else{
        printf("Insufficient balance\n");
    }
    
}
void balances(){
    printf("The balance amount:%d",balance);
}
void deposit(){
    int num;
    printf("Enter the amount add to your account:");
    scanf("%d",&num);
    balance+=num;
    printf("now the updated balance is:%d",balance);
}
int main(){
    int n;
    printf("1. Withdraw\n");
    printf("2. Balance\n");
    printf("3. Deposit\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    switch(n){
        case 1:
               withdraw();
               break;
        case 2:
               balances();
               break;
        case 3:
               deposit();
               break;
        default:
               printf("Invalid expression");
    }
}
