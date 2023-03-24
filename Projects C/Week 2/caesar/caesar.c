#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// main function takes 2 arguments, 1)# of arguments, 2) takes an array of strings
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }

    // checking key (need an integer) - Looping through the string of integers
    for (int key = 0; key < strlen(argv[1]); key++)
    {
        if (isalpha(argv[1][key]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]) % 26; // converts the ASCII to an integer

    // plaintext from the user
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // iterates over the plain text- for loop
    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        if (!isalpha(plaintext[i]))
        {
            //prints the current element of the array if it's not abc
            printf("%c", plaintext[i]);
            continue;
        }
        // checking uppercase
        int offset = isupper(plaintext[i]) ? 65 : 97;
        // calculating how far from lowercase "a" or uppercase "A"
        int pi = plaintext[i] - offset;
        // index
        int ci = (pi + key) % 26;

        // printing the new cipher
        printf("%c", ci + offset);
    }


    printf("\n");
    return 0;


}