
/******************************************************************************
 Online C Compiler.
 Code, Compile, Run and Debug C program online.
 Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <stdio.h>

//void displayBits(int value);

int main()
{
    
int word1 = 077;
int word2 = 0150;
int word3 = 0210;

int x = 11;
int y = 0177777;

printf("%d - wordOne ; %d - wordTwo ; %d - wordThree \n", word1, word2, word3);
printf("%d - x ; %d - y \n", displayBits(x), displayBits(y));

printf("\n" );

printf( "wordOne & wordTwo = %d \n", (word1 & word2) );
printf( "wordOne & wordTwo (binary) = \n", ( displayBits(word1) & displayBits(word2) ) );
printf( "wordOne & wordTwo (binary) = \n", ( displayBits(word1 & word2) ) );

printf("\n" );

printf( "wordOne & wordOne = %d \n", (word1 & word1) );
printf( "wordOne & wordOne (binary) = \n", ( displayBits(word1) & displayBits(word1) ) );
printf( "wordOne & wordOne (binary) = \n", ( displayBits(word1 & word1) ) );

printf("\n" );

printf( "wordOne & wordTwo & wordThree = %d \n", ( word1 & word2 & word3 ) );
printf( "wordOne & wordTwo & wordThree (binary) = \n", ( displayBits(word1) & displayBits(word2) & displayBits(word3) ) );
printf( "wordOne & wordTwo & wordThree (binary) = \n", ( displayBits(word1 & word2 & word3) ) );

printf("\n" );

printf( "wordOne & 1 = %d \n", (word1 & 1) );
printf( "wordOne & 1 (binary) = \n", ( displayBits(word1) & displayBits(1) ) );
printf( "wordOne & 1 (binary) = \n", ( displayBits(word1 & 1) ) );

printf("\n" );

printf( "wordOne | word2 = %d \n", (word1 | word2) );
printf( "wordOne | word2 (binary) = \n", ( displayBits(word1) | displayBits(word2) ) );
printf( "wordOne | word2 (binary) = \n", ( displayBits(word1 | word2) ) );

printf("\n" );

printf( "wordOne | wordOne = %d \n", (word1 | word1) );
printf( "wordOne | wordOne (binary) = \n", ( displayBits(word1) | displayBits(word1) ) );
printf( "wordOne | wordOne (binary) = \n", ( displayBits(word1 | word1) ) );

printf("\n" );

printf( "wordOne | word2 | word3 = %d \n", (word1 | word2 | word3) );
printf( "wordOne | word2 | word3 (binary) = \n", ( displayBits(word1) | displayBits(word2) | displayBits(word3) ) );
printf( "wordOne | word2 | word3 (binary) = \n", ( displayBits(word1 | word2 | word3) ) );

printf("\n" );

printf( "wordOne | 1 = %d \n", (word1 | 1) );
printf( "wordOne | 1 (binary) = \n", ( displayBits(word1) | displayBits(1) ) );
printf( "wordOne | 1 (binary) = \n", ( displayBits(word1 | 1) ) );

printf("\n" );

printf( "wordOne ^ word2 = %d \n", (word1 ^ word2) );
printf( "wordOne ^ word2 (binary) = \n", ( displayBits(word1) ^ displayBits(word2) ) );
printf( "wordOne ^ word2 (binary) = \n", ( displayBits(word1 ^ word2) ) );

printf("\n" );

printf( "wordOne ^ word1 = %d \n", (word1 ^ word1) );
printf( "wordOne ^ word1 (binary) = \n", ( displayBits(word1) ^ displayBits(word1) ) );
printf( "wordOne ^ word1 (binary) = \n", ( displayBits(word1 ^ word1) ) );

printf("\n" );

printf( "wordOne ^ word3 = %d \n", (word1 ^ word3) );
printf( "wordOne ^ word3 (binary) = \n", ( displayBits(word1) ^ displayBits(word3) ) );
printf( "wordOne ^ word3 (binary) = \n", ( displayBits(word1 ^ word3) ) );

printf("\n" );

printf( "wordOne ^ 1 = %d \n", (word1 ^ 1) );
printf( "wordOne ^ 1 (binary) = \n", ( displayBits(word1) ^ displayBits(1) ) );
printf( "wordOne ^ 1 (binary) = \n", ( displayBits(word1 ^ 1) ) );

printf("\n" );

printf( "x << 1 (decimal) = %d \n", (x << 1) );
printf( "x << 1 (binary) =  \n", displayBits(x << 1) );

printf("\n" );

printf( "x << 2 (decimal) = %d \n", (x << 2) );
printf( "x << 2 (binary) =  \n", displayBits(x << 2) );

printf("\n" );

printf( "y << 5 (decimal) = %d \n", (y << 5) );
printf( "y << 5 (binary) = \n", ( displayBits(y) << 5 ) );
printf( "y << 5 (binary) =  \n", displayBits(y << 5) );

printf("\n" );

printf( "y >> 6 (decimal) = %d \n", (y >> 6) );
printf( "y >> 6 (binary) =  \n", displayBits(y >> 6) );

return 0;

} // End of main()


void displayBits(int value)
{
 // define displayMask and left shift 31 bits
 unsigned int displayMask = 1 << 31;
 printf("%10u = ", value);
 // loop through bits
 unsigned int c;
 for ( c = 1; c <= 32; ++c)
 {
 putchar(value & displayMask ? '1' : '0');
 value <<= 1; // shift value left by 1
 if (c % 8 == 0)
 	{ // output space after 8 bits
 putchar(' ');
 	}
 }
 putchar('\n');
} // End of displayBits
