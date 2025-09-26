/*
NAME:MAINA SAMUEL MURAGURI
REG NO:CT100/G/26191/25
DESCRIPTION:A BANK WILL OFFER A LOAN TA A PERSON OVER WITH 21 YEARS AND ABOVE

*/
#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for age
    printf("Welcome to ABC Bank Loan Eligibility Checker\n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Prompt user for income
    printf("Please enter your annual income in shillings: ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You are eligible for a loan.\n");
    } else {
        printf("Sorry, you are not eligible for a loan.\n");
        if (age < 21) {
            printf("Reason: You must be at least 21 years old.\n");
        }
        if (income < 21000) {
            printf("Reason: Your annual income must be at least sh21000.\n");
        }
    }

    return 0;
}
