#include <stdio.h>
#include <stdlib.h>
#include "account_manager.h"
#include <string.h>


static Account accounts[MAX_ACCOUNTS];
int num_accounts = 0;

void create_account()
{
    if(num_accounts >= MAX_ACCOUNTS)
    {
        fprintf(stderr, "Number of accounts is too high\n");
        exit(1);
    }

    printf("What's your name ? : \n");
    const char Name[100];
    scanf("%s",Name);

    strcpy(accounts[num_accounts].ownerName, Name); // Copy string into struct field
    accounts[num_accounts].balance = 0.0;
    accounts[num_accounts].accountNumber = num_accounts + 1;

    printf("You successfuly created %s account", accounts[num_accounts].ownerName);

    num_accounts++;
    
}

int main()
{
    create_account();
    return 0;
}