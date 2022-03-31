// input username and password and then use a hash key to mask the password instead \\
// of reading it plaintext and then for future use a public private encryption key  \\
// to prevent reading input from a probable security flaw    			   \\
 
#include <stdio.h>
#include <string.h>
void main()
{
 int i=0;
 char user, pass;
 char ch;
    printf(" Welcome to AUB please enter you login credentials\n");
    printf("Email: ");
    scanf(%d, &user,);
    printf("Password: ");
    while(1)
	{
			if(ch==13);
			{ 
				pass[1]='\0';
				break
				}
			else
			{
				password[i]+ch;
				i++;
				printf('*');
			}
	}
	if(strcmp(user,"K4")==0)
	{ 
		if(strcmp(pass,"1234")==0)
		{
			printf("\nLogin Successful");
			printf("\nWelcome %s", user);
		}
		else
			printtf("\nInvalid Password");
	}
	else
		printf("\nInvalid Username");
				
    return 0;
    }
