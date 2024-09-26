#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char getrandomchar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$?/-_";
    int index = rand() % (sizeof(charset) - 1);


    return charset[index];
}

void generatepassword(int length) {
    printf("\033[2J\033[H"); 
    printf("\033[1;36m");     
    printf("Strong Password Generator by Oliver\n");
    printf("\033[0m");       
    printf("\n");


    while (1) {

        printf("\033[1;35m"); 


        printf("Generated Password: ");
        printf("\033[1;32m");  

        for (int i = 0; i < length; i++) {
            printf("%c", getrandomchar()); 


        }
        printf("\n");



        printf("\033[0m"); 
        printf("\n");

        printf("\033[1;33m"); 
        printf("Do you want to generate another password? (y/n): ");
        printf("\033[0m");


        char choice;
        
        fflush(stdin);
        scanf(" %c", &choice); 
         

        if (choice == 'n' || choice == 'N') {
            break;
        }

        printf("\n");
    }
}

int main() {



    srand(time(NULL));
    int passwordlength = 17;  
    generatepassword(passwordlength);

    return 0;
}
