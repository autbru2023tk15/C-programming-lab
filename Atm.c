#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00, amount;

    while(1) {
        printf("\n=== ATM MENU ===\n");
        printf("1. View Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your Balance: ₹%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit Successful!\n");  
                break;
            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);
                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;
            case 4:
                printf("Thank you! Visit Again.\n");
                return 0; // ends the program
            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
