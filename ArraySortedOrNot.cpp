// Check if the array is sorted

bool isArraySorted(int a[], int i, int n)
{
    // base case
    
    if (i == n-1)
        return true;
        
    // Recursive case
    
    bool ans = isArraySorted(a, i+1, n);
    
    // self work
    
    return ans and a[0] > a[1];
}
int main()
{
    int a[] = {10,20,30,40,50,60};
    
    cout << isArraySorted(a, 0, sizeof(a)/sizeof(int));
    
    return 0;
}
