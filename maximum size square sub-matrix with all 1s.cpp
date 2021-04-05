//https://www.youtube.com/watch?v=vI4PE4JdadE
#include<stdio.h> 
#define R 6 
#define C 5 

int min(int a, int b, int c) 
{ 
	int m = a; 
	if (m > b)  
   		m = b; 
	if (m > c)  
    	m = c; 
	return m; 
} 

void printMaxSubSquare(int M[R][C]) 
{ 
	int i,j; 
	int S[R][C]; 
	int max_of_s, max_i, max_j;  
  
	for(i = 0; i < R; i++)               // Set first column of S[][]
    	S[i][0] = M[i][0]; 
      
	for(j = 0; j < C; j++)             // Set first row of S[][]
    	S[0][j] = M[0][j]; 
      
	for(i = 1; i < R; i++)                // Construct other entries of S[][]
  		for(j = 1; j < C; j++) 
    	{ 
    		if(M[i][j] == 1)  
        		S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1; 
    		else
        		S[i][j] = 0; 
    	}  
 
	max_of_s = S[0][0]; max_i = 0; max_j = 0;           /* Find the maximum entry, and indexes of maximum entry in S[][] */
	for(i = 0; i < R; i++)  
   		for(j = 0; j < C; j++)  
    		if(max_of_s < S[i][j]) 
    		{ 
       			max_of_s = S[i][j]; 
        		max_i = i;  
        		max_j = j; 
    		}                              
  
	printf("Maximum size sub-matrix is: \n"); 
	for(i = max_i; i > max_i - max_of_s; i--) 
	{ 
    	for(j = max_j; j > max_j - max_of_s; j--)  
    		printf("%d ", M[i][j]);   
    	printf("\n"); 
	}  
}      
  
main() 
{ 
int M[R][C] =  {{0, 1, 1, 0, 1},  
                {1, 1, 0, 1, 0},  
                {0, 1, 1, 1, 0}, 
                {1, 1, 1, 1, 0}, 
                {1, 1, 1, 1, 1}, 
                {0, 0, 0, 0, 0}}; 
                  
printMaxSubSquare(M);  
}  
