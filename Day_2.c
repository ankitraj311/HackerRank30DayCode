#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double e;
    char t[100];
    scanf("%d",&j);
    scanf("%lf",&e);
    scanf("%*[\n] %[^\n]",t);
    
    printf("%d\n",i+j);
    printf("%.1f\n",d+e);
    printf("%s%s",s,t);
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
