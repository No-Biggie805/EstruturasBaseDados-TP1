/*Questões a fazer ao professor sobre o trabalho:
1->Qual  será a estrutura base do programa ao desenvolver sem inclusão dos dados da lista?
e.g:quesão do registo do utilizador

2->Como irá depois ser feito o funcionamento do antes e depois de implementar as linked lists?
e.g:questões da gestão de dados quais poderão ser numa
estrutura base e os que serão para linked list?
*/

#include "DBheader.h"

typedef struct User // lista de usuário a manter o programa, irá talvez ser melhorado
                    // conforme o que o professor preferir
{
    // char name[15], password[12];
    char *name, *password;
} User;

int main()
{
    // User s;
    char name[15], password[12];

    printf("enter your username:");
    scanf("%s", name);
    printf("enter your password:");
    scanf("%s", password);

    // //copying to struct using the strcpy function
    // strcpy(s.name, name);
    // strcpy(s.password, password);

    // dinamic allocation:experimental
    User *s1 = (User *)malloc(sizeof(User)); // setting up the allocation member pointer which will contain the data of the struct
    s1->name = name;
    s1->password = password;

    // if (strcmp(s.name, "jose") == 0) // making sure both strings match
    // {
    //     if (strcmp(s.password, "123")==0)
    //     {
    //         printf("\nWelcome dear User:%s,%s",name, s.name);
    //     }
    //     else
    //         printf("\nWrong password");
    // }
    // else
    //     printf("\nWrong UserName");

    if (strcmp(s1->name = "jose", name) == 0) // checking our respectfull user
    {
        if (strcmp(s1->password = "123", password) == 0) // checking our respectfull password
        {
            printf("\nWelcome dear User:%s,%s", name, s1->name);
        }
        else
            printf("\nWrong Password");
    }
    else
        printf("\nWrong UserName");

    return 0;
    free(s1);
}