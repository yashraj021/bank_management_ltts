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
    struct date deposit;
    struct date withdraw;
} Account;

struct AccountList {
    Account account;
    struct AccountList *next;
};

void create_account(Account new_account);

void display(void);

#endif  /* #define __BANK_MANAGEMENT_H__ */