#include <stdio.h>

int main(){
   int i = 1;
   int* ptr; 
   ptr = &i;
   printf("%p\n", &i);
   printf("%p\n", ptr);
}
