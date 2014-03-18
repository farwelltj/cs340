#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int num;
  struct node *next;
} Node, *NodePtr;

main() {
  void printList(NodePtr);
  NodePtr makeNode(int);
  int n = 7;
  NodePtr top, np, last;
  
  top = NULL;
  if(scanf("%d", &n) != 1)n = 7;
  while (n != 0) {
    np = makeNode(n);
    if(top == NULL) top = np;
    else last -> next = np;
    last = np;
    if (scanf("%d", &n) != 1) n = 7;
  }
  printList(top);
}
NodePtr makeNode(int n){
  NodePtr np = (NodePtr) malloc(sizeof (Node));
  np -> num = n;
  np -> next = NULL;
  return np;
  }

void printList(NodePtr np) {
  while (np != NULL) {
    printf("%d\n", np -> num);
    np = np -> next;
  }
}