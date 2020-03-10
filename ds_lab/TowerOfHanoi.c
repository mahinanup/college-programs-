#include <stdio.h>

void Tower(int n, char from_rod, char to_rod, char aux_rod) { 
    if (n == 1) { 
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod); 
        return; 
    } 
    Tower(n-1, from_rod, aux_rod, to_rod); 
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod); 
    Tower(n-1, aux_rod, to_rod, from_rod); 
} 
  
void main() { 
    printf("Enter the number of discs.\n");
    int n;
    scanf("%d",&n);
    Tower(n, 'A', 'C', 'B');
} 