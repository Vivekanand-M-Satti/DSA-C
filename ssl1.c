#include<stdio.h>
struct ssl
{
    int d;
    struct ssl*link;
};
int main()
{
    struct ssl head,fst,nd,tail;
    head.d=9;
    fst.d=3;
    nd.d=23;
    tail.d=9;
    head.link=&fst;
    fst.link=&nd;
    nd.link=&tail;
    tail.link=NULL;
    struct ssl *ptr;
    ptr=&head;

    while(ptr!=NULL)
    {
        printf("%d\n",ptr->d);
        ptr=ptr->link;
    }

}
