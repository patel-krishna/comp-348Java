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
list *new = NULL; 


//function takes atom and returns element with that value
element aasel(atom a){
     element temp = {.type=ATOM, .a=a}; 
     return temp;
}; 

//function takes list, sets element to list and returns element
element lasel(list l){
    element temp = {.type=LIST, .l=l};
    return temp; 
};

//returns head of the list (e), if e is not a list, returns NIL
element car(element e){

    if(e.type != LIST){
        return NIL;
    }
    
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

list cons (element e, list l){

    list answer=malloc(sizeof(list)); 
    

}; 
list append(list l1, list l2){};
void lfreer(list l){};
void print(element e){};



int main(){

   list *head = NULL ;
   list *new; 
   head = malloc(sizeof(list)); 
    

}; 