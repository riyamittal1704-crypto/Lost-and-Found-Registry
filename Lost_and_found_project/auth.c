#include <stdio.h>
#include <string.h>
#include "auth.h"

int login() {
    char u[20], p[20];
    printf("--Login--\nUsername:");
    scanf("%s", u);
    printf("Password:");
    scanf("%s", p);

    if(strcmp(u, "user") == 0 && strcmp(p, "pass") == 0) {
        printf("Login Successful\n");
        return 1;
    } else {
        printf("Invalid Username or Password");
        return 0;
    }
}