#include <stdio.h>
    
int print(int nb, int level)
{
	printf("\nEnter level %d nb= %d", level, nb);
        if (nb < 0) 
        {
            printf("\nExit level %d nb =%d return 0", level, nb);
            return (0);
        }
        printf("\nOriginal Output  level %d nb=%d",level, nb + print(nb - 1, level+1));
        nb --;
        printf("\nExit level %d nb=%d", level, nb);
        return (nb);
}
    
int main(void)
{
        int level=0;
        print(4, level);
        return (0);
}

