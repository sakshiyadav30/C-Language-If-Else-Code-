#include <stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    int physics, chemistry, biology, mathematics, computer;
    float total, percentage;

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks for Biology: ");
    scanf("%d", &biology);
    printf("Enter marks for Mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100;

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else if (percentage >= 40) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}