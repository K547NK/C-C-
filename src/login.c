// input username and password and then use a hash key to mask the password instead \\
// of reading it plaintext and then for future use a public private encryption key  \\
// to prevent reading input from a probable security flaw    			   \\
 
#include <stdio.h>
int main()
{
 int user, pass;
    printf(" Welcome to AUB please enter you login credentials\n");
    printf("Email: ");
    scanf("%d", &user );
    printf("Password: ");
    scanf("%d",&pass );
    getchar();
    printf("Thank You!");
    return 0;
    }

