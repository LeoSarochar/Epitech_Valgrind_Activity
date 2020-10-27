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

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

void my_print_arr(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++) {
        my_putstr(arr[i]);
        my_putchar('\n');
    }
}

int main(void) {
    char **arr = malloc(sizeof(char) * 2);
    arr[0] = "Salut";
    arr[1] = "Youpi";
    arr[2] = "42";
    
    my_print_arr(arr);
    return (0);
}
// SORTIE ATTENDUE : Salut\nYoupi\n42
