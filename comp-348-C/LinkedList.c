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
list *head = NULL;
//list *new = NULL; 


//it need to be inside of a scope
// list head = NULL;
// head = (list) malloc(sizeof(list)); 


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
    //not sure?
  //  return e.type;
    
   list temp = e.l;
   return temp->el; 
};


list cdr(element e){

    if(e.type != LIST){
        return NIL.l;
    }

    list temp = head; 
    int counter=0; 

    while(temp != NULL){
        temp = temp->next; 
        counter++; 
    }

    if(counter<=1){
        return NIL.l; 
    }

    return temp; 
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

    head.el = {.type = e.type, .l = l};

    return head;
}; 


//that creates a new list whose elements are shallow copies of elements in l1 and l2, appended.
list append(list l1, list l2)
{
    //not sure what they want
    list l = NULL;
    l = (list) malloc(sizeof(list)); 

    l = l1;
    l1 = l2;
    l2 = l;

    free(l);

};

//that frees all the memory previously allocated by the whole list (including all its elements and its inner lists)
void lfreer(list l)
{
    //maybe need to do a for loop
    free(l->el.a);
    free(l->el.l);
    free(l->el.type);
    free(l->next->el);
    free(l);


};

void print(element e)
{

};



int main(){

    list head = NULL;
    head = (list) malloc(sizeof(list)); 
}; 