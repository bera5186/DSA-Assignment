#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct bin_tree{
    int data;
    struct bin_tree *left, *right;
};

typedef struct bin_tree Tree;

Tree *insert(Tree *, int );
void inorder(Tree *);

