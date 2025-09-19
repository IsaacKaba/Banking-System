#ifndef ACCOUNT_MANAGER_H
#define ACCOUNT_MANAGER_H

#define MAX_ACCOUNTS 100

typedef struct {
    int accountNumber;
    char ownerName[100];
    double balance;
} Account;

void create_account();
void view_account();
void deposit();
void withdraw();
void list_all_accounts();

#endif
