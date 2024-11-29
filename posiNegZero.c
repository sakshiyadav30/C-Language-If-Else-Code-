#include<stdio.h>
int main(){
    printf("Sakshi Yadav\n");
    int number;

    printf("enter number :");
    scanf("%d", &number);

    if (number > 0){
        printf("number is positive");
    }else if (number < 0){
        printf("number is negative");
    }else {
        printf("number is zero");
    }
    
    return 0;
}