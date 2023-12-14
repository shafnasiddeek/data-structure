#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node*rightchild;
        int data;
        struct node*leftchild;
};
struct node *Root=NULL;
struct node *temp2=NULL;

   
struct node* create(int item)
{
    struct node *node;
    node=(struct node*)malloc(sizeof(struct node));
    node->rightchild=NULL;
    node->leftchild=NULL;
    node->data=item;
    return node;
}

struct node*insert(struct node*temp,int item)
{ 	
    if(temp==NULL)
    {
        temp=create(item);
	printf("\nELEMENT SUCCESSFULLY INSERTED\n");
    }
    else if(temp->data==item)
    {
	printf("\nINSERTION NOT POSSIBLE (KEY ALREADY PRESENT IN THE TREE)\n");
    }
    else if(item < temp->data)
    {
        temp->leftchild=insert(temp->leftchild,item);
    }
    else
    {
        temp->rightchild=insert(temp->rightchild,item);
  }
    return temp;
}


struct node* delete(struct node*temp,int item)
{
    
    if(temp==NULL)
    {  
            printf("\nELEMENT NOT FOUND\n");
            return temp;
       
    }   

    else if(item < temp->data)
    {
            temp->leftchild=delete(temp->leftchild,item);
    }

    else if(item > temp->data)
    {
      temp->rightchild=delete(temp->rightchild,item);
    }

    else
    {
            if(temp->leftchild==NULL)//one right cld or no chld
            {
                temp2=temp->rightchild;
                free(temp);
                printf("\nELEMENT DELETED SUCCESSFULLY\n");
            }
            else if(temp->rightchild==NULL)// one left child 
            {
                temp2=temp->leftchild;
                free(temp);
                printf("\nELEMENT DELETED SUCCESSFULLY\n");
            }
            else
            {
              
            struct node* succ=temp->rightchild;
                while(succ->leftchild!=NULL)
                {
                    succ=succ->leftchild;
                }    
            temp->data=succ->data;
            temp->rightchild=delete(temp->rightchild,succ->data);
            temp2=temp;

            }
            
            return temp2;
    }

    return temp;
    
}


void pred(struct node*temp)
{
	struct node* pre=temp->leftchild;
	while(pre->rightchild!=NULL)
            {
                pre=pre->rightchild;
            }    
	printf("\nThe Predecessor of %d is  %d",temp->data,pre->data);

}

void succ(struct node*temp)
{
	 struct node* succ=temp->rightchild;
            while(succ->leftchild!=NULL)
            {
                succ=succ->leftchild;
            }    
	printf("\nThe Successor of %d is  %d",temp->data,succ->data);

}

void inorder(struct node*temp)
{

   if(temp!=NULL)
    {
        inorder(temp->leftchild);
        printf("%d ",temp->data);
        inorder(temp->rightchild);

    }

}

void postorder(struct node*temp)
{

    if(temp!=NULL)
    {
        postorder(temp->leftchild);
        postorder(temp->rightchild);
        printf("%d ",temp->data);
       
    }

}
void preorder(struct node*temp)
{

    if(temp!=NULL)
    {
        printf("%d ",temp->data);
        preorder(temp->leftchild);
        preorder(temp->rightchild);
       
    }

}

void srch(struct node*temp,int item)
{  
    if(temp==NULL)
	    printf("\nkey not found\n");  	
    else if(temp->data==item)
	    printf("\nkey found\n");
    else if(item < temp->data)
        return srch(temp->leftchild,item);
    else
        return srch(temp->rightchild,item);
}
int main()
{ 	
   
    int z,c;	
	printf("------------------BST OPERATIONS------------------\n");
	while(1)   
    {  
        printf("\n1.Insertion\n2.deletion\n3.inorder\n4.postorder\n5.preorder\n6.search\n7.Successor\n8.Predecessor\n9.Exit");  
        printf("\nSelect the options\n");         
        scanf("%d",&c); 	 
        switch(c)  
        {  
            case 1:  
                    printf("\nenter the data to insert\n");
                    scanf("%d",&z);
                    Root=insert(Root,z);
                    break;

            case 2: 
                    if(Root==NULL)
                    {
                       printf("\n....TREE IS EMPTY....\n");
                    }
                    else
                    {
                        printf("\nenter the data to Delete \n");
                        scanf("%d",&z);
			          	Root=delete(Root,z);
                    }
                    break;

            case 3: if(Root==NULL)
                    {
                        printf("\n....TREE IS EMPTY....\n");
                    }
                    else
                    {
                    printf("\n-------Tree Elements(IN-ORDER)-------\n");
           inorder(Root);
		    printf("\n");
                    }
                    break;

            case 4:if(Root==NULL)
                    {
                       printf("\n....TREE IS EMPTY....\n");
                    }
                    else
                    {
		    printf("\n-------Tree Elements(POST-ORDER)-------\n");
                    postorder(Root);
		    printf("\n");
                    }
                    break;

            case 5: if(Root==NULL)
                    {
                        printf("\n....TREE IS EMPTY....\n");
                    }
                    else
                    {
		    printf("\n-------Tree Elements(PRE-ORDER)-------\n");
                    preorder(Root);
		    printf("\n");
                    }
                    break;        
        

            case 6: 
                    printf("\nenter the data to search\n");
                    scanf("%d",&z);
                    srch(Root,z);
                    break;

	    case 7: if(Root==NULL||Root->rightchild==NULL)
                    printf("\nNo successor found\n");
                else
                    succ(Root);
			    break;

	    case 8: if(Root==NULL||Root->leftchild==NULL)
			        printf("\nNo predecessor found\n");
		        else
			        pred(Root);
			    break;
        case 9: printf("\nBYE BYE..\n");
		        exit(0);
                break;
			 
        default:printf("\nwrong input..\n");  
        }  
    }  
	return 0;
}

