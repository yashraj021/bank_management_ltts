#include "unity.h"
#include<string.h>
#include <bank_management.h>

/* Modify these two lines according to the project */
#include <bank_management.h>
#define PROJECT_NAME "Bank_Management"

/* Prototypes for all the test functions */
void test_create(void);
void test_duplicate(void);
void test_deposit(void);
void test_withdraw(void);

Account new_account();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{

/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_create);
  RUN_TEST(test_deposit);
  RUN_TEST(test_withdraw);
  RUN_TEST(test_duplicate);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_create(void) {
  
  Account new_acc = new_account();
    
  TEST_ASSERT_EQUAL(1, create_account(new_acc));

  
}

void test_duplicate(void) {
   Account new_acc = new_account();
    
  TEST_ASSERT_EQUAL(-1, create_account(new_acc));
}

void test_deposit(void) {
  
  Account new_acc = new_account();
    
  TEST_ASSERT_EQUAL(20000, deposit_money(new_acc.acc_no,10000));
  
}

void test_withdraw(void) {
  
  Account new_acc = new_account();
    
  TEST_ASSERT_EQUAL(10001, withdraw_money(new_acc.acc_no,9999));
  
}

Account new_account() {
  Account new_account;
    struct date new_date, dob;

    dob.day=2;
    dob.month=10,
    dob.year=1998;

    new_account.acc_no=12345;
    strcpy(new_account.acc_type, "Savings");
    strcpy(new_account.address, "Patna");
    new_account.age=12;
    new_account.amt=10000;
    strcpy(new_account.citizenship, "Indian");
    new_account.dob = dob;
    strcpy(new_account.name,"Yash");
    new_account.phone = 9801306775;

    return new_account;
}