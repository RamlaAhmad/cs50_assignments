#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int height, start = 1, count = 0;
    do
   {
    height = get_int("Height: ");
   }while (height<1 || height>8);
   while(count<height)
   {
        for (int i = start; i<height; i++)
        {
            printf(" ");
        }
        for(int j = 0; j<start; j++)
        {
            printf("#");
        }
        printf("  ");
        for(int j = 0; j<start; j++)
        {
            printf("#");
        }
        printf("\n");
        start++;
        count++;
   }
   printf("\n"); 
}
