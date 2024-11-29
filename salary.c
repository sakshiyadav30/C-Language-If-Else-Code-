#include <stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    float basicSalary, grossSalary, hra, da;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary; // HRA = 20%
        da = 0.80 * basicSalary;  // DA = 80%
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary; // HRA = 25%
        da = 0.90 * basicSalary;  // DA = 90%
    } else {
        hra = 0.30 * basicSalary; // HRA = 30%
        da = 0.95 * basicSalary;  // DA = 95%
    }
    grossSalary = basicSalary + hra + da;
    printf("Gross Salary: %.2f\n", grossSalary);
    return 0;
}