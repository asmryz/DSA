   # include <stdio.h>
   # include <stdlib.h>
   struct node
   {
        int data;
        struct node *link;
   };
   
   struct node *insert(struct node *p, int n)
   {
   struct node *temp;
   /* if the existing list is empty then insert a new node as the
starting node */
   if(p==NULL)
   {
      p=(struct node *)malloc(sizeof(struct node)); /* creates new node
data value passes
   as parameter */

         if(p==NULL)
         {
      printf("Error\n");
             exit(0);
         }
         p-> data = n;
         p-> link = p; /* makes the pointer pointing to itself because it
is a circular list*/
      }
      else
      {
      temp = p;
   /* traverses the existing list to get the pointer to the last node of
   it */
      while (temp-> link != p)
         temp = temp-> link;
            temp-> link = (struct node *)malloc(sizeof(struct node)); /*
   creates new node using
             data value passes as
               parameter and puts its
             address in the link field
             of last node of the
             existing list*/
           if(temp -> link == NULL)
           {
         printf("Error\n");
              exit(0);
           }
           temp = temp-> link;
           temp-> data = n;
           temp-> link = p;
          }
          return (p);
   }
   void printlist ( struct node *p )
   {
   struct node *temp;
    temp = p;
   printf("The data values in the list are\n");
      if(p!= NULL)
      {
      do
            {
            printf("%d\t",temp->data);
            temp=temp->link;
            } while (temp!= p);
      }
      else
         printf("The list is empty\n");
   }

   void main()
   {
      int n;
      int x;
      struct node *start = NULL ;
      printf("Enter the nodes to be created \n");
      scanf("%d",&n);
      while ( n -- > 0 )
      {
   printf( "Enter the data values to be placed in a node\n");
         scanf("%d",&x);
         start = insert ( start, x );
      }
      printf("The created list is\n");
      printlist ( start );
   }

