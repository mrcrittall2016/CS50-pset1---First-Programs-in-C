#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   
    // Declare variables
    float change;
    int cents;
    int coins = 0;
            
    do
    // Ask user for change and store as float
    {
        printf("How much change is required?\n");
        change = GetFloat();
    }
    // Continue to ask until value is greater than 0
    // Value is rounded and cast as integer
    while (change <= 0);
    {
        cents = round(change * 100);                
    }
   
    // A series of while loops deduct coin type 
    // coin variable is incremented by one for every value deducted
        while (cents >= 25)
        {
            cents = cents - 25;
            coins = coins + 1;            
                    
        }
     
        while (cents >= 10)
        {
            cents = cents - 10;
            coins = coins + 1;
        }
    
        while (cents >= 5)
        {   
            cents = cents - 5;
            coins = coins + 1;
        }
    
        while (cents >= 1)
        {
            cents = cents - 1;
            coins = coins + 1;
        }   
    
        printf("%d\n", coins);
        
}
    
