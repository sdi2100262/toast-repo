#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(){
    List *l = NULL;
    l = list_push(l,2);
    l = list_push(l,4);
    l = list_push(l,6);
    l = list_push(l,8);
    l = list_push(l,10);


    printf("The first element of the list is %d\n", list_get_data(list_first(l)));
    printf("The last element of the list is %d\n", list_get_data(list_last(l)));


    printf("The list is:\n");
    list_print(l);


    list_free(l);
    return 0;
}