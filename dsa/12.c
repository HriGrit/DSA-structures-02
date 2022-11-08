#include <stdio.h>  // circular linked list
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head, *tail = NULL;
void display();

void insert(int data){
    struct node *nade = malloc(sizeof(struct node));
    nade->data = data;
    nade->next = head;

    if (head == NULL){
        head = tail = nade;
        tail->next = head;
    }else{
        tail->next = nade;
        tail = nade;
        tail->next = head;
    }
}

void insertbegin(int data){     // circular linked list insert begin
    struct node *nade = malloc(sizeof(struct node));
    nade->data = data;
    nade->next = head;

    tail->next = nade;
    head = nade;
}

void targetinsertafter(int tar, int element){       // circular linked list insert after target
    struct node *nade = malloc(sizeof(struct node));
    nade->data = element;
    nade->next = NULL;

    struct node *temp = head;
    while(temp != tail && temp->data != tar){
        temp = temp->next;
    }
    display();
    if (temp->data == tar){
        if (temp == tail){
            tail->next = nade;
            tail = nade;
            tail->next = head;
        }else{
            nade->next = temp->next;
            temp->next = nade;
        }
        display();
    }else{
        printf("Target Element is Not Found");
    }
}

void targetinsertbefore(int tar, int element){      // circular linked list insert before target
    struct node *nade = malloc(sizeof(struct node));
    nade->data = element;
    nade->next = NULL;

    struct node *temp = head;
    while(temp != tail && temp->next->data != tar){
        temp = temp->next;
    }
    display();
    if (temp->next->data == tar){
        if (temp == tail){
            tail->next = nade;
            tail = nade;
            tail->next = head;
        }else{
            nade->next = temp->next;
            temp->next = nade;
        }
        display();
    }else{
        printf("Target Element is Not Found");
    }
}

void targetdeleteafter(int data){
    struct node *nade;

    for (nade = head; (nade != tail) && (nade->data != data); nade = nade->next);
    if (nade == tail){
        if (nade->data == data){
            head = head->next;
            tail->next = head;
            display();
        }else{
            printf("Target Element is Not Found\n");
        }
    }else{
        if (nade->next == tail){
            tail = nade;
            tail->next = head;
        }else{
            nade->next = nade->next->next;
        }
        display();
    }
}

void display(){
    if (head == tail) printf("List->%d->List\n", head->data);
    else{
        struct node *current = head;
        printf("List->");
        while (current != tail){
            printf("%d->", current->data);
            current = current->next;
        }
        printf("%d->List\n", tail->data);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        insert(x);
    }

    int tar;
    scanf("%d", &tar);
    
    display();
    targetdeleteafter(tar);
    // display();
}