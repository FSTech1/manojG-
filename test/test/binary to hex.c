#include <stdio.h>
//#include <conio.h>
 
int main()
{
  long int binarynum, hexadecimalnum = 0, i = 1, rem;
 
  printf("Enter a Binary number: ");
  scanf("%ld", &binarynum);
 
  while (binarynum != 0)
  {
    rem = binarynum % 10;
    hexadecimalnum = hexadecimalnum + rem * i;
    i = i * 2;
    binarynum = binarynum / 10;
  }
 
  printf("Equivalent Hexadecimal number: %lX", hexadecimalnum);
 
 // getch();
  return 0;
}
