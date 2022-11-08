#include <stdio.h>          // Double Linked List
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail = NULL;
void display();
void insert(int data){
    struct node *nade = malloc(sizeof(struct node));

    nade->data = data;
    nade->next = NULL;
    nade->prev = NULL;

    if (head == NULL){
        head = tail = nade;
    }else{
        tail->next = nade;
        nade->prev = tail;
        tail = nade;
    }
}

void insertfirst(int data){
    struct node *nade = malloc(sizeof(struct node));
    nade->data = data;
    nade->next = head;
    nade->prev = NULL;

    head->prev = nade;
    head = nade;
}

void insertlast(int data){
    struct node *nade = malloc(sizeof(struct node));

    nade->data = data;
    nade->next = NULL;
    nade->prev = tail;

    tail->next = nade;
    tail = nade;
}

void targetdelete(int data){
    struct node *nade;

    if (head == tail){
        if (head->data == data) printf("List is Empty\n");
        else printf("Target Element is Not Found\n");
    }else{
        for (nade = head; (nade != tail) && (nade->data != data); nade = nade->next);
        if (nade == tail){
            if (nade->data == data){
                tail = tail->prev;
                tail->next = NULL;
            }else{
                printf("Target Element is Not Found\n");
                return;
            }
        }else{
            if (nade == head){
                head = head->next;
                head->prev = NULL;
            }else{
                nade->prev->next = nade->next;
                nade->next->prev = nade->prev;
            }
        }
        display();
    }
}

void display(){
    struct node *nade = head;

    if (head == tail) printf("List->%d->NULL\n", head->data);
    else{
        printf("List->");
        while (nade != tail){
            printf("%d ", nade->data);
            nade = nade->next;
        }
        printf("%d->NULL\n", tail->data);
    }
}

void kinkydisplay(){
    struct node *nade = tail;

    if (head == tail) {
        printf("Forward\nList->%d->NULL\n", head->data);
        printf("Backward\nList->%d->NULL\n", head->data);
    }
    else{
        printf("Forward\nList->");
        while (nade != head){
            printf("%d ", nade->data);
            nade = nade->prev;
        }
        printf("%d->NULL\n", head->data);

        nade = head;
        printf("Backward\nList->");
        while(nade != tail){
            printf("%d ", nade->data);
            nade = nade->next;
        }
        printf("%d->NULL\n", tail->data);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int x;
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        insert(x);
    }

    scanf("%d", &x);
    display();
    targetdelete(x);
}