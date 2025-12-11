#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string S;
    int q;
    cin >> S >> q;
    int prefix[26][200001] = {0};
    for (int i = 0;i<26;i++) {
        for (int j = 0;j<S.size();j++) {
            prefix[i][j+1] = prefix[i][j] + (S[j] == ('a'+ i));
        }
    }
    for (int i=0;i<q;i++) {
        char c;
        int l,r;
        cin >> c >> l >> r;

        int idx = c - 'a';
        cout << prefix[idx][r+1] - prefix[idx][l] << '\n';
    }
    return 0;
}