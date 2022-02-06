#include <stdio.h>
#include <stdlib.h>

//linked list implementation 
typedef enum { ATOM, LIST } eltype;  //eltype is either an ATOM or LIST
typedef char atom;            //atom is a char
struct _listnode;   //non-defined structure _listnode

typedef struct {  //structure of element 
    eltype type;      // either LIST or ATOM
    union {
        atom a;            //data 
        struct _listnode* l;  //list 
    };
} element;

typedef struct _listnode {  //structure of list 
element el;
struct _listnode *next;
} * list;

const element NIL = { .type=LIST, .l=NULL };
//list *head = NULL;


//function takes atom and returns element with that value
element aasel(atom a){
    element temp = {.type = ATOM, .a = a}; 
    return temp;
}; 

//function takes list, sets element to list and returns element
element lasel(list l){
    element temp = {.type = LIST, .l = l};
    return temp; 
};

//returns head of the list (e), if e is not a list, returns NIL
element car(element e){

    if(e.type != LIST){
        return NIL;
    }
   //ASK TA
   return e.l->el;
    
    
    //not sure?
  //  return e.type;
    

   //list temp = e.l;
   //return temp->el;
  // return lasel(head);  
};


list cdr(element e){

    if(e.type != LIST){
        return NIL.l;
    }

    //ASK TA
    return e.l->next; 
   // int counter=0; 

   // while(temp != NULL){
   //     temp = temp->next; 
   //     counter++; 
   // }

   // if(counter<=1){
    //    return NIL.l; 
   // }

    //return temp; 
};

list cddr(element e){

    list temp = cdr(e);
    return cdr(temp->el); 
};

//that creates a new list whose car and cdr are the element e and the list l.
// The memory for the newly created list is to be allocated dynamically.
list cons (element e, list l)
{
    list head = NULL;
    head = (list) malloc(sizeof(list)); 
    head->el=e;  
    head->next = l;
    
    //head = { .type = e.type, .l = l};

    return head;
}; 


//that creates a new list whose elements are shallow copies of elements in l1 and l2, appended.
list append(list l1, list l2)
{
    //not sure what they want
    //list l = NULL;
   // l = (list) malloc(sizeof(list)); 

    // l = l1;
    //l1 = l2;
    //l2 = l;

   // free(l);

   list temp = l1;

  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = l2;
  return l1;

};

//that frees all the memory previously allocated by the whole list (including all its elements and its inner lists)
void lfreer(list l)
{
    //maybe need to do a for loop
  //  free(l->el.a);
   // free(l->el.l);
   // free(l->el.type);
  //  free(l->next->el);
  //  free(l);

  
   list temp = l;
   list next;
 
   while (temp != NULL)
   {
       next = temp->next;
       free(temp);
       temp = next;
   }
   
   l = NULL;


};

void print(element e);
void print(element e)
{
    
    //element next = e.l->next->el; 
    //if its an atom, print character
    if(e.type==ATOM){
        printf("%c", e.a);
        // print(next);
    }else if(e.type==LIST && e.l==NULL){
        printf("NIL");
        print(NIL);
        printf(")");
    } else {
        list temp = e.l; 
            printf("(");
            while(temp != NULL){
                print(temp->el);
                temp=temp->next; 
            }
            printf(")"); 
    }  
    

};

int main(){
    element a = aasel('a');
    element b = aasel('b');
    element c = aasel('c');
    element d = aasel('d');
    element e = aasel('e');

    list cl = malloc(sizeof(list)); 
    cl->el=c;
    cl->next=NULL;

    list el = malloc(sizeof(list)); 
    el->el=e;
    el->next=NULL;

    list sublist1 = cons(b, cl);     
    list sublist2 = cons(d, el);

    sublist1->next = NULL;
    sublist2->next = NULL; 

    list headFinal = malloc(sizeof(list)); 
    headFinal->el = a;
    
    headFinal->next = sublist2;
    headFinal->next->el = lasel(sublist1);
   


    print(lasel(headFinal));

};


// int main(){

//     list head = (list) malloc(sizeof(list)); 

//     head->el = aasel('a');
//     head->next = NULL;

//     list new =(list) malloc(sizeof(list)); 
//     new->el = aasel('b');

//     list new2 = (list) malloc(sizeof(list));
//     new2->el = aasel('c');
//     new->next = new2;
//     new2->next = NULL;

//     list smallList =(list) malloc(sizeof(list));
//     smallList->el= lasel(new);

//     list new3 = (list) malloc(sizeof(list));
//     new3->el = aasel('d');

//     list new4 = (list) malloc(sizeof(list));
//     new4->el = aasel('e');

//     head->next = smallList;
//     smallList->next = new3;
//     new3->next = new4;
//     new4->next = NULL;


//     print(smallList->el); 

// }; 