#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
    int n, r, Flag = 1;
    char s[1010];
    char c[1010][1010];
    memset(c, ' ', sizeof(c));
    cin >> n;

    getchar();
    fgets(s, 1010, stdin);

    int len = strlen(s) - 1;
    if(len % n != 0)
        r = len / n + 1;
    else
        r = len / n;
    for(int y = r, i = 0; y >= 1; y--) {
        if(!Flag)
            break;
        for(int x = 1; x <= n; x++) {
            c[x][y] = s[i++];
            if(i == len) {
                Flag = 0;
                break;
            }
        }
    }

    for(int x = 1; x <= n; x++) {
        for(int y = 1; y <= r; y++)
            cout << c[x][y];
        cout << endl;
    }
    return 0;
}
