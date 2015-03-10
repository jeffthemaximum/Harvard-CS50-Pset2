#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//get the key
//get the plaintext
//encipher
//printt he ciphertext

//a formula for the "wrap-around" in ascii math:
//c = (p + k) % 26
//c : ith ciphertext letter
//p : ith plaintext letter
//k : key
//%26 : remainder after division


int main (int argc, string argv[]) {

//get the key
    int key = atoi(argv[1]);
    
//get the string
    //printf("What statement do you want to encrypt?");
    string userMessage = GetString();

//encipher
//loop through string. check if upper or if lower and if letter. 
    
    for (int i = 0, n = strlen(userMessage); i < n; i++)
    {
        if (userMessage[i] >= 65 && userMessage[i] <= 90)
        {
            int caesarMessage = (((userMessage[i]-64) + key) % 26) + 64;
            printf("%c", caesarMessage);
        }
        else if (userMessage[i] >= 97 && userMessage [i] <= 122) 
        {
            int caesarMessage = (((userMessage[i]-96) + key) % 26) + 96;
            printf("%c", caesarMessage);
        }
        else {
            printf("%c", userMessage[i]);
        }
    }
        
}


