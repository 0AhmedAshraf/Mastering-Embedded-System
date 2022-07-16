#include <stdio.h>
int main() {
    float num;
    printf("Enter a number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}


