
// Display numbers in lexicographical order till N

#include <iostream>
using namespace std;

void lexicalNumbers(int x, int n)
{
    // Base case 
    
    if (x > n) return;

    // Optimization

    if (x == n) {
        cout << x << endl;
        return;
    }    
    
    // Self case

    if (x != 0)
        cout << x << endl;

    // Recursive 
    
    for (int i=(x==0?1:0); i<=9; i++){
        lexicalNumbers(10*x+i, n);
    }
}

int main()
{
    int n;
    cin >> n;
    lexicalNumbers(0,n);
    
    return 0;
}

/*

Input: 20

Output: 1, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 2, 20, 3, 4, 5, 6, 7, 8, 9,

*/
