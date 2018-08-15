#include <stdio.h>
 
int main(void)
{
    int count;
 
    count = 0;
 
    /*
     * adjustment is put together with condition
     */
 
    while (count < 10 && (count += 1))
        printf("count is %d\n", count);
 
    return 0;
}
