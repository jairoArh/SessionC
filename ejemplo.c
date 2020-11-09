#include <stdio.h>
#include <string.h>

unsigned long factorial(int n ){
    if( n == 1 || n == 0 )
        return 1;
    return n * factorial( n - 1 );
}

int calcMCD(int dividendo, int divisor){
    if( dividendo % divisor == 0 )
        return divisor;
    return calcMCD( divisor, dividendo % divisor );
}



int main(){

    int numOne,numTwo;
    printf("Digite Dos Numeros...");
    scanf("%d %d",&numOne,&numTwo);

    printf("El MCD de %d y %d es %d\n",numOne,numTwo,calcMCD( numOne > numTwo ? numOne : numTwo,numOne < numTwo ? numOne : numTwo ));
    
    return 0;
}



int fibonacci(int num){
   if( num == 1 || num == 2 )
        return 1;
   return fibonacci(num - 1) + fibonacci( num - 2 ); 
}


//1 1 2 3 5 8 13 21 34 55 89..
//1 2 3 4 5 6 7 8 9 10 11 12..

//5! = 5 * 4! 120
//4! = 4 * 3!  24
//3! = 3 * 2!   6
//2! = 2 * 1!   2
//1! = 1
//0! = 1
// 20 % 8 = 4,  8 % 4 
