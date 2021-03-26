
// Return subsequences / subsets

vector<string> return_subsequences(string s, string ans)
{
    if (s=="")
    {
        vector<string> result;
        result.push_back(ans);
        return result;
    }

    vector<string> ans1 = return_subsequences(s.substr(1), ans);
    vector<string> ans2 = return_subsequences(s.substr(1), ans+s[0]);

    vector<string> result(ans1.size()+ans2.size());

    merge(ans1.begin(), ans1.end(), ans2.begin(), ans2.end(), result.begin());

    return result;
}

void solve()
{
    string s;
    cin >> s;
    vector<string> ans = return_subsequences(s, "");

    sort(ans.begin(), ans.end());

    for (auto c: ans){
        cout << c << " ";
    }

    cout << endl;
}

