// Goldman Sachs
/*
A message containing letters from A to Z is being encoded to numbers using
the following mapping:
A-1, B-2, ..... Z-26

You are given a string S that determines an encoded message containing only digits.
The task is to determine the total number of ways to decode it.

Input:
2
123
13
45678

Output:
3
2
1
*/

int ways(string s)
{
    if (s.size()==0)
    {
        return 1;
    }

    int a = ways(s.substr(1));
    int b = 0;

    if (s.size()>=2 && stoi(s.substr(0,2))<27)
        b = ways(s.substr(2));

    return a + b;
}
