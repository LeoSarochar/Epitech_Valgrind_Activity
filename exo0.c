//
//  exo0.c
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

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
int main(void)
{
    char *str = malloc(sizeof(char) * 4);

    str[0] = 'Y';
    str[1] = 'E';
    str[2] = 'S';
    str[3] = '\0';
    my_putstr(str);
}
// SORTIE ATTENDUE : YES
