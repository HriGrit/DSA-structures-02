#include <stdio.h>
#include <stdlib.h>

struct node{
  char data;
  struct node *left;
  struct node *right;
};

struct node* newNode(char x){

  struct node *temp = malloc(sizeof(struct node));
  temp->data = x;
  temp->left = NULL;
  temp->right = NULL;

  return temp;
}

void inOrder(struct node *root){
  if(root == NULL) return;

  inOrder(root->left);
  printf("%c ", root->data);
  inOrder(root->right);
}

void postOrder(struct node *root){
  if(root == NULL) return;

  postOrder(root->left);
  postOrder(root->right);
  printf("%c ", root->data);
}

void preOrder(struct node *root){
  if(root == NULL) return;

  printf("%c ", root->data);
  preOrder(root->left);
  preOrder(root->right);
}

void depthFirst(struct node *root){
  char stack[100];
  int top = 0;

  stack[top++] = root->data;
  while (top != 0){
    char x = stack[--top];
    printf("%c ", x);

    if(root->right != NULL)
      stack[top++] = root->right->data;
    if(root->left != NULL)
      stack[top++] = root->left->data;

    if(root->left != NULL)
      root = root->left;
    else if(root->right != NULL)
      root = root->right;
    else
      root = NULL;
  }
}

int main(){
  struct node *a = newNode('a');
  struct node *b = newNode('b');
  struct node *c = newNode('c');
  struct node *d = newNode('d');
  struct node *e = newNode('e');
  struct node *f = newNode('f');

  a->left = b;
  a->right = c;

  b->left = d;
  b->right = e;

  c->right = f;

  // inOrder(a); printf("\n");
  // postOrder(a); printf("\n");
  // preOrder(a);

  depthFirst(a);

  return 0;
}