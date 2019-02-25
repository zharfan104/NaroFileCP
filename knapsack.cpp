#include <iostream>
#include <algorithm>
using namespace std;
int knapsack(int W, int Wi[], int Pi[], int n) 
{ 
   if (n == 0 || W == 0) 
       return 0; 
   if (Wi[n-1] > W) 
       return knapsack(W, Wi, Pi, n-1); 
   else return max( Pi[n-1] + knapsack(W-Wi[n-1], Wi, Pi, n-1), 
                    knapsack(W, Wi, Pi, n-1) 
            		 ); 
} 
int main() 
{ 
    int c[] = {100,300,400,200,500}; 
    int b[] = {10,40,30,10,50}; 
    int  a = 50; 
    int d = 5; 
   cout << knapsack(a,b,c,d); 
    return 0; 
} 
