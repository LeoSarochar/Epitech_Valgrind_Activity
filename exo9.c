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

void my_putchar(char c)
{
    write(1, &c, 1);
}

char *my_strdup(char *str)
{
    int len = my_strlen(str);
    char *new_str = malloc(sizeof(char) * (len + 1));
    
    for (int i = 0; str[i]; i++) {
        new_str[i] = str[i];
    }
    new_str[len] = '\0';
    return (new_str);
}

// This function replace all occurencies of char to_replace by char c in string str
char *my_replace_char(char *str, char to_replace, char c)
{
    int len = my_strlen(str);

    for (int i = 0; i <= len + i; i++) {
        if (str[i] == to_replace) {
            str[i] = c;
        }
    }
    return (str);
}

int main(void) {
    char *str1 = "Hello World";
    
    str1 = my_replace_char(my_strdup(str1), 'l', 'A');
    my_putstr(str1);
    my_putchar('\n');
    return (0);
}
// SORTIE ATTENDUE : HeAA WorAd\n
