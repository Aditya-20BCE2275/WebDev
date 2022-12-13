#include<stdio.h>

struct bank{
	int amount;
    int curren;
};

void deposit(struct bank obj,int a){
	obj.amount =obj.amount + a;
	printf("amount deposited \n");
	printf("%d\n",obj.amount);
    printf("dp you need to withdraw press 1\n");
    int flag = 0;
    scanf("%d\n",&flag);
    if(flag == 1)
    {
        printf("enter the amount u wanna withdraw\n");
        int wi;
        scanf("%d\n",&wi);
        withdraw(obj,wi);
    }
    else{
        printf("thanks for using");
    }
}

void withdraw(struct bank obj,int b){
	if(obj.amount < b){
		printf("not enough balance \n");
	}
	else{
		obj.amount-=b;
		printf("blance amount after withdrawned \n");
		printf("%d\n",obj.amount);
	}
}


int main(){
	struct bank b;
    printf("%d",b.curren);
	printf("enter curret balance \n");
	scanf("%d",&b.amount);
	int de = 2000;
	int wi = 500;
	deposit(b,de);
}