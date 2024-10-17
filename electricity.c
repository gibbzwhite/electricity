#include <stdio.h>
#include <stdlib.h>

// AUTHOR:GIBSON KIMANI KAMAU

// DATE: 16/10/2024
// Program to calculate electricity bill using functions

float calculateElectricityBill(float units);
void getCustomerDetails(int *customerID, char customerName[], float *unitsConsumed);
void displayBill(int customerID, char customerName[], float unitsConsumed, float totalBill);

int main() {
    int customerID;
    char customerName[25];
    float unitsConsumed, totalBill;

    
    getCustomerDetails(&customerID, customerName, &unitsConsumed);

  
    totalBill = calculateElectricityBill(unitsConsumed);

 
    displayBill(customerID, customerName, unitsConsumed, totalBill);

    return 0;
}
void getCustomerDetails(int *customerID, char customerName[], float *unitsConsumed) {
    printf("Enter your Customer ID: ");
    scanf("%d", customerID);
    printf("Enter your first name: ");
    scanf("%s", customerName);
    printf("Enter the number of units consumed: ");
    scanf("%f", unitsConsumed);
}

float calculateElectricityBill(float units) {
    float rate, bill;


    if (units <= 199) {
        rate = 1.20;
    } else if (units < 400) {
        rate = 1.50;
    } else if (units < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    bill = units * rate;

    if (bill > 400) {
        bill += bill * 0.15; 
    }

    return bill;
}

void displayBill(int customerID, char customerName[], float unitsConsumed, float totalBill) {
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f units\n", unitsConsumed);
    printf("Total Bill: Ksh %.2f\n", totalBill);
}
