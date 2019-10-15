#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include <iostream>
#include "functii.h"

using namespace std;



int main()
{
    struct g_node *head = (struct g_node*) malloc(sizeof(struct g_node));
    struct g_node *head1 = (struct g_node*) malloc(sizeof(struct g_node));
    struct g_node *head2 = (struct g_node*) malloc(sizeof(struct g_node));
    head->next = NULL;
    head1->next = NULL;
    head2->next = NULL;
    int nota,n,k;
    char nume[800],nume_cautat[50];
    scanf("%d", &n);
   for(int i=0;i<n;i++)
   {
        scanf("%s", &nume);
        scanf("%d", &nota);
        if(nota > 10 || nota <1)
            printf("Nota incorecta");
        else
            push_element_begining(head,nota,nume);
        if(nota >= 5 && nota <= 10 )
            push_element_begining(head1, nota,nume);
        else
            if(nota <=5 && nota <=1)
                push_element_begining(head2, nota,nume);
    }
    printf("\nLista cu note si nume: \n");
    print_list(head);
    printf("\nLista admisi: ");
    print_list_nume(head1);
    printf("\nLista respinsi: ");
    print_list_nume (head2);
 //   printf("\nLista candidati in ordine crescatoare:\n");
  //  sortare(head);
  //  print_list(head);
    printf("\nIntroduceti numele celui cautat:\n");
    scanf("%s", &nume_cautat);
    k = find_postion_of_value(head, nume_cautat);
    printf("\n%s se afla pe pozitia: %d",nume_cautat, k);
    return 0;
}
