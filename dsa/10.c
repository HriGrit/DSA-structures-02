#include <stdio.h> // Circular Double Simple print
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail = NULL;

void insert(int data){
    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = head;
    newNode->prev = tail;

    if (head == NULL){
        head = tail = newNode;
        head->prev = tail;
        tail->next = head;
    }else{
        tail->next = newNode;
        tail = newNode;
        head->prev = tail;
    }
}

void display(){
    if (head == tail) {
        printf("Forward\nList->%d->List\n", head->data);
        printf("Backward\nList->%d->List", head->data);
    }
    else{
        struct node *current = head;
        printf("Forward\nList->");
        while (current != tail){
            printf("%d ", current->data);
            current = current->next;
        }
        printf("%d->List\n", tail->data);

        current = tail;
        printf("Backward\nList->");
        while (current != head){
            printf("%d ", current->data);
            current = current->prev;
        }
        printf("%d->List\n", head->data);
    }
}

void targetfind(int x){ // find if element is here and then check previous n after occurance of number
    struct node *current = head;
    while (current != tail && current->data != x){
        current = current->next;
    }
    if (current->data == x){
        printf("Previous of %d:%d\n", current->data, current->prev->data);
        printf("Next of %d:%d\n", current->data, current->next->data);
    }else{
        printf("Target Element is Not Found\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int data;
        scanf("%d", &data);
        insert(data);
    }

    int target; 
    scanf("%d", &target);

    targetfind(target);
}