//input username and password and then use a hash key to mask the password instead of reading it plaintext and then for future use a public private encryption key to prevent reading input from a probable security flaw
 
#include <stdio.h>
int main()
{
 int userName, passWord;
    printf(" Welcome to AUB please enter you login credentials\n");
    printf("Email: ");
    scanf("%d", &userName );
    printf("Password: ");
    scanf("%d", passWord);
    getchar();
    printf("Thank You!");
    return 0;
    }


