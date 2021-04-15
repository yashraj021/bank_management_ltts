#include<stdio.h>
#include<stdlib.h>

struct date{
    int month,day,year;

};

typedef struct Account {
    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
} Account;

struct AccountList {
    Account account;
    struct AccountList *next;
} *first = NULL, *last=NULL;

struct AccountList* get_account(int acc_num) {
    
    struct AccountList *node = NULL;

    node=first;

    while(node != NULL) {
        int accNo= node->account.acc_no;
        if(accNo == acc_num) return node;
        node = node->next;
    }

    return node;
}



int create_account(Account new_account) {

    if(get_account(new_account.acc_no) != NULL) return -1;

    struct AccountList *new_acc = NULL;
    new_acc = (struct AccountList *)malloc(sizeof(struct AccountList));
    new_acc->account.acc_no = new_account.acc_no;
    new_acc->account.age = new_account.age;
    new_acc->account.amt = new_account.amt;
    new_acc->account.dob = new_account.dob;
    new_acc->account.phone = new_account.phone;

    // Copying name
    int i=0;

    while(i != '\0') {
        new_acc->account.name[i] = new_account.name[i];
        i++;
    }

    i=0;

    while(i != '\0') {
        new_acc->account.address[i] = new_account.address[i];
        i++;
    }

    i=0;

    while(i != '\0') {
        new_acc->account.citizenship[i] = new_account.citizenship[i];
        i++;
    }

    i=0;

    while(i != '\0') {
        new_acc->account.acc_type[i] = new_account.acc_type[i];
        i++;
    }

    if(first == NULL) {
        first = last = new_acc;

        return 1;
    }

    last->next=new_acc;
    new_acc=last;    

    return 1;
}

int deposit_money(int account_number, int ammount) {

    struct AccountList *node=get_account(account_number);

    if(node!=NULL) {
        node->account.amt +=  ammount;

        return node->account.amt;
    }

    return -1;

}

int withdraw_money(int account_number, int ammount) {

    struct AccountList *node=get_account(account_number);

    if(node!=NULL) {
        node->account.amt -=  ammount;

        return node->account.amt;
    }

    return -1;

}

