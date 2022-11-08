#include <stdio.h>      // Linked List
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
    nade->next = NULL;

    if (head == NULL){
        head = tail = nade;
    }else{
        tail->next = nade;
        tail = nade;
    }
}

void targetinsertafter(int tar, int element){
    struct node *nade = malloc(sizeof(struct node));

    nade->data = element;
    nade->next = NULL;

    if (head == tail){
        if (head->data == tar){
            head->next = nade;
            tail = nade;
        }else{
            printf("Target Element is Not Found");
            return;
        }
    }else if(tail->data == tar){
        tail->next = nade;
        tail = nade;
    }else{
        struct node *temp = head;
        for (temp = head; (temp != tail) && (temp->data != tar); temp = temp->next);

        if (temp->data == tar){
            nade->next = temp->next;
            temp->next = nade;
        }else{
            printf("Target Element is Not Found");
            return;
        }
    }
    display();
}

void targetdelete(int data){

}

void targetinsertbefore(int tar, int element){
    struct node *nade = malloc(sizeof(struct node));
    
    nade->data = element;
    nade->next = NULL;

    if (head == tail){
        if (head->data == tar){
            nade->next = head;
            head = nade;
        }else{
            printf("Target Element is Not Found");
            return;
        }
    }else if(head->data == tar){
        nade->next = head;
        head = nade;
    }else{
        struct node *temp;
        for (temp = head; (temp != tail) && (temp->next->data != tar); temp = temp->next);

        if ((temp == tail) || (temp->next->data != tar)){
            printf("Target Element is Not Found");
            return;
        }else{
            nade->next = temp->next;
            temp->next = nade;
        }
    }
    display();
}

void insertfirst(int data){
    struct node *nade = malloc(sizeof(struct node));

    nade->data = data;
    nade->next = head;

    head = nade;
}

void insertlast(int data){
    struct node *nade = malloc(sizeof(struct node));

    nade->data = data;
    nade->next = NULL;

    tail->next = nade;
    tail = nade;
}

void display(){
    struct node *temp = head;
    printf("List->");

    while (temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){

    int n;
    scanf("%d", &n);

    int x;
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        insert(x);
    }

    int tar, element;
    scanf("%d %d", &tar, &element);

    display();
    targetinsertafter(tar, element);

    return 0;
}