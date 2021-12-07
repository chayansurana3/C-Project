#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct bankmanagement
{
    
};

int main(int argc, char const *argv[])
{
    int a, b, age, acc;
    float funds;
    char name[60];
    printf("*******************************************BANK MANAGEMENT SYSTEM************************************************\n");
start:
    printf("Press 1 if you have a bank account\nPress 2 if you want to make a new account\nPress 3 to go back to the starting menu\nPress 4 to QUIT\n");
    scanf("%d", &a);
    getchar();
    switch (a)
    {
    case 1:
        goto zone1;
        break;
    case 2:
        printf("ENTER YOUR FULL NAME\n");
        scanf("%s", &name);
        getchar();
        printf("ENTER YOUR AGE\n");
        scanf("%d", &age);
        getchar();
        printf("SUCCESS!!!!YOUR NEW ACCOUNT HAS BEEN GENERATED\n");
        srand(time(NULL));
        acc = rand() % 10000000000;
        printf("Your account no. is %d", acc);
        break;
    case 3:
        goto start;
        break;
    case 4:
        goto end;
        break;
    default:
        break;
    }
zone1:
    printf("ENTER YOUR ACC NO. TO PROCEED FURTHER\n");
    scanf("%d", &acc);
    getchar();
    if (/* condition */)
    {
        /* code */
    }
    
    printf("NOW:\nPress 1 to deposit money\nPress to withdraw money\nPress 3 to check your overall balance\nPress 4 to check your details using your acc no.\nPress 5 to go back to the starting of this menu\nPress 6 to QUIT");
    scanf("%d", &b);
    getchar();
    switch (b)
    {
    case 1:
        
        break;
    
    default:
        break;
    }
end:
    return 0;
}