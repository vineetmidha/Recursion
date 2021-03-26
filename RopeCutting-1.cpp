// Rope Cutting
// Cut a rope of length n in pieces of length a or b or c

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0){
        return 0;
    }

    if (n < 0){
        return -1;
    }

    int x = maxPieces(n-a, a, b, c);
    int y = maxPieces(n-b, a, b, c);    
    int z = maxPieces(n-c, a, b, c);

    int result = max(max(x, y), z);

    if (result == -1)   // to handle the case where x = y = z = -1
        return -1;      // n=9, a=b=c=2

    return result + 1;
}

/* 

3
5 2 5 1
23 11 9 12
9 2 2 2

Output:
5
2
-1

*/
