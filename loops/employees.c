#include <stdio.h>

// PROTOTYPE
void instruct(void);

int main()
{
    // INPUT
    float hours;
    float rate;
    char name[20];

    // OUTPUT
    float pay;

    // CONTROL FLOW
    int numberOfEmployees = 0;
    int count = 0;

    // INIT
    instruct();

    printf("\nHow many employees do you have?> ");
    scanf("%d", &numberOfEmployees);

    while (count < numberOfEmployees)
    {
        printf("\n\t\033[1;36m   ---- Employee %d ----   \033[0m\n", count + 1);

        printf("\nName>");
        scanf("%s", &name);

        printf("Hours>");
        scanf("%f", &hours);

        printf("Rate>");
        scanf("%f", &rate);

        pay = rate * hours;
        printf("\nPay is $%6.2f\n\n", pay);

        count++;
    }

    printf("\033[1;34mAll employees processed");
}

void instruct()
{
    printf("\n\t\t\033[1;34m  Pay Calculator");
    printf("\nCalculate the pay of your employees\033[0m\n");
}