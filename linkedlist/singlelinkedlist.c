#include <stdlib.h>
#include "singlelinkedlist.h"

String_LL* createNewElem(char* payload) {
    String_LL* new = calloc(1, sizeof(String_LL));
    //String_LL* new = malloc(sizeof(String_LL));
    new->data = payload;
    new->next = NULL;
    return new;
}


String_LL* append(String_LL* head,String_LL* elem) {
    if (head == NULL) 
        return elem;

    String_LL* runner = head;
    while(runner->next != NULL)
        runner = runner->next;

    runner->next = elem;
    return head;
}

String_LL* append_rec(String_LL* head,String_LL* elem) {
    if (head==NULL)
        return elem;
    if (head->next == NULL) {
        head->next = elem;
        return head;
    }
    return append_rec(head->next, elem);
}

String_LL* insertFront(String_LL* head, String_LL* elem) {
    elem->next = head;
    return elem;
}


String_LL* freeList(String_LL* head) {
    String_LL* runner = head;
    while(runner != NULL) {
        runner = head->next;
        free(head->data);
        free(head);
        head = runner;
    }
    return NULL;
}


String_LL* freeList_rec(String_LL* head) {
    if (head == NULL) 
        return NULL;
    freeList_rec(head->next);
    free(head->data);
    free(head);
    return NULL;
}

