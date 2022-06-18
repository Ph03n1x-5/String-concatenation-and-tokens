#include<stdio.h>
#include<string.h>

int main()
{
    char firstname[100], middlename[100], lastname[100];
    
    char *token;
    
    printf("Enter first name :\n");
    gets(firstname);
    printf("Enter middle name :\n");
    gets(middlename);
    printf("Enter last name :\n");
    gets(lastname);
    
    strcat(firstname, " ");
    strcat(firstname, middlename);
    strcat(firstname, " ");
    strcat(firstname, lastname);
    printf("Concated name is : %s\n", firstname);
    
    // get the tokens
    printf("The tokens are:\n ");
    token = strtok(firstname," ");
    while(token!= NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
