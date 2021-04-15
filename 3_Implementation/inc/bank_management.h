/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __BANK_MANAGEMENT_H__
#define __BANK_MANAGEMENT_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

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
};

int create_account(Account new_account);

int deposit_money(int account_number, int ammount);

int withdraw_money(int account_number, int ammount);

struct AccountList* get_account(int acc_num);

#endif  /* #define __BANK_MANAGEMENT_H__ */