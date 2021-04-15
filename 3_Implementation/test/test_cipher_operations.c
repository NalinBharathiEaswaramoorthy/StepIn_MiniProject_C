#include "unity.h"
#include "unity_internals.h"
#include "cipher.h"

#define PROJECT_NAME    "Cipher"

/* Prototypes for all the test functions */
void test_caesar_cipher(void);
void test_vigenere_cipher(void);
void test_playfair_cipher(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

message test;

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
/* Run Test functions */
  RUN_TEST(test_caesar_cipher);
  RUN_TEST(test_vigenere_cipher);
  RUN_TEST(test_playfair_cipher);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_caesar_cipher(void) {
  strcpy(test.plain_text,"ABCD");
  test.k = 2;
  test = Caesar_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("CDEF",test.cipher_text);
  test.k = 45;
  test = Caesar_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("TUVW",test.cipher_text);
  strcpy(test.plain_text,"MnOp");
  test = Caesar_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("FgHi",test.cipher_text);
  strcpy(test.plain_text,"New Code");
  test = Caesar_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("Gxp Vhwx",test.cipher_text);
}

void test_vigenere_cipher(void){
  strcpy(test.plain_text,"the crazy programmer\n");
  strcpy(test.key,"hello\n");
  test = Vigenere_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("ALPNFHDJAFVKCLATIC",test.cipher_text);
  strcpy(test.plain_text,"I am human\n");
  strcpy(test.key,"Nalin\n");
  test = Vigenere_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("VAXPHZAY",test.cipher_text);
  strcpy(test.plain_text,"EnCrYpTeD TeXt\n");
  strcpy(test.key,"Himitsu\n");
  test = Vigenere_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("LVOZRHNLLFMQL",test.cipher_text);
}

void test_playfair_cipher(void){
  strcpy(test.plain_text,"Message");
  strcpy(test.key,"Code");
  test = Playfair_Cipher(test);
  TEST_ASSERT_EQUAL_STRING("Sorry! Feature Under Construction",test.cipher_text);
}
