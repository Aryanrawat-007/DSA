#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>
struct node{
    struct node*left;
    int data;
    struct node*right;
};
struct node*head=NULL;
 struct node*add_elements(struct node*root,int x){
       if (root == NULL) {
        root = (struct node*)malloc(sizeof(struct node));
        if (root == NULL)
            return NULL;

        root->data = x;
        root->left = NULL;
        root->right = NULL;
        return root;
    }

    if (x < root->data)
        root->left = add_elements(root->left, x);
    else if (x > root->data)
        root->right = add_elements(root->right, x);

    return root;
 }
 void inorder(struct node*root){
    if(root!=NULL){
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
 }
  void preorder(struct node*root){
    if(root!=NULL){
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    }
 }
  void postorder(struct node*root){
    if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
    }
 }
 //CHECK VALID TREE OR NOT
bool check(struct node*root,long long min,long long max){
    if(root==NULL){
        return true;
    }
    if(root->data<=min || root->data>=max){
        return false;
    }
    return check(root->left,min,root->data) && check(root->right,root->data,max);
}
 bool validTree(struct node*root){
    return check(root, LLONG_MIN, LLONG_MAX);
 }


 //CHECK SAME TREE OR NOT
 bool isSameTree(struct node*root,struct node*root1){
    if(root==NULL && root1==NULL){
        return true;
    }
    else if(root==NULL && root1!=NULL || root!=NULL && root1==NULL){
        return false;
    }
    else{
        if(root->data==root1->data && 
            isSameTree(root->left,root1->left) && 
            isSameTree(root->right,root1->right)){
            return true;
        }
        else{
            return false;
        }
    }
 }
 bool check(struct node*root,struct node*root1){
    return isSameTree(root,root1);
 }

//SYMMETRIC TREE
bool isSymmetric(struct node*left,struct node*right){
    if(left=NULL && right==NULL){
        return true;
    }
    else if(left==NULL || right==NULL){
        return false;
    }
    else{
        if(left->data==right->data && 
            isSymmetric(left->left,right->right) && 
            isSymmetric(left->right,right->left)){
            return true;
        }
        else{
            return false;
        }
    }
}
bool symme(struct node*root){
    return isSymmetric(root->left,root->right);
}

//SEARCH IN A BST
struct node*Search(struct node*root,int x){
    if(root==NULL){
        printf("EMPTY");
        return 0;
    }
    else{
        if(root->data==x){
            return root;
        }
        else if(x<root->data){
            return Search(root->left,x);
        }
        else if(x>root->data){
            return Search(root->right,x);
        }
    }
}

//SUM OF RANGE FROM A SPECIFIC POSITION IN BST
int SUMOFRANGE(struct node*root,int low,int high){
    if(root==NULL){
        return 0;
    }
    if(root->data<low){
            return SUMOFRANGE(root->right,low,high);
        }
    if(root->data>high){
            return SUMOFRANGE(root->left,low,high);
        }
    
    return root->data + SUMOFRANGE(root->left,low,high) + SUMOFRANGE(root->right,low,high);
}

// DELETE A NODE IN A BST
struct node*findMin(struct node*root){
   while(root->left!=NULL){
    root=root->left;
   }
   return root;
}

struct node*delete(struct node*root,int x){
    if(root==NULL){
        return 0;
    }
    if(x<root->data){
        root->left=delete(root->left,x);
    }
    else if(x>root->data){
        root->right=delete(root->right,x);
    }
    else{
        //CASE1: NO CHILD
        if(root->left==NULL){
            struct node*temp=root->right;
            free(root);
            return temp;
        }
        //CASE2: ONE CHILD
        else if(root->right==NULL){
            struct node*temp=root->left;
            free(root);
            return temp; 
        }
        //CASE3: TWO CHILDREN
        else{
            struct node*temp=findMin(root->right);
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
        }
    }
    return root;
}

//COUNT LEAF NODE
int CountLeaf(struct node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return CountLeaf(root->left)+CountLeaf(root->right);
}

//COUNT NODE HAVING ONLY ONE CHILD
int Count1Child(struct node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right!=NULL || root->left!=NULL && root->right==NULL ){
        return 1;
    }
    return Count1Child(root->left)+Count1Child(root->right);
}

//SUM OF ALL NODE
int SumOFAllNode(struct node*root){
    if(root==NULL){
        return 0;
    }
    return root->data + SumOFAllNode(root->left) + SumOFAllNode(root->right);
}
//HEIGHT OF TREE
int height(struct node*root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    if(left>right){
        return left+1;
    }
    else{
        return right+1;
    }
}

//COUNT NODE HAVING RIGHT CHILD
int CountNodeLeftChild(struct node*root){
    if(root==NULL){
        return 0;
    }
    int count=0;
    if(root->left!=NULL){
        count=1;
    }
    return count + CountNodeLeftChild(root->left)+CountNodeLeftChild(root->right);
}
//COUNT NODE HAVING RIGHT CHILD
int CountNodeRightChild(struct node*root){
    if(root==NULL){
        return 0;
    }
    int count=0;
    if(root->right!=NULL){
        count=1;
    }
    return count + CountNodeRightChild(root->right) + CountNodeRightChild(root->left);
}
//MAXIMUM ELEMENTS IN TREE
struct node*MAX(struct node*root){
    if(root==NULL){
        return 0;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
//MINIMUM ELEMENTS IN TREE
struct node*MIN(struct node*root){
    if(root==NULL){
        return 0;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
//SECOND LARGEST ELEMENTS
struct node*findMax(struct node*root){
    if(root==NULL){
        return 0;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
void SecondLargest(struct node*root){
    if(root==NULL){
        printf("NOT FOUND");
        return 0;
    }
    struct node*parent=NULL;
    while(root->right!=NULL){
        parent=root;
        root=root->right;
    }
    if(root->left!=NULL){
        struct node*temp=findMax(root->left);
        printf("SECOND LARGEST : %d",temp->data);
    }
    printf("SECOND LARGEST : %d",parent->data);
}
//INORDER SUCCESSOR
struct node*Successor(struct node*root,int key){
    if(root==NULL){
        return 0;
    }
    struct node*ans=NULL;
    while(root!=NULL){
        if(key<root->data){
        ans=root;
        root=root->left;
    }
    else{
        root=root->right;
    }
   }
   return root;
}
//COUNT NODE HAVING EXACTLY TWO CHILDREN
int CountHaving2Child(struct node*root){
    if(root==NULL){
        return 0;
    }
    int count=0;
    if(root->left!=NULL && root->right!=NULL){
        count=1;
    }
    return count + CountHaving2Child(root->left) + CountHaving2Child(root->right);
}
 
int main() {
    struct node* root1 = NULL;
    struct node* temp;

    head = add_elements(head, 50);
    head = add_elements(head, 30);
    head = add_elements(head, 70);
    head = add_elements(head, 20);
    head = add_elements(head, 40);
    head = add_elements(head, 60);
    head = add_elements(head, 80);

    root1 = add_elements(root1, 50);
    root1 = add_elements(root1, 30);
    root1 = add_elements(root1, 70);
    root1 = add_elements(root1, 20);
    root1 = add_elements(root1, 40);
    root1 = add_elements(root1, 60);
    root1 = add_elements(root1, 80);

    printf("INORDER: ");
    inorder(head);

    printf("\nPREORDER: ");
    preorder(head);

    printf("\nPOSTORDER: ");
    postorder(head);

    printf("\nVALID BST: %s", validTree(head) ? "YES" : "NO");

    printf("\nSAME TREE: %s", isSameTree(head, root1) ? "YES" : "NO");

    printf("\nSYMMETRIC TREE: %s", symme(head) ? "YES" : "NO");

    temp = Search(head, 40);
    if (temp != NULL)
        printf("\nELEMENT FOUND: %d", temp->data);
    else
        printf("\nELEMENT NOT FOUND");

    printf("\nSUM OF RANGE 30 TO 70: %d", SUMOFRANGE(head, 30, 70));

    printf("\nLEAF NODES: %d", CountLeaf(head));

    printf("\nNODES HAVING ONE CHILD: %d", Count1Child(head));

    printf("\nSUM OF ALL NODES: %d", SumOFAllNode(head));

    printf("\nHEIGHT OF TREE: %d", height(head));

    printf("\nNODES HAVING LEFT CHILD: %d", CountNodeLeftChild(head));

    printf("\nNODES HAVING RIGHT CHILD: %d", CountNodeRightChild(head));

    temp = MAX(head);
    if (temp != NULL)
        printf("\nMAXIMUM ELEMENT: %d", temp->data);

    temp = MIN(head);
    if (temp != NULL)
        printf("\nMINIMUM ELEMENT: %d", temp->data);

    printf("\n");
    SecondLargest(head);

    temp = Successor(head, 40);
    if (temp != NULL)
        printf("\nINORDER SUCCESSOR OF 40: %d", temp->data);
    else
        printf("\nSUCCESSOR NOT FOUND");

    printf("\nNODES HAVING TWO CHILDREN: %d", CountHaving2Child(head));

    head = delete(head, 30);

    printf("\nAFTER DELETING 30: ");
    inorder(head);

    return 0;
}
