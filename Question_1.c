// Quiz Question 1
// By: Renato Chomen Ramos
#include <stdio.h>

int main() {
    int M = 11;
    int N = 4;
    int Current_number;
    int Largest_dimension;
    int Smallest_dimension;
    int Series_of_squares[200];
    int swap_variables;
    int i = 0;
    printf("Inputs: M = %d, N = %d", M, N);
    printf("\n");
    
    // Current_number will start as the smallest dimension
    if( M > N ){
        Current_number = N;
        Largest_dimension = M ;
        Smallest_dimension = N ;
    }
    else{
        Current_number = M;
        Largest_dimension = N ;
        Smallest_dimension = M ;
    }
        
    // while I can cut the papaer
    while(Largest_dimension > 0 && Smallest_dimension > 0){
        
        // See if I can cut the paper with the Current_number
        if( (Current_number <= Largest_dimension) && (Current_number <= Smallest_dimension)){
            
            // cutt the paper
             Series_of_squares[i] = Current_number;
             i = i + 1;
             
             // reduce dimmension
             Largest_dimension = Largest_dimension - Current_number;
             
             // if no longer largest dimenssion swap
              if( Smallest_dimension > Largest_dimension ){
                    swap_variables = Largest_dimension;
                    Largest_dimension = Smallest_dimension;
                    Smallest_dimension = swap_variables;
              }
        }
        else{
            Current_number = Current_number - 1;
        }
    }
   
     printf("Output = ");
    
    for(int j = 0; j<i; j++){
       printf("%dX%d, ", Series_of_squares[j], Series_of_squares[j]);
    }
    return 0;
}