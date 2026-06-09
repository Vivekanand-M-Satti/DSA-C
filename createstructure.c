// the structure that contain pointer of the same data type of the structure is called self referential structure
#include<stdio.h>
struct mav {
    int data;
    struct mav *ref;
};
int main()
{
    struct mav head,tail;
    head.data=8;
    tail.data=9;
    
    head.ref=&tail;
    printf("%d",head.ref->data);//give the value of the data of the 9;
    printf("%d",head.ref->ref);//give the value of the ref of tail;
    
}