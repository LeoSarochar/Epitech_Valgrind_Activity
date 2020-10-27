//
//  exo7.c
//  C_Playground
//
//  Created by Léo Sarochar on 27/10/2020.
//

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list_s linked_list_t;

struct linked_list_s {
    char *param;
    linked_list_t *next;
};

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

linked_list_t *my_params_in_list(int count, char **params)
{
    linked_list_t *list = malloc(sizeof(linked_list_t));
    linked_list_t *tmp = malloc(sizeof(linked_list_t));

    for (int i = 0; i < count; i++) {
        linked_list_t *node = malloc(sizeof(linked_list_t));
        node->param = params[i];
        if (i != 0) {
            tmp->next = node;
        } else {
            list = node;
        }
        tmp = node;
    }
    return (list);
}

int main(int ac, char **av)
{
    linked_list_t *list = my_params_in_list(ac, av);
    
    while (list != NULL) {
        my_putstr(list->param);
        my_putchar('\n');
        list = list->next;
    }
    return (0);
}

// SORTIE ATTENDUE : ./a.out\nparam1\nparam2\n...
