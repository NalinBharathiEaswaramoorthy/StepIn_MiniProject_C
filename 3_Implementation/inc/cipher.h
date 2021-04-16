/**
 * @file cipher.h
 * @author nalin (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __CIPHER_H__
#define __CIPHER_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct
{
char plain_text[100];
char cipher_text[100];
union{
    int k;
    char key[15];
};
}message;

/**
 * @brief 
 * 
 * @param input_data 
 * @return message
 */
message Caesar_Cipher(message input_data);

/**
 * @brief 
 * 
 * @param input_data 
 * @return message
 */

message Vigenere_Cipher(message input_data);

/**
 * @brief 
 * 
 * @param s 
 */
void strupr ( char *string );

/**
 * @brief 
 * 
 * @param s 
 */
void remove_space(char *string);

/**
 * @brief 
 * 
 * @param input_data 
 * @return message 
 */

message Playfair_Cipher(message input_data);

#endif 
/* #define __CIPHER_H__ */
