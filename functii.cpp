#include <iostream>
#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include "functii.h"

void push_element_begining(struct g_node *head ,int new_element_value, char new_element_name[50]){
    struct g_node *new_element = (struct g_node*)malloc(sizeof(struct g_node));

    new_element->nota = new_element_value;
    strcpy(new_element->nume, new_element_name);
    new_element->next = head->next;
    head->next = new_element;
}

void print_list(struct g_node *head){
    struct g_node *iterator = head;
    while (iterator->next != NULL) {
        printf("%d %s\n", iterator->next->nota, iterator->next->nume);
        iterator = iterator->next;
    }
}
void print_list_nume(struct g_node *head){
    struct g_node *iterator = head;
    while (iterator->next != NULL) {
        printf("%s ",  iterator->next->nume);
        iterator = iterator->next;
    }
}


int find_postion_of_value(struct g_node *head ,char element_name[50])
{
    int position = -1; //list is empty
    struct g_node *iterator = head;
    int element_found = 0;

    while(iterator->next != NULL)
    {
        position ++;
        if(strcmp(iterator->nume, element_name)==0)
            return position;
        iterator = iterator->next;
    }

    if (element_found == 0)
        return -2; // not found in list

}
void sortare(struct g_node *head)
{
    char numeaux[50];
    int ok;
    struct g_node *ptr1;
    if (head == NULL)
        return;

    do
    {
        ok = 0;
        ptr1 = head ;

        while (ptr1->next != NULL)
        {
            if (ptr1->nota > ptr1->next->nota)
            {
                int aux = ptr1->nota;
                strcpy(numeaux, ptr1->nume);
                ptr1->nota = ptr1->next->nota;
                strcpy(ptr1->nume, ptr1->next->nume);
                ptr1->next->nota = aux;
                strcpy(ptr1->next->nume, numeaux);
                ok = 1;
            }
            ptr1 = ptr1->next;
        }
    }
    while (ok);
}

