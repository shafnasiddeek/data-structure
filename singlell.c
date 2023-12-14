#include<stdio.h>
#include<stdlib.h>
struct node
{
          int data;
          struct node *link;
          
};
struct  node *header = NULL;
void insert_at_front (int item)
{ 
          //for the first node
          struct node *newnode;
          newnode=(struct node*) malloc(sizeof(struct node));
          if(header==NULL)
          {
                       newnode -> data=item;
                       newnode -> link=NULL;
                       printf("inserted at position 1",item);
          }
          else
          {
                    newnode -> data=item;
                     newnode->link=header;
                       printf("inserted at position 1",item);
           }
          header=newnode;
}
void traverse()
{
          struct node*ptr;
          ptr = header;
	  if(ptr!=NULL)
	  {
         	 while(ptr !=NULL)
          	{
                    	printf("%d \n",ptr->data);
                   	 ptr = ptr->link;      
          	}    
	}
	else
	{
		printf("\n list is empty\n");
	} 
}
void insert_at_end(int item)
{ 
          struct node *newnode;
          newnode=(struct node*) malloc(sizeof(struct node));
          struct node *ptr;
          ptr =header;
          int count=0;
          while(ptr->link !=NULL)
          {
                    ptr = ptr->link;
                    count++;       
          }
          ptr->link = newnode;
          newnode->link =NULL;
            newnode -> data=item;
            printf("item inserted",count+2);
            
}
void insert_at_any_position(int item,int key)
{
          //for the first node
          int count=0;
          struct node*newnode;
          newnode=(struct node*)malloc(sizeof(struct node));
          newnode->data=item;
          struct node*temp;
          temp=header;
                    while(temp->data!=key && temp->link!=NULL)
                    {
                              temp=temp->link;
                              count++;
                    }
         if((temp->link==NULL) && (temp->data==key))
                    {
                              newnode->link==NULL;
                              temp->link=newnode;
                              printf("Inserted position is %d",count+2);
                              
                    }
                     if((temp->link==NULL) && (temp->data!=key))
                    {
                              printf("Key not found");
                    }
        else 
        {
          newnode->link=temp->link;
          temp->link=newnode;
              printf("inserted at position %d",count+2);
        }
}
void delete_at_front()
{
          if  (header==NULL)
          {
                    printf("List is empty");
            }
          else
          {
                    struct node *temp=header;
                   printf("Deleted element is %d",temp->data);
                    header=temp->link;
                      free(temp);
          }
}
void delete_at_end()
{
          if(header==NULL)
          {
                    printf("List is empty");
                    
          }
          else if(header->link == NULL)
          {
                    header==NULL;
          }
          else
          {
                    struct node *temp1=header;
                    struct node *temp2=header;
                    while(temp1 -> link!=NULL)
                    {
                              temp2 = temp1;
                              temp1 = temp1->link;
                    }
                     printf("element deleted",temp2->data);
                    temp2->link=NULL;
                    free(temp1);   
          }

}
void delete_at_any_position(int key)
{
          if(header==NULL )
          {
                    printf("List is empty");
                    
          }
          else
          {
                    struct node *temp1=header;
                    struct node*temp2=header;
                    while((temp1!=NULL) && (temp1->data!=key))
                    {
                              temp2=temp1;
                              temp1=temp1->link;
                    }
                    if(temp1==NULL)
                    {
                              printf("Key not found");
                    }
                    else
                    {
                              if(temp2->link==NULL)
                              {
                                        free(temp1);
                                        header=NULL;
                              }
                              else
                              {
                                        if(temp1==header)
                                        {
                                                  header =temp1->link;
                                        }
                                                  else
                                                  {
                                                            temp2->link=temp1->link;
                                                             printf("Deleted element is %d",temp1->data);
                                                  }
                                                  free(temp1);   
                                        }   
                    }
          }

}
void search(int key)
{
          int count=0;
          if(header==NULL)
          {
                    printf("\n --List is empty--\n");
                    
          }
          else
          {
                    struct node*temp1=header;
                    
	       	
                    while((temp1->data!=key) && (temp1->link!=NULL))
                     {
                              temp1=temp1->link;	
		          count++;
                      }
      if((temp1->link==NULL) && (temp1->data!=key))
        {
            printf("key not found");
        }
	else
	           {
		printf("\n Key found at position %d\n",count+1);		
	          }

         }         
}   
int main()
{
    int z,k,c;	
	printf("Singly Linked List Operations\n");
	while(1)   
  {  
        printf("\n1.Insert at front\n2.Insert at end\n3.Insert any position\n4.Delete at front\n5.Delete at end\n6.Delete node at any position\n7.Display Elements\n8.Search position of Element\n9.Exit");  
        printf("\nSelect the options\n");         
        scanf("%d",&c);  
        switch(c)  
        {  
            case 1:  
                    printf("\nenter the data to insert at front \n");
                    scanf("%d",&z);
                   insert_at_front(z);
                 
                    break;
            case 2:  
                    printf("\nenter the data to insert at end \n");
                    scanf("%d",&z);
                    insert_at_end(z);
                    break;
            case 3:  
                    if(header==NULL )
          {
                    printf("List is empty");
                    }
                    else{
                    traverse();
                    printf("\n---select the position---\n");
                    scanf("%d",&k);
                    printf("\nenter the data to insert after the position \n");
                    scanf("%d",&z);
                    insert_at_any_position(z,k);
                    }
                    break;
            case 4:  
                    delete_at_front();       
                    break;  
            case 5:  
                    delete_at_end();        
                    break;  
          case 6:
                    if(header==NULL)
                    {
                              printf("List is empty");
                    }
                    else{
                    traverse();
                    printf("\n---select the position---\n");
                    scanf("%d",&k);  
                    delete_at_any_position(k);   
                    }       
                    break;  
            case 7:   
                    
                    traverse();        
                    break;  
            case 8: printf("\n---enter the key---\n");
                    scanf("%d",&k);  
                    search(k);          
                    break;  
                    
	    case 9: printf("\nDone");
                    exit(0);  
                    break;
			 
            default:  
                    printf("wrong input..");  
        }  
    }           
}
