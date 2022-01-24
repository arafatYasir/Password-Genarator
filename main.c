#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    system("clear");
    srand(time(NULL));
    int desired_number, i;
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$";
    char password[desired_number-1];
    printf("How much character do you want in you password?\n");
    printf("Enter: ");
    scanf("%d", &desired_number);

    for(i = 0; i < desired_number; i++) {
        password[i] = characters[rand() % strlen(characters)];
    }

    printf("Password: %s\n", password);
    return 0;
}