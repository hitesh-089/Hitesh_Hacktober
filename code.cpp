#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the string\n");
    char s[100];
    scanf("%[^\n]s", s);
    printf("Enter your choice\n1. With strlen function\n2. Without strlen function\n");
    int c,i,k=0;
    scanf("%d", &c);
    switch(c)
    {
        case 2:
            i=0;
            while(s[i]!='\0')
                i++;
            printf("The length of string is %d", i);
            break;
        case 1:
            i = strlen(s);
            printf("The length of the string is %d", i);
            break;
        default:
            printf("Wrong Choice\n");
    }
    getch();
    return 0;
}
