#include <stdio.h>

int main() {
    int input;

    printf("Enter 1 to turn LED ON, 0 to turn OFF: ");
    scanf("%d", &input);

    if(input == 1)
        printf("LED ON\n");
    else
        printf("LED OFF\n");

    return 0;
}