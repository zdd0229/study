#include <stdio.h>

int main()
{
    printf("Type int has a size of %u byte.\n",sizeof(int));
    printf("Type char has a size of %u byte.\n",sizeof(char));
    printf("Type long has a size of %u byte.\n",sizeof(long));
    printf("Type double has a size of %u byte.\n",sizeof(double));
    printf("Type float has a size of %u byte.\n",sizeof(float));
    return 0;
}