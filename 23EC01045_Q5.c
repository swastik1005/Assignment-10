#include <stdio.h>

struct Customer
{
    char name[50];
    char acc_no[50];
    double bal;
};

void print_name(struct Customer arr[])
{
    for(int i = 0; i < 15; i++)
    {
        if(arr[i].bal > 50000)
        {
            printf("\n%s", arr[i].name);
        }
    }
}

void add_bal(struct Customer arr[])
{
    for(int i = 0; i < 15; i++)
    {
        if(arr[i].bal > 10000)
        {
            arr[i].bal += 1000;
        }
    }
}

void withdraw(struct Customer arr[], char account[50], double amount)
{
    for(int i = 0; i < 15; i++)
    {
        if(strcmp(arr[i].acc_no, account) == 0)
        {
            if(amount <= arr[i].bal)
            {
                arr[i].bal -= amount;
            }
            else
            {
                printf("\nRequired balance not available");
            }
        }
    }
}


int main()
{
    struct Customer data[15];
    for(int i = 0; i < 15; i++)
    {
        struct Customer cus;
        printf("\nEnter account number: ");
        scanf("%s", cus.acc_no);
        printf("\nEnter name of customer: ");
        scanf("%s", cus.name);
        printf("Enter balance: ");
        scanf("%ld", &cus.bal);
        data[i] = cus;
    }

    print_name(data);
    add_bal(data);

    char withdraw_acc[50];

    printf("\nEnter account number to withdraw money: ");
    scanf("%s", withdraw_acc);
    double withdraw_amt;
    printf("Enter amount to withdraw: ");
    scanf("%ld", &withdraw_amt);
    withdraw(data, withdraw_acc, withdraw_amt);




    return 0;
}