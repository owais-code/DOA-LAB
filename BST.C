#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct tree
{
    int num;
    struct tree *left;
    struct tree *right;

};

typedef struct tree node;
int main ()
{

    node *insert (node *,int);
    int inorder (node *);
    int preorder (node *);
    int postorder (node *);
    node *root = NULL;
    int x;
    char ch;
do
{

    printf ("\n\t\t\tENTER VALUE TO INSERT: ");
    scanf ("%d",&x);
    root= insert(root,x);
    printf ("WANT TO CONTINUE..?(y/n):");
    fflush(stdin);
    scanf("%c",&ch);
}
while (ch =='y');
printf ("\n\t\tInorder: ");
inorder (root);
printf("\n\t\tPreorder: ");
preorder(root);
printf("\n\t\tPostorder: : ");
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
	printf("Duplicate entry");
    }
    getch();
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

int postorder(node *root)
{
    if(root!=NULL)
    {
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->num);
    }
    return 0;

}