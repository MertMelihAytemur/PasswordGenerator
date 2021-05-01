#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int size);

int main() {
    printf("Enter your password size :");
    int password_size;
    scanf("%d", &password_size);

    generatePassword(password_size);
    return 0;
}

void generatePassword(int password_size) {
    char characters[] = "ABCDEFGHIJK*_LMNOPQR23456STUVWXYZ01789_/abcdefghijklmno*&%$pqrstuvwxyz";
    char *password = malloc(password_size*sizeof(char));

    printf("PASSWORD SUCCESSFULLY GENERATED.\n");
    printf("Your Password : ");
    srand(time(NULL));
    for (int i = 0; i < password_size; i++) {
        password[i] = characters[rand() % 70];
        printf("%c",password[i]);
    }
    printf("\n");
}
