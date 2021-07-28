#include <stdio.h>
int main()
{
    int userName;
    printf("Please enter your name: ");
    scanf("%d", &userName);
    printf("Hello!", userName);
    getchar();
    return 0;
}
