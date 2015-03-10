//Lines 1-15 are just some notes I made to myself to help me remember what to do. 
//c = (p + k) % 26
//C: ith letter of ciphertext
//p: ith letter of plaintext
//k: jth letter of key
//%26: remainder after dividing by 26

//remember, key does not progress if there's a space

//there's two indexed variabes, i and j. i keeps track of the position in plaintext, j keeps track of position in key.

//use % to divide the key by its length. this let's you wraparound the key.

//argc is the number of things you write after the program's name on the command line 
//argv is the words you write after the program's name. An array of strings. The locker analogy

#include <cs50.h> //These first three libraries are ones that they teach you to use in the cs50 course.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>  //I don't think I need this lib
#include <string.h> //I don't think I need this lib

int main (int argc, string argv[]) {

//get the key
    string key = argv[1];

//check that the user entered a correct key   
   if (argc != 2) 
   {
        printf("You didn't provide a valid encryption key.\n");
        return 1;
   }
       
//get the string
    string userMessage = GetString();
   
//encipher
//print ciphered text
    for (int i = 0, j = 0, m = strlen(key), n = strlen(userMessage); i < n; i++)
    {
        {
            if (userMessage[i] >= 65 && userMessage[i] <= 90) // for CAPITAL letters
            {
                int caesarMessage = (((userMessage[i]-64) + ((key[j % m])-97)) % 26) + 64;
                printf("%c", caesarMessage);
                j++;
            }
            else if (userMessage[i] >= 97 && userMessage [i] <= 122) // for lowercase letters
            {
                int caesarMessage = (((userMessage[i]-97) + ((key[j % m])-97)) % 26) + 97;
                printf("%c", caesarMessage);
                j++;
            }
            else 
            {
                printf("%c", userMessage[i]);
            }
        } 
    }
    printf("\n");
}


