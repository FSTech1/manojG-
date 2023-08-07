    #include<stdio.h>  
      
    #define BIGGEST(x, y, z) ( (x > y && x > z) ? x : ( y > z) ? y : z )  
      
    int main()  
    {  
        int a, b, c;  
      
        printf("Enter 3 integer numbers\n");  
        scanf("%d%d%d", &a, &b, &c);  
      
        printf("Biggest of 3 numbers is %d\n", BIGGEST(a, b, c));  
      
        return 0;  
    }  
