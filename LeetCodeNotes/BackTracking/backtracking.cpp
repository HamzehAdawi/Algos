#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void recurPermute(int index, string &s, vector<string> &res) {
    if (index == s.size()) {
        res.push_back(s);   
        return;
    }

    for (int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);

        // fix current position and recurse
        recurPermute(index + 1, s, res);

        // backtrack
        swap(s[index], s[i]);
    }
}

vector<string> findPermutation(string &s) {
    vector<string> res;

    recurPermute(0, s, res);

 
    sort(res.begin(), res.end());

    return res;
}

int main() {
    string s = "AAB";

    vector<string> res = findPermutation(s);

    for (auto x : res) cout << x << " ";

    return 0;
}
