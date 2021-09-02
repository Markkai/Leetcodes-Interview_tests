/* Big endian: Hight bit locate to low memory position
   Little endian: Hight bit locate to hight memory position
 EX: 0x1234
 binary in Big endian:    0001 0010 0011 0100
 binary in Little endian: 0100 0011 0010 0001
 */

#include <stdio.h>
main() {
    int n = 256*256+2*256+3;
    unsigned char *c;
    printf("n = %d\n", n);
    c = (unsigned char*) (void*) &n;
    printf("n is allocated at\n%11u\t%11u\t%11u\t%11u\n", c, c+1, c+2, c+3);
    printf("%11u\t", *c++);
    printf("%11u\t", *c++);
    printf("%11u\t", *c++);
    printf("%11u\n", *c++);
}
