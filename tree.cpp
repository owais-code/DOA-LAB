#include<stdio.h>
#include<stdlib.h>
struct tree{
    int num;
    struct tree *left;
    struct tree *right;

};

typedef struct tree node;
int main (){
    int x;
    node *insert (node *,int);
    int inorder (node *);
    int preorder (node *);
    int postorder(node *);
    node *root = NULL

    ;
    char ch;
do{
    printf ("Enter the value to insert: ");
    scanf ("%d",&x);
    root= insert(root,x);
    printf ("Do u want to continue (y/n): ");
    fflush(stdin);
    scanf("%c",&ch);
}while (ch =='y');
printf ("\n\tNodes in inorder: ");
inorder (root);
printf("\n\tNodes in preorder: ");
preorder(root);
printf("\n\tNodes in postorder: ");
postorder(root);
}

node *insert(node *root,int x){
    if(root==NULL){
        root=(node *)malloc(sizeof(node));
        root->num=x;
        root->left=root->right=NULL;
    }
    else if(root->num>x){
        root->left=insert(root->left,x);
    }
    else if(root->num<x){
        root->right=insert(root->right,x);
    }
    else{
        printf("duplicate");
    }
    return(root);
}

int inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->num);
        inorder(root->right);
    }
    return 0;
}

int preorder(node *root){
    if(root!=NULL){
        printf("%d ",root->num);
        preorder(root->left);
        preorder(root->right);
    }
    return 0;
}

int postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->num);
    }
    return 0;
} 
