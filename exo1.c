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

int main(void) {
    char *str = malloc(sizeof(char) * 3);
    str[0] = 'N';
    str[1] = 'O';
    str[2] = 'P';
    str[3] = '\0';
    my_putstr(str);
    return (0);
}
// SORTIE ATTENDUE : NOP
