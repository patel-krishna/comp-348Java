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
struct _listnode* next;
} * list;

const element NIL = { .type=LIST, .l=NULL };

list head = NULL ;
head = (list)malloc(sizeof(list)); 


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
    


};
list cdr(element e){};
list cddr(element e){};
list cons (element e, list l){}; 
list append(list l1, list l2){};
void lfreer(list l){};
void print(element e){};



int main(){


}; 