#include <stdio.h>

main(){
    int i=0;
    int a[5] = { 5,4,3,2,1 };
    printf("%d\n", a[i++]);
    printf("%d\n", a[i*2]);
    printf("%d", a[--i]);
}
