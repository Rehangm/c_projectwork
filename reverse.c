#include<stdio.h>
#include<string.h>
  
// Function to reverse a string
void * reverse(char * str )
{ 
    int i, len ;
      
    // calculating length of the string
    len = strlen(str);
      
    for( i=len ; i>=0 ; i--)
    // *(str+i) is the character at the ith index 
    // of the string
        printf( "%c", *(str+i));
}
  
// Driver code
int main( void )
{
    char a[] = "Geeks for Geeks" ;
      
    reverse(a);
    return(0);
}
