#include <bank_management.h>
#include<string.h>

int main() {
    Account new_account;
    struct date new_date, dob;

    dob.day=2;
    dob.month=10,
    dob.year=1998;

    new_account.acc_no=12345;
    strcpy(new_account.acc_type, "Savings");
    strcpy(new_account.address, "Patna");
    new_account.age=12;
    new_account.amt=10000.12;
    strcpy(new_account.citizenship, "Indian");
    new_account.dob = dob;
    strcpy(new_account.name,"Yash");
    new_account.phone = 9801306775;
    
    create_account(new_account);

    printf("%d",deposit_money(12345,1000));
    
}