#include <stdio.h>

//linked list implementation 
typedef enum { ATOM, LIST } eltype;  //eltype is either an ATOM or LIST
typedef char atom;            //atom is a char
struct _listnode;   //non-defined structure _listnode

typedef struct {  //structure of element 
eltype type;      // either LIST or ATOM
union {
atom a;            //data 
struct _listnode* l;  //pointer to the address of the next node 
};
} element;

typedef struct _listnode {  //structure of list 
element el;
struct _listnode* next;
} * list;

const element NIL = { .type=LIST, .l=NULL };

int main(){


}; 