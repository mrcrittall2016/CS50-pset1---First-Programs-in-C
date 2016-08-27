#include <stdio.h>
#include <cs50.h>

int main(void)
{
   
    printf("How long is your shower in minutes?\n");
   
    int time = GetInt(); 
    
    printf("minutes: %d\n", time);
    
    int bottles = (1.5 * time * 128) / 16; 
    
    printf("bottles: %d\n", bottles);
    
}
