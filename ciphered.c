#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool is_digit(string key);
string rotate(string text, int key, char modifire);
string get_choice();
int start_cipher(void);



int main(int argc, string argv[])
{
    printf("Welcome to the Caesar cipher!, please enter your choice: \n");
    start_cipher();
    return 0;
   
}


// Start the cipher
int start_cipher(void)
{
    printf("Enter 'e' to encrypt or 'd' to decrypt or 'x' to exit:\n");
    string choice = get_choice();
    char char_choice = tolower(choice[0]);

    if (char_choice == 'x')
    {
        printf("Goodbye!\n");
        return 0;
    }

    if (char_choice == 'd' || char_choice == 'e')
    {
        int key = get_int("Please enter your key: ");
        string text = get_string("Please enter your text: ");
        printf("The result is: %s\n", rotate(text, key, char_choice));
        printf("\n");
        printf("Do you want to encrypt or decrypt another text?\n");

        string want_to_continue = get_string("Please enter 'y' to continue or 'n' to exit: \n");
        char char_want_to_continue = tolower(want_to_continue[0]);
        if (char_want_to_continue == 'n')
        {
            printf("Goodbye!\n");
            return 0;
        }
        else 
        {
            start_cipher();
        }
    }
    else
    {
        printf("Invalid input, please try again.\n");
    }
    return 0;
}


// Get the user's choice of encryption or decryption
string get_choice()
{
    string choice;
    choice = get_string("Your choice: ");
    return choice;
}

// A function to check if the key is a digit
bool is_digit(string key)
{
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        char c = key[i];
        if (!isdigit(c))
        {
            return false;
        }
    }
    return true;
}



// A function to rotate(encrypte) the plaintext by the key
string rotate(string text, int key, char modifire)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];
        if (isalpha(c))
        {
            if (isupper(c))

            {   // check if the modifire is 'e' or 'd' and rotate the letter by the key accordingly
                c = modifire == 'e' ? (((c - 'A' + key) % 26) + 'A') : ((c - 'A' - key) % 26) + 'A';
                
            }
            else
            {
                c = modifire == 'e' ? (((c - 'a' + key) % 26) + 'a') : ((c - 'z' - key) % 26) + 'z';
                
            }
        }
        text[i] = c;
    }
    return text;
}
