#include <stdio.h>
#include <malloc.h>


struct g_node{
    int nota;
    char nume[50];
    struct g_node *next;
};

void push_element_begining(struct g_node *head ,int new_element_value, char new_element_name[50]);
void print_list(struct g_node *head);
void print_list_nume(struct g_node *head);
int find_postion_of_value(struct g_node *head ,char element_name[50]);
void sortare(struct g_node *head);
