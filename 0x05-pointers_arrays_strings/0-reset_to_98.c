#include "main"

/**
 * reset_to_98 - Updates the value of the integer pointed to by n to 98.
 * @n: A pointer to an integer.
 */
void reset_to_98(int *n)
{
    if (n != NULL)
    {
        *n = 98;
    }
}

int main()
{
    int num = 42;
    printf("Before: %d\n", num);
    
    reset_to_98(&num);
    printf("After: %d\n", num);
    
    return 0;
}

