#include "cipher.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Cipher technique requested by user*/
unsigned int cipher_operation = 0;

/* Cipher technique arguments */
message input_data;

/* Valid operations */
enum operations{ CAESAR_C=1, VIGENERE_C, PLAYFAIR_C, EXIT };

/* Display the menu of techniques supported */
void cipher_menu(void);
/* Verifies the requested technique validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Cipher Generator****\n");
    while(1)
    {
        cipher_menu();
    }
}

void cipher_menu(void)
{
    printf("\nAvailable Ciphering Techniques\n");
    printf("\n1. Caesar Cipher\n2. Vigenere Cipher\n3. Playfair Cipher\n4. Exit\n");
    printf("Enter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &cipher_operation);

    if(EXIT == cipher_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(cipher_operation))
    {
        printf("\nEnter your message\n");
        __fpurge(stdin);
        fgets(input_data.plain_text,100,stdin);
        if(cipher_operation==1)
        {
            printf("Enter the key number\n");
            scanf("%d",&input_data.k);
        }
        else
        {
            printf("Enter the keyword\n");
            fgets(input_data.key,15,stdin);
        }
    }
    else
    {
        printf("\n\t---Incorrect choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(cipher_operation)
    {
        case CAESAR_C:
            input_data = Caesar_Cipher(input_data);
            printf("Plain text\n");
            fputs(input_data.plain_text,stdout);
            printf("Cipher Text\n");
            fputs(input_data.cipher_text,stdout);
            __fpurge(stdin);
            getchar();
            break;
            
        case VIGENERE_C:
            input_data = Vigenere_Cipher(input_data);
            printf("Plain text\n");
            fputs(input_data.plain_text,stdout);
            printf("Cipher Text\n");
            fputs(input_data.cipher_text,stdout);
            __fpurge(stdin);
            getchar();
            break;
        /*
        case PLAYFAIR_C:

            __fpurge(stdin);
            getchar();
            break;
        */
        case 4:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((CAESAR_C <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}