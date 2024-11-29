#include <stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    float side1, side2, side3;
    printf("Enter three sides of the triangle: \n");
    scanf("%f %f %f", &side1, &side2, &side3);
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is equilateral.\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is isosceles.\n");
        }
        else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}
