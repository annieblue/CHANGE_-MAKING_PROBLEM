#include "function.h"
///\file function.C
///\brief It contains all the functions
///
/// Created by  Marinescu Nanina Andreea

int coins(int v[1000],int no_coins){
       ///\fn coins (int v[1000],int no_coins)
	   ///\brief It generates random coins using function srand.
       ///\param v[1000] first variable of the function
       ///\param no_coins a second variable of the function
       ///
       /// Generates the coins

	   int iterator;
        time_t t;
        srand((unsigned) time(&t));
        for( iterator = 0 ; iterator < no_coins ; iterator++ ) {
                v[iterator]=rand() % 1000000001;
   }

}

int sum_money(){
        ///\fn sum_money()
        ///\brief Generates a sum of money using function srand.
        ///\param The sum of the first variable
        ///
        /// Generates money
        int iterator;
        int sum;
        srand((unsigned) time(NULL));
        sum = rand()%1000000001;
        if(sum == 0){
                sum = rand()%1000000001;
    }
        return sum;
}

int decreasing_sort(int v[1000], int no_coins){
        ///\fn decreasing_sort(int v[1000], int no_coins)
        ///\brief It sorts the automatically generated coins by the function  srand.
        ///\param v[1000] first variable
        ///\param no_coins second variable
        ///
        /// It sorts the coins

        int aux;
        int iterator_1;
        int iterator_2;
        for( iterator_1 = 1 ; iterator_1 < no_coins ; iterator_1++ ){
                for( iterator_2 = iterator_1+1 ; iterator_2 <= no_coins ; iterator_2++ ){
                    if( v[iterator_1] < v[iterator_2] ){
                        aux = v[iterator_1];
                        v[iterator_1] = v[iterator_2];
                        v[iterator_2] = aux;
            }
        }
    }
}

void print_ordered(int v[1000], int no_coins){
        ///\fn print_ordered(int v[1000], int no_coins)
        ///\brief It prints the automatically generated coins by the function srand.
        ///\param v[1000] first variable
        ///\param no_coins second variable
        ///
        /// It prints the coins

        int iterator;
        decreasing_sort(v, no_coins);
        for( iterator = 1 ; iterator <=no_coins ; iterator++ ){
                printf("%d ", v[iterator]);
    }
}

void decrease(int v[1000], int no_coins){
        ///\fn decrease(int v[1000], int no_coins)
        ///\brief It calculates how many coins of a certain denomanation you need for changing a sum of money.
        ///\param v[1000] first variable
        ///\param no_coins second variable
        ///\param sum third variable
        ///\param no_specific_coins fourth variable
        ///\param total_number_coins fifth variable
        ///
        /// Calculates the coins

        int sum, iterator, k=0, nr=0 ,total_number_coins,no_specific_coins;

        decreasing_sort(v, no_coins);
        sum=sum_money();
        iterator=1;
        while(( sum >= 0) && ( iterator<=no_coins ) ){
                if( sum >=v [iterator] ){
                    sum = sum - v[iterator];
                    total_number_coins++;
                    no_specific_coins++;
                    }else{
                        printf("\n We used  %d coins of denomination %d ",  no_specific_coins,v[iterator] );
                        no_specific_coins = 0;
                        iterator++;
        }
    }
        printf("\nThe change was made with %d coins", total_number_coins);

        if( sum == 0 )
        {
                printf("\nThe sum was changed ");
        }
        else
        {
            printf("\nThe sum wasn t changed and the change is  %d ", sum );
        }
}

