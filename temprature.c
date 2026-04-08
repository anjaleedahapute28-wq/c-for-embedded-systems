#include <stdio.h>

int main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if(temp > 30)
        printf("Fan ON\n");
    else
        printf("Fan OFF\n");

    return 0;
}