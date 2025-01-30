#include <stdio.h>

void displayMenu();
double calculateTotal(int choices[], int amounts[], int itemCount);
void saveOrderToFile(int choices[], int amounts[], int itemCount, double total);

int main(void) {
    int choices[10], amounts[10], itemCount = 0;
    double total;
    char repeat;

    do {
        displayMenu();
        
        do {
            printf("\nEnter item number: ");
            scanf("%d", &choices[itemCount]);
            if (choices[itemCount] < 1 || choices[itemCount] > 4) {
                printf("Error. Please pick a number from 1-4.\n");
            }
        } while (choices[itemCount] < 1 || choices[itemCount] > 4);
        
        printf("How many would you like?: ");
        scanf("%d", &amounts[itemCount]);
        itemCount++;
        
        printf("\nWould you like to add another item? (y/n): ");
        scanf(" %c", &repeat);
    } while ((repeat == 'y' || repeat == 'Y') && itemCount < 10);
    
    total = calculateTotal(choices, amounts, itemCount);
    printf("Your total is: $%.2f\n", total);
    
    saveOrderToFile(choices, amounts, itemCount, total);
    
    printf("Thank you for your order!\n");
    return 0;
}

void displayMenu() {
    printf("\n--- Menu ---\n");
    printf("[1] Double Cheese Burger - $5.00\n");
    printf("[2] Spicy Chicken Sandwich - $3.99\n");
    printf("[3] Shrimp Tacos - $4.50\n");
    printf("[4] Chocolate Ice Cream Cone - $1.99\n");
}

double calculateTotal(int choices[], int amounts[], int itemCount) {
    double price, total = 0;
    
    for (int i = 0; i < itemCount; i++) {
        switch (choices[i]) {
            case 1: price = 5.00; break;
            case 2: price = 3.99; break;
            case 3: price = 4.50; break;
            case 4: price = 1.99; break;
            default: price = 0.00; break;
        }
        total += price * amounts[i];
    }
    return total * 1.07; // Including tax (7%)
}

void saveOrderToFile(int choices[], int amounts[], int itemCount, double total) {
    FILE *file = fopen("order_receipt.txt", "w");
    if (!file) {
        printf("Error creating receipt file!\n");
        return;
    }
    
    fprintf(file, "Order Receipt:\n");
    for (int i = 0; i < itemCount; i++) {
        fprintf(file, "Item Ordered: %d | Quantity: %d\n", choices[i], amounts[i]);
    }
    fprintf(file, "Total Cost: $%.2f\n", total);
    
    fclose(file);
    printf("Receipt saved to 'order_receipt.txt'.\n");
}
