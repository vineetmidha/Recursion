// https://www.geeksforgeeks.org/generate-binary-strings-without-consecutive-1s/

void binaryStrings(string s, int k)
{
    if (k <= 0)
    {
        return;
    }
    
    if (s.size()==k)
    {
        cout << s << " ";
        return;
    }

    binaryStrings(s+"0", k);

    if (s[s.size()-1]!='1')
    {
        binaryStrings(s+"1", k);
    }
}

/*
Input : K = 3  
Output : 000 , 001 , 010 , 100 , 101 

Input : K  = 4 
Output :0000 0001 0010 0100 0101 1000 1001 1010
*/
