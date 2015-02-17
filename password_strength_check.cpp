#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char st[100];
    int i;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
	//User input
    printf("Please Enter Your Password:\n");
    gets(st);
	//password char check
    for( i =0; i<strlen(st);i++)
    {
        if(islower(st[i])){
            hasLower = true;
        }
        if(isupper(st[i])){
            hasUpper = true;
        }
        if(isdigit(st[i])){
            hasDigit =true;
        }
    }
    if(hasUpper && hasLower && hasDigit){
        printf("Strong Password!!!!!!!!!");
    }else{
        printf("Week Password");
    }

    return 0;
}
