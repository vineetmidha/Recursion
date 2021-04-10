// Unacademy - Kushagra
/*
Given a number N, make it 1 with any of the following operations:

N -> N-1
N%2 -> N/2
N%3 -> N/3

Give the minimum number of steps required for the same. 

8 - 4 - 2 - 1 ---> 3
8 - 4 - 3 - 1 ---> 3
10 - 5 - 4 - 2 - 1 --> 4
10 - 9 - 3 - 1  --> 3
1 --> 0

*/

int minSteps(int n)
{
    if (n==1) return 0;

    int a = minSteps(n-1);
  
    int b = INT_MAX;
    int c = INT_MAX;
    
    if (n%2 == 0)
        b = minSteps(n/2);
  
    if (n%3 == 0)
        c = minSteps(n/3);

    return 1 + min({a,b,c}); 
}
