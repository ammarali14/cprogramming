#include <stdio.h>

int main()
{
    
    int size = 0;
    int i, j = 0;
    scanf("Enter size = %d", &size);
    
    for(i = 0; i < size; i++){
        for(j = 0 ; j < size; j++){
            if(i == j || size -j == i)
                printf("*");        
        }
        printf("\n");
    }

    return 0;
}
