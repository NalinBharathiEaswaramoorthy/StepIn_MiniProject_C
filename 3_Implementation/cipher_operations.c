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
/*
message Vigenere_Cipher(message input_data)
{
    
}

message Playfair_Cipher(message input_data)
{

}
*/
