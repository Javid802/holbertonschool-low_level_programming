#include <stdio.h>

int main(void)
{   
    int n = 10;
    int count = 1;
    int spacecount = 1;
    int a;
    for (count = 1;count<=n;count++)
    {   
        
        for (spacecount=1;n-count>=spacecount;spacecount++)
        {
            printf(" ");
        }
        for (a=1;a<=count;a++)
        {
            printf("#");
        }
        printf("\n");
    }
    

}

