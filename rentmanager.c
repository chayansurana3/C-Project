#include <stdio.h>
#include <string.h>
float client1, client2, client3, client4, client5, totalpool, owner;
int choice, choice1;
char name[50];
char name1[50];
char mode1[50], mode2[50], mode3[50], mode4[50], mode5[50];
int main(int argc, char const *argv[])
{
    printf("************************************WELCOME TO RENT MANAGER***********************************\n");
start:
    printf("Enter your account name\n");
    scanf("%s", &name);
    getchar();
zone1:
    printf("DEPOSITOR ZONE\n");
    printf("Press 1 to deposit rent\nPress 2 to check the mode in which you paid the rent\nPress 3 to go back to main menu\nPress 4 to QUIT\nPress 5 to navigate to manager zone\n");
    scanf("%d", &choice1);
    getchar();
    switch (choice1)
    {
    case 1:
        if (strcmp(name, "client1") == 0)
        {
            client1 = client1 + 25000;
            totalpool = totalpool + 25000;
            printf("Enter the mode in which you paid your rent\n");
            scanf("%s", &mode1);
            getchar();
            goto zone1;
        }
        if (strcmp(name, "client2") == 0)
        {
            client2 = client2 + 25000;
            totalpool = totalpool + 25000;
            printf("Enter the mode in which you paid your rent\n");
            scanf("%s", &mode2);
            getchar();
            goto zone1;
        }
        if (strcmp(name, "client3") == 0)
        {
            client3 = client3 + 25000;
            totalpool = totalpool + 25000;
            printf("Enter the mode in which you paid your rent\n");
            scanf("%s", &mode3);
            getchar();
            goto zone1;
        }
        if (strcmp(name, "client4") == 0)
        {
            client4 = client4 + 25000;
            totalpool = totalpool + 25000;
            printf("Enter the mode in which you paid your rent\n");
            scanf("%s", &mode4);
            getchar();
            goto zone1;
        }
        if (strcmp(name, "client5") == 0)
        {
            client5 = client5 + 25000;
            totalpool = totalpool + 25000;
            printf("Enter the mode in which you paid your rent\n");
            scanf("%s", &mode5);
            getchar();
            goto zone1;
        }
        break;
    case 2:
        if (strcmp(name, "client1") == 0)
        {
            printf("%s\n", &mode1);
            goto zone1;
        }
        else if (strcmp(name, "client2") == 0)
        {
            printf("%s\n", &mode2);
            goto zone1;
        }
        else if (strcmp(name, "client3") == 0)
        {
            printf("%s\n", &mode3);
            goto zone1;
        }
        else if (strcmp(name, "client4") == 0)
        {
            printf("%s\n", &mode4);
            goto zone1;
        }
        else if (strcmp(name, "client5") == 0)
        {
            printf("%s\n", &mode5);
            goto zone1;
        }
        break;
    case 3:
        goto zone1;
        break;
    case 4:
        goto end;
        break;
    case 5:
        goto zone2;
        break;
    default:
        break;
    }
    printf("MANAGER ZONE\n");
zone2:
    printf("Press 1 to check total deposited rent\nPress 2 to check the total rent paid by a particular client\nPress 3 to check the mode of payment by the client\nPress 4 to go to main menu\nPress 5 to QUIT\n");
    scanf("%d", &choice);
    getchar();
    switch (choice)
    {
    case 1:
        printf("%0.2f", totalpool);
        goto zone2;
        break;
    case 2:
        printf("Enter the client's account name whose rent statement is required\n");
        scanf("%s", &name1);
        getchar();
        if (strcmp(name1, "client1") == 0)
        {
            printf("%0.2f\n", client1);
            goto zone2;
        }
        else if (strcmp(name1, "client2") == 0)
        {
            printf("%0.2f\n", client2);
            goto zone2;
        }
        else if (strcmp(name1, "client3") == 0)
        {
            printf("%0.2f\n", client3);
            goto zone2;
        }
        else if (strcmp(name1, "client4") == 0)
        {
            printf("%0.2f\n", client4);
            goto zone2;
        }
        else if (strcmp(name1, "client5") == 0)
        {
            printf("%0.2f\n", client5);
            goto zone2;
        }
        break;
    case 3:
        printf("Enter the client's account name whose rent payment mode is required\n");
        scanf("%s", &name1);
        getchar();
        if (strcmp(name1, "client1") == 0)
        {
            printf("%s\n", mode1);
            goto zone2;
        }
        else if (strcmp(name1, "client2") == 0)
        {
            printf("%s\n", mode2);
            goto zone2;
        }
        else if (strcmp(name1, "client3") == 0)
        {
            printf("%s\n", mode3);
            goto zone2;
        }
        else if (strcmp(name1, "client4") == 0)
        {
            printf("%s\n", mode4);
            goto zone2;
        }
        else if (strcmp(name1, "client5") == 0)
        {
            printf("%s\n", mode5);
            goto zone2;
        }
        break;
    case 4:
        goto zone2;
        break;
    case 5:
        goto end;
        break;
    default:
        break;
    }
end:
    return 0;
}