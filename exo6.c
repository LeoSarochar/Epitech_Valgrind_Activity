//
//  exo6.c
//  C_Playground
//
//  Created by Léo Sarochar on 27/10/2020.
//

#include <unistd.h>
#include <stdio.h>

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


int main(void)
{
    char str[] = "SALUT";
    str = "COUCOU";
    str[7] = 'L';
    my_putstr(str);
    my_putchar('\n');
    return (0);
}
// SORTIE ATTENDUE : COUCOUL\n
