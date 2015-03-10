#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (int argc, string argv[]) {

//get the key
    int key = atoi(argv[1]);

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
        else 
        {
            printf("%c", userMessage[i]);
        }
    }
        printf("\n");
}


