#include <stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    float costPrice, sellingPrice;
    printf("Enter cost price (CP): ");
    scanf("%f", &costPrice);
    printf("Enter selling price (SP): ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        printf("Profit: %.2f\n", sellingPrice - costPrice);
    } else if (sellingPrice < costPrice) {
        printf("Loss: %.2f\n", costPrice - sellingPrice);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}
