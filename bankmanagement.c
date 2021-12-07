#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

long long random(long long lower, long long upper)
{
    srand(time(NULL));
    long long num = (rand() % (upper - lower + 1)) + lower;
    return num;
}

struct bank
{
    char name[60];
    int acc;
    int age;
    float funds;
} s1, s2, s3;

int main(int argc, char const *argv[])
{
    int a, b, ages, accs;
    float fund;
    char name1[60];
    printf("***************************************************************** BANK MANAGEMENT SYSTEM *************************************************************************\n");
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
        fgets(name1, 60, stdin);
        printf("ENTER YOUR AGE\n");
        scanf("%d", &ages);
        getchar();
        if (ages < 18)
        {
            printf("You are underage......Wait until you attain the age of 18......QUITTING\n");
            goto end;
        }
        else
        {
            printf("SUCCESS!!!!YOUR NEW ACCOUNT HAS BEEN GENERATED\n");
            accs = random(1000000000, 10000000000);
            printf("Your account no. is %d\n", accs);
            strcpy(s1.name, name1);
            s1.age = ages;
            s1.acc = accs;
            s1.funds = 25000;
            goto zone2;
        }
        break;
    case 3:
        goto start;
        break;
    case 4:
        goto end;
        break;
    default:
        printf("You chose an invalid option\n");
        goto start;
        break;
    }
zone1:
    printf("ENTER YOUR ACC NO. TO PROCEED FURTHER\n");
    scanf("%d", &accs);
    getchar();
    if (s1.acc != accs)
    {
        printf("NO RECORDS FOUND...Please make an account first\n");
        goto start;
    }
    else
    {
    zone2:
        printf("NOW:\nPress 1 to deposit money\nPress 2 to withdraw money\nPress 3 to check your overall balance\nPress 4 to check your details using your acc no.\nPress 5 to go back to the starting of this menu\nPress 6 to QUIT\n");
        scanf("%d", &b);
        getchar();
        switch (b)
        {
        case 1:
            printf("How much funds do you want to deposit in your account\n");
            scanf("%f", &fund);
            getchar();
            s1.funds = s1.funds + fund;
            printf("SUCCESS!!! Your funds have been successfully deposited to your account\n");
            printf("Current Balance is %0.2f\n", s1.funds);
            goto zone2;
            break;
        case 2:
            printf("How much funds do you want to withdraw from your account\n");
            scanf("%f", &fund);
            getchar();
            s1.funds = 25000;
            if (fund > s1.funds)
            {
                printf("YOU HAVE INSUFFICIENT FUNDS\n");
            }
            else
            {
                s1.funds = s1.funds - fund;
                printf("SUCCESS!!! Your funds have been successfully withdrawn from your account\n");
                printf("Current Balance is %0.2f\n", s1.funds);
            }
            goto zone2;
            break;
        case 3:
            printf("Your overall balance is %0.2f\n", s1.funds);
            goto zone2;
            break;
        case 4:
            printf("Your details are as follows:\n");
            printf("Your name is : %s\n", s1.name);
            printf("Your acc no. is : %d\n", s1.acc);
            printf("Your age is : %d\n", s1.age);
            printf("Your overall balance  is : %0.2f\n", s1.funds);
            goto zone2;
            break;
        case 5:
            goto zone2;
            break;
        case 6:
            goto end;
            break;
        default:
            printf("You chose an invalid option\n");
            goto zone2;
            break;
        }
    }
end:
    return 0;
}