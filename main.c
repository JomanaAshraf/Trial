#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pc,c,x;
    int arr[3]={1,2,3};
    c=5;
    pc=&c;
    printf("%d\n",c);
    printf("%d\n",*pc);
    printf("%llx\n",&c);
   // printf("%p\n",pc);
    *pc=10;
    printf("%d",c);
  //  x=arr;
    //printf("%d",x);

}
