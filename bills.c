#include<stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    float units, bill;
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);
    if (units <= 50) {
        bill = units * 0.50;  // Rs. 0.50 per unit for first 50 units
    } else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20); 
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);  
    }
    bill = bill + (0.20 * bill);
    printf("Total Electricity Bill: Rs. %.2f\n", bill);
    return 0;
}