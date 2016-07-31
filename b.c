#include<stdio.h>
#include<stdlib.h>

int main(void) {

    int fd;
    char buf[256];
    memset(buf,0,256);
    strcpy(buf,"hello world");
    fd=open("./a.txt",O_RDWR||O_CREAT,0666);

    write(fd,buf,strlen(buf));
    return 0;
}
