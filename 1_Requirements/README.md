# Requirements
## Introduction

* Cryptography is the practice and study of techniques used to encrypt data into unintelligible nonsense(ie plaintext to ciphertext) during communication to protect it from the prying eyes of unauthorized parties.
* It has various aspects such as authentication, data integrity and data confidentiality.
* Modern day cryptography is very complex and is an interdisplinary topic that includes mathematics, computer science, electrical engineering and many more.
* In this mini-project, certain simple substitution cryptography techniques will be implemented using C programming.
* In substitution ciphering techniques plaintext is converted to ciphertext in a defined manner using a key; a unit may be single letter, pair of letters or more.
* Some examples of substitution ciphers are Caesar cipher, Vigenere cipher and Playfair cipher

## Research
### Substitution Ciphers

Although substitution ciphering techniques(by themselves) are no longer be used in modern day for encryption purposes due to being easy to crack(for computers), they are still commonly used in puzzles, coding and decoding question and simple games.

#### Caesar Cipher
Also known as the shift cipher, it is one of the most widely known and simplest encryption techniques where each letter is replaced with a letter some fixed position up or down the alphabet. It is named after Julius Caesar after he used it in his messages. This cipher is easily crackable and does not offer much security in modern day communications.

#### Vigenere Cipher
This substitution ciphering technique is developed based on Caesar cipher where each letter of the plaintext is replaced with a letter up or down the alphabet based on the corresponding letter it is paired with in the keyword. Unlike Caesar cipher it is a polyalphabetic cipher and remained uncrackable for almost three centuries since it was created in the 1500s. It is also not a very effective cipher for modern day applications.

#### Playfair Cipher
This ciphering technique treats every two letters of the plaintext as a block and substitutes two letters for it to form the ciphertext. It was the first digram substitution cipher. It is much harder to break than Caesar or Vigenere ciphers since frequency analysis cannot be easily performed for bigrams unlike monograms (only 26 possibilities).This ciphering techniques was used by the British forces in both World War I and World War II. Modern day brute force techniques can be used to easily decode this cipher.

## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
|   X   |   Y   |   Z   |
