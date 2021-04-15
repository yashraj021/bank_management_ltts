# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |checking all the functions are working correcty|  Call the functions|All functions execute correctly|All functions are executed correctly|Requirement based |
|  H_02       |Checking whether called functions are executed|Call a specific function|Call function execute|Called function is executed|Scenario based    |
|  H_03       |Check for features other than specified|Choosing other values|No output displayed|No output is displayed|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Checking create_user function to create new account. |user details|SUCCESS|SUCCESS|Requirement based |
|  L_02       |Checking deposit method is able to update balance|amount to be deposited|updated balance|updated balance|Scenario based    |
|  L_03       |checking withdraw method display insufficient balance if balance is low| amount to withdraw|low balance|low balance|Boundary based    |
|  L_04       |search for record not present|No information displayed|user id|No information displayed|No information displayed|Boundary based|
|  L-05       |checking withdraw method is able to withdraw for sufficient balance|amount to be withdrawn|updated balance|updated balance|Scenario based    |
