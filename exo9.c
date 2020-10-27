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
    int nb_ints = 4;
    int *int_arr = malloc(sizeof(int) * nb_ints + 1);
    
    for (int i = 0; i <= nb_ints; i++) {
        int_arr[i] = i;
    }
    return (0);
}
