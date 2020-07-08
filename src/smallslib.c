#include "smallslib.h"
#include "private.h"
#include <stdio.h>

void hello(void) {
    printf("Hello, World!\n");
}
//http://www.faqs.org/docs/Linux-HOWTO/Program-Library-HOWTO.html#INIT-AND-CLEANUP
void __attribute__ ((constructor)) my_init(void){
    printf("init string %s and len %d \n", INIT_STRING, get_init_str_len());
}
void __attribute__ ((destructor)) my_fini(void){
    printf("Destroying World!\n");
}