#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int numberrows;      
     
    do
    
    // Gets number from user 
    {
        printf("Please provide a number between 1 and 23\n");
        numberrows = GetInt();
    }
    
    // Continues to re-prompt user if number is outside these constraints
    
    while (numberrows < 0 || numberrows > 23);
    
    // If constraints are satisfied,"for" nested loop is invoked 
    
    {
        int row;
        int spaces;
        int hashes;
     
      
        for (row = 0; row < numberrows; row++)
        {
            for (spaces = 0; spaces < numberrows - row - 1; spaces++)
            {
                printf(" ");
                
            }                                                
        
            for (hashes = 0; hashes < row + 2; hashes++)
            {                             
                printf("#");
           
            }               
            printf("\n");
        }
    }
}
    
         
      


        
