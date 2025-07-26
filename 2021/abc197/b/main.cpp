#include <bits/stdc++.h>
using namespace std;
int main() {
    int H,W,X,Y; cin>>H>>W>>X>>Y;
    char S[H][W];
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cin>>S[i][j];
        }
    }
    X--;Y--;
    int cnt=1;
    // 左
    for (int i=Y-1; i>=0; i--)
        if (S[X][i]=='.') cnt++;
        else break;
    // 上
    for (int i=X-1; i>=0; i--)
        if (S[i][Y]=='.') cnt++;
        else break;
    // 右
    for (int i=Y+1; i<W; i++)
        if (S[X][i]=='.') cnt++;
        else break;
    // 下
    for (int i=X+1; i<H; i++)
        if (S[i][Y]=='.') cnt++;
        else break;
    cout<<cnt<<endl;
    return 0;
}