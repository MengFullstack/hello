#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
    
    int i=0;
    for(i=0;i<100;i++) {
        printf("rand=%d , ",rand()%100);
    }
    printf("\n");
    return 0;
}
