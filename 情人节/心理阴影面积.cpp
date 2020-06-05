#include<bits/stdc++.h>
#include <cstring>
using namespace std;
int a[1005] = {0};
int main() {
    int n=0;
    cin >> n;
    int count = 0,res=0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for(int j = 0; j < x; j++) {
            int data;
            cin >> data;
            a[data]++;
            if(a[data] > count) {
                count = a[data];
                res = data;
            } else if(a[data] == count && data > res) {
                count = a[data];
                res = data;
            }
        }
    }
    cout << res << " " << count;
    return 0;
}
