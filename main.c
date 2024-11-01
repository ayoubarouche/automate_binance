#include <stdio.h>

int main(int argc, char const *argv[])
{
#ifdef AROUCHE
    printf("hello arouche \n");
#endif

#ifdef AYOUB
    printf("hello ayoub\n");
#endif
    return 0;
}
