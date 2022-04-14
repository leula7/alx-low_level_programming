#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
 {

    int questient=0,div,n=1231952;
    for (int i=2; i<=n; i++){
        for(int j=2; j<=i; j++){
            if(i%j==0){
            if(i==j){
                //printf("i is prime %d\n",i);
                while(n%i==0){

                    n/=i;
                    printf("%d,",i);
                }

            }else{
                //printf("it's nott prime");

        }
        }
        }

    } return 0;
}
