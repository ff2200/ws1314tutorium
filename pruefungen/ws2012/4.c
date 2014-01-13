node_t* listCreateNode(int data) {
    node_t* tmp = calloc(1, sizeof(node_t));
    tmp->data = data;
    return tmp;
}

void listInsertEndProc(node_t** panchor, int data) {
    if (panchor == NULL) return;
    node_t* new = listCreateNode(data);
    if (*panchor != NULL) {
        node_t* runner = *panchor;
        while(runner->next != NULL) {
            runner = runner->next;
        }
    runner->next = new;
    }
    else {
        *panchor = new;
    }
}

node_t* list_append(node_t* anch_a, node_t* anch_b) {
    if(anch_a == NULL) return anch_b;
    if(anch_a->next == NULL) {
        anch_a->next = anch_b;
        return anch_a;
    }
    return list_append(anch_a->next, anch_b);
}








