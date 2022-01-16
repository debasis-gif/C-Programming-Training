#include <stdio.h>  
int main()  
{  
   int a=6, b=14;  // variable declarations  
   printf("The output of the Bitwise AND operator a&b is %d \n",a&b);  
   printf("The output of the Bitwise AND operator a|b is %d \n",a|b);  
   printf("The output of the Bitwise exclusive OR operator a^b is %d \n",a^b);  
   printf("The output of the Bitwise complement operator ~a is %d \n",~a);  
   printf("The value of a<<2 is : %d \n", a<<2); 
   printf("The value of a>>2 is : %d ", a>>2);

   return 0;  
}  

/*
6 = 2+4    = 0110
14 = 8+4+2 = 1110
===================
	   & 0110   = 6
	   | 1110   = 14
	   ^ 1000   = 8
	   ~6 1001  = -8-(-1) = -7
	   6 << 2   =  11000 = 24 
      6 >> 2   =  0001 = 1


*/