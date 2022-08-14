#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

const int alpha [] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25} ;

// single command line
int main(int argc,  string argv[])

{
    if (argc == 1)
    {
        printf("Usage:./caesar key\n");

        return 1 ;
    }


// non alphabteic charcter from the user
    for (int i = 0 ; i < strlen(argv[1]) ; i++)
    {
        


        if (isalpha(argv[1][i]))
        {
            printf("Usage:./caesar key\n");
            return 1 ;
        }
        while ((int) argv[1][i] <= '0')
        {
            printf("Usage:./caesar key\n");
            
            return 1 ;
        }
           
// only 1 command line argumnet from the user 
    }
    if (argc == 2)
    {
        printf("plaintext: ") ;
    }
    else if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1 ;
    }
// get form the user the plaintext
    string plaintext = get_string("");

    printf("ciphertext: ") ;
// convert second command argumnet form string to intger
    int n = strlen(plaintext) ;
    int key = atoi(argv[1]) ;

// acheive the formalae of of ciphertext
    for (int i = 0 ;  i < n ; i++)
    {
        //for uppercase letter
        if (isupper(plaintext[i]))
        {
            int p = (int)plaintext[i] - 65 ;
            int  c = (alpha[p] + key) % 26 ;
            int cp = c + 65 ;
            printf("%c", cp);

        }
        //  for lowercase letter 
        else if (islower(plaintext[i]))
        {
            int pl = (int)plaintext[i] - 97 ;
            int cl = (alpha[pl] + key) % 26 ;
            int cpl = cl + 97 ;
            printf("%c", cpl);
        }
        else
        {
            printf("%c", plaintext[i]) ;
        }

    }
    printf("\n");

}
