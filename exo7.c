//
//  main.c
//  C_Playground
//
//  Created by Léo Sarochar on 27/10/2020.
//

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char *tmp = malloc(sizeof(char) * (len + 1));
    int len_tmp = len - 1;

    for (int i = 0; len_tmp >= 0; i++, len_tmp--) {
        tmp[i] = str[len_tmp];
    }
    return (tmp);
}

int main(void) {
    char *str1 = "Hello World";

    str1 = my_revstr(str1);
    my_putstr(str1);
    return (0);
}
// SORTIE ATTENDUE : NOP
