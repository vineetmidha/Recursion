
// print subsequences / subsets

void print_subsequences1(string s, string ans)
{
    if (s=="")
    {
        cout << ans << " ";
        return;
    }

    print_subsequences(s.substr(1), ans);
    print_subsequences(s.substr(1), ans+s[0]);
}

void solve1()
{
    string s;
    cin >> s;

    print_subsequences1(s, "");

    cout << endl;
}

void print_subsequences2(string &s, string ans, int i=0)
{
    if (i == s.length())
    {
        cout << ans << " ";
        return;
    }

    print_subsequences2(s, ans, i+1);
    print_subsequences2(s, ans + s[i], i+1);
}

void solve2()
{
    string s;
    cin >> s;

    print_subsequences2(s, "", 0);

    cout << endl;
}
