#include "cipher.h"

message Caesar_Cipher(message input_data)
{
    char letter;
    int l = strlen(input_data.plain_text)+1;
    for(int i=0;i<l;i++)
    {
        letter = input_data.plain_text[i];
        if(isupper(letter))
        {
            letter = (letter + input_data.k - 65)%26 + 65;
            input_data.cipher_text[i] = letter;
        }
        else if(islower(letter))
        {
            letter = (letter + input_data.k - 97) % 26 + 97;
            input_data.cipher_text[i] = letter;
        }
        else
        {
            input_data.cipher_text[i] = letter;
        }
    }
    return input_data;
}

void remove_space(char *string)
{
	int i = 0, j = 0;
	while (string[i])
	{
		if (string[i] != ' ')
        string[j++] = string[i];
		i++;
	}
	string[j] = '\0';
}

void strupr ( char *string )
{
    while( *string )
    {
        *string=toupper( *string );
        string++;
    }
}

message Vigenere_Cipher(message input_data)
{
    remove_space(input_data.plain_text);
    remove_space(input_data.key);
    strupr(input_data.plain_text);
    strupr(input_data.key);
    int pt_length = strlen(input_data.plain_text)-1; //-1 to remove the \n character added by fgets
    int kw_length = strlen(input_data.key)-1,i,j;
    if(kw_length > pt_length)
    exit(2);
    char new_kw[pt_length];
    for(i=0,j=0 ; i < pt_length; i++,j++){
        if(kw_length==j)
        j = 0;
        new_kw[i] = input_data.key[j];
    } 
    new_kw[i]='\0';
    for(i=0;i<pt_length;i++)
    input_data.cipher_text[i] = ((input_data.plain_text[i] + new_kw[i]) % 26 + 65);
    input_data.cipher_text[i]='\0';
    return input_data;
}


message Playfair_Cipher(message input_data)
{
    remove_space(input_data.key);
    strupr(input_data.key);
    strcpy(input_data.cipher_text,"Sorry! Feature Under Construction");
    return input_data;
}
