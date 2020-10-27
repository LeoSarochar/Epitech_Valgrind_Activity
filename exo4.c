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

char *my_strcpy(char *dest, char *src)
{
    for (int i = 0; src[i]; i++) {
        dest[i] = src[i];
    }
    return (dest);
}

int main(void) {
    char *str = NULL;

    str = my_strcpy(str, "SALUT");
    printf("%d\n", my_strlen(str));
    return (0);
}
// SORTIE ATTENDUE : 5\n
