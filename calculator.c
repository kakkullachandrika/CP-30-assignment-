#include <stdio.h>
#include<string.h>
#include<conio.h>
int main(int argc, char *argv[], char *envp[]) {
    printf("%s\n",argv[0]);
    printf("%s\n",argv[1]);
    printf("%s",*envp);
    getch();
}