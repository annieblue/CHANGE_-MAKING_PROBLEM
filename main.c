///\file main.c
///\brief Main file where all the functions are called from.
///
/// Created by  Marinescu Nanina Andreea

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int main(){
   ///\file main()
   ///\brief Main function
   ///\ Main function calls for all the other functions in order to obtain the output
   ///\param v[1000] first variable
   ///\param no_coins  second variable ,the number of coins
   ///\param a  third variable
   ///
   /// Solving the problem
        int iterator;
        int no_specific_coins;
        int v[100];
        int a=1;
        sum_money();

        coins(v,no_coins);

        printf("Introduce the number of coins ");
        scanf("%d", &no_coins);
        printf("The coins automatically generated are:");

        for( iterator = 1 ; iterator <= no_coins ; iterator++ )
            {
               printf("%d ", v[iterator]);
            }

        printf("\nThe sum of money automatically generated is :%d\n", sum_money());
        printf("Sorted coins are: ");

        decreasing_sort(v, no_coins);
        print_ordered(v, no_coins);
        decrease(v, no_coins);

    return 0;
}
