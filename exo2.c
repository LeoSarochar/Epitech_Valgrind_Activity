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

char *my_strcpy(char *dest, char *src)
{
    for (int i = 0; src[i]; i++) {
        dest[i] = src[i];
    }
    return (dest);
}

int main(void) {
    char *str = malloc(sizeof(char) * 2);
    
    char *result = my_strcpy(str, "YOLO");
    my_putstr(result);
    return (0);
}
// SORTIE ATTENDUE : YOLO
